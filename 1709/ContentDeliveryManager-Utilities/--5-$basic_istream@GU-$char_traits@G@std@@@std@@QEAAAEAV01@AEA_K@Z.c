/*
 * XREFs of ??5?$basic_istream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@AEA_K@Z @ 0x1800318A0
 * Callers:
 *     _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x18002AF5C (_anonymous_namespace_--GetImpressionEventExpirationTime.c)
 * Callees:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x180026C7C (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     ?_Ipfx@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA_N_N@Z @ 0x1800336C0 (-_Ipfx@-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA_N_N@Z.c)
 *     ??$use_facet@V?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@@std@@YAAEBV?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@0@AEBVlocale@0@@Z @ 0x180037A20 (--$use_facet@V-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@@std@@YAAEBV-.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::basic_istream<unsigned short>::operator>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // r14
  void (__fastcall ***v7)(_QWORD, __int64); // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edx
  __int64 v11; // rcx
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // [rsp+50h] [rbp-58h] BYREF
  char v17; // [rsp+58h] [rbp-50h]
  __int64 v18; // [rsp+60h] [rbp-48h] BYREF
  bool v19; // [rsp+68h] [rbp-40h]
  __int64 v20; // [rsp+70h] [rbp-38h]
  _BYTE v22[40]; // [rsp+80h] [rbp-28h] BYREF
  int v24; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v25; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a1;
  v24 = 0;
  v20 = a1;
  v4 = *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 72);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  if ( (unsigned __int8)std::basic_istream<unsigned short>::_Ipfx(v3) )
  {
    v5 = **(_QWORD **)(*(int *)(*(_QWORD *)v3 + 4LL) + v3 + 64);
    v25 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = std::use_facet<std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>>(&v25);
    v7 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    if ( v7 )
      (**v7)(v7, 1LL);
    try
    {
      v8 = v3 + *(int *)(*(_QWORD *)v3 + 4LL);
      v16 = 0LL;
      v17 = 1;
      v18 = *(_QWORD *)(v8 + 72);
      v19 = v18 == 0;
      (*(void (__fastcall **)(__int64, _BYTE *, __int64 *, __int64 *, __int64, int *, __int64))(*(_QWORD *)v6 + 56LL))(
        v6,
        v22,
        &v18,
        &v16,
        v8,
        &v24,
        a2);
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
  if ( v24 )
  {
    v10 = v24 | *(_DWORD *)(v9 + 16);
    if ( !*(_QWORD *)(v9 + 72) )
      LOBYTE(v10) = v10 | 4;
    std::ios_base::clear((std::ios_base *)v9, v10, 0);
  }
  v11 = *(_QWORD *)(*(int *)(*(_QWORD *)v3 + 4LL) + v3 + 72);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return v3;
}
