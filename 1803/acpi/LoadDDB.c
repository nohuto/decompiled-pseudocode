/*
 * XREFs of LoadDDB @ 0x1C004A4D8
 * Callers:
 *     LoadFieldUnitDDB @ 0x1C004A5F4 (LoadFieldUnitDDB.c)
 *     LoadMemDDB @ 0x1C004A7D0 (LoadMemDDB.c)
 *     LoadTable @ 0x1C00510D0 (LoadTable.c)
 *     AMLILoadDDB @ 0x1C009BE08 (AMLILoadDDB.c)
 * Callees:
 *     FreeContext @ 0x1C0002E08 (FreeContext.c)
 *     PushFrame @ 0x1C0003314 (PushFrame.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     RtlStringCchCopyNA @ 0x1C0027224 (RtlStringCchCopyNA.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 */

__int64 __fastcall LoadDDB(char *Entry, const char *a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // esi
  __int64 v10; // rcx
  char pszSrc[8]; // [rsp+30h] [rbp-18h] BYREF

  if ( gdwfAMLIInit >= 0 && !strncmp(a2 + 28, "MSFT", 4uLL) && *((_DWORD *)a2 + 8) < 0x1000000u )
  {
    v8 = -1072431079;
    LogError(-1072431079);
    AcpiDiagTraceAmlError((__int64)Entry, -1072431079);
    *(_DWORD *)pszSrc = *(_DWORD *)a2;
    RtlStringCchCopyNA(byte_1C0067A50, 5uLL, pszSrc, 4uLL);
    PrintDebugMessage(80, byte_1C0067A50, a2, 0LL, 0LL);
  }
  else
  {
    v8 = PushFrame((__int64)Entry, 1179927628, 64LL, (__int64)ParseLoad, (__int64 *)pszSrc);
    if ( !v8 )
    {
      v10 = *(_QWORD *)pszSrc;
      *(_QWORD *)(*(_QWORD *)pszSrc + 32LL) = a3;
      *(_QWORD *)(v10 + 48) = a4;
      *(_QWORD *)(v10 + 56) = a2;
      return v8;
    }
  }
  *((_QWORD *)Entry + 11) = 0LL;
  FreeContext(Entry);
  return v8;
}
