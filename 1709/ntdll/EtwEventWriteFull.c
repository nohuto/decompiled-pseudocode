/*
 * XREFs of EtwEventWriteFull @ 0x1800884B0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpEventWriteFull @ 0x180019F70 (EtwpEventWriteFull.c)
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
  return EtwpEventWriteFull(
           RegHandle,
           (__int128 *)EventDescriptor,
           0LL,
           0,
           EventProperty,
           (_GUID *)ActivityId,
           (__int128 *)RelatedActivityId,
           UserDataCount,
           (__int64)UserData);
}
