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

NTSTATUS __cdecl LdrUnlockLoaderLock(ULONG Flags, PVOID Cookie)
{
  NTSTATUS v2; // ebx
  __int64 v4; // rcx

  if ( (Flags & 0xFFFFFFFE) == 0 )
  {
    v2 = 0;
    if ( !Cookie )
      return v2;
    v4 = Flags & 1;
    if ( (unsigned __int64)Cookie >= 0x1000000000000000LL )
    {
      if ( (_DWORD)v4 )
        RtlRaiseStatus(-1073741584);
    }
    else
    {
      if ( ((LODWORD(NtCurrentTeb()->ClientId.UniqueThread) ^ ((unsigned __int64)Cookie >> 48)) & 0xFFF) == 0 )
      {
        if ( (_DWORD)v4 )
          sub_180046F60(v4, 13, 0);
        else
          sub_180046F60(v4, 14, 0);
        return v2;
      }
      if ( (_DWORD)v4 )
        RtlRaiseStatus(-1073741584);
    }
    return -1073741584;
  }
  if ( (Flags & 1) != 0 )
    RtlRaiseStatus(-1073741585);
  return -1073741585;
}
