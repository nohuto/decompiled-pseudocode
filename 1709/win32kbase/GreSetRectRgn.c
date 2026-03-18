/*
 * XREFs of GreSetRectRgn @ 0x1C00560A0
 * Callers:
 *     _GetDCEx @ 0x1C0049920 (_GetDCEx.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0050E30 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GetMonitorDC @ 0x1C0056170 (GetMonitorDC.c)
 *     SetEmptyRgn @ 0x1C0057010 (SetEmptyRgn.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C005C980 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     UserSetDCVisRgn @ 0x1C007B3E0 (UserSetDCVisRgn.c)
 *     NtGdiSetRectRgn @ 0x1C00FB9A0 (NtGdiSetRectRgn.c)
 *     EngSetRectRgn @ 0x1C00FC910 (EngSetRectRgn.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C004333C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0043920 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0046BE0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00557C8 (-vOrder@ERECTL@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetRectRgn(struct HOBJ__ *a1, LONG a2, LONG a3, LONG a4, LONG a5)
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
