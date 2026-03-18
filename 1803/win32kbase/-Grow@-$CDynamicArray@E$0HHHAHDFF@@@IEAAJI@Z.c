/*
 * XREFs of ?Grow@?$CDynamicArray@E$0HHHAHDFF@@@IEAAJI@Z @ 0x1C0060A8C
 * Callers:
 *     ??$AddProperty@UD2DMatrix@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@PEAI@Z @ 0x1C005DD2C (--$AddProperty@UD2DMatrix@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelMod.c)
 *     ??$AddProperty@UD2D_MATRIX_3X2_F@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_MATRIX_3X2_F@@PEAI@Z @ 0x1C005DDE0 (--$AddProperty@UD2D_MATRIX_3X2_F@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKe.c)
 *     ??$AddProperty@UD2DVector3@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@PEAI@Z @ 0x1C005DE88 (--$AddProperty@UD2DVector3@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelMo.c)
 *     ??$AddProperty@M@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBM@Z @ 0x1C0078290 (--$AddProperty@M@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBM@Z.c)
 *     ??$AddProperty@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBU_D3DCOLORVALUE@@@Z @ 0x1C00783F0 (--$AddProperty@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetVa.c)
 *     ??$AddProperty@UD2DVector2@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DVector2@@@Z @ 0x1C00784DC (--$AddProperty@UD2DVector2@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@.c)
 *     ??$AddProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z @ 0x1C00786C0 (--$AddProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 */

__int64 __fastcall CDynamicArray<unsigned char,2003858261>::Grow(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  unsigned int v3; // r8d
  unsigned int v5; // ebx
  void *v6; // rax
  void *v7; // rbp

  v2 = -1;
  v3 = a2 + *(_DWORD *)(a1 + 8);
  if ( v3 >= a2 )
    v2 = a2 + *(_DWORD *)(a1 + 8);
  v5 = v3 < a2 ? 0xC0000095 : 0;
  if ( v3 >= a2 && v2 > *(_DWORD *)(a1 + 12) )
  {
    v5 = 0;
    if ( is_mul_ok(v2, 1uLL) )
    {
      v6 = (void *)Win32AllocPool(v2, 0x77707355u);
      v7 = v6;
      if ( v6 )
      {
        if ( *(_QWORD *)a1 )
        {
          memmove(v6, *(const void **)a1, *(unsigned int *)(a1 + 8));
          Win32FreePool(*(_QWORD *)a1);
        }
        *(_QWORD *)a1 = v7;
        *(_DWORD *)(a1 + 12) = v2;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      return (unsigned int)-1073741675;
    }
  }
  return v5;
}
