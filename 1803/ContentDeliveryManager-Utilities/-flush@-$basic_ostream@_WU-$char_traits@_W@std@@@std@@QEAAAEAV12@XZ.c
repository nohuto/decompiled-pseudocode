/*
 * XREFs of ?flush@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAAAEAV12@XZ @ 0x180070C90
 * Callers:
 *     ?flush@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAAAEAV12@XZ @ 0x180070C90 (-flush@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAAAEAV12@XZ.c)
 *     ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@PEB_W@Z @ 0x1800715E4 (--$-6_WU-$char_traits@_W@std@@@std@@YAAEAV-$basic_ostream@_WU-$char_traits@_W@std@@@0@AEAV10@PEB.c)
 *     ?_Ipfx@?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAA_N_N@Z @ 0x18008E170 (-_Ipfx@-$basic_istream@_WU-$char_traits@_W@std@@@std@@QEAA_N_N@Z.c)
 * Callees:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18002A34C (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     ?flush@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAAAEAV12@XZ @ 0x180070C90 (-flush@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAAAEAV12@XZ.c)
 *     ?_Osfx@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAAXXZ @ 0x1800712D0 (-_Osfx@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAAXXZ.c)
 *     ?uncaught_exception@std@@YA_NXZ @ 0x1800A53A4 (-uncaught_exception@std@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall std::wostream::flush(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // rcx

  v2 = *(__int64 *)((char *)a1 + *(int *)(*a1 + 4) + 72);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v3 = *a1;
    v4 = *(int *)(*a1 + 4);
    if ( !*(_DWORD *)((char *)a1 + v4 + 16) )
    {
      v5 = *(__int64 *)((char *)a1 + v4 + 80);
      if ( v5 )
      {
        std::wostream::flush(v5);
        v3 = *a1;
      }
    }
    v6 = *(int *)(v3 + 4);
    if ( !*(_DWORD *)((char *)a1 + v6 + 16)
      && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)((char *)a1 + v6 + 72) + 104LL))(*(__int64 *)((char *)a1 + v6 + 72)) == -1 )
    {
      v7 = (__int64)a1 + *(int *)(*a1 + 4);
      v8 = *(_DWORD *)(v7 + 16);
      if ( !*(_QWORD *)(v7 + 72) )
        LOBYTE(v8) = v8 | 4;
      std::ios_base::clear((std::ios_base *)v7, v8 | 4, 0);
    }
    if ( !std::uncaught_exception() )
      std::wostream::_Osfx(a1);
    v9 = *(__int64 *)((char *)a1 + *(int *)(*a1 + 4) + 72);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return a1;
}
