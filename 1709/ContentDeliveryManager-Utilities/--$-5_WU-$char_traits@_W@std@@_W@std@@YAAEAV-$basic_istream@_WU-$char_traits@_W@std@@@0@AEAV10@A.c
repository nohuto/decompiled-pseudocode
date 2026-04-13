/*
 * XREFs of ??$?5_WU?$char_traits@_W@std@@_W@std@@YAAEAV?$basic_istream@_WU?$char_traits@_W@std@@@0@AEAV10@AEBU?$_Timeobj@_W@0@@Z @ 0x180094568
 * Callers:
 *     ?GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA?AU_FILETIME@@PEB_W_N@Z @ 0x1800940E4 (-GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA-AU_FILETIME@@PEB_W_N@Z.c)
 * Callees:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x180026C7C (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     ?_Ipfx@?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAA_N_N@Z @ 0x180082C84 (-_Ipfx@-$basic_istream@_WU-$char_traits@_W@std@@@std@@QEAA_N_N@Z.c)
 *     ?get@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@QEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@PEB_W4@Z @ 0x180095594 (-get@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@QEBA-AV-$istreambu.c)
 *     ??$use_facet@V?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@@std@@YAAEBV?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@0@AEBVlocale@0@@Z @ 0x180095CC0 (--$use_facet@V-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@@std@@YAA.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::operator>><wchar_t,std::char_traits<wchar_t>,wchar_t>(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbx
  int v6; // r14d
  void (__fastcall ***v7)(_QWORD, __int64); // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edx
  __int64 v11; // rcx
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // ecx
  __int128 v16; // [rsp+60h] [rbp-58h] BYREF
  __int64 v17; // [rsp+70h] [rbp-48h]
  __int128 v19; // [rsp+80h] [rbp-38h] BYREF
  char v20; // [rsp+90h] [rbp-28h] BYREF
  int v22; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v23; // [rsp+D8h] [rbp+20h] BYREF

  v3 = a1;
  v22 = 0;
  v17 = a1;
  v4 = *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 72);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  if ( std::wistream::_Ipfx(v3) )
  {
    v5 = **(_QWORD **)(*(int *)(*(_QWORD *)v3 + 4LL) + v3 + 64);
    v23 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = std::use_facet<std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>>(&v23);
    v7 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    if ( v7 )
      (**v7)(v7, 1LL);
    try
    {
      v8 = v3 + *(int *)(*(_QWORD *)v3 + 4LL);
      *(_QWORD *)&v16 = 0LL;
      BYTE8(v16) = 1;
      v19 = v16;
      *(_QWORD *)&v16 = *(_QWORD *)(v8 + 72);
      BYTE8(v16) = (_QWORD)v16 == 0LL;
      std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::get(
        v6,
        (unsigned int)&v20,
        (unsigned int)&v16,
        (unsigned int)&v19,
        v8,
        (__int64)&v22,
        *a2,
        a2[1],
        a2[2]);
    }
    catch ( ... )
    {
      v13 = a1 + *(int *)(*(_QWORD *)a1 + 4LL);
      v14 = *(_DWORD *)(v13 + 16) | 4;
      v15 = v14 & 0x17;
      *(_DWORD *)(v13 + 16) = v15;
      if ( (v15 & *(_DWORD *)(v13 + 20)) != 0 )
        throw;
      v3 = a1;
    }
  }
  v9 = v3 + *(int *)(*(_QWORD *)v3 + 4LL);
  if ( v22 )
  {
    v10 = v22 | *(_DWORD *)(v9 + 16);
    if ( !*(_QWORD *)(v9 + 72) )
      LOBYTE(v10) = v10 | 4;
    std::ios_base::clear((std::ios_base *)v9, v10, 0);
  }
  v11 = *(_QWORD *)(*(int *)(*(_QWORD *)v3 + 4LL) + v3 + 72);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return v3;
}
