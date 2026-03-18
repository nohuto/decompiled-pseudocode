/*
 * XREFs of ?DoHideInkCursorStart@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z @ 0x1C021D344
 * Callers:
 *     ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C021D820 (-ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C0043700 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?ForceHidePenCursor@Feedback@@YAXH@Z @ 0x1C01BBC48 (-ForceHidePenCursor@Feedback@@YAXH@Z.c)
 */

__int64 __fastcall HideInkCursorProvider::DoHideInkCursorStart(
        HideInkCursorProvider *this,
        const struct IFC_HIDE_INK_CURSOR_START_DATA *a2)
{
  _DWORD *v2; // r9
  int v3; // r11d
  HideInkCursorProvider *v4; // r10
  const CHAR *v5; // rdx
  __int64 v6; // r10
  const GUID *v7; // r9
  LPCGUID v8; // r8
  int v10; // [rsp+30h] [rbp-39h] BYREF
  __int64 v11; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  int *v13; // [rsp+60h] [rbp-9h]
  __int64 v14; // [rsp+68h] [rbp-1h]
  const char *v15; // [rsp+70h] [rbp+7h]
  __int64 v16; // [rsp+78h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+17h] BYREF
  __int64 *v18; // [rsp+90h] [rbp+27h]
  __int64 v19; // [rsp+98h] [rbp+2Fh]
  const GUID *v20; // [rsp+A0h] [rbp+37h]
  __int64 v21; // [rsp+A8h] [rbp+3Fh]

  v2 = (_DWORD *)((char *)this + 56);
  v3 = 0;
  v4 = this;
  if ( !*((_DWORD *)this + 14) )
    Feedback::ForceHidePenCursor((Feedback *)1);
  ++*v2;
  if ( (unsigned int)pRelatedActivityId > 4 )
  {
    v5 = (const CHAR *)*((_QWORD *)v4 + 6);
    v13 = &v10;
    v10 = v3;
    v15 = "Added hide cursor request";
    v14 = 4LL;
    v16 = 26LL;
    TlgCreateSz(&pDesc, v5);
    v11 = v6;
    v18 = &v11;
    v19 = 8LL;
    v20 = v7;
    v21 = 4LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E91DD, v8, v7, 7u, &pData);
  }
  return 0LL;
}
