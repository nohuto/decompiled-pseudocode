/*
 * XREFs of ?AddShapeToLifetime@CComposeTop@@AEAAJAEBVCShape@@@Z @ 0x1801AD8F4
 * Callers:
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801ADAF8 (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 * Callees:
 *     ??2CRectanglesShape@@SAPEAX_K@Z @ 0x18001D1D8 (--2CRectanglesShape@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800C2BE4 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposeTop::AddShapeToLifetime(CComposeTop *this, const struct CShape *a2)
{
  struct CRectanglesShape *v3; // rcx
  struct CRectanglesShape *v5; // rax
  unsigned int v6; // ebx
  int v7; // eax
  void (__fastcall ***v8)(_QWORD, __int64); // rcx
  struct CShape *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v3 = (struct CRectanglesShape *)*((_QWORD *)this + 19);
  if ( v3 )
    goto LABEL_7;
  v5 = (struct CRectanglesShape *)CRectanglesShape::operator new(0LL);
  v3 = v5;
  if ( v5 )
  {
    *((_QWORD *)v5 + 1) = 0LL;
    *(_QWORD *)v5 = &CRectanglesShape::`vftable';
    *((_DWORD *)v5 + 10) = 0;
    *((_QWORD *)v5 + 2) = (char *)v5 + 48;
    *((_QWORD *)v5 + 3) = (char *)v5 + 48;
    *((_DWORD *)v5 + 8) = 1;
    *((_DWORD *)v5 + 9) = 1;
    *((_QWORD *)v5 + 8) = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  *((_QWORD *)this + 19) = v3;
  if ( v3 )
  {
LABEL_7:
    v7 = CShape::Combine(v3, (__int64)a2, a2, 0LL, 0, &v10);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x104u);
      if ( v10 )
        (**(void (__fastcall ***)(struct CShape *, __int64))v10)(v10, 1LL);
    }
    else
    {
      v8 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 19);
      if ( v8 )
        (**v8)(v8, 1LL);
      *((_QWORD *)this + 19) = v10;
    }
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xFEu);
  }
  return v6;
}
