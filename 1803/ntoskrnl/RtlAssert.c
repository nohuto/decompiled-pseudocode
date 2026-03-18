/*
 * XREFs of RtlAssert @ 0x140288F50
 * Callers:
 *     KsepGetShimCallbacksForDriver @ 0x1405FB58C (KsepGetShimCallbacksForDriver.c)
 *     KseShimDatabaseClose @ 0x1405FC764 (KseShimDatabaseClose.c)
 *     KsepStringDuplicate @ 0x1405FDEBC (KsepStringDuplicate.c)
 *     KsepStringConcatenate @ 0x1405FDF70 (KsepStringConcatenate.c)
 *     KsepRegistryOpenKey @ 0x1405FE0C4 (KsepRegistryOpenKey.c)
 *     KsepStringFree @ 0x1405FE3B8 (KsepStringFree.c)
 *     KsepStringDuplicateUnicode @ 0x1405FE3F0 (KsepStringDuplicateUnicode.c)
 *     KseDriverUnloadImage @ 0x140600748 (KseDriverUnloadImage.c)
 *     KsepStringTransform @ 0x14061D998 (KsepStringTransform.c)
 *     KsepRegistryQueryDWORD @ 0x140623748 (KsepRegistryQueryDWORD.c)
 *     KsepRegistryQuerySZ @ 0x140623820 (KsepRegistryQuerySZ.c)
 *     KsepStringSplitMultiString @ 0x140746254 (KsepStringSplitMultiString.c)
 *     KsepRegistryCreateKey @ 0x140746534 (KsepRegistryCreateKey.c)
 *     KsepRegistryQueryValue @ 0x14074692C (KsepRegistryQueryValue.c)
 *     KsepEngineInitialize @ 0x1408A55C0 (KsepEngineInitialize.c)
 *     KsepEngineReadFlags @ 0x1408A59C0 (KsepEngineReadFlags.c)
 *     KseShimDatabaseBootInitialize @ 0x1408C89C4 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     DbgPrintEx @ 0x14014C9D0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwTerminateThread @ 0x1401A7F20 (ZwTerminateThread.c)
 *     RtlCaptureContext @ 0x1401B2CF0 (RtlCaptureContext.c)
 *     DbgPrompt @ 0x140286390 (DbgPrompt.c)
 *     RtlpTerminateCurrentProcess @ 0x1407864B0 (RtlpTerminateCurrentProcess.c)
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
    v8 = (PSTR)&File;
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
