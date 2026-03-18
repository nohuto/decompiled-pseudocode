/*
 * XREFs of ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ @ 0x18001EBC8
 * Callers:
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x18001ED24 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x18015C44C (-AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x18001ED6C (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18007258C (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CCpuClip::ConvertContextDependentClipToLocal(CCpuClip *this)
{
  unsigned int v1; // edi
  const struct CMILMatrix *v3; // rdx
  unsigned __int64 *v4; // rax
  int v5; // eax
  struct CShape *v7; // [rsp+30h] [rbp-69h] BYREF
  __int128 v8; // [rsp+38h] [rbp-61h]
  __m256i v9; // [rsp+48h] [rbp-51h]
  __int128 v10; // [rsp+68h] [rbp-31h]
  __int128 v11; // [rsp+80h] [rbp-19h] BYREF
  __m256i v12; // [rsp+90h] [rbp-9h]
  __int128 v13; // [rsp+B0h] [rbp+17h]
  int v14; // [rsp+C0h] [rbp+27h]
  unsigned __int64 v15; // [rsp+D0h] [rbp+37h] BYREF
  __int64 v16; // [rsp+D8h] [rbp+3Fh]
  unsigned __int64 v17; // [rsp+E0h] [rbp+47h]

  v1 = 0;
  if ( *(_QWORD *)this )
  {
    v14 = 0;
    v3 = 0LL;
    v4 = (unsigned __int64 *)*((_QWORD *)this + 1);
    if ( v4 )
    {
      v15 = *v4;
      v16 = v4[2];
      v17 = v4[6];
      D2D1::Matrix3x2F::Invert((D2D1::Matrix3x2F *)&v15);
      v3 = (const struct CMILMatrix *)&v11;
      *((_QWORD *)&v10 + 1) = 0x3F80000000000000LL;
      v14 = 0;
      v9.m256i_i64[0] = v16;
      v8 = v15;
      *(_OWORD *)&v9.m256i_u64[1] = 0LL;
      v9.m256i_i64[3] = 1065353216LL;
      *(_QWORD *)&v10 = v17;
      v11 = v15;
      v12 = v9;
      v13 = v10;
    }
    v5 = CShape::CopyShape(*(CShape **)this, v3, &v7);
    v1 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xEEu);
    }
    else
    {
      CShapePtr::Release((CCpuClip *)((char *)this + 16));
      *((_QWORD *)this + 2) = v7;
      *((_BYTE *)this + 24) = 1;
    }
  }
  return v1;
}
