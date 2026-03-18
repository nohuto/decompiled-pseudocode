/*
 * XREFs of ?GetSimplifiedPathData@CShape@@QEBAJPEAPEAVCPathData@@@Z @ 0x18020A5F0
 * Callers:
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z @ 0x18018FC4C (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800C1D90 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShape::GetSimplifiedPathData(CShape *this, struct CPathData **a2)
{
  unsigned int v2; // edi
  __int64 *v3; // rbx
  int v5; // eax
  struct CPathData *v6; // rcx
  struct CPathData *v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (__int64 *)((char *)this + 8);
  v8 = 0LL;
  if ( *((_QWORD *)this + 1) )
  {
LABEL_5:
    Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v8, v3);
    v6 = 0LL;
    *a2 = v8;
    goto LABEL_6;
  }
  v5 = (*(__int64 (__fastcall **)(CShape *, struct CPathData **))(*(_QWORD *)this + 56LL))(this, &v8);
  v2 = v5;
  if ( v5 >= 0 )
  {
    if ( !_InterlockedCompareExchange64(v3, (signed __int64)v8, 0LL) )
      v8 = 0LL;
    goto LABEL_5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x439u);
  v6 = v8;
LABEL_6:
  if ( v6 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(struct CPathData *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v2;
}
