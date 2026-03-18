/*
 * XREFs of ?HasWindowBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z @ 0x18006BB88
 * Callers:
 *     ?HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18006DA94 (-HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 * Callees:
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180024FA0 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CRenderingTechniqueFragment::HasWindowBackdropInput(
        CRenderingTechniqueFragment *this,
        const struct CBrushRenderingGraph *a2)
{
  char v2; // bl
  __int64 v4; // rsi
  int v6; // ebp
  __int64 i; // rdi
  __int64 v8; // rax
  __int64 v10; // rcx
  bool (__fastcall *v11)(__int64, int); // rax

  v2 = 0;
  v4 = (__int64)(*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) >> 4;
  v6 = 0;
  if ( (_DWORD)v4 )
  {
    for ( i = 0LL; ; i += 16LL )
    {
      v8 = *((_QWORD *)this + 4);
      if ( !*(_QWORD *)(i + v8 + 8) && !*(_BYTE *)(i + v8 + 4) )
      {
        v10 = *(_QWORD *)(((unsigned __int64)*(unsigned int *)(i + v8) << 6) + *((_QWORD *)a2 + 2));
        if ( v10 )
        {
          v11 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v10 + 48LL);
          if ( v11 == CSurfaceBrush::IsOfType ? CSurfaceBrush::IsOfType(v10, 138) : v11(v10, 138) )
            break;
        }
      }
      if ( ++v6 >= (unsigned int)v4 )
        return v2;
    }
    return 1;
  }
  return v2;
}
