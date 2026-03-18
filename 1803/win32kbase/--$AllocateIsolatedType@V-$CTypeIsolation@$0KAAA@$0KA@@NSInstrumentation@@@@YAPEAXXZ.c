/*
 * XREFs of ??$AllocateIsolatedType@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C0045778
 * Callers:
 *     ?HMAllocateIsolatedType@@YAPEAXE@Z @ 0x1C00358C8 (-HMAllocateIsolatedType@@YAPEAXE@Z.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C0043748 (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C006219C (-Allocate@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 AllocateIsolatedType<NSInstrumentation::CTypeIsolation<40960,160>>()
{
  if ( *((_QWORD *)gpUserTypeIsolation + 1) )
    return NSInstrumentation::CTypeIsolation<40960,160>::Allocate();
  else
    return 0LL;
}
