/*
 * XREFs of ?HMAllocateIsolatedType@@YAPEAXE@Z @ 0x1C00358C8
 * Callers:
 *     HMAllocObject @ 0x1C0035000 (HMAllocObject.c)
 *     ?HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z @ 0x1C0035860 (-HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z.c)
 * Callees:
 *     ?HMTagToIsolatedType@@YA?AW4UserTypeIsolationCountedType@@E@Z @ 0x1C0035914 (-HMTagToIsolatedType@@YA-AW4UserTypeIsolationCountedType@@E@Z.c)
 *     ??$AllocateIsolatedType@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C0045778 (--$AllocateIsolatedType@V-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@@@YAPEAXXZ.c)
 *     ?Allocate@?$CTypeIsolation@$0BDAAA@$0BDA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C005ED58 (-Allocate@-$CTypeIsolation@$0BDAAA@$0BDA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ??$AllocateIsolatedType@V?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C0066C64 (--$AllocateIsolatedType@V-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@@@YAPEAXXZ.c)
 */

void *__fastcall HMAllocateIsolatedType(__int64 a1)
{
  int v1; // eax
  int v2; // eax
  void *result; // rax

  v1 = HMTagToIsolatedType(a1) - 1;
  if ( !v1 )
    return (void *)AllocateIsolatedType<NSInstrumentation::CTypeIsolation<40960,160>>();
  v2 = v1 - 1;
  if ( v2 )
  {
    if ( v2 == 1 )
      return (void *)AllocateIsolatedType<NSInstrumentation::CTypeIsolation<81920,160>>();
    else
      return 0LL;
  }
  else
  {
    result = 0LL;
    if ( *((_QWORD *)gpUserTypeIsolation + 2) )
      return (void *)NSInstrumentation::CTypeIsolation<77824,304>::Allocate();
  }
  return result;
}
