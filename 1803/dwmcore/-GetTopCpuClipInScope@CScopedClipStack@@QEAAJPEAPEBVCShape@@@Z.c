/*
 * XREFs of ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z @ 0x18006320C
 * Callers:
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z @ 0x18006E250 (-GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180071D00 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18008CC4C (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@P.c)
 * Callees:
 *     ?CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180028168 (-CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800C2BE4 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CScopedClipStack::GetTopCpuClipInScope(CScopedClipStack *this, const struct CShape **a2)
{
  int v2; // eax
  unsigned int v3; // edi
  int v6; // r10d
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int i; // esi
  __int64 v12; // r15
  CShape **v13; // rax
  struct CShape **v14; // r8
  int v15; // eax
  int v16; // eax

  v2 = *((_DWORD *)this + 6);
  v3 = 0;
  if ( v2 && (v6 = *(_DWORD *)(*(_QWORD *)this + 80LL * (unsigned int)(v2 - 1) + 8)) != 0 )
  {
    v8 = *((_QWORD *)this + 104);
    v9 = v8;
    if ( !*(_QWORD *)(120LL * (unsigned int)(*((_DWORD *)this + 214) - 1) + v8 + 88) )
    {
      v10 = 0LL;
      for ( i = *((_DWORD *)this + 214) - v6; i < *((_DWORD *)this + 214); v10 = *(_QWORD *)(v12 + v9 + 88) )
      {
        v12 = 120LL * i;
        v13 = (CShape **)(v12 + v8);
        v14 = (struct CShape **)(v12 + v8 + 88);
        if ( !*v14 )
        {
          if ( v10 )
          {
            v16 = CShape::Combine(v10, v9, *v13, v13 + 2, 1, v14);
            v3 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xC9u);
              return v3;
            }
          }
          else
          {
            v15 = CShapePtr::CopyShape(v13, (const struct CMILMatrix *)(v13 + 2), v14);
            v3 = v15;
            if ( v15 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xBDu);
              return v3;
            }
          }
        }
        v9 = *((_QWORD *)this + 104);
        ++i;
        v8 = v9;
      }
    }
    *a2 = *(const struct CShape **)(120LL * (unsigned int)(*((_DWORD *)this + 214) - 1) + v9 + 88);
  }
  else
  {
    *a2 = 0LL;
  }
  return v3;
}
