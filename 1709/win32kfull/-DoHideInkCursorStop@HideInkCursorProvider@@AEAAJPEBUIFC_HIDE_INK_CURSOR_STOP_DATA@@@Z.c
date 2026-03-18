/*
 * XREFs of ?DoHideInkCursorStop@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z @ 0x1C021D41C
 * Callers:
 *     ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C021D820 (-ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 *     ?TerminateActiveCommand@HideInkCursorProvider@@UEAAXPEAVActiveCommand@InkFeedbackProviderBase@@@Z @ 0x1C021E0D0 (-TerminateActiveCommand@HideInkCursorProvider@@UEAAXPEAVActiveCommand@InkFeedbackProviderBase@@@.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C0043700 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?ForceHidePenCursor@Feedback@@YAXH@Z @ 0x1C01BBC48 (-ForceHidePenCursor@Feedback@@YAXH@Z.c)
 */

__int64 __fastcall HideInkCursorProvider::DoHideInkCursorStop(
        HideInkCursorProvider *this,
        const struct IFC_HIDE_INK_CURSOR_STOP_DATA *a2)
{
  HideInkCursorProvider *v2; // r10
  const CHAR *v4; // rdx
  __int64 v5; // r10
  const GUID *v6; // r9
  LPCGUID v7; // r8
  int v9; // [rsp+30h] [rbp-39h] BYREF
  __int64 v10; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  int *v12; // [rsp+60h] [rbp-9h]
  __int64 v13; // [rsp+68h] [rbp-1h]
  const char *v14; // [rsp+70h] [rbp+7h]
  __int64 v15; // [rsp+78h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+17h] BYREF
  __int64 *v17; // [rsp+90h] [rbp+27h]
  __int64 v18; // [rsp+98h] [rbp+2Fh]
  const GUID *v19; // [rsp+A0h] [rbp+37h]
  __int64 v20; // [rsp+A8h] [rbp+3Fh]

  v2 = this;
  if ( (*((_DWORD *)this + 14))-- == 1 )
    Feedback::ForceHidePenCursor(0LL);
  if ( (unsigned int)pRelatedActivityId > 4 )
  {
    v4 = (const CHAR *)*((_QWORD *)v2 + 6);
    v12 = &v9;
    v13 = 4LL;
    v14 = "Removed hide cursor request";
    v9 = 0;
    v15 = 28LL;
    TlgCreateSz(&pDesc, v4);
    v10 = v5;
    v17 = &v10;
    v18 = 8LL;
    v19 = v6;
    v20 = 4LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E91DD, v7, v6, 7u, &pData);
  }
  return 0LL;
}
