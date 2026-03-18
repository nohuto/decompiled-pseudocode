/*
 * XREFs of GreOffsetRgn @ 0x1C00400D0
 * Callers:
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0027BCC (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     GetMonitorDC @ 0x1C002A240 (GetMonitorDC.c)
 *     UserSetDCVisRgn @ 0x1C002B840 (UserSetDCVisRgn.c)
 *     _GetDCEx @ 0x1C0033980 (_GetDCEx.c)
 *     NtGdiOffsetRgn @ 0x1C008B9A0 (NtGdiOffsetRgn.c)
 *     EngOffsetRgn @ 0x1C00FC2E0 (EngOffsetRgn.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C003C474 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C003D940 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C003E350 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C003E9E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 */

__int64 __fastcall GreOffsetRgn(HRGN a1, LONG a2, LONG a3)
{
  unsigned int v5; // esi
  int *v7[5]; // [rsp+20h] [rbp-28h] BYREF
  struct _POINTL v8; // [rsp+68h] [rbp+20h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v7, a1, 0);
  v5 = 0;
  v8.x = a2;
  v8.y = a3;
  if ( v7[0] && (unsigned int)RGNOBJ::bOffset(v7, &v8) )
    v5 = RGNOBJ::iComplexity((RGNOBJ *)v7);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v7);
  return v5;
}
