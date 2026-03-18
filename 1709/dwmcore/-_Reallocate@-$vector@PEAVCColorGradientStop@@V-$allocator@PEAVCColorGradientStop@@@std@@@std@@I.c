/*
 * XREFs of ?_Reallocate@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@IEAAX_K@Z @ 0x180072410
 * Callers:
 *     ?_Reserve@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@IEAAX_K@Z @ 0x1800724B4 (-_Reserve@-$vector@PEAVCColorGradientStop@@V-$allocator@PEAVCColorGradientStop@@@std@@@std@@IEAA.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

char *__fastcall std::vector<CColorGradientStop *>::_Reallocate(__int64 a1, unsigned __int64 a2)
{
  char *v2; // rbx
  __int64 v5; // rbp
  char *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL || (v2 = (char *)operator new(8 * a2)) == 0LL )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
  }
  memmove(v2, *(const void **)a1, (*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  v5 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( *(_QWORD *)a1 )
    WPF::ProcessHeapImpl::Free(*(void **)a1);
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 16) = &v2[8 * a2];
  result = &v2[8 * v5];
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
