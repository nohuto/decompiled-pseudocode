/*
 * XREFs of ??1?$queue@UForegroundSwitchData@Discover@PenWorkspace@@V?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@@std@@QEAA@XZ @ 0x1801914C4
 * Callers:
 *     _PenWorkspace::Discover::RecentAppsCache::RecentAppsCache_::_1_::dtor$3 @ 0x18019142F (_PenWorkspace--Discover--RecentAppsCache--RecentAppsCache_--_1_--dtor$3.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::queue<PenWorkspace::Discover::ForegroundSwitchData>::~queue<PenWorkspace::Discover::ForegroundSwitchData,std::deque<PenWorkspace::Discover::ForegroundSwitchData>>(
        __int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdi
  char *v5; // rcx
  char *v6; // rcx

  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 32);
    if ( !v2 )
      break;
    v3 = v2 - 1;
    *(_QWORD *)(a1 + 32) = v3;
    if ( !v3 )
      *(_QWORD *)(a1 + 24) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 16);
  while ( v4 )
  {
    --v4;
    v5 = *(char **)(*(_QWORD *)(a1 + 8) + 8 * v4);
    if ( v5 )
      std::_Deallocate(v5, 1uLL, 0xCuLL);
  }
  v6 = *(char **)(a1 + 8);
  if ( v6 )
    std::_Deallocate(v6, *(_QWORD *)(a1 + 16), 8uLL);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  std::_Deallocate(*(char **)a1, 1uLL, 0x10uLL);
  *(_QWORD *)a1 = 0LL;
}
