/*
 * XREFs of NtGdiPatBlt @ 0x1C00903D0
 * Callers:
 *     xxxPaintMenuBar @ 0x1C000D23C (xxxPaintMenuBar.c)
 *     GreStretchDIBitsInternal @ 0x1C0093B84 (GreStretchDIBitsInternal.c)
 *     GreStretchBltInternal @ 0x1C0094BA0 (GreStretchBltInternal.c)
 *     xxxDrawCaptionBar @ 0x1C00C22F8 (xxxDrawCaptionBar.c)
 *     DrawThumb2 @ 0x1C00D66F0 (DrawThumb2.c)
 *     EraseBitmap @ 0x1C011733C (EraseBitmap.c)
 *     xxxSoundSentry @ 0x1C0119A28 (xxxSoundSentry.c)
 *     xxxMNDrawFullNC @ 0x1C013E3E8 (xxxMNDrawFullNC.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C020E138 (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     ?MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@PEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0214F9C (-MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@PEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     ?xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0215194 (-xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     MNEraseBackground @ 0x1C0215B44 (MNEraseBackground.c)
 *     xxxDrawState @ 0x1C0219860 (xxxDrawState.c)
 *     DxgkEngColorFillViaGDI @ 0x1C0250880 (DxgkEngColorFillViaGDI.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0075090 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007517C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00762B0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0081720 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     bCvtPts1 @ 0x1C0084E98 (bCvtPts1.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C0092670 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     GreMaskBlt @ 0x1C00F1F6C (GreMaskBlt.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiPatBlt(HDC a1, int a2, int a3, int a4, int a5, int a6)
{
  unsigned int v8; // ebx
  unsigned int v11; // edi
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  DC *v15; // rcx
  struct SURFACE *v16; // rsi
  __int64 v17; // rdx
  unsigned int locked; // eax
  DC *v20; // [rsp+70h] [rbp-90h] BYREF
  int v21; // [rsp+78h] [rbp-88h]
  int v22; // [rsp+7Ch] [rbp-84h]
  unsigned __int64 v23; // [rsp+80h] [rbp-80h] BYREF
  int v24; // [rsp+8Ch] [rbp-74h]
  __int128 v25; // [rsp+90h] [rbp-70h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-60h]
  int v27; // [rsp+A8h] [rbp-58h]
  __int64 v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  __int64 v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  __int64 v32; // [rsp+D0h] [rbp-30h]
  int v33; // [rsp+E0h] [rbp-20h] BYREF
  int v34; // [rsp+E4h] [rbp-1Ch]
  int v35; // [rsp+E8h] [rbp-18h]
  int v36; // [rsp+ECh] [rbp-14h]

  v8 = 0;
  v21 = 0;
  v22 = 0;
  XDCOBJ::vLock(&v20, a1);
  if ( !v20 )
    return v8;
  v11 = (BYTE2(a6) << 8) | BYTE2(a6);
  if ( ((BYTE2(a6) ^ (unsigned __int8)(4 * BYTE2(a6))) & 0xCC) == 0 )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v23, (struct XDCOBJ *)&v20, 0x204u);
    v8 = 1;
    v12 = *(_DWORD *)(v23 + 32);
    if ( (*(_BYTE *)(v23 + 32) & 1) != 0 )
    {
      v34 = a3;
      v13 = a4 + a2;
      v14 = a2;
      v33 = a2;
      v35 = a4 + a2;
      v36 = a5 + a3;
      if ( (v12 & 0x43) != 0x43 )
      {
        bCvtPts1(v23, &v33, 2LL);
        v13 = v35;
        v14 = v33;
      }
      if ( v24 )
      {
        v33 = v14 + 1;
        v35 = v13 + 1;
      }
      ERECTL::vOrder((ERECTL *)&v33);
      if ( v33 == v35 || v34 == v36 )
        goto LABEL_21;
      if ( (*((_DWORD *)v20 + 9) & 0xE0) != 0 )
        XDCOBJ::vAccumulate((XDCOBJ *)&v20, (struct ERECTL *)&v33);
      if ( ((gajRop3[BYTE2(a6)] | gajRop3[(unsigned __int64)((BYTE2(a6) << 8) | (unsigned int)BYTE2(a6)) >> 8]) & 0xB2) != 0 )
        bSpDwmValidateSurface((struct XDCOBJ *)&v20, a2, a3, a4, a5);
      v29 = 0LL;
      v25 = 0LL;
      v26 = 0LL;
      v27 = 0;
      v28 = 0LL;
      v32 = 0LL;
      v31 = 0LL;
      v30 = 0LL;
      if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v25, (struct XDCOBJ *)&v20, 0) )
      {
        v15 = v20;
        v16 = (struct SURFACE *)*((_QWORD *)v20 + 64);
        if ( !v16 )
        {
LABEL_20:
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v25);
          goto LABEL_21;
        }
        v17 = *((_QWORD *)v20 + 10);
        if ( (*(_DWORD *)(v17 + 8) & 0x1000) != 0 )
        {
          GreDCSelectBrush(v20, *(_QWORD *)(v17 + 16));
          v15 = v20;
        }
        locked = GrePatBltLockedDC(
                   (struct XDCOBJ *)&v20,
                   (struct EXFORMOBJ *)*(unsigned int *)(*((_QWORD *)v15 + 10) + 44LL),
                   (struct ERECTL *)&v33,
                   v11,
                   v16,
                   *(_DWORD *)(*((_QWORD *)v15 + 10) + 40LL),
                   *(_DWORD *)(*((_QWORD *)v15 + 10) + 32LL),
                   *(_DWORD *)(*((_QWORD *)v15 + 10) + 44LL),
                   *(_DWORD *)(*((_QWORD *)v15 + 10) + 36LL));
      }
      else
      {
        locked = XDCOBJ::bFullScreen((XDCOBJ *)&v20);
      }
      v8 = locked;
      goto LABEL_20;
    }
    v8 = GreMaskBlt(a1, a5, 0LL, 0, 0, 0LL, 0, 0, v11 << 16, 0);
  }
LABEL_21:
  if ( v20 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v20);
    _InterlockedDecrement((volatile signed __int32 *)v20 + 3);
  }
  return v8;
}
