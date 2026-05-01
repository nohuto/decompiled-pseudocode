/*
 * XREFs of ??1?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@UEAA@XZ @ 0x180037CE4
 * Callers:
 *     ??_GCClassicWindowManager@@MEAAPEAXI@Z @ 0x180034480 (--_GCClassicWindowManager@@MEAAPEAXI@Z.c)
 *     ??_ECClassicWindowActivationBasedCollection@@UEAAPEAXI@Z @ 0x180034810 (--_ECClassicWindowActivationBasedCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::~CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>(
        __int64 a1)
{
  unsigned __int64 i; // rdi
  __int64 v3; // rax
  __int64 v4; // rcx

  *(_QWORD *)a1 = &CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::`vftable';
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
