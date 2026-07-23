/*
 * XREFs of RtlQueryResourcePolicy @ 0x18000F560
 * Callers:
 *     sub_18000A534 @ 0x18000A534 (sub_18000A534.c)
 *     sub_18000C540 @ 0x18000C540 (sub_18000C540.c)
 *     sub_1800DE4A0 @ 0x1800DE4A0 (sub_1800DE4A0.c)
 * Callees:
 *     sub_18000F610 @ 0x18000F610 (sub_18000F610.c)
 *     RtlGetSuiteMask @ 0x18000FC90 (RtlGetSuiteMask.c)
 *     RtlRunOnceExecuteOnce @ 0x18001B510 (RtlRunOnceExecuteOnce.c)
 *     RtlGetNtSystemRoot @ 0x18003BA70 (RtlGetNtSystemRoot.c)
 *     sub_18007D4C0 @ 0x18007D4C0 (sub_18007D4C0.c)
 *     sub_18008A924 @ 0x18008A924 (sub_18008A924.c)
 *     sub_180109D60 @ 0x180109D60 (sub_180109D60.c)
 */

__int64 __fastcall RtlQueryResourcePolicy(int a1, int a2, __int64 a3, __int64 a4)
{
  int v8; // ebx
  PWSTR v9; // rax
  int v10; // ebx
  PWSTR NtSystemRoot; // rax

  if ( !a3 || a2 )
    return 3221225485LL;
  RtlRunOnceExecuteOnce(&stru_18015C390, sub_1800818B0, 0LL, 0LL);
  if ( !a1 )
  {
    if ( a4 == 4 )
      return sub_18000F610(a3);
    return 3221225485LL;
  }
  v8 = a1 - 1;
  if ( v8 )
  {
    v10 = v8 - 1;
    if ( !v10 )
    {
      if ( a4 == 4 )
        return sub_18008A924(a3);
      return 3221225485LL;
    }
    if ( v10 != 1 )
      return 3221225475LL;
    if ( a4 == 4 )
    {
      NtSystemRoot = RtlGetNtSystemRoot();
      return sub_180109D60(NtSystemRoot, a3);
    }
    return 3221225485LL;
  }
  if ( a4 != 4 )
    return 3221225485LL;
  if ( (RtlGetSuiteMask() & 0x10000) != 0 )
    v9 = L"C:\\data\\programs\\windowsapps";
  else
    v9 = RtlGetNtSystemRoot();
  return sub_18007D4C0(v9, a3);
}
