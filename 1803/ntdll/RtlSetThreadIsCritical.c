/*
 * XREFs of RtlSetThreadIsCritical @ 0x180087630
 * Callers:
 *     <none>
 * Callees:
 *     ZwSetInformationThread @ 0x18009AC60 (ZwSetInformationThread.c)
 *     ZwQueryInformationThread @ 0x18009AF60 (ZwQueryInformationThread.c)
 */

__int64 __fastcall RtlSetThreadIsCritical(unsigned __int8 a1, _BYTE *a2, char a3)
{
  __int64 result; // rax
  int v6; // [rsp+50h] [rbp+18h] BYREF

  if ( a2 )
    *a2 = 0;
  if ( a3 && (NtCurrentTeb()->ProcessEnvironmentBlock->NtGlobalFlag & 0x100000) == 0 )
    return 3221225473LL;
  if ( !a2 )
  {
LABEL_8:
    v6 = a1;
    return ZwSetInformationThread(-2LL, 18LL, &v6);
  }
  result = ZwQueryInformationThread(-2LL, 18LL, &v6, 4LL, 0LL);
  if ( (int)result >= 0 )
  {
    *a2 = v6;
    goto LABEL_8;
  }
  return result;
}
