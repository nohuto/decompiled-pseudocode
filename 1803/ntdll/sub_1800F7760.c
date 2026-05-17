/*
 * XREFs of sub_1800F7760 @ 0x1800F7760
 * Callers:
 *     sub_18001EBF0 @ 0x18001EBF0 (sub_18001EBF0.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     ZwQueryInformationProcess @ 0x18009ADE0 (ZwQueryInformationProcess.c)
 */

__int64 sub_1800F7760()
{
  int InformationProcess; // eax
  __int32 *v1; // r9
  unsigned __int64 v2; // r8
  __int64 v3; // r10
  __int64 result; // rax
  int v5; // [rsp+58h] [rbp+20h]

  InformationProcess = ZwQueryInformationProcess();
  if ( InformationProcess < 0 )
    RtlRaiseStatus(InformationProcess);
  v1 = dword_18015A800;
  LODWORD(v2) = dword_18016F368 ^ v5;
  v3 = 128LL;
  do
  {
    v2 = (2147483629 * (unsigned __int64)(unsigned int)v2 + 2147483587) % 0x7FFFFFFF;
    *v1++ = v2;
    --v3;
  }
  while ( v3 );
  result = 1LL;
  dword_18015AA00 = (2147483629 * (unsigned __int64)(unsigned int)v2 + 2147483587) % 0x7FFFFFFF;
  return result;
}
