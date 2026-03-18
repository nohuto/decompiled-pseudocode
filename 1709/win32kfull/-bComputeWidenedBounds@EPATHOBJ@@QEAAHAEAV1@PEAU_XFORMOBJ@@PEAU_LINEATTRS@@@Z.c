/*
 * XREFs of ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00E9480
 * Callers:
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00E9730 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     NtGdiFrameRgn @ 0x1C012A6A0 (NtGdiFrameRgn.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C01369A4 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     EngStrokeAndFillPath @ 0x1C02681D0 (EngStrokeAndFillPath.c)
 *     NtGdiWidenPath @ 0x1C0289680 (NtGdiWidenPath.c)
 * Callees:
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
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
  __int64 v13; // rax
  int v14; // edi
  int v15; // eax
  int v16; // edx
  __int64 v17; // rcx
  int v18; // r8d
  __int64 v19; // rax
  int v20; // ebx
  bool v21; // zf
  int *v22; // rax
  _DWORD *v23; // r8
  __int64 v24; // r10
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rsi
  __int64 v28; // r11
  int v29; // r10d
  __int64 v30; // r9
  int v31; // edx
  __int64 result; // rax
  int v33; // esi
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // esi
  __int64 v37; // rdx
  int v38; // [rsp+20h] [rbp-20h] BYREF
  int v39; // [rsp+28h] [rbp-18h] BYREF
  int v40; // [rsp+2Ch] [rbp-14h]
  int v41; // [rsp+30h] [rbp-10h]
  int v42; // [rsp+34h] [rbp-Ch]
  int v43; // [rsp+88h] [rbp+48h] BYREF

  bFToL(this, &v43, 6LL);
  v39 = v43;
  v40 = v43;
  v41 = v43;
  v42 = -v43;
  if ( !EXFORMOBJ::bXform((EXFORMOBJ *)a3, (struct _VECTORL *)&v39, (struct _VECTORFX *)&v39, (unsigned int)(v8 - 4)) )
    return 0LL;
  v9 = v39;
  v10 = v39;
  if ( v39 < 0 )
    v10 = -v39;
  v11 = v41;
  v12 = v41;
  if ( v41 < 0 )
    v12 = -v41;
  if ( v10 > v12 )
  {
    if ( v39 < 0 )
      v9 = -v39;
  }
  else
  {
    if ( v41 < 0 )
      v11 = -v41;
    v9 = v11;
  }
  v13 = (__int64)v9 >> 1;
  v14 = v13 + 16;
  if ( (unsigned __int64)(v13 + 2147483664LL) > 0xFFFFFFFF )
    return 0LL;
  v15 = v40;
  v16 = v40;
  v43 = v14;
  if ( v40 < 0 )
    v16 = -v40;
  v17 = (unsigned int)v42;
  v18 = v42;
  if ( v42 < 0 )
    v18 = -v42;
  if ( v16 > v18 )
  {
    if ( v40 < 0 )
      v15 = -v40;
  }
  else
  {
    if ( v42 < 0 )
      v17 = (unsigned int)-v42;
    v15 = v17;
  }
  v19 = (__int64)v15 >> 1;
  v20 = v19 + 16;
  if ( (unsigned __int64)(v19 + 2147483664LL) > 0xFFFFFFFF )
    return 0LL;
  v21 = a4->iEndCap == 1;
  v38 = v19 + 16;
  if ( v21 )
  {
    v17 = v14 + ((__int64)v14 >> 1);
    if ( (unsigned __int64)(v17 + 0x80000000LL) > 0xFFFFFFFF )
      return 0LL;
    v14 += v14 >> 1;
    v43 = v17;
    v37 = v20 + ((__int64)v20 >> 1);
    if ( (unsigned __int64)(v37 + 0x80000000LL) > 0xFFFFFFFF )
      return 0LL;
    v38 = v20 + (v20 >> 1);
    v20 = v38;
    if ( (unsigned int)(v17 + 0x3FFFFFFF) > 0x7FFFFFFD || (unsigned int)(v37 + 0x3FFFFFFF) > 0x7FFFFFFD )
      return 0LL;
  }
  if ( a4->iJoin == 2 )
  {
    v33 = v14;
    if ( !(unsigned int)bFToL(v17, &v43, 6LL) )
      return 0LL;
    v14 = v43;
    if ( v43 < v33 )
      return 0LL;
    v36 = v20;
    if ( !(unsigned int)bFToL(v34, &v38, v35) )
      return 0LL;
    v20 = v38;
    if ( v38 < v36 || (unsigned int)(v14 + 0x3FFFFFFF) > 0x7FFFFFFD || (unsigned int)(v38 + 0x3FFFFFFF) > 0x7FFFFFFD )
      return 0LL;
  }
  v22 = (int *)*((_QWORD *)a2 + 1);
  v23 = (_DWORD *)*((_QWORD *)this + 1);
  v24 = v22[12];
  v25 = v22[14];
  v26 = v22[13];
  v27 = v22[15];
  if ( (unsigned int)(v24 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  if ( (unsigned int)(v25 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  if ( (unsigned int)(v26 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  if ( (unsigned int)(v27 + 0x3FFFFFFF) > 0x7FFFFFFD )
    return 0LL;
  v28 = v24 - v14;
  if ( (unsigned __int64)(v28 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  v29 = v14 + v25;
  if ( (unsigned __int64)(v14 + v25 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  v30 = v26 - v20;
  if ( (unsigned __int64)(v30 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  v31 = v20 + v27;
  if ( (unsigned __int64)(v20 + v27 + 0x80000000LL) > 0xFFFFFFFF
    || (unsigned int)(v28 + 0x3FFFFFFF) > 0x7FFFFFFD
    || (unsigned int)(v29 + 0x3FFFFFFF) > 0x7FFFFFFD
    || (unsigned int)(v30 + 0x3FFFFFFF) > 0x7FFFFFFD
    || (unsigned int)(v31 + 0x3FFFFFFF) > 0x7FFFFFFD )
  {
    return 0LL;
  }
  v23[12] = v28;
  result = 1LL;
  v23[14] = v29;
  v23[13] = v30;
  v23[15] = v31;
  return result;
}
