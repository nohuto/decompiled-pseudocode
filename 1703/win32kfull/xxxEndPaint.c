/*
 * XREFs of xxxEndPaint @ 0x1C003BF60
 * Callers:
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C003BE18 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     NtUserEndPaint @ 0x1C003BE80 (NtUserEndPaint.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C003CF20 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     NtUserBeginPaint @ 0x1C005D9A0 (NtUserBeginPaint.c)
 *     xxxTooltipWndProc @ 0x1C010DBA0 (xxxTooltipWndProc.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z @ 0x1C0203198 (-xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z.c)
 *     xxxSBWndProc @ 0x1C020F940 (xxxSBWndProc.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     zzzInternalShowCaret @ 0x1C00385D8 (zzzInternalShowCaret.c)
 *     InternalInvalidate3 @ 0x1C0066B30 (InternalInvalidate3.c)
 */

__int64 __fastcall xxxEndPaint(struct tagWND *a1, _QWORD *a2)
{
  ReleaseCacheDC(*a2, 1LL);
  if ( (*((_BYTE *)a1 + 60) & 2) != 0 )
  {
    if ( ghrgnUpdateSave )
    {
      InternalInvalidate3(a1);
      if ( !--gnUpdateSave )
      {
        GreDeleteObject(ghrgnUpdateSave);
        ghrgnUpdateSave = 0LL;
        gRdwFlags = 0;
      }
    }
    SetOrClrWF(0, a1, 0x402u, 1);
  }
  SetOrClrWF(0, a1, 0x401u, 1);
  SetOrClrWF(0, a1, 0x404u, 1);
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 256LL) )
    zzzInternalShowCaret();
  return 1LL;
}
