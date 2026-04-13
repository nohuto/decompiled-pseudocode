/*
 * XREFs of ?flush@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAAAEAV12@XZ @ 0x180082A64
 * Callers:
 *     ?flush@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAAAEAV12@XZ @ 0x180082A64 (-flush@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAAAEAV12@XZ.c)
 *     ?_Ipfx@?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAA_N_N@Z @ 0x180082C84 (-_Ipfx@-$basic_istream@_WU-$char_traits@_W@std@@@std@@QEAA_N_N@Z.c)
 * Callees:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x180026C7C (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     ?_Osfx@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAAXXZ @ 0x1800829B4 (-_Osfx@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAAXXZ.c)
 *     ?flush@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAAAEAV12@XZ @ 0x180082A64 (-flush@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAAAEAV12@XZ.c)
 *     ?uncaught_exception@std@@YA_NXZ @ 0x180098314 (-uncaught_exception@std@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::wostream::flush(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // edx
  __int64 v8; // rcx

  v2 = *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 72);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v3 = *(int *)(*(_QWORD *)a1 + 4LL);
    if ( !*(_DWORD *)(v3 + a1 + 16) )
    {
      v4 = *(_QWORD *)(v3 + a1 + 80);
      if ( v4 )
        std::wostream::flush(v4);
    }
    v5 = *(int *)(*(_QWORD *)a1 + 4LL);
    if ( !*(_DWORD *)(v5 + a1 + 16)
      && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + a1 + 72) + 104LL))(*(_QWORD *)(v5 + a1 + 72)) == -1 )
    {
      v6 = a1 + *(int *)(*(_QWORD *)a1 + 4LL);
      v7 = *(_DWORD *)(v6 + 16);
      if ( !*(_QWORD *)(v6 + 72) )
        LOBYTE(v7) = v7 | 4;
      std::ios_base::clear((std::ios_base *)v6, v7 | 4, 0);
    }
    if ( !std::uncaught_exception() )
      std::wostream::_Osfx(a1);
    v8 = *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 72);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return a1;
}
