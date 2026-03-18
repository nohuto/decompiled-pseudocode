/*
 * XREFs of ?SetRenderingEffect@CBrushDrawListGenerator@@QEAAXPEAVCRenderingEffect@@@Z @ 0x18004ACD0
 * Callers:
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18006F088 (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectS.c)
 * Callees:
 *     ?GetUsedSamplersBitmask@CBrushRenderingEffect@@UEBAIXZ @ 0x18006CA70 (-GetUsedSamplersBitmask@CBrushRenderingEffect@@UEBAIXZ.c)
 *     ??4?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@QEAAAEAV012@PEAVCRenderingEffect@@@Z @ 0x180070294 (--4-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@QEAAAEAV012@PEAVCRenderingEffect@@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180070D50 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x180072640 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBrushDrawListGenerator::SetRenderingEffect(CBrushDrawListGenerator *this, struct CRenderingEffect *a2)
{
  int v3; // ebp
  unsigned int (__fastcall *v5)(CBrushRenderingEffect *__hidden); // rax
  unsigned int UsedSamplersBitmask; // eax
  __int64 v7; // rdi
  unsigned int i; // r15d
  __int64 v9; // rcx
  CSurfaceDrawListBrush *v10; // rcx
  void *(__fastcall *v11)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax

  v3 = 0;
  v5 = *(unsigned int (__fastcall **)(CBrushRenderingEffect *__hidden))(*(_QWORD *)a2 + 24LL);
  if ( v5 == CBrushRenderingEffect::GetUsedSamplersBitmask )
    UsedSamplersBitmask = CBrushRenderingEffect::GetUsedSamplersBitmask(a2);
  else
    UsedSamplersBitmask = v5(a2);
  v7 = 0LL;
  for ( i = UsedSamplersBitmask; (unsigned int)v7 < *((_DWORD *)this + 26); v7 = (unsigned int)(v7 + 1) )
  {
    v9 = *((_QWORD *)this + v7 + 9);
    if ( v9 )
    {
      if ( _bittest((const int *)&i, v7) || !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9) )
      {
        v3 = v7 + 1;
      }
      else if ( *((_QWORD *)this + v7 + 9) )
      {
        v10 = (CSurfaceDrawListBrush *)*((_QWORD *)this + v7 + 9);
        if ( v10 )
        {
          v11 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v10;
          if ( v11 == CSurfaceDrawListBrush::`vector deleting destructor' )
          {
            CSurfaceDrawListBrush::`vector deleting destructor'(v10, 1u);
          }
          else if ( v11 == CGeometryOnlyDrawListBrush::`vector deleting destructor' )
          {
            CGeometryOnlyDrawListBrush::`vector deleting destructor'(v10, 1u);
          }
          else
          {
            v11(v10, 1u);
          }
        }
        *((_QWORD *)this + v7 + 9) = 0LL;
      }
    }
  }
  Microsoft::WRL::ComPtr<CRenderingEffect>::operator=((char *)this + 48, a2);
  *((_DWORD *)this + 26) = v3;
}
