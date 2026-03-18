/*
 * XREFs of ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ @ 0x1800B6E04
 * Callers:
 *     ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x1800B6F60 (-AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x1800B707C (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z.c)
 * Callees:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x180047DB0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x1800957B0 (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CCpuClip::ConvertContextDependentClipToLocal(CCpuClip *this)
{
  unsigned int v1; // edi
  const struct CMILMatrix *v3; // rdx
  _QWORD *v4; // rax
  signed int v5; // eax
  struct CShape *v7; // [rsp+30h] [rbp-69h] BYREF
  __int128 v8; // [rsp+38h] [rbp-61h]
  __m256i v9; // [rsp+48h] [rbp-51h]
  __int128 v10; // [rsp+68h] [rbp-31h]
  __int128 v11; // [rsp+80h] [rbp-19h] BYREF
  __m256i v12; // [rsp+90h] [rbp-9h]
  __int128 v13; // [rsp+B0h] [rbp+17h]
  int v14; // [rsp+C0h] [rbp+27h]
  D2D1_MATRIX_3X2_F v15; // [rsp+D0h] [rbp+37h] BYREF

  v1 = 0;
  if ( *(_QWORD *)this )
  {
    v14 = 0;
    v3 = 0LL;
    v4 = (_QWORD *)*((_QWORD *)this + 1);
    if ( v4 )
    {
      *(_QWORD *)&v15.m11 = *v4;
      *(_QWORD *)&v15.m[1][0] = v4[2];
      *(_QWORD *)&v15.m[2][0] = v4[6];
      D2D1::Matrix3x2F::Invert(&v15);
      v3 = (const struct CMILMatrix *)&v11;
      *((_QWORD *)&v10 + 1) = 0x3F80000000000000LL;
      v14 = 0;
      v9.m256i_i64[0] = *(_QWORD *)&v15.m[1][0];
      v8 = *(unsigned __int64 *)&v15.m11;
      *(_OWORD *)&v9.m256i_u64[1] = 0LL;
      v9.m256i_i64[3] = 1065353216LL;
      *(_QWORD *)&v10 = *(_QWORD *)&v15.m[2][0];
      v11 = *(unsigned __int64 *)&v15.m11;
      v12 = v9;
      v13 = v10;
    }
    v5 = CShape::CopyShape(*(CShape **)this, v3, &v7);
    v1 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0xEFu);
    }
    else
    {
      CShapePtr::Release((CRegionShape **)this + 2);
      *((_QWORD *)this + 2) = v7;
      *((_BYTE *)this + 24) = 1;
    }
  }
  return v1;
}
