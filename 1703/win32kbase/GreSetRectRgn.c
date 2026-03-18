/*
 * XREFs of GreSetRectRgn @ 0x1C0040BF0
 * Callers:
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0027BCC (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     GetMonitorDC @ 0x1C002A240 (GetMonitorDC.c)
 *     UserSetDCVisRgn @ 0x1C002B840 (UserSetDCVisRgn.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002CDEC (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     _GetDCEx @ 0x1C0033980 (_GetDCEx.c)
 *     SetEmptyRgn @ 0x1C00444E0 (SetEmptyRgn.c)
 *     NtGdiSetRectRgn @ 0x1C00FB590 (NtGdiSetRectRgn.c)
 *     EngSetRectRgn @ 0x1C00FC3B0 (EngSetRectRgn.c)
 * Callees:
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C003DBA0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C003E350 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C003E9E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0040E3C (-vOrder@ERECTL@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetRectRgn(HRGN a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  unsigned int v8; // ebp
  struct _RECTL v10; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v11, a1, 0);
  v8 = 0;
  if ( v11[0] )
  {
    v10.left = a2;
    v10.top = a3;
    v10.right = a4;
    v10.bottom = a5;
    if ( ((a2 & 0xF8000000) == 0 || (a2 & 0xF8000000) == -134217728)
      && (((a5 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((a4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
    {
      ERECTL::vOrder((ERECTL *)&v10);
      RGNOBJ::vSet((RGNOBJ *)v11, &v10);
      v8 = 1;
    }
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v11);
  return v8;
}
