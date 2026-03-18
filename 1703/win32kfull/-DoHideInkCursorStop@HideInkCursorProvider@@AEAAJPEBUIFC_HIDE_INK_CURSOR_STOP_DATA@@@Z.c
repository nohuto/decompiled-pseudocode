/*
 * XREFs of ?DoHideInkCursorStop@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_STOP_DATA@@@Z @ 0x1C021C170
 * Callers:
 *     ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C021C560 (-ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 *     ?TerminateActiveCommand@HideInkCursorProvider@@UEAAXPEAVActiveCommand@InkFeedbackProviderBase@@@Z @ 0x1C021CDF0 (-TerminateActiveCommand@HideInkCursorProvider@@UEAAXPEAVActiveCommand@InkFeedbackProviderBase@@@.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?ForceHidePenCursor@Feedback@@YAXH@Z @ 0x1C01B6930 (-ForceHidePenCursor@Feedback@@YAXH@Z.c)
 */

__int64 __fastcall HideInkCursorProvider::DoHideInkCursorStop(
        HideInkCursorProvider *this,
        const struct IFC_HIDE_INK_CURSOR_STOP_DATA *a2)
{
  __int64 v3; // r10
  __int64 v4; // r10
  const GUID *v5; // r9
  LPCGUID v6; // r8
  int v8; // [rsp+30h] [rbp-49h] BYREF
  __int64 v9; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  int *v11; // [rsp+60h] [rbp-19h]
  __int64 v12; // [rsp+68h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+80h] [rbp+7h] BYREF
  __int64 *v15; // [rsp+90h] [rbp+17h]
  __int64 v16; // [rsp+98h] [rbp+1Fh]
  const GUID *v17; // [rsp+A0h] [rbp+27h]
  __int64 v18; // [rsp+A8h] [rbp+2Fh]

  if ( (*((_DWORD *)this + 14))-- == 1 )
    Feedback::ForceHidePenCursor(0LL);
  if ( hProvider > 4u )
  {
    v12 = 4LL;
    v11 = &v8;
    v8 = 0;
    TlgCreateSz(&pDesc, "Removed hide cursor request");
    TlgCreateSz(&v14, *(LPCSTR *)(v3 + 48));
    v9 = v4;
    v15 = &v9;
    v16 = 8LL;
    v17 = v5;
    v18 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC5FC, v6, v5, 7u, &pData);
  }
  return 0LL;
}
