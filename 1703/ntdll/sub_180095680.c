/*
 * XREFs of sub_180095680 @ 0x180095680
 * Callers:
 *     sub_180028C10 @ 0x180028C10 (sub_180028C10.c)
 *     sub_18002F120 @ 0x18002F120 (sub_18002F120.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     ZwQueryInformationProcess @ 0x1800A5620 (ZwQueryInformationProcess.c)
 */

__int64 __fastcall sub_180095680(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  int v3; // eax
  int *v4; // r9
  unsigned __int64 v5; // r8
  __int64 v6; // r10
  __int64 result; // rax
  int ProcessInformation; // [rsp+58h] [rbp+20h] BYREF

  v3 = ZwQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
  if ( v3 < 0 )
    RtlRaiseStatus(v3);
  v4 = dword_1801596A0;
  LODWORD(v5) = LdrSystemDllInitBlock.RngData ^ ProcessInformation;
  v6 = 128LL;
  do
  {
    v5 = (2147483629 * (unsigned __int64)(unsigned int)v5 + 2147483587) % 0x7FFFFFFF;
    *v4++ = v5;
    --v6;
  }
  while ( v6 );
  result = 1LL;
  dword_1801598A0 = (2147483629 * (unsigned __int64)(unsigned int)v5 + 2147483587) % 0x7FFFFFFF;
  return result;
}
