/*
 * XREFs of EtwEventWriteTransfer @ 0x180007440
 * Callers:
 *     sub_1800886A4 @ 0x1800886A4 (sub_1800886A4.c)
 * Callees:
 *     sub_180007480 @ 0x180007480 (sub_180007480.c)
 */

ULONG __cdecl EtwEventWriteTransfer(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        LPCGUID ActivityId,
        LPCGUID RelatedActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  return sub_180007480(
           RegHandle,
           (_DWORD)EventDescriptor,
           0,
           0,
           0,
           (__int64)ActivityId,
           (__int64)RelatedActivityId,
           UserDataCount,
           (__int64)UserData);
}
