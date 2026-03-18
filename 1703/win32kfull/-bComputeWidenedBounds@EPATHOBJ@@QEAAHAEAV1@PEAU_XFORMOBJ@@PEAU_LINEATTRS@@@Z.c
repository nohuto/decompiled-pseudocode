/*
 * XREFs of ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C012393C
 * Callers:
 *     NtGdiFrameRgn @ 0x1C011E410 (NtGdiFrameRgn.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0123DBC (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C01258A4 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     EngStrokeAndFillPath @ 0x1C0269470 (EngStrokeAndFillPath.c)
 *     NtGdiWidenPath @ 0x1C028CB30 (NtGdiWidenPath.c)
 * Callees:
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 */

__int64 __fastcall EPATHOBJ::bComputeWidenedBounds(
        EPATHOBJ *this,
        struct EPATHOBJ *a2,
        struct _XFORMOBJ *a3,
        struct _LINEATTRS *a4)
{
  int v8; // r8d
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // rdi
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  __int64 v18; // rbx
  bool v19; // zf
  int *v20; // rax
  _DWORD *v21; // r8
  __int64 v22; // r10
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // rsi
  __int64 v26; // r11
  int v27; // r10d
  __int64 v28; // r9
  int v29; // edx
  __int64 result; // rax
  float eMiterLimit; // xmm1_4
  int v32; // esi
  char v33; // r8
  int v34; // esi
  __int64 v35; // rcx
  __int64 v36; // rdx
  int v37; // [rsp+20h] [rbp-20h] BYREF
  int v38; // [rsp+28h] [rbp-18h] BYREF
  int v39; // [rsp+2Ch] [rbp-14h]
  int v40; // [rsp+30h] [rbp-10h]
  int v41; // [rsp+34h] [rbp-Ch]
  int v42; // [rsp+88h] [rbp+48h] BYREF

  bFToL(a4->elWidth.e, &v42, 6);
  v38 = v42;
  v39 = v42;
  v40 = v42;
  v41 = -v42;
  if ( !EXFORMOBJ::bXform((EXFORMOBJ *)a3, (struct _VECTORL *)&v38, (struct _VECTORFX *)&v38, (unsigned int)(v8 - 4)) )
    return 0LL;
  v9 = v38;
  v10 = v38;
  if ( v38 < 0 )
    v10 = -v38;
  v11 = v40;
  v12 = v40;
  if ( v40 < 0 )
    v12 = -v40;
  if ( v10 > v12 )
  {
    if ( v38 < 0 )
      v9 = -v38;
  }
  else
  {
    if ( v40 < 0 )
      v11 = -v40;
    v9 = v11;
  }
  v13 = ((__int64)v9 >> 1) + 16;
  if ( (unsigned __int64)(((__int64)v9 >> 1) + 2147483664LL) > 0xFFFFFFFF )
    return 0LL;
  v14 = v39;
  v15 = v39;
  v42 = v13;
  if ( v39 < 0 )
    v15 = -v39;
  v16 = v41;
  v17 = v41;
  if ( v41 < 0 )
    v17 = -v41;
  if ( v15 > v17 )
  {
    if ( v39 < 0 )
      v14 = -v39;
  }
  else
  {
    if ( v41 < 0 )
      v16 = -v41;
    v14 = v16;
  }
  v18 = ((__int64)v14 >> 1) + 16;
  if ( (unsigned __int64)(((__int64)v14 >> 1) + 2147483664LL) > 0xFFFFFFFF )
    return 0LL;
  v19 = a4->iEndCap == 1;
  v37 = (v14 >> 1) + 16;
  if ( v19 )
  {
    v35 = (int)v13 + ((__int64)(int)v13 >> 1);
    if ( (unsigned __int64)(v35 + 0x80000000LL) > 0xFFFFFFFF )
      return 0LL;
    LODWORD(v13) = v13 + ((int)v13 >> 1);
    v42 = v35;
    v36 = (int)v18 + ((__int64)(int)v18 >> 1);
    if ( (unsigned __int64)(v36 + 0x80000000LL) > 0xFFFFFFFF )
      return 0LL;
    v37 = v18 + ((int)v18 >> 1);
    LODWORD(v18) = v37;
    if ( (unsigned int)(v35 + 0x3FFFFFFF) > 0x7FFFFFFD || (unsigned int)(v36 + 0x3FFFFFFF) > 0x7FFFFFFD )
      return 0LL;
  }
  if ( a4->iJoin == 2 )
  {
    eMiterLimit = a4->eMiterLimit;
    v32 = v13;
    if ( !(unsigned int)bFToL((float)(int)v13 * eMiterLimit, &v42, 6) )
      return 0LL;
    LODWORD(v13) = v42;
    if ( v42 < v32 )
      return 0LL;
    v34 = v18;
    if ( !(unsigned int)bFToL((float)(int)v18 * eMiterLimit, &v37, v33) )
      return 0LL;
    LODWORD(v18) = v37;
    if ( v37 < v34 || (unsigned int)(v13 + 0x3FFFFFFF) > 0x7FFFFFFD || (unsigned int)(v37 + 0x3FFFFFFF) > 0x7FFFFFFD )
      return 0LL;
  }
  v20 = (int *)*((_QWORD *)a2 + 1);
  v21 = (_DWORD *)*((_QWORD *)this + 1);
  v22 = v20[12];
  v23 = v20[14];
  v24 = v20[13];
  v25 = v20[15];
  if ( (unsigned int)(v22 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  if ( (unsigned int)(v23 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  if ( (unsigned int)(v24 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  if ( (unsigned int)(v25 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  v26 = v22 - (int)v13;
  if ( (unsigned __int64)(v26 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  v27 = v13 + v23;
  if ( (unsigned __int64)((int)v13 + v23 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  v28 = v24 - (int)v18;
  if ( (unsigned __int64)(v28 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  v29 = v18 + v25;
  if ( (unsigned __int64)((int)v18 + v25 + 0x80000000LL) > 0xFFFFFFFF
    || (unsigned int)(v26 + 0x3FFFFFFF) > 0x7FFFFFFD
    || (unsigned int)(v27 + 0x3FFFFFFF) > 0x7FFFFFFD
    || (unsigned int)(v28 + 0x3FFFFFFF) > 0x7FFFFFFD
    || (unsigned int)(v29 + 0x3FFFFFFF) > 0x7FFFFFFD )
  {
    return 0LL;
  }
  v21[12] = v26;
  result = 1LL;
  v21[14] = v27;
  v21[13] = v28;
  v21[15] = v29;
  return result;
}
