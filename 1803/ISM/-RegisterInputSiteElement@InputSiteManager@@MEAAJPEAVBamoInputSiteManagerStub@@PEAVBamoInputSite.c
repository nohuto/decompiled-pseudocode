/*
 * XREFs of ?RegisterInputSiteElement@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSiteElementProxy@@@Z @ 0x18000BDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@_K@Z @ 0x18000BAF0 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@_K@Z.c)
 *     ??$emplace_back@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@QEAAAEAV?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@$$QEAV234@@Z @ 0x18000C08C (--$emplace_back@V-$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VInputSite.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputSiteManager::RegisterInputSiteElement(
        InputSiteManager *this,
        struct BamoInputSiteManagerStub *a2,
        struct BamoInputSiteElementProxy *a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  struct BamoInputSiteElementProxy *v11; // [rsp+50h] [rbp+18h] BYREF

  v5 = (*(__int64 (__fastcall **)(char *, struct BamoInputSiteManagerStub *))(*((_QWORD *)a3 + 1) + 24LL))(
         (char *)a3 + 8,
         a2);
  InputSiteManager::GetInputSiteFromId((__int64)this, &v10, v5);
  v6 = *((_QWORD *)a3 + 11);
  v7 = v10;
  if ( v6 != v10 )
  {
    if ( v10 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v6 = *((_QWORD *)a3 + 11);
    }
    *((_QWORD *)a3 + 11) = v7;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  (*(void (__fastcall **)(struct BamoInputSiteElementProxy *))(*(_QWORD *)a3 + 64LL))(a3);
  (*(void (__fastcall **)(struct BamoInputSiteElementProxy *))(*(_QWORD *)a3 + 72LL))(a3);
  (*(void (__fastcall **)(struct BamoInputSiteElementProxy *))(*(_QWORD *)a3 + 80LL))(a3);
  (*(void (__fastcall **)(struct BamoInputSiteElementProxy *))(*(_QWORD *)a3 + 88LL))(a3);
  v11 = a3;
  (**(void (__fastcall ***)(struct BamoInputSiteElementProxy *))a3)(a3);
  std::vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>::emplace_back<Microsoft::WRL::ComPtr<InputSiteElementProxy>>(
    (char *)this + 80,
    &v11);
  if ( v11 )
    (*(void (__fastcall **)(struct BamoInputSiteElementProxy *))(*(_QWORD *)v11 + 8LL))(v11);
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return 0LL;
}
