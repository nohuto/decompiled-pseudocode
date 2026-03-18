/*
 * XREFs of ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1C003260C
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0033BA4 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 * Callees:
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C0031EA0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0038A38 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall RFONTOBJ::bInitCache(RFONTOBJ *this, int a2)
{
  __int64 v2; // r8
  unsigned int v4; // edi
  __int64 v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // rax
  unsigned int v9; // esi
  struct _FONTOBJ *v10; // r8
  bool v11; // zf
  struct DHPDEV__ *v12; // rdx
  unsigned __int16 v14; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v15; // [rsp+48h] [rbp-70h] BYREF
  __int64 v16; // [rsp+50h] [rbp-68h] BYREF
  struct _GLYPHDATA v17; // [rsp+60h] [rbp-58h] BYREF

  v2 = *(_QWORD *)this + 536LL;
  v4 = 1;
  *(_QWORD *)(v2 + 24) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_QWORD *)(v2 + 44) = 0LL;
  *(_DWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 72) = 0LL;
  *(_QWORD *)(v2 + 64) = 0LL;
  *(_QWORD *)(v2 + 88) = 0LL;
  *(_QWORD *)(v2 + 80) = 0LL;
  *(_QWORD *)(v2 + 52) = 0LL;
  *(_QWORD *)(v2 + 96) = 0LL;
  *(_QWORD *)(v2 + 104) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 480LL) = 0LL;
  *(_DWORD *)(v2 + 112) = 0;
  v5 = *(_QWORD *)this;
  v6 = *(_DWORD *)(v5 + 72);
  if ( v6 > 1 )
  {
    if ( v6 == 2 )
      *(_DWORD *)(v2 + 112) = 0x8000;
  }
  else
  {
    *(_DWORD *)(v2 + 112) = *(_DWORD *)(v5 + 352);
  }
  v7 = 2 * *(_DWORD *)(v2 + 112);
  *(_DWORD *)(*(_QWORD *)this + 68LL) = a2;
  v8 = *(_QWORD *)this;
  if ( v7 > 0x10000 && *(_DWORD *)(v8 + 72) )
    *(_DWORD *)(v8 + 68) |= 1u;
  v14 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 32LL) + 118LL);
  RFONTOBJ::vXlatGlyphArray(this, &v14, 1, &v15, 2u, 0);
  v9 = v15;
  *(_DWORD *)(*(_QWORD *)this + 720LL) &= ~0x40u;
  v10 = *(struct _FONTOBJ **)this;
  v11 = *(_DWORD *)(*(_QWORD *)this + 72LL) == 2;
  v12 = *(struct DHPDEV__ **)(*(_QWORD *)this + 104LL);
  v16 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  if ( (unsigned int)PFFOBJ::QueryFontData((PFFOBJ *)&v16, v12, v10, (unsigned int)v11 + 1, v9, &v17, 0LL, 0) == -1 )
    return 0;
  *(_DWORD *)(*(_QWORD *)this + 464LL) = v17.fxD;
  *(_DWORD *)(*(_QWORD *)this + 460LL) = v9;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 12LL) & 8) != 0 )
  {
    *(_QWORD *)(*(_QWORD *)this + 856LL) = 0LL;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)this + 856LL) = GreCreateSemaphore();
    if ( !*(_QWORD *)(*(_QWORD *)this + 856LL) )
      return 0;
  }
  *(_QWORD *)(*(_QWORD *)this + 528LL) = GreCreateSemaphore();
  if ( !*(_QWORD *)(*(_QWORD *)this + 528LL) )
  {
    if ( *(_QWORD *)(*(_QWORD *)this + 856LL) )
    {
      GreDeleteSemaphore();
      *(_QWORD *)(*(_QWORD *)this + 856LL) = 0LL;
    }
    return 0;
  }
  return v4;
}
