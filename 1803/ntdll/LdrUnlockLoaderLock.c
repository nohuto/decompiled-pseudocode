/*
 * XREFs of LdrUnlockLoaderLock @ 0x180047B80
 * Callers:
 *     sub_1800254A0 @ 0x1800254A0 (sub_1800254A0.c)
 *     sub_180025ACC @ 0x180025ACC (sub_180025ACC.c)
 * Callees:
 *     sub_180043B30 @ 0x180043B30 (sub_180043B30.c)
 *     sub_180046F60 @ 0x180046F60 (sub_180046F60.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     sub_1800D0B18 @ 0x1800D0B18 (sub_1800D0B18.c)
 */

__int64 __fastcall LdrUnlockLoaderLock(int a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx

  if ( (a1 & 0xFFFFFFFE) == 0 )
  {
    v2 = 0;
    if ( !a2 )
      return v2;
    v4 = a1 & 1;
    if ( a2 >= 0x1000000000000000LL )
    {
      if ( (_DWORD)v4 )
        RtlRaiseStatus(3221225712LL);
    }
    else
    {
      if ( ((LODWORD(NtCurrentTeb()->ClientId.UniqueThread) ^ HIWORD(a2)) & 0xFFF) == 0 )
      {
        if ( (_DWORD)v4 )
          sub_180046F60(v4, 13, 0);
        else
          sub_180046F60(v4, 14, 0);
        return v2;
      }
      if ( (_DWORD)v4 )
        RtlRaiseStatus(3221225712LL);
    }
    return (unsigned int)-1073741584;
  }
  if ( (a1 & 1) != 0 )
    RtlRaiseStatus(3221225711LL);
  return (unsigned int)-1073741585;
}
