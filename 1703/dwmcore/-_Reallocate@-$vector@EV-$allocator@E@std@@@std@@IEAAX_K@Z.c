/*
 * XREFs of ?_Reallocate@?$vector@EV?$allocator@E@std@@@std@@IEAAX_K@Z @ 0x18001DC9C
 * Callers:
 *     ?_Reserve@?$vector@EV?$allocator@E@std@@@std@@IEAAX_K@Z @ 0x18001DD24 (-_Reserve@-$vector@EV-$allocator@E@std@@@std@@IEAAX_K@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

char *__fastcall std::vector<unsigned char>::_Reallocate(__int64 a1, SIZE_T a2)
{
  char *v2; // rbx
  __int64 v5; // rbp
  char *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0LL;
  if ( a2 )
  {
    v2 = (char *)operator new(a2);
    if ( !v2 )
    {
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
      __debugbreak();
    }
  }
  memmove(v2, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  v5 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
    WPF::ProcessHeapImpl::Free(*(void **)a1);
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 16) = &v2[a2];
  result = &v2[v5];
  *(_QWORD *)(a1 + 8) = &v2[v5];
  return result;
}
