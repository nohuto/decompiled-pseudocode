/*
 * XREFs of GreAngleArc @ 0x1C027AD98
 * Callers:
 *     NtGdiAngleArc @ 0x1C0289930 (NtGdiAngleArc.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0018340 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C00B348C (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C00E9190 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00E9730 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEAA?AU_POINTFIX@@XZ @ 0x1C012C3C4 (-ptfxGetCurrent@EPATHOBJ@@QEAA-AU_POINTFIX@@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?lGetQuadrant@@YAJAEAVEPOINTFL@@@Z @ 0x1C027AD40 (-lGetQuadrant@@YAJAEAVEPOINTFL@@@Z.c)
 *     ??0EBOX@@QEAA@AEAVEXFORMOBJ@@AEAU_RECTL@@@Z @ 0x1C028B8B4 (--0EBOX@@QEAA@AEAVEXFORMOBJ@@AEAU_RECTL@@@Z.c)
 *     ?bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z @ 0x1C028BB3C (-bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z.c)
 *     ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1C028C104 (-vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z.c)
 *     ?vCosSin@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C028C28C (-vCosSin@@YAXVEFLOAT@@PEAV1@1@Z.c)
 *     ?vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C028C408 (-vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z.c)
 */

__int64 __fastcall GreAngleArc(HDC a1, int a2, int a3, int a4, unsigned int a5, float a6)
{
  POINTL *v9; // rcx
  POINTL v10; // rdx
  int v11; // r14d
  unsigned int v12; // ebx
  float v13; // xmm7_4
  __m128i v14; // xmm6
  LONG top; // ecx
  unsigned int v16; // r13d
  char v17; // di
  __m128i v18; // xmm0
  int v19; // r12d
  BOOL IsZero; // ecx
  float v21; // esi
  float v22; // eax
  char v23; // r14
  int v24; // r14d
  int v25; // esi
  int v26; // edi
  int v27; // r15d
  _QWORD *Current; // rax
  __int64 v29; // r8
  ULONG v30; // ecx
  float v32; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v33; // [rsp+5Ch] [rbp-ACh] BYREF
  float v34; // [rsp+60h] [rbp-A8h] BYREF
  struct _RECTL v35; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v36; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v37; // [rsp+7Ch] [rbp-8Ch] BYREF
  POINTL *v38[2]; // [rsp+80h] [rbp-88h] BYREF
  struct _XFORMOBJ v39; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v40[80]; // [rsp+A8h] [rbp-60h] BYREF
  PATHOBJ v41[11]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v42[32]; // [rsp+150h] [rbp+48h] BYREF
  int v43; // [rsp+170h] [rbp+68h]

  DCOBJ::DCOBJ((DCOBJ *)v38, a1);
  v9 = v38[0];
  if ( !v38[0] || (v38[0][4].y & 0x10000) != 0 )
  {
    v30 = 6;
    goto LABEL_41;
  }
  v10 = v38[0][10];
  v11 = *(_DWORD *)(*(_QWORD *)&v10 + 8LL);
  if ( (v11 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v38[0], *(_QWORD *)(*(_QWORD *)&v10 + 16LL));
    v9 = v38[0];
  }
  if ( (v11 & 0x2000) != 0 )
    GreDCSelectPen(v9, *(_QWORD *)(*(_QWORD *)&v9[10] + 24LL));
  v35.right = a2 + a4;
  v35.left = a2 - a4;
  v35.top = a3 - a4;
  v35.bottom = a4 + a3;
  if ( a4 < 0 || a2 - a4 > a2 || a2 + a4 < a2 || a3 - a4 > a3 || a4 + a3 < a3 )
  {
    v30 = 87;
LABEL_41:
    EngSetLastError(v30);
    v12 = 0;
    goto LABEL_42;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v39, (struct XDCOBJ *)v38, 516);
  v12 = 1;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v41, (DC **)v38, 1);
  if ( !*(_QWORD *)&v41[1] )
    goto LABEL_36;
  ERECTL::vOrder((ERECTL *)&v35);
  v13 = a6;
  v14 = (__m128i)a5;
  v33 = a5;
  if ( a6 < 0.0 )
  {
    top = v35.top;
    v14 = (__m128i)_mm_xor_ps((__m128)a5, (__m128)_xmm);
    LODWORD(v13) = LODWORD(a6) ^ _xmm;
    v33 = v14.m128i_i32[0];
    v35.top = v35.bottom;
    v35.bottom = top;
  }
  EBOX::EBOX((EBOX *)v40, (struct EXFORMOBJ *)&v39, &v35);
  v16 = 2;
  bFToL(v13 * FP_1DIV90, (int *)&v32, 5);
  v17 = LOBYTE(v32);
  v18 = v14;
  *(float *)v18.m128i_i32 = *(float *)v14.m128i_i32 + v13;
  v19 = SLODWORD(v32) >> 2;
  if ( SLODWORD(v32) >> 2 > 8 )
    v19 = 8;
  v34 = *(float *)v14.m128i_i32 + v13;
  v32 = *(float *)v18.m128i_i32 - *(float *)v14.m128i_i32;
  IsZero = EFLOAT::bIsZero((EFLOAT *)&v32);
  if ( (float)((float)(*(float *)v18.m128i_i32 - *(float *)v14.m128i_i32) - FP_3_0) >= 0.0 || IsZero )
  {
    vCosSin((unsigned int)_mm_cvtsi128_si32(v14), &v35, &v35.top);
    vCosSin((unsigned int)_mm_cvtsi128_si32(v18), &v36, &v37);
  }
  else
  {
    vCosSinPrecise((unsigned int)_mm_cvtsi128_si32(v14), &v35, &v35.top);
    vCosSinPrecise((unsigned int)_mm_cvtsi128_si32(v18), &v36, &v37);
  }
  LODWORD(v21) = lGetQuadrant((struct EPOINTFL *)&v35);
  v32 = v21;
  if ( *(float *)v14.m128i_i32 > FP_3600_0 || FP_M3600_0 > *(float *)v14.m128i_i32 )
  {
    vArctan((unsigned int)v35.left, (unsigned int)v35.top, &v33, &v32);
    v14.m128i_i32[0] = v33;
    v21 = v32;
  }
  LODWORD(v22) = lGetQuadrant((struct EPOINTFL *)&v36);
  v23 = LOBYTE(v22);
  v32 = v22;
  if ( *(float *)v18.m128i_i32 > FP_3600_0 || FP_M3600_0 > *(float *)v18.m128i_i32 )
  {
    vArctan(v36, v37, &v34, &v32);
    v23 = LOBYTE(v32);
    v17 = (LOBYTE(v32) - LOBYTE(v21)) & 3;
    if ( ((LODWORD(v32) - LODWORD(v21)) & 3) == 0 && *(float *)v14.m128i_i32 > v34 )
      v17 = 3;
  }
  v24 = v23 & 3;
  v25 = LOBYTE(v21) & 3;
  v26 = v17 & 3;
  v27 = 0;
  if ( v19 > 0 )
  {
    while ( (unsigned int)bPartialArc(v16, v41, v40, &v35, v25, &v33, &v36, v24, &v34, v26)
         && (unsigned int)bPartialArc(0LL, v41, v40, &v36, v24, &v34, &v35, v25, &v33, 3 - v26) )
    {
      v16 = 0;
      if ( ++v27 >= v19 )
        goto LABEL_33;
    }
    goto LABEL_36;
  }
LABEL_33:
  if ( !(unsigned int)bPartialArc(v16, v41, v40, &v35, v25, &v33, &v36, v24, &v34, v26)
    || (*(_DWORD *)(*(_QWORD *)&v38[0][10] + 8LL) |= 0x100u,
        *(_DWORD *)(*(_QWORD *)&v38[0][10] + 8LL) &= ~0x200u,
        Current = (_QWORD *)EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)v41, &v35),
        *(_QWORD *)(v29 + 84) = *Current,
        (v38[0][22].x & 1) == 0)
    && !(unsigned int)EPATHOBJ::bStrokeAndOrFill(v41, v38, (LINEATTRS *)&v38[0][23], &v39, 1u) )
  {
LABEL_36:
    v12 = 0;
  }
  EPATHOBJ::vUnlock((EPATHOBJ *)v41);
  if ( v43 )
  {
    PopThreadGuardedObject(v42);
    v43 = 0;
  }
LABEL_42:
  if ( v38[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v38);
  return v12;
}
