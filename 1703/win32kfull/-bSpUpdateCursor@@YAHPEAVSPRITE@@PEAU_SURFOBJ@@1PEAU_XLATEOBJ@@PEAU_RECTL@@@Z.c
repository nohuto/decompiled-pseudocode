/*
 * XREFs of ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C025BDD0
 * Callers:
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C02582E0 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     EngCopyBits @ 0x1C0075490 (EngCopyBits.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C025B22C (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C0260D10 (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 */

__int64 __fastcall bSpUpdateCursor(
        struct SPRITE *a1,
        SURFOBJ *psoSrc,
        struct _SURFOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5)
{
  RECTL v8; // xmm0
  __int64 *v9; // r12
  unsigned int v10; // edi
  __int64 v11; // rbx
  SURFOBJ *v12; // r14
  LONG cy; // eax
  __int64 v14; // r8
  __int64 v16; // [rsp+68h] [rbp-49h] BYREF
  char v17; // [rsp+70h] [rbp-41h]
  int v18; // [rsp+74h] [rbp-3Dh]
  struct _SURFOBJ *v19; // [rsp+78h] [rbp-39h]
  struct _XLATEOBJ *v20; // [rsp+80h] [rbp-31h]
  _QWORD v21[4]; // [rsp+88h] [rbp-29h] BYREF
  RECTL prclDest; // [rsp+A8h] [rbp-9h] BYREF

  v19 = a3;
  v20 = a4;
  memset(v21, 0, sizeof(v21));
  v8 = *a5;
  v9 = (__int64 *)*((_QWORD *)a1 + 2);
  v10 = 0;
  v16 = 0LL;
  v17 = 0;
  v18 = 0;
  v11 = *v9;
  *((RECTL *)a1 + 6) = v8;
  if ( psoSrc )
  {
    v12 = (SURFOBJ *)*((_QWORD *)a1 + 15);
    if ( !v12 )
      goto LABEL_8;
    if ( v12->sizlBitmap.cx != psoSrc->sizlBitmap.cx || v12->sizlBitmap.cy != psoSrc->sizlBitmap.cy )
    {
      bDeleteSurface(v12->hsurf);
      v12 = 0LL;
    }
    if ( !v12 )
    {
LABEL_8:
      HIDWORD(v21[0]) = psoSrc->sizlBitmap.cx;
      cy = psoSrc->sizlBitmap.cy;
      LODWORD(v21[0]) = 1;
      LODWORD(v21[1]) = cy;
      LODWORD(v21[3]) = 1;
      v21[2] = 0LL;
      if ( SURFMEM::bCreateDIB((SURFMEM *)&v16, (struct _DEVBITMAPINFO *)v21, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
        v12 = 0LL;
        if ( v16 )
          v12 = (SURFOBJ *)(v16 + 24);
        v17 |= 1u;
        LOBYTE(v14) = 5;
        HmgSetOwner(*(_QWORD *)(v16 + 32), 0LL, v14);
      }
    }
    *((_QWORD *)a1 + 15) = v12;
    if ( v12 )
    {
      prclDest = *a5;
      prclDest.bottom = (v12->sizlBitmap.cy >> 1) + _mm_srli_si128(*(__m128i *)&prclDest, 8).m128i_i32[1];
      EngCopyBits(v12, psoSrc, 0LL, 0LL, &prclDest, (POINTL *)&prclDest);
    }
    if ( v19 )
    {
      bSpCreateShape(a1, &gptlZero, v19, v20, a5, *(struct PALETTE **)(v11 + 1824), 0, 0, 0LL);
      LOBYTE(v10) = *((_QWORD *)a1 + 16) != 0LL;
    }
    else
    {
      vSpDeleteShape(a1);
      v10 = 1;
    }
    *((_DWORD *)a1 + 1) = 0x1000000;
    *((_DWORD *)a1 + 39) = *((_DWORD *)v9 + 30);
    *((_DWORD *)a1 + 38) = *((_DWORD *)v9 + 29);
  }
  else
  {
    *((_DWORD *)a1 + 1) = 2;
    *((_DWORD *)a1 + 50) = 33488896;
    bSpCreateShape(a1, &gptlZero, a3, 0LL, a5, gppalRGB, 6u, 1u, 0LL);
    LOBYTE(v10) = *((_QWORD *)a1 + 16) != 0LL;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v16);
  return v10;
}
