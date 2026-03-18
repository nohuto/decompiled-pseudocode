/*
 * XREFs of ?DoHideInkCursorStart@HideInkCursorProvider@@AEAAJPEBUIFC_HIDE_INK_CURSOR_START_DATA@@@Z @ 0x1C021C09C
 * Callers:
 *     ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C021C560 (-ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?ForceHidePenCursor@Feedback@@YAXH@Z @ 0x1C01B6930 (-ForceHidePenCursor@Feedback@@YAXH@Z.c)
 */

__int64 __fastcall HideInkCursorProvider::DoHideInkCursorStart(
        HideInkCursorProvider *this,
        const struct IFC_HIDE_INK_CURSOR_START_DATA *a2)
{
  _DWORD *v2; // r9
  int v3; // r11d
  __int64 v4; // r10
  __int64 v5; // r10
  const GUID *v6; // r9
  LPCGUID v7; // r8
  int v9; // [rsp+30h] [rbp-49h] BYREF
  __int64 v10; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  int *v12; // [rsp+60h] [rbp-19h]
  __int64 v13; // [rsp+68h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+80h] [rbp+7h] BYREF
  __int64 *v16; // [rsp+90h] [rbp+17h]
  __int64 v17; // [rsp+98h] [rbp+1Fh]
  const GUID *v18; // [rsp+A0h] [rbp+27h]
  __int64 v19; // [rsp+A8h] [rbp+2Fh]

  v2 = (_DWORD *)((char *)this + 56);
  v3 = 0;
  if ( !*((_DWORD *)this + 14) )
    Feedback::ForceHidePenCursor((Feedback *)1);
  ++*v2;
  if ( hProvider > 4u )
  {
    v9 = v3;
    v12 = &v9;
    v13 = 4LL;
    TlgCreateSz(&pDesc, "Added hide cursor request");
    TlgCreateSz(&v15, *(LPCSTR *)(v4 + 48));
    v10 = v5;
    v16 = &v10;
    v17 = 8LL;
    v18 = v6;
    v19 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC5FC, v7, v6, 7u, &pData);
  }
  return 0LL;
}
