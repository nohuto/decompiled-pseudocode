/*
 * XREFs of ?_Reallocate@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@IEAAX_K@Z @ 0x180072020
 * Callers:
 *     ?reserve@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAX_K@Z @ 0x1800720E8 (-reserve@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAX_K@Z.c)
 *     ?_Reserve@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@IEAAX_K@Z @ 0x180167538 (-_Reserve@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@IEAAX_K@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall std::vector<D2D1_GRADIENT_STOP>::_Reallocate(__int64 a1, unsigned __int64 a2)
{
  char *v2; // rdi
  _DWORD *v5; // r8
  char *v6; // rdx
  _DWORD *i; // rcx
  __int64 v8; // r14
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0LL;
  if ( a2 )
  {
    if ( a2 > 0xCCCCCCCCCCCCCCCLL || (v2 = (char *)operator new(20 * a2)) == 0LL )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
  }
  v5 = *(_DWORD **)(a1 + 8);
  v6 = v2;
  for ( i = *(_DWORD **)a1; i != v5; i += 5 )
  {
    if ( v6 )
    {
      *(_OWORD *)v6 = *(_OWORD *)i;
      *((_DWORD *)v6 + 4) = i[4];
    }
    v6 += 20;
  }
  v8 = (*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) / 20LL;
  if ( *(_QWORD *)a1 )
    WPF::ProcessHeapImpl::Free(*(void **)a1);
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 16) = &v2[20 * a2];
  result = 5 * v8;
  *(_QWORD *)(a1 + 8) = &v2[20 * v8];
  return result;
}
