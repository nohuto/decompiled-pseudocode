/*
 * XREFs of ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01E445C
 * Callers:
 *     ValidateDDEConvPair @ 0x1C01E590C (ValidateDDEConvPair.c)
 *     _ImpersonateDdeClientWindow @ 0x1C01E5948 (_ImpersonateDdeClientWindow.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01E59D0 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackPostHook @ 0x1C01E5BD0 (xxxDDETrackPostHook.c)
 *     xxxDDETrackSendHook @ 0x1C01E5EA4 (xxxDDETrackSendHook.c)
 * Callees:
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 */

struct tagDDECONV *__fastcall FindDdeConv(struct tagWND *a1, struct tagWND *a2)
{
  struct tagDDECONV *result; // rax
  __int64 v3; // r10

  for ( result = (struct tagDDECONV *)GetProp((__int64)a1, atomDDETrack, 1);
        result && *((_QWORD *)result + 6) != v3;
        result = (struct tagDDECONV *)*((_QWORD *)result + 3) )
  {
    ;
  }
  return result;
}
