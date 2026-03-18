/*
 * XREFs of ?AddShapeToLifetime@CComposeTop@@AEAAJAEBVCShape@@@Z @ 0x18017D464
 * Callers:
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017D664 (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180097094 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??2CRectanglesShape@@SAPEAX_K@Z @ 0x1800B9E18 (--2CRectanglesShape@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposeTop::AddShapeToLifetime(CComposeTop *this, const struct CShape *a2)
{
  _QWORD *v4; // rax
  unsigned int v5; // edi
  signed int v6; // eax
  void (__fastcall ***v7)(_QWORD, __int64); // rcx
  void (__fastcall ***v9)(_QWORD, __int64); // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  if ( *((_QWORD *)this + 19) )
    goto LABEL_6;
  v4 = CRectanglesShape::operator new(this);
  if ( v4 )
  {
    *v4 = &CRectanglesShape::`vftable';
    *((_DWORD *)v4 + 8) = 0;
    v4[1] = v4 + 5;
    v4[2] = v4 + 5;
    *((_DWORD *)v4 + 6) = 1;
    *((_DWORD *)v4 + 7) = 1;
    v4[7] = 0LL;
  }
  *((_QWORD *)this + 19) = v4;
  if ( v4 )
  {
LABEL_6:
    v6 = CShape::Combine(*((_QWORD *)this + 19), (__int64)a2, (__int64)a2, 0LL, 0, &v9);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x104u);
      if ( v9 )
        (**v9)(v9, 1LL);
    }
    else
    {
      v7 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 19);
      if ( v7 )
        (**v7)(v7, 1LL);
      *((_QWORD *)this + 19) = v9;
    }
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0xFEu);
  }
  return v5;
}
