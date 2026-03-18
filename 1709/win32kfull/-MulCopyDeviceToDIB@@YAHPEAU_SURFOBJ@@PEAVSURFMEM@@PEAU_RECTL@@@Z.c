/*
 * XREFs of ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C027DA88
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C00149D8 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C026ADBC (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C027CAE0 (-MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C027F6E0 (-MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C02808E0 (-MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C027D130 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 */

__int64 __fastcall MulCopyDeviceToDIB(struct _SURFOBJ *a1, struct SURFMEM *a2, struct _RECTL *a3)
{
  __int64 v6; // rax
  __int64 v7; // r10
  __int64 v8; // rcx
  LONG x; // r9d
  LONG y; // r15d
  LONG v11; // r8d
  LONG v12; // edx
  int v13; // ecx
  LONG v14; // r14d
  LONG v15; // r8d
  LONG v16; // eax
  LONG v17; // ecx
  unsigned int v18; // ebx
  __int64 *v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // esi
  struct _POINTL v23[2]; // [rsp+60h] [rbp-29h] BYREF
  _QWORD v24[4]; // [rsp+70h] [rbp-19h] BYREF
  struct _RECTL v25; // [rsp+90h] [rbp+7h] BYREF

  memset(v24, 0, sizeof(v24));
  v6 = SURFOBJ_TO_SURFACE(a1);
  v7 = v6;
  v8 = *(_QWORD *)(v6 + 48);
  *(struct _RECTL *)&v23[0].x = *a3;
  x = v23[1].x;
  y = v23[0].y;
  v11 = *(_DWORD *)(v8 + 2600);
  v12 = *(_DWORD *)(v8 + 2604);
  v13 = *(_DWORD *)(v6 + 60);
  v14 = _mm_cvtsi128_si32(*(__m128i *)&v23[0].x);
  if ( v14 < v11 )
    v14 = v11;
  v15 = *(_DWORD *)(v6 + 56) + v11;
  v16 = v23[1].y;
  if ( v23[1].x > v15 )
    x = v15;
  if ( v23[0].y < v12 )
    y = v12;
  v17 = v12 + v13;
  if ( v23[1].y > v17 )
    v16 = v17;
  if ( y >= v16 || v14 >= x )
    return 1;
  v23[0].x = v14;
  v25.right = x - v14;
  v18 = 0;
  v25.bottom = v16 - y;
  *(_QWORD *)&v25.left = 0LL;
  v19 = *(__int64 **)(v7 + 128);
  v23[0].y = y;
  HIDWORD(v24[0]) = x - v14;
  LODWORD(v24[1]) = v16 - y;
  if ( v19 )
    v20 = *v19;
  else
    v20 = 0LL;
  v21 = 1;
  v24[2] = v20;
  LODWORD(v24[0]) = *(_DWORD *)(v7 + 96);
  LODWORD(v24[3]) = *(_DWORD *)(v7 + 112) & 0x40000;
  SURFMEM::bCreateDIB(a2, (struct _DEVBITMAPINFO *)v24, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( !*(_QWORD *)a2
    || !MulBitBlt((struct _SURFOBJ *)(*(_QWORD *)a2 + 24LL), a1, 0LL, 0LL, xloIdent, &v25, v23, 0LL, 0LL, 0LL, 0xCCCCu) )
  {
    return v18;
  }
  a3->left -= v14;
  a3->right -= v14;
  a3->top -= y;
  a3->bottom -= y;
  return v21;
}
