/*
 * XREFs of ?ReplacePrimitive@CHWDrawListEntry@@QEAA?AV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@$$QEAV23@AEBVCMILMatrix@@@Z @ 0x180130C38
 * Callers:
 *     ?_Tidy@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@IEAAXXZ @ 0x1800BE03C (-_Tidy@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@std@@IEAAXXZ.c)
 * Callees:
 *     ??4?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801336C4 (--4-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAAAEAV.c)
 */

_QWORD *__fastcall CHWDrawListEntry::ReplacePrimitive(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 *v5; // rcx
  __int64 v6; // rax

  *(_OWORD *)(a1 + 72) = *(_OWORD *)a4;
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(a1 + 120) = *(_OWORD *)(a4 + 48);
  *(_DWORD *)(a1 + 136) = *(_DWORD *)(a4 + 64);
  v5 = (__int64 *)(a1 + 56);
  v6 = *v5;
  *v5 = 0LL;
  *a2 = v6;
  std::unique_ptr<CDrawListPrimitive>::operator=(v5, a3);
  return a2;
}
