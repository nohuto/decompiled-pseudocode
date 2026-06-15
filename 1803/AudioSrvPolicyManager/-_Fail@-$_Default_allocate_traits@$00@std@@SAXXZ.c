/*
 * XREFs of ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x180019744
 * Callers:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x180019750 (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 * Callees:
 *     <none>
 */

void __noreturn std::_Default_allocate_traits<1>::_Fail()
{
  std::_Xbad_alloc();
  JUMPOUT(0x18001974ELL);
}
