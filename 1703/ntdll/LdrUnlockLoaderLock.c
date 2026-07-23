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

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl LdrUnlockLoaderLock(ULONG Flags, PVOID Cookie)
{
  NTSTATUS v2; // ebx

  if ( (Flags & 0xFFFFFFFE) == 0 )
  {
    v2 = 0;
    if ( !Cookie )
      return v2;
    if ( (unsigned __int64)Cookie >= 0x1000000000000000LL )
    {
      if ( (Flags & 1) != 0 )
        RtlRaiseStatus(-1073741584);
    }
    else
    {
      if ( ((LODWORD(NtCurrentTeb()->ClientId.UniqueThread) ^ ((unsigned __int64)Cookie >> 48)) & 0xFFF) == 0 )
      {
        if ( (Flags & 1) != 0 )
          sub_18001A028(*(__int64 *)&Flags, 13, 0);
        else
          sub_18001A028(*(__int64 *)&Flags, 14, 0);
        return v2;
      }
      if ( (Flags & 1) != 0 )
        RtlRaiseStatus(-1073741584);
    }
    return -1073741584;
  }
  if ( (Flags & 1) != 0 )
    RtlRaiseStatus(-1073741585);
  return -1073741585;
}
