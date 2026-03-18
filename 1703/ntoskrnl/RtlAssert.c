/*
 * XREFs of RtlAssert @ 0x14023DB30
 * Callers:
 *     KsepGetShimCallbacksForDriver @ 0x1404B3A9C (KsepGetShimCallbacksForDriver.c)
 *     KsepStringConcatenate @ 0x1404B4884 (KsepStringConcatenate.c)
 *     KsepRegistryOpenKey @ 0x1404B49C4 (KsepRegistryOpenKey.c)
 *     KsepStringDuplicate @ 0x1404B4AAC (KsepStringDuplicate.c)
 *     KsepStringFree @ 0x1404B4E70 (KsepStringFree.c)
 *     KsepStringDuplicateUnicode @ 0x1404B4EA8 (KsepStringDuplicateUnicode.c)
 *     KseShimDatabaseClose @ 0x1404B5110 (KseShimDatabaseClose.c)
 *     KseDriverUnloadImage @ 0x1405846F8 (KseDriverUnloadImage.c)
 *     KsepStringSplitMultiString @ 0x140598F64 (KsepStringSplitMultiString.c)
 *     KsepRegistryQuerySZ @ 0x14059BFD4 (KsepRegistryQuerySZ.c)
 *     KsepRegistryQueryDWORD @ 0x14059CF28 (KsepRegistryQueryDWORD.c)
 *     KsepStringTransform @ 0x1405ACCD8 (KsepStringTransform.c)
 *     KsepRegistryCreateKey @ 0x1406B01EC (KsepRegistryCreateKey.c)
 *     KsepRegistryQueryValue @ 0x1406B05E4 (KsepRegistryQueryValue.c)
 *     KsepEngineReadFlags @ 0x1407FA3CC (KsepEngineReadFlags.c)
 *     KsepEngineInitialize @ 0x1407FA4D4 (KsepEngineInitialize.c)
 *     KseShimDatabaseBootInitialize @ 0x1408251EC (KseShimDatabaseBootInitialize.c)
 *     KsepEngineUninitialize @ 0x140834CC4 (KsepEngineUninitialize.c)
 * Callees:
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwTerminateThread @ 0x14017E9A0 (ZwTerminateThread.c)
 *     RtlCaptureContext @ 0x140189590 (RtlCaptureContext.c)
 *     DbgPrompt @ 0x14023B0A0 (DbgPrompt.c)
 *     RtlpTerminateCurrentProcess @ 0x1406EAE10 (RtlpTerminateCurrentProcess.c)
 */

void __stdcall RtlAssert(PVOID VoidFailedAssertion, PVOID VoidFileName, ULONG LineNumber, PSTR MutableMessage)
{
  PSTR v8; // r9
  bool v9; // zf
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // [rsp+30h] [rbp-528h]
  CHAR Response[16]; // [rsp+40h] [rbp-518h] BYREF
  CONTEXT ContextRecord; // [rsp+50h] [rbp-508h] BYREF

  RtlCaptureContext(&ContextRecord);
  while ( 1 )
  {
    LODWORD(v13) = LineNumber;
    v8 = (PSTR)File;
    if ( MutableMessage )
      v8 = MutableMessage;
    DbgPrintEx(
      0x65u,
      0,
      "\n*** Assertion failed: %s%s\n***   Source File: %s, line %ld\n\n",
      v8,
      VoidFailedAssertion,
      VoidFileName,
      v13);
    if ( (MEMORY[0xFFFFF780000002D4] & 3) != 3 )
      break;
    if ( !DbgPrompt(
            "Break repeatedly, break Once, Ignore, terminate Process, or terminate Thread (boipt)? ",
            Response,
            2u) )
    {
      __debugbreak();
LABEL_18:
      RtlpTerminateCurrentProcess();
      return;
    }
    if ( Response[0] > 98 )
    {
      v10 = Response[0] - 105;
      v9 = Response[0] == 105;
    }
    else
    {
      if ( Response[0] == 98 || Response[0] == 66 )
        goto LABEL_16;
      v10 = Response[0] - 73;
      v9 = Response[0] == 73;
    }
    if ( v9 )
      return;
    v11 = v10 - 6;
    if ( !v11 )
    {
LABEL_16:
      DbgPrintEx(0x65u, 0, "Execute '.cxr %p' to dump context\n", &ContextRecord);
      __debugbreak();
    }
    v12 = v11 - 1;
    if ( !v12 )
      goto LABEL_18;
    if ( v12 == 4 )
      ZwTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, -1073741823);
  }
}
