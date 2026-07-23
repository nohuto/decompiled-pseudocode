/*
 * XREFs of EtwEventWriteEx @ 0x1800073B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180007480 @ 0x180007480 (sub_180007480.c)
 */

ULONG __cdecl EtwEventWriteEx(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG64 Filter,
        ULONG Flags,
        LPCGUID ActivityId,
        LPCGUID RelatedActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  return sub_180007480(
           RegHandle,
           (_DWORD)EventDescriptor,
           Filter,
           Flags,
           0,
           (__int64)ActivityId,
           (__int64)RelatedActivityId,
           UserDataCount,
           (__int64)UserData);
}
