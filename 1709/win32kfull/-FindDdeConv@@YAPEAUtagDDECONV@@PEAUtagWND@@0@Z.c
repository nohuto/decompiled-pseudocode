/*
 * XREFs of ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01F047C
 * Callers:
 *     ValidateDDEConvPair @ 0x1C01F192C (ValidateDDEConvPair.c)
 *     _ImpersonateDdeClientWindow @ 0x1C01F1968 (_ImpersonateDdeClientWindow.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01F19F0 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackPostHook @ 0x1C01F1BFC (xxxDDETrackPostHook.c)
 *     xxxDDETrackSendHook @ 0x1C01F1ED8 (xxxDDETrackSendHook.c)
 * Callees:
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 */

struct tagDDECONV *__fastcall FindDdeConv(struct tagWND *a1, struct tagWND *a2)
{
  struct tagDDECONV *result; // rax
  __int64 v3; // r11

  for ( result = (struct tagDDECONV *)GetProp((__int64)a1, atomDDETrack, 1);
        result && *((_QWORD *)result + 6) != v3;
        result = (struct tagDDECONV *)*((_QWORD *)result + 3) )
  {
    ;
  }
  return result;
}
