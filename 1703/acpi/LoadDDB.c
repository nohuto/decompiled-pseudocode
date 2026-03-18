/*
 * XREFs of LoadDDB @ 0x1C001D980
 * Callers:
 *     LoadMemDDB @ 0x1C00297D8 (LoadMemDDB.c)
 *     LoadFieldUnitDDB @ 0x1C005E15C (LoadFieldUnitDDB.c)
 *     LoadTable @ 0x1C00603E0 (LoadTable.c)
 *     AMLILoadDDB @ 0x1C00ABDC8 (AMLILoadDDB.c)
 * Callees:
 *     PushFrame @ 0x1C001CCF0 (PushFrame.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     RtlStringCchCopyNA @ 0x1C0024AE8 (RtlStringCchCopyNA.c)
 *     FreeContext @ 0x1C005EDD8 (FreeContext.c)
 */

__int64 __fastcall LoadDDB(__int64 a1, const char *a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // esi
  __int64 v9; // rcx
  char pszSrc[8]; // [rsp+30h] [rbp-18h] BYREF

  if ( gdwfAMLIInit >= 0 && !strncmp(a2 + 28, "MSFT", 4uLL) && *((_DWORD *)a2 + 8) < 0x1000000u )
  {
    v8 = -1072431079;
    LogError(-1072431079);
    AcpiDiagTraceAmlError(a1, -1072431079);
    *(_DWORD *)pszSrc = *(_DWORD *)a2;
    RtlStringCchCopyNA(byte_1C0077978, 5uLL, pszSrc, 4uLL);
    PrintDebugMessage(80, byte_1C0077978, a2, 0LL, 0LL);
    goto LABEL_8;
  }
  v8 = PushFrame(a1, 1179927628, 0x40u, (__int64)ParseLoad, (__int64 *)pszSrc);
  if ( v8 )
  {
LABEL_8:
    *(_QWORD *)(a1 + 88) = 0LL;
    FreeContext(a1);
    return v8;
  }
  v9 = *(_QWORD *)pszSrc;
  *(_QWORD *)(*(_QWORD *)pszSrc + 32LL) = a3;
  *(_QWORD *)(v9 + 48) = a4;
  *(_QWORD *)(v9 + 56) = a2;
  return v8;
}
