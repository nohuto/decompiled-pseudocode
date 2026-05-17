/*
 * XREFs of LdrUnlockLoaderLock @ 0x180081C00
 * Callers:
 *     sub_180016810 @ 0x180016810 (sub_180016810.c)
 *     sub_180016D48 @ 0x180016D48 (sub_180016D48.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     sub_180004D78 @ 0x180004D78 (sub_180004D78.c)
 *     sub_18001A028 @ 0x18001A028 (sub_18001A028.c)
 *     sub_180084734 @ 0x180084734 (sub_180084734.c)
 */

__int64 __fastcall LdrUnlockLoaderLock(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx

  if ( (a1 & 0xFFFFFFFE) == 0 )
  {
    v2 = 0;
    if ( !a2 )
      return v2;
    if ( a2 >= 0x1000000000000000LL )
    {
      if ( (a1 & 1) != 0 )
        RtlRaiseStatus(-1073741584);
    }
    else
    {
      if ( ((LODWORD(NtCurrentTeb()->ClientId.UniqueThread) ^ HIWORD(a2)) & 0xFFF) == 0 )
      {
        if ( (a1 & 1) != 0 )
          sub_18001A028(a1, 13, 0);
        else
          sub_18001A028(a1, 14, 0);
        return v2;
      }
      if ( (a1 & 1) != 0 )
        RtlRaiseStatus(-1073741584);
    }
    return (unsigned int)-1073741584;
  }
  if ( (a1 & 1) != 0 )
    RtlRaiseStatus(-1073741585);
  return (unsigned int)-1073741585;
}
