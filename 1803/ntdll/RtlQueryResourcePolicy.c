/*
 * XREFs of RtlQueryResourcePolicy @ 0x18005A240
 * Callers:
 *     sub_180059FA8 @ 0x180059FA8 (sub_180059FA8.c)
 *     sub_18005D72C @ 0x18005D72C (sub_18005D72C.c)
 *     sub_1800EB1A0 @ 0x1800EB1A0 (sub_1800EB1A0.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1800297E0 (RtlRunOnceExecuteOnce.c)
 *     RtlGetNtSystemRoot @ 0x18003FAD0 (RtlGetNtSystemRoot.c)
 *     sub_18005A2C4 @ 0x18005A2C4 (sub_18005A2C4.c)
 *     RtlGetSuiteMask @ 0x18005A990 (RtlGetSuiteMask.c)
 *     sub_180083A4C @ 0x180083A4C (sub_180083A4C.c)
 *     sub_18010C9B4 @ 0x18010C9B4 (sub_18010C9B4.c)
 *     sub_18010CBC8 @ 0x18010CBC8 (sub_18010CBC8.c)
 */

__int64 __fastcall RtlQueryResourcePolicy(int a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rcx
  int v9; // ebx
  int v10; // ebx
  __int64 NtSystemRoot; // rax
  const wchar_t *v12; // rax

  if ( !a3 || a2 )
    return 3221225485LL;
  RtlRunOnceExecuteOnce(
    &qword_18015D3C8,
    (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))sub_18007CF10,
    0LL,
    0LL);
  if ( !a1 )
  {
    if ( a4 == 4 )
      return sub_18005A2C4(a3);
    return 3221225485LL;
  }
  v9 = a1 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( !v10 )
    {
      if ( a4 == 4 )
        return sub_180083A4C(a3);
      return 3221225485LL;
    }
    if ( v10 != 1 )
      return 3221225475LL;
    if ( a4 == 4 )
    {
      NtSystemRoot = RtlGetNtSystemRoot();
      return sub_18010CBC8(NtSystemRoot, a3);
    }
    return 3221225485LL;
  }
  if ( a4 != 4 )
    return 3221225485LL;
  if ( (RtlGetSuiteMask(v7) & 0x10000) != 0 )
    v12 = L"C:\\data\\programs\\windowsapps";
  else
    v12 = (const wchar_t *)RtlGetNtSystemRoot();
  return sub_18010C9B4(v12, a3);
}
