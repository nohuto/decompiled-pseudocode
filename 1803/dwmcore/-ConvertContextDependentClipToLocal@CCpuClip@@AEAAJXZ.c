/*
 * XREFs of ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ @ 0x1800190E8
 * Callers:
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x180019248 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x18017B440 (-AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x180019290 (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18008C1F8 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CCpuClip::ConvertContextDependentClipToLocal(CShape **this)
{
  unsigned int v2; // edi
  CShape *v3; // rcx
  const struct CMILMatrix *v4; // rdx
  CShape *v5; // rax
  int v6; // eax
  struct CShape *v8; // [rsp+30h] [rbp-69h] BYREF
  __int128 v9; // [rsp+38h] [rbp-61h]
  __m256i v10; // [rsp+48h] [rbp-51h]
  __int128 v11; // [rsp+68h] [rbp-31h]
  __int128 v12; // [rsp+80h] [rbp-19h] BYREF
  __m256i v13; // [rsp+90h] [rbp-9h]
  __int128 v14; // [rsp+B0h] [rbp+17h]
  int v15; // [rsp+C0h] [rbp+27h]
  unsigned __int64 v16; // [rsp+D0h] [rbp+37h] BYREF
  __int64 v17; // [rsp+D8h] [rbp+3Fh]
  __int64 v18; // [rsp+E0h] [rbp+47h]

  v2 = 0;
  v3 = *this;
  if ( v3 )
  {
    v15 = 0;
    v4 = 0LL;
    v5 = this[1];
    if ( v5 )
    {
      v16 = *(_QWORD *)v5;
      v17 = *((_QWORD *)v5 + 2);
      v18 = *((_QWORD *)v5 + 6);
      D2D1::Matrix3x2F::Invert((D2D1::Matrix3x2F *)&v16);
      v4 = (const struct CMILMatrix *)&v12;
      *((_QWORD *)&v11 + 1) = 0x3F80000000000000LL;
      v15 = 0;
      v3 = *this;
      v10.m256i_i64[0] = v17;
      v9 = v16;
      *(_OWORD *)&v10.m256i_u64[1] = 0LL;
      v10.m256i_i64[3] = 1065353216LL;
      *(_QWORD *)&v11 = v18;
      v12 = v16;
      v13 = v10;
      v14 = v11;
    }
    v6 = CShape::CopyShape(v3, v4, &v8);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xEFu);
    }
    else
    {
      CShapePtr::Release((CShapePtr *)(this + 2));
      this[2] = v8;
      *((_BYTE *)this + 24) = 1;
    }
  }
  return v2;
}
