/*
 * XREFs of ?GetValueForKey@?$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCursor@@@Z @ 0x18002614C
 * Callers:
 *     ?OnTargetChanged@DWMCursorBroker@@UEAAJPEAUCursorId@@@Z @ 0x180025270 (-OnTargetChanged@DWMCursorBroker@@UEAAJPEAUCursorId@@@Z.c)
 *     ?SetLocked@DWMCursorBroker@@UEAAJUCursorIdInfo@@_N@Z @ 0x1800255D0 (-SetLocked@DWMCursorBroker@@UEAAJUCursorIdInfo@@_N@Z.c)
 *     ?SetClosestInteractiveBounds@DWMCursorBroker@@UEAAJUCursorIdInfo@@UCursorClosestInteractiveBoundsRect@@@Z @ 0x180025660 (-SetClosestInteractiveBounds@DWMCursorBroker@@UEAAJUCursorIdInfo@@UCursorClosestInteractiveBound.c)
 *     ?CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@PEAUIInputDisplay@@KPEAPEAUICursor@@@Z @ 0x180025900 (-CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@PEAUIInputDisplay@@KPEAPEAUICursor@@@Z.c)
 *     ?GetDefaultCursor@DWMCursorBroker@@UEAAJPEAPEAUICursor@@@Z @ 0x180025E20 (-GetDefaultCursor@DWMCursorBroker@@UEAAJPEAPEAUICursor@@@Z.c)
 *     ?GetCursor@DWMCursorBroker@@UEAAJKKPEAPEAUICursor@@@Z @ 0x180025EF0 (-GetCursor@DWMCursorBroker@@UEAAJKKPEAPEAUICursor@@@Z.c)
 *     ?CreateCursor@MobileCursorBroker@@UEAAJPEAUDeviceInfo@@PEAUIInputDisplay@@KPEAPEAUICursor@@@Z @ 0x18002F6C0 (-CreateCursor@MobileCursorBroker@@UEAAJPEAUDeviceInfo@@PEAUIInputDisplay@@KPEAPEAUICursor@@@Z.c)
 *     ?OnTargetChanged@MobileCursorBroker@@UEAAJPEAUCursorId@@@Z @ 0x18002F9D0 (-OnTargetChanged@MobileCursorBroker@@UEAAJPEAUCursorId@@@Z.c)
 *     ?GetDefaultCursor@MobileCursorBroker@@UEAAJPEAPEAUICursor@@@Z @ 0x18002FB60 (-GetDefaultCursor@MobileCursorBroker@@UEAAJPEAPEAUICursor@@@Z.c)
 *     ?GetCursor@MobileCursorBroker@@UEAAJKKPEAPEAUICursor@@@Z @ 0x18002FC30 (-GetCursor@MobileCursorBroker@@UEAAJKKPEAPEAUICursor@@@Z.c)
 *     ?SetSuppressionState@MobileCursorBroker@@UEAAJ_NPEAUHMONITOR__@@@Z @ 0x18002FD80 (-SetSuppressionState@MobileCursorBroker@@UEAAJ_NPEAUHMONITOR__@@@Z.c)
 *     ?OnCursorVisibilityChanged@MobileCursorBroker@@UEAAJUCursorId@@UCursorVisibilityData@@@Z @ 0x180030240 (-OnCursorVisibilityChanged@MobileCursorBroker@@UEAAJUCursorId@@UCursorVisibilityData@@@Z.c)
 *     ?OnCursorGlyphChanged@MobileCursorBroker@@UEAAJUCursorId@@UCursorGlyphData@@@Z @ 0x180030350 (-OnCursorGlyphChanged@MobileCursorBroker@@UEAAJUCursorId@@UCursorGlyphData@@@Z.c)
 *     ?SetLocked@MobileCursorBroker@@UEAAJUCursorIdInfo@@_N@Z @ 0x180030580 (-SetLocked@MobileCursorBroker@@UEAAJUCursorIdInfo@@_N@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 */

__int64 __fastcall FixedSizeMap<CursorId,DWMCursor *,50>::GetValueForKey(_DWORD *a1, unsigned int *a2, _QWORD *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  _DWORD *v7; // rdx
  char v8; // al
  int v9; // r9d

  v4 = 0;
  v5 = *a2;
  if ( (_DWORD)v5 != a1[300] && a3 )
  {
    v6 = 0LL;
    v7 = a1;
    do
    {
      if ( *v7 == (_DWORD)v5 )
      {
        *a3 = *(_QWORD *)&a1[6 * v6 + 4];
        return v4;
      }
      v6 = (unsigned int)(v6 + 1);
      v7 += 6;
    }
    while ( (unsigned int)v6 < 0x32 );
    v8 = 5;
    v4 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return v4;
    v9 = 132;
    goto LABEL_11;
  }
  v8 = 87;
  v4 = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v9 = 115;
LABEL_11:
    McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, v9, v8);
  }
  return v4;
}
