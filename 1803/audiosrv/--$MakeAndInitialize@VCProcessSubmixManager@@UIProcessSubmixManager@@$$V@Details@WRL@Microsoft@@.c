/*
 * XREFs of ??$MakeAndInitialize@VCProcessSubmixManager@@UIProcessSubmixManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIProcessSubmixManager@@@Z @ 0x18005DF58
 * Callers:
 *     ?InitializeDeviceGraphManager@@YAJXZ @ 0x18005DF10 (-InitializeDeviceGraphManager@@YAJXZ.c)
 * Callees:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIProcessSubmixManager@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005E000 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIProcessS.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIProcessSubmixManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005E060 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIProcessSubmixMa.c)
 *     ??0CProcessSubmixManager@@QEAA@XZ @ 0x18005E0B4 (--0CProcessSubmixManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 Microsoft::WRL::Details::MakeAndInitialize<CProcessSubmixManager,IProcessSubmixManager,>()
{
  CProcessSubmixManager *v0; // rax
  CProcessSubmixManager *v1; // rbx
  __int64 (__fastcall *v2)(CProcessSubmixManager *, GUID *, CProcessSubmixManager **); // rax
  unsigned int Interface; // eax
  unsigned int v4; // edi
  void (__fastcall *v5)(CProcessSubmixManager *); // rax

  g_ProcessSubmixManager = 0LL;
  v0 = (CProcessSubmixManager *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v0 )
  {
    v1 = CProcessSubmixManager::CProcessSubmixManager(v0);
    v2 = **(__int64 (__fastcall ***)(CProcessSubmixManager *, GUID *, CProcessSubmixManager **))v1;
    if ( (char *)v2 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IProcessSubmixManager>::QueryInterface )
      Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IProcessSubmixManager>::QueryInterface(
                    v1,
                    &GUID_eb20673d_5f1b_4787_a403_1e0c470fbfb7,
                    &g_ProcessSubmixManager);
    else
      Interface = v2(v1, &GUID_eb20673d_5f1b_4787_a403_1e0c470fbfb7, &g_ProcessSubmixManager);
    v4 = Interface;
    v5 = *(void (__fastcall **)(CProcessSubmixManager *))(*(_QWORD *)v1 + 16LL);
    if ( (char *)v5 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IProcessSubmixManager>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IProcessSubmixManager>::Release(v1);
    else
      v5(v1);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
