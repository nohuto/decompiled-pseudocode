/*
 * XREFs of ??1?$CActivationBasedCollection@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@UEAA@XZ @ 0x180017184
 * Callers:
 *     ??1CActivationBasedAppAndGlomCollection@@UEAA@XZ @ 0x180007C78 (--1CActivationBasedAppAndGlomCollection@@UEAA@XZ.c)
 *     ??_GCActivationBasedAppAndGlomCollection@@UEAAPEAXI@Z @ 0x180007CC0 (--_GCActivationBasedAppAndGlomCollection@@UEAAPEAXI@Z.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x180007D1C (--1CApplicationManager@@MEAA@XZ.c)
 *     ??_E?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@UEAAPEAXI@Z @ 0x1800173B0 (--_E-$CActivationBasedCollection@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@UEA.c)
 *     ??_GCImmersiveWindowManager@@MEAAPEAXI@Z @ 0x18002E0EC (--_GCImmersiveWindowManager@@MEAAPEAXI@Z.c)
 *     ??_ECCharmsWindowManager@@MEAAPEAXI@Z @ 0x18003B410 (--_ECCharmsWindowManager@@MEAAPEAXI@Z.c)
 *     _CApplicationManager::_CApplicationManager_::_1_::dtor$18 @ 0x180197C6B (_CApplicationManager--_CApplicationManager_--_1_--dtor$18.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::~CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>(
        __int64 a1)
{
  unsigned __int64 i; // rdi
  __int64 v3; // rax
  __int64 v4; // rcx

  *(_QWORD *)a1 = &CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::`vftable';
  if ( *(_QWORD *)(a1 + 8) )
  {
    for ( i = 0LL; i < *(_QWORD *)(a1 + 16); ++i )
    {
      v3 = *(_QWORD *)(a1 + 8);
      v4 = *(_QWORD *)(v3 + 8 * i);
      if ( v4 )
      {
        *(_QWORD *)(v3 + 8 * i) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
    }
    CoTaskMemFree(*(LPVOID *)(a1 + 8));
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
}
