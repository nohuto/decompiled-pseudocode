/*
 * XREFs of ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C00453F4
 * Callers:
 *     ?NotifyDirty@CCompositionBuffer@@QEAAXAEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x1C003A3F4 (-NotifyDirty@CCompositionBuffer@@QEAAXAEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 *     GreCombineRgn @ 0x1C0043CC0 (GreCombineRgn.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0045460 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C00457B0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     GreExtCreateRegion @ 0x1C0056650 (GreExtCreateRegion.c)
 *     GreOffsetRgn @ 0x1C00569D0 (GreOffsetRgn.c)
 *     GreCopyVisRgn @ 0x1C0059E40 (GreCopyVisRgn.c)
 *     EngUpdateDeviceSurface @ 0x1C0063D30 (EngUpdateDeviceSurface.c)
 *     GreGetRgnBox @ 0x1C007C160 (GreGetRgnBox.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00A0318 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00F0640 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RGNOBJ::iComplexity(RGNOBJ *this)
{
  __int64 result; // rax

  result = 1LL;
  if ( *(_DWORD *)(*(_QWORD *)this + 84LL) != 1 )
    return (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 80LL) > 0xA0u) + 2;
  return result;
}
