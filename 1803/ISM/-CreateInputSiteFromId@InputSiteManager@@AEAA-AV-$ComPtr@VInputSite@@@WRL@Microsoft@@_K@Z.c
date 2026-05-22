/*
 * XREFs of ?CreateInputSiteFromId@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@_K@Z @ 0x18000BEFC
 * Callers:
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@_K@Z @ 0x18000BAF0 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@_K@Z.c)
 * Callees:
 *     ??$emplace_back@PEAVInputSite@@@?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@QEAAAEAPEAVInputSite@@$$QEAPEAV2@@Z @ 0x18000C368 (--$emplace_back@PEAVInputSite@@@-$vector@PEAVInputSite@@V-$allocator@PEAVInputSite@@@std@@@std@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800E210C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall InputSiteManager::CreateInputSiteFromId(__int64 a1, _QWORD *a2, __int64 a3)
{
  _DWORD *v6; // rbx
  _DWORD *v8; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v9; // [rsp+58h] [rbp+10h]

  v9 = a2;
  *a2 = 0LL;
  v6 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    if ( a1 )
      (**(void (__fastcall ***)(__int64))a1)(a1);
    v6[3] = 1;
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v6 = &InputSite::`vftable';
    *((_QWORD *)v6 + 2) = a3;
    *((_QWORD *)v6 + 3) = 0LL;
    *((_QWORD *)v6 + 4) = 0LL;
    *((_QWORD *)v6 + 5) = 0LL;
    *((_QWORD *)v6 + 6) = a1;
    if ( a1 )
    {
      (**(void (__fastcall ***)(__int64))a1)(a1);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    }
    if ( *a2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
    *a2 = v6;
  }
  else
  {
    v6 = (_DWORD *)*a2;
  }
  v8 = v6;
  std::vector<InputSite *>::emplace_back<InputSite *>(a1 + 56, &v8);
  return a2;
}
