/*
 * XREFs of NtGdiPatBlt @ 0x1C001D870
 * Callers:
 *     GreStretchDIBitsInternal @ 0x1C0019D78 (GreStretchDIBitsInternal.c)
 *     GreStretchBltInternal @ 0x1C001AF30 (GreStretchBltInternal.c)
 *     xxxDrawCaptionBar @ 0x1C007B6D0 (xxxDrawCaptionBar.c)
 *     xxxPaintMenuBar @ 0x1C0080FE0 (xxxPaintMenuBar.c)
 *     DrawThumb2 @ 0x1C0082658 (DrawThumb2.c)
 *     EraseBitmap @ 0x1C01210BC (EraseBitmap.c)
 *     xxxSoundSentry @ 0x1C012362C (xxxSoundSentry.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C020F94C (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     ?MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@PEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0215EBC (-MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@PEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     ?xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C02160B4 (-xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     MNEraseBackground @ 0x1C0216AA0 (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C0216BF0 (xxxMNDrawFullNC.c)
 *     xxxDrawState @ 0x1C021AAB8 (xxxDrawState.c)
 *     DxgkEngColorFillViaGDI @ 0x1C02522C0 (DxgkEngColorFillViaGDI.c)
 * Callees:
 *     bCvtPts1 @ 0x1C000F444 (bCvtPts1.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C001E104 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002C0E0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C1B4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C002D4A0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreMaskBlt @ 0x1C01023EC (GreMaskBlt.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiPatBlt(HDC a1, int a2, int a3, int a4, int a5, int a6)
{
  unsigned int v8; // ebx
  unsigned int v11; // edi
  int v12; // r8d
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // r9d
  __int64 *v17; // rcx
  struct SURFACE *v18; // rsi
  __int64 v19; // rdx
  unsigned int locked; // eax
  __int64 v21; // rdi
  int v23; // eax
  int v24; // eax
  __int64 *v25; // [rsp+70h] [rbp-90h] BYREF
  int v26; // [rsp+78h] [rbp-88h]
  unsigned int v27; // [rsp+7Ch] [rbp-84h]
  int v28; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v29; // [rsp+88h] [rbp-78h] BYREF
  int v30; // [rsp+94h] [rbp-6Ch]
  __int128 v31; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v32; // [rsp+B0h] [rbp-50h]
  int v33; // [rsp+B8h] [rbp-48h]
  __int64 v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  __int64 v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  __int64 v38; // [rsp+E0h] [rbp-20h]
  int v39; // [rsp+F0h] [rbp-10h] BYREF
  int v40; // [rsp+F4h] [rbp-Ch]
  int v41; // [rsp+F8h] [rbp-8h]
  int v42; // [rsp+FCh] [rbp-4h]

  v8 = 0;
  v26 = 0;
  v27 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v25, a1);
  if ( !v25 )
    return v8;
  v11 = (BYTE2(a6) << 8) | BYTE2(a6);
  if ( ((BYTE2(a6) ^ (unsigned __int8)(4 * BYTE2(a6))) & 0xCC) == 0 )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v29, (struct XDCOBJ *)&v25, 516);
    v8 = 1;
    v12 = a3;
    v13 = *(_DWORD *)(v29 + 32);
    if ( (v13 & 1) == 0 )
    {
      v8 = GreMaskBlt(a1, a5, 0LL, 0, 0, 0LL, 0, 0, v11 << 16, 0);
      goto LABEL_25;
    }
    v40 = a3;
    v14 = a4 + a2;
    v15 = a2;
    v39 = a2;
    v16 = a3 + a5;
    v41 = a4 + a2;
    v42 = a3 + a5;
    if ( (v13 & 0x43) != 0x43 )
    {
      bCvtPts1(v29, &v39, 2LL);
      v16 = v42;
      v14 = v41;
      v12 = v40;
      v15 = v39;
    }
    if ( v30 )
    {
      ++v15;
      ++v14;
      v39 = v15;
      v41 = v14;
    }
    if ( v15 > v14 )
    {
      v23 = v15;
      v39 = v14;
      v15 = v14;
      v41 = v23;
      v14 = v23;
    }
    if ( v12 > v16 )
    {
      v24 = v12;
      v40 = v16;
      v12 = v16;
      v42 = v24;
      v16 = v24;
    }
    if ( v15 == v14 || v12 == v16 )
      goto LABEL_25;
    if ( (*((_DWORD *)v25 + 9) & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)&v25, (struct ERECTL *)&v39);
    if ( ((gajRop3[BYTE2(a6)] | gajRop3[(unsigned __int64)((BYTE2(a6) << 8) | (unsigned int)BYTE2(a6)) >> 8]) & 0xB2) != 0 )
      bSpDwmValidateSurface((struct XDCOBJ *)&v25, a2, a3, a4, a5);
    v35 = 0LL;
    v31 = 0LL;
    v32 = 0LL;
    v33 = 0;
    v34 = 0LL;
    v38 = 0LL;
    v37 = 0LL;
    v36 = 0LL;
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v31, (struct XDCOBJ *)&v25, 0) )
    {
      v17 = v25;
      v18 = (struct SURFACE *)v25[64];
      if ( !v18 )
      {
LABEL_24:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v31);
        goto LABEL_25;
      }
      v19 = v25[10];
      if ( (*(_DWORD *)(v19 + 8) & 0x1000) != 0 )
      {
        GreDCSelectBrush(v25, *(_QWORD *)(v19 + 16));
        v17 = v25;
      }
      locked = GrePatBltLockedDC(
                 (struct XDCOBJ *)&v25,
                 (struct EXFORMOBJ *)*(unsigned int *)(v17[10] + 44),
                 (struct ERECTL *)&v39,
                 v11,
                 v18,
                 *(_DWORD *)(v17[10] + 40),
                 *(_DWORD *)(v17[10] + 32),
                 *(_DWORD *)(v17[10] + 44),
                 *(_DWORD *)(v17[10] + 36));
    }
    else
    {
      locked = XDCOBJ::bFullScreen((XDCOBJ *)&v25);
    }
    v8 = locked;
    goto LABEL_24;
  }
LABEL_25:
  if ( v25 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v25);
    v28 = 0;
    v21 = *v25;
    HmgDecrementExclusiveReferenceCountEx(v25, v27, &v28);
    if ( v28 )
      bDeleteDCInternalEx(v21, 0LL);
  }
  return v8;
}
