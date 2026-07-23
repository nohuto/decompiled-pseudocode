/*
 * XREFs of EtwEventWriteFull @ 0x180060390
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E120 @ 0x18005E120 (sub_18005E120.c)
 */

ULONG __cdecl EtwEventWriteFull(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        USHORT EventProperty,
        LPCGUID ActivityId,
        LPCGUID RelatedActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  return sub_18005E120(
           RegHandle,
           (__int128 *)EventDescriptor,
           0LL,
           0,
           EventProperty,
           (GUID *)ActivityId,
           (__int128 *)RelatedActivityId,
           UserDataCount,
           (__int64)UserData);
}
