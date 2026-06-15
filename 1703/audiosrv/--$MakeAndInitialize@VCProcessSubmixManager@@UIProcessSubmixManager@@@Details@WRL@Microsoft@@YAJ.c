/*
 * XREFs of ??$MakeAndInitialize@VCProcessSubmixManager@@UIProcessSubmixManager@@@Details@WRL@Microsoft@@YAJPEAPEAUIProcessSubmixManager@@@Z @ 0x180037A38
 * Callers:
 *     ?InitializeDeviceGraphManager@@YAJXZ @ 0x1800379F0 (-InitializeDeviceGraphManager@@YAJXZ.c)
 * Callees:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIProcessSubmixManager@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037AE0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIProcessSubmixManager@@VNil@Details@WRL@Microso.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIProcessSubmixManager@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180037B50 (-Release@-$RuntimeClass@U-$InterfaceList@UIProcessSubmixManager@@VNil@Details@WRL@Microsoft@@@De.c)
 *     ??0CProcessSubmixManager@@QEAA@XZ @ 0x180037B70 (--0CProcessSubmixManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 Microsoft::WRL::Details::MakeAndInitialize<CProcessSubmixManager,IProcessSubmixManager>()
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
    if ( (char *)v2 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IProcessSubmixManager,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface )
      Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IProcessSubmixManager,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
                    v1,
                    &GUID_04312a1b_7a06_4e96_a2a1_da2d23a619d6,
                    &g_ProcessSubmixManager);
    else
      Interface = v2(v1, &GUID_04312a1b_7a06_4e96_a2a1_da2d23a619d6, &g_ProcessSubmixManager);
    v4 = Interface;
    v5 = *(void (__fastcall **)(CProcessSubmixManager *))(*(_QWORD *)v1 + 16LL);
    if ( (char *)v5 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IProcessSubmixManager,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IProcessSubmixManager,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v1);
    else
      v5(v1);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
