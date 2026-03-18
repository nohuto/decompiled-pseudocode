/*
 * XREFs of ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEBVCShape@@@Z @ 0x1800934D8
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180008CB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z @ 0x18000F590 (-GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListPrimitiveBuilder@@@Z @ 0x1800587E4 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListPrimitiveBuilder@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18007258C (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800BE94C (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CScopedClipStack::GetTopCpuClipInScope(CScopedClipStack *this, const struct CShape **a2)
{
  int v2; // eax
  unsigned int v3; // esi
  int v6; // r8d
  __int64 v8; // rdx
  unsigned int i; // edi
  __int64 v10; // rcx
  __int64 v11; // rbp
  int v12; // eax
  int v13; // eax

  v2 = *((_DWORD *)this + 6);
  v3 = 0;
  if ( v2 && (v6 = *(_DWORD *)(*(_QWORD *)this + 80LL * (unsigned int)(v2 - 1) + 8)) != 0 )
  {
    if ( !*(_QWORD *)(120LL * (unsigned int)(*((_DWORD *)this + 214) - 1) + *((_QWORD *)this + 104) + 88) )
    {
      v8 = 0LL;
      for ( i = *((_DWORD *)this + 214) - v6;
            i < *((_DWORD *)this + 214);
            v8 = *(_QWORD *)(*((_QWORD *)this + 104) + v11 + 88) )
      {
        v10 = *((_QWORD *)this + 104);
        v11 = 120LL * i;
        if ( !*(_QWORD *)(v10 + v11 + 88) )
        {
          if ( v8 )
          {
            v13 = CShape::Combine(v8, v8, *(_QWORD *)(v10 + 120LL * i), 120LL * i + v10 + 16, 1, 120LL * i + v10 + 88);
            v3 = v13;
            if ( v13 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC9u);
              return v3;
            }
          }
          else
          {
            v12 = CShape::CopyShape(
                    *(CShape **)(v10 + 120LL * i),
                    (const struct CMILMatrix *)(120LL * i + v10 + 16),
                    (struct CShape **)(120LL * i + v10 + 88));
            v3 = v12;
            if ( v12 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xBDu);
              return v3;
            }
          }
        }
        ++i;
      }
    }
    *a2 = *(const struct CShape **)(120LL * (unsigned int)(*((_DWORD *)this + 214) - 1) + *((_QWORD *)this + 104) + 88);
  }
  else
  {
    *a2 = 0LL;
  }
  return v3;
}
