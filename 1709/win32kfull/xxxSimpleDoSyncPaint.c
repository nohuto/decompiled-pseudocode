/*
 * XREFs of xxxSimpleDoSyncPaint @ 0x1C00A1684
 * Callers:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C009F628 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxDispatchMessage @ 0x1C00A10D0 (xxxDispatchMessage.c)
 *     xxxGetUpdateRgn @ 0x1C0107368 (xxxGetUpdateRgn.c)
 *     xxxGetUpdateRect @ 0x1C010ACF0 (xxxGetUpdateRect.c)
 * Callees:
 *     ClearHungFlag @ 0x1C0061BB8 (ClearHungFlag.c)
 *     GetStyleWindow @ 0x1C006B4B0 (GetStyleWindow.c)
 *     xxxSendEraseBkgnd @ 0x1C007F4F4 (xxxSendEraseBkgnd.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C007F96C (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C007FA1C (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     IsHungWindow @ 0x1C0088E80 (IsHungWindow.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     xxxRedrawHungWindow @ 0x1C0134058 (xxxRedrawHungWindow.c)
 */

char __fastcall xxxSimpleDoSyncPaint(struct tagWND *a1)
{
  __int64 StyleWindow; // rax
  __int64 v3; // r8
  int v4; // edi
  unsigned __int64 NCUpdateRgn; // rax
  unsigned __int64 v6; // rsi
  __int64 v7; // r8

  StyleWindow = GetStyleWindow((__int64)a1, 2818);
  if ( !StyleWindow )
  {
    SetOrClrWF(0, a1, 0x240u, 1);
    v4 = (*((unsigned __int8 *)a1 + 57) >> 2) & 2 | 1;
    LOBYTE(StyleWindow) = *((_BYTE *)a1 + 57) & 2;
    if ( !(_BYTE)StyleWindow )
      v4 = (*((unsigned __int8 *)a1 + 57) >> 2) & 2;
    if ( v4 )
    {
      if ( (*((_BYTE *)a1 + 71) & 0x10) != 0 )
      {
        if ( !*((_QWORD *)a1 + 22) )
        {
          SetOrClrWF(0, a1, 0x102u, 1);
          SetOrClrWF(0, a1, 0x104u, 1);
          LOBYTE(v4) = v4 & 0xFE;
        }
        if ( *((_QWORD *)a1 + 2) == gptiCurrent )
        {
          NCUpdateRgn = GetNCUpdateRgn(a1, 1LL, v3);
          v6 = NCUpdateRgn;
          if ( (((v4 & 2) != 0) & (*((_BYTE *)a1 + 57) >> 3)) != 0 )
            xxxSendNCPaint(a1, NCUpdateRgn);
          if ( (v4 & 1) != 0 )
          {
            if ( (*((_BYTE *)a1 + 57) & 8) != 0 )
            {
              DeleteMaybeSpecialRgn(v6);
              v6 = GetNCUpdateRgn(a1, 0LL, v7);
            }
            if ( (*((_BYTE *)a1 + 57) & 2) != 0 )
            {
              SetOrClrWF(0, a1, 0x102u, 1);
              SetOrClrWF(0, a1, 0x104u, 1);
              xxxSendEraseBkgnd((__int64)a1, 0LL, v6);
            }
            ClearHungFlag(a1, 776);
          }
          LOBYTE(StyleWindow) = DeleteMaybeSpecialRgn(v6);
        }
        else
        {
          LOBYTE(StyleWindow) = *((_BYTE *)a1 + 71) & 0xC0;
          if ( (_BYTE)StyleWindow != 64 )
          {
            StyleWindow = *(_QWORD *)(grpdeskRitInput + 8LL);
            if ( a1 != *(struct tagWND **)(StyleWindow + 16) )
            {
              LODWORD(StyleWindow) = IsHungWindow((__int64)a1);
              if ( (_DWORD)StyleWindow )
              {
                if ( (*((_BYTE *)a1 + 59) & 8) != 0 )
                {
                  ClearHungFlag(a1, 776);
                  LOBYTE(StyleWindow) = xxxRedrawHungWindow(a1);
                }
              }
            }
          }
        }
      }
      else
      {
        SetOrClrWF(0, a1, 0x108u, 1);
        SetOrClrWF(0, a1, 0x102u, 1);
        SetOrClrWF(0, a1, 0x680u, 1);
        SetOrClrWF(0, a1, 0x104u, 1);
        LOBYTE(StyleWindow) = ClearHungFlag(a1, 776);
      }
    }
  }
  return StyleWindow;
}
