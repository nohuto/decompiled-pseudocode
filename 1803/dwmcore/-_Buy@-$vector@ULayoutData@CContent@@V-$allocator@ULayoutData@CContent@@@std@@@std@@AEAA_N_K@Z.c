/*
 * XREFs of ?_Buy@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAA_N_K@Z @ 0x18018B614
 * Callers:
 *     ??$_Assign_range@PEAULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXPEAULayoutData@CContent@@0Uforward_iterator_tag@1@@Z @ 0x18018AF1C (--$_Assign_range@PEAULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutDa.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

char __fastcall std::vector<CContent::LayoutData>::_Buy(unsigned __int64 *a1, unsigned __int64 a2)
{
  char result; // al
  unsigned __int64 v5; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  result = 0;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x666666666666666LL )
      ModuleFailFastForHRESULT(-2147483637, retaddr);
    v5 = std::_Allocate<std::_Default_allocate_traits<1>>(a2, 0x28uLL);
    *a1 = v5;
    a1[1] = v5;
    a1[2] = v5 + 40 * a2;
    return 1;
  }
  return result;
}
