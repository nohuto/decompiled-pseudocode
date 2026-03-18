/*
 * XREFs of ?GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_N_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22@Z @ 0x180215B00
 * Callers:
 *     <none>
 * Callees:
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800A35A0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A3CB8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x1800A3D90 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z @ 0x18013D884 (-CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z.c)
 *     ?CalcRotationTransform@CBitmapRealization@@QEBA_NMMPEAVCMILMatrix@@@Z @ 0x18013D934 (-CalcRotationTransform@CBitmapRealization@@QEBA_NMMPEAVCMILMatrix@@@Z.c)
 *     ?GetSourceRect@CBitmapRealization@@QEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013D9D0 (-GetSourceRect@CBitmapRealization@@QEBA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 */

char __fastcall CDxHandleYUVBitmapRealization::GetTransformAndYUVRects(
        __int64 a1,
        char a2,
        __int64 a3,
        float *a4,
        __int64 a5,
        float *a6)
{
  CBitmapRealization *v7; // rdi
  _BYTE v9[64]; // [rsp+20h] [rbp-39h] BYREF
  int v10; // [rsp+60h] [rbp+7h]
  __int128 v11; // [rsp+70h] [rbp+17h] BYREF

  *a4 = (float)*(int *)(a1 - 192);
  a4[1] = (float)*(int *)(a1 - 188);
  a4[2] = (float)*(int *)(a1 - 184);
  a4[3] = (float)*(int *)(a1 - 180);
  *(_DWORD *)a5 = 0;
  *(_DWORD *)(a5 + 4) = 0;
  *(float *)(a5 + 8) = (float)*(int *)(a1 - 148);
  *(float *)(a5 + 12) = (float)*(int *)(a1 - 144);
  *a6 = (float)*(int *)(a1 - 140);
  a6[1] = (float)*(int *)(a1 - 136);
  a6[2] = (float)*(int *)(a1 - 132);
  a6[3] = (float)*(int *)(a1 - 128);
  if ( !a2 )
    return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(a1 - 248) + 40LL))(a1 - 248, a3, 0LL);
  v10 = 0;
  v7 = (CBitmapRealization *)(a1 - 392);
  v11 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *(_WORD *)(a3 + 64) = 32085;
  *(_OWORD *)a3 = _xmm;
  *(_OWORD *)(a3 + 16) = _xmm;
  *(_OWORD *)(a3 + 32) = _xmm;
  *(_OWORD *)(a3 + 48) = _xmm;
  if ( CBitmapRealization::GetSourceRect(a1 - 392, (__int64)&v11) )
    CMILMatrix::Translate((CMILMatrix *)a3, COERCE_FLOAT(v11 ^ _xmm), COERCE_FLOAT(DWORD1(v11) ^ _xmm));
  if ( CBitmapRealization::CalcRotationTransform(
         v7,
         *((float *)&v11 + 2) - *(float *)&v11,
         *((float *)&v11 + 3) - *((float *)&v11 + 1),
         (struct CMILMatrix *)v9) )
  {
    CMILMatrix::Multiply((CMILMatrix *)a3, (const struct CMILMatrix *)v9);
  }
  if ( CBitmapRealization::CalcImageTransform(v7, (struct CMILMatrix *)v9) )
    CMILMatrix::Multiply((CMILMatrix *)a3, (const struct CMILMatrix *)v9);
  return CMILMatrix::IsIdentity<0>(a3) == 0;
}
