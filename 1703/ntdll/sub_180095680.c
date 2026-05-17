/*
 * XREFs of sub_180095680 @ 0x180095680
 * Callers:
 *     sub_180028C10 @ 0x180028C10 (sub_180028C10.c)
 *     sub_18002F120 @ 0x18002F120 (sub_18002F120.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     ZwQueryInformationProcess @ 0x1800A5620 (ZwQueryInformationProcess.c)
 */

__int64 sub_180095680()
{
  int v0; // eax
  int *v1; // r9
  unsigned __int64 v2; // r8
  __int64 v3; // r10
  __int64 result; // rax
  int v5; // [rsp+58h] [rbp+20h] BYREF

  v0 = ZwQueryInformationProcess(-1LL, 36LL, &v5, 4LL, 0LL);
  if ( v0 < 0 )
    RtlRaiseStatus(v0);
  v1 = dword_1801596A0;
  LODWORD(v2) = dword_18016B358 ^ v5;
  v3 = 128LL;
  do
  {
    v2 = (2147483629 * (unsigned __int64)(unsigned int)v2 + 2147483587) % 0x7FFFFFFF;
    *v1++ = v2;
    --v3;
  }
  while ( v3 );
  result = 1LL;
  dword_1801598A0 = (2147483629 * (unsigned __int64)(unsigned int)v2 + 2147483587) % 0x7FFFFFFF;
  return result;
}
