/*
 * XREFs of ?GetSimplifiedPathDataInternal@CPathSegmentsShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x18020C870
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800C1D90 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?IsSimpleGeometry@CPathData@@QEBA_NXZ @ 0x180209330 (-IsSimpleGeometry@CPathData@@QEBA_NXZ.c)
 *     ?Simplify@CPathData@@QEBAJPEAPEAV1@@Z @ 0x1802095E0 (-Simplify@CPathData@@QEBAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CPathSegmentsShape::GetSimplifiedPathDataInternal(CPathSegmentsShape *this, struct CPathData **a2)
{
  __int64 *v2; // rdi
  unsigned int v3; // ebx
  CPathData *v4; // rcx
  int v6; // eax
  struct CPathData *v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 16);
  v3 = 0;
  v4 = (CPathData *)*((_QWORD *)this + 2);
  v8 = 0LL;
  if ( CPathData::IsSimpleGeometry(v4) )
  {
    Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v8, v2);
LABEL_4:
    *a2 = v8;
    return v3;
  }
  v6 = CPathData::Simplify((CPathData *)*v2, &v8);
  v3 = v6;
  if ( v6 >= 0 )
    goto LABEL_4;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x2Du);
  if ( v8 )
    (*(void (__fastcall **)(struct CPathData *))(*(_QWORD *)v8 + 16LL))(v8);
  return v3;
}
