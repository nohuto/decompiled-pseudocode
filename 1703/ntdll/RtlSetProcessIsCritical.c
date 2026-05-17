/*
 * XREFs of RtlSetProcessIsCritical @ 0x18008ED40
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationProcess @ 0x1800A5620 (ZwQueryInformationProcess.c)
 *     ZwSetInformationProcess @ 0x1800A5680 (ZwSetInformationProcess.c)
 */

__int64 __fastcall RtlSetProcessIsCritical(unsigned __int8 a1, _BYTE *a2, char a3)
{
  int v6; // [rsp+50h] [rbp+18h] BYREF

  if ( a2 )
    *a2 = 0;
  if ( a3 && (NtCurrentTeb()->ProcessEnvironmentBlock->NtGlobalFlag & 0x100000) == 0 )
    return 3221225473LL;
  if ( a2 )
  {
    ZwQueryInformationProcess(-1LL, 29LL, &v6, 4LL, 0LL);
    *a2 = v6;
  }
  v6 = a1;
  return ZwSetInformationProcess(-1LL, 29LL, &v6, 4LL);
}
