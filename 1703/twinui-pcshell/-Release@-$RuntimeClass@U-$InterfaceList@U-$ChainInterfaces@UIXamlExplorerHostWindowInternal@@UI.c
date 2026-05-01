/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@U?$ChainInterfaces@UIXamlExplorerHostWindowInternal@@UIXamlExplorerHostWindow@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800D1540
 * Callers:
 *     ??_GPrivilegedOperationsService@@UEAAPEAXI@Z @ 0x1800D0C4C (--_GPrivilegedOperationsService@@UEAAPEAXI@Z.c)
 *     ??1?$PrivilegedOperationsServiceBase@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@@@QEAA@XZ @ 0x1800D0D5C (--1-$PrivilegedOperationsServiceBase@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOp.c)
 *     ??$MakeAndInitialize@VCPrivilegedDesktopOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCPrivilegedDesktopOperations@@@WRL@Microsoft@@@012@$$QEAPEAVIamAccess@@AEAVWeakRef@12@@Z @ 0x1800D2640 (--$MakeAndInitialize@VCPrivilegedDesktopOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@.c)
 *     ??$MakeAndInitialize@VCPrivilegedArrangementOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCPrivilegedArrangementOperations@@@WRL@Microsoft@@@012@$$QEAPEAVIamAccess@@AEAVWeakRef@12@@Z @ 0x1800D2970 (--$MakeAndInitialize@VCPrivilegedArrangementOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Micros.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$ChainInterfaces@UIXamlExplorerHostWindowInternal@@UIXamlExplorerHostWindow@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800D3190 (-Release@-$RuntimeClass@U-$InterfaceList@U-$ChainInterfaces@UIXamlExplorerHostWindo_ea_1800D3190.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IXamlExplorerHostWindowInternal,IXamlExplorerHostWindow,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        volatile signed __int32 *a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  unsigned int v3; // ebx

  v1 = 0x7FFFFFFFLL;
  do
    v2 = *((unsigned int *)a1 + 9);
  while ( (_DWORD)v2 != 0x7FFFFFFF && (_DWORD)v2 != _InterlockedCompareExchange(a1 + 9, v2 - 1, v2) );
  v3 = v2 - 1;
  if ( (_DWORD)v2 == 1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, __int64))(*(_QWORD *)a1 + 64LL))(
        a1,
        1LL,
        v2,
        0x7FFFFFFFLL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, _QWORD, __int64, __int64))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(
        Microsoft::WRL::Details::ModuleBase::module_,
        *(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_,
        v2,
        v1);
  }
  return v3;
}
