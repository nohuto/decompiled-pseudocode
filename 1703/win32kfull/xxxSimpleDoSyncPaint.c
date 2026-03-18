/*
 * XREFs of xxxSimpleDoSyncPaint @ 0x1C00CC88C
 * Callers:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C0049000 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxDispatchMessage @ 0x1C00CC438 (xxxDispatchMessage.c)
 *     xxxGetUpdateRgn @ 0x1C00FC3D8 (xxxGetUpdateRgn.c)
 *     xxxGetUpdateRect @ 0x1C0102B2C (xxxGetUpdateRect.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     IsHungWindow @ 0x1C004A0A0 (IsHungWindow.c)
 *     ClearHungFlag @ 0x1C005EE68 (ClearHungFlag.c)
 *     GetStyleWindow @ 0x1C0067050 (GetStyleWindow.c)
 *     xxxSendEraseBkgnd @ 0x1C00EB518 (xxxSendEraseBkgnd.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00F11D0 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00F3E14 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxRedrawHungWindow @ 0x1C0139BCC (xxxRedrawHungWindow.c)
 */

char __fastcall xxxSimpleDoSyncPaint(struct tagWND *a1)
{
  __int64 StyleWindow; // rax
  int v3; // edi
  HRGN NCUpdateRgn; // rax
  HRGN v5; // rsi

  StyleWindow = GetStyleWindow((__int64)a1, 2818);
  if ( !StyleWindow )
  {
    SetOrClrWF(0, a1, 0x240u, 1);
    v3 = (*((unsigned __int8 *)a1 + 57) >> 2) & 2 | 1;
    LOBYTE(StyleWindow) = *((_BYTE *)a1 + 57) & 2;
    if ( !(_BYTE)StyleWindow )
      v3 = (*((unsigned __int8 *)a1 + 57) >> 2) & 2;
    if ( v3 )
    {
      if ( (*((_BYTE *)a1 + 71) & 0x10) != 0 )
      {
        if ( !*((_QWORD *)a1 + 22) )
        {
          SetOrClrWF(0, a1, 0x102u, 1);
          SetOrClrWF(0, a1, 0x104u, 1);
          LOBYTE(v3) = v3 & 0xFE;
        }
        if ( *((_QWORD *)a1 + 2) == gptiCurrent )
        {
          NCUpdateRgn = GetNCUpdateRgn(a1, 1);
          v5 = NCUpdateRgn;
          if ( (((v3 & 2) != 0) & (*((_BYTE *)a1 + 57) >> 3)) != 0 )
            xxxSendNCPaint(a1, NCUpdateRgn);
          if ( (v3 & 1) != 0 )
          {
            if ( (*((_BYTE *)a1 + 57) & 8) != 0 )
            {
              DeleteMaybeSpecialRgn(v5);
              v5 = GetNCUpdateRgn(a1, 0);
            }
            if ( (*((_BYTE *)a1 + 57) & 2) != 0 )
            {
              SetOrClrWF(0, a1, 0x102u, 1);
              SetOrClrWF(0, a1, 0x104u, 1);
              xxxSendEraseBkgnd(a1, 0LL, v5);
            }
            ClearHungFlag(a1, 776);
          }
          LOBYTE(StyleWindow) = DeleteMaybeSpecialRgn(v5);
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
