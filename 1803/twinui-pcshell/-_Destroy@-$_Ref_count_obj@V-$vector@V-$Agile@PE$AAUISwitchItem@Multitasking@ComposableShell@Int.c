/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@V?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@@std@@EEAAXXZ @ 0x18021F530
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??1?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAA@XZ @ 0x18021B7FC (--1-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAA@X.c)
 */

void __fastcall std::_Ref_count_obj<std::vector<Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>>>::_Destroy(
        _QWORD *a1)
{
  char *v1; // rbx
  char *v3; // rsi

  v1 = (char *)a1[2];
  if ( v1 )
  {
    v3 = (char *)a1[3];
    if ( v1 != v3 )
    {
      do
      {
        Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::~Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>((__int64)v1);
        v1 += 32;
      }
      while ( v1 != v3 );
      v1 = (char *)a1[2];
    }
    std::_Deallocate(v1, (__int64)(a1[4] - (_QWORD)v1) >> 5, 0x20uLL);
    a1[2] = 0LL;
    a1[3] = 0LL;
    a1[4] = 0LL;
  }
}
