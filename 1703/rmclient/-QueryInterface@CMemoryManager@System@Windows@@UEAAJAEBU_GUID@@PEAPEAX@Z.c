/*
 * XREFs of ?QueryInterface@CMemoryManager@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800038B0
 * Callers:
 *     ?QueryInterface@CMemoryManager@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180008240 (-QueryInterface@CMemoryManager@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180008250 (-QueryInterface@CMemoryManager@System@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180008260 (-QueryInterface@CMemoryManager@System@Windows@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?AddRef@CMemoryManager@System@Windows@@UEAAKXZ @ 0x180002F80 (-AddRef@CMemoryManager@System@Windows@@UEAAKXZ.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180003A00 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@U?$InterfaceList@UIMemoryManagerStatics2@System@Windows@@U?$InterfaceList@UIMemoryManagerStatics3@System@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180003A30 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@U-$InterfaceList@UIMemory.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x180003AA0 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::QueryInterface(
        Windows::System::CMemoryManager *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int CanCastTo; // ebx
  unsigned int Data1; // eax
  __int64 v5; // r10
  char *v6; // r11
  volatile signed __int32 *v7; // rcx
  __int64 (*v8)(void); // rax
  signed __int32 v10; // eax

  CanCastTo = 0;
  *a3 = 0LL;
  Data1 = a2->Data1;
  if ( (*(_QWORD *)&a2->Data1 != __PAIR64__(*(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2, 0)
     || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
     || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4])
    && (Data1 != -1350114592
     || *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
     || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
     || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4]) )
  {
    if ( Data1 == 53
      && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data2
      && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000035_0000_0000_c000_000000000046.Data4
      && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000035_0000_0000_c000_000000000046.Data4[4] )
    {
      *a3 = this;
    }
    else if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_5c6c279c_d7ca_4779_9188_4057219ce64c) )
    {
      *a3 = v6;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,Microsoft::WRL::Details::InterfaceList<Windows::System::IMemoryManagerStatics2,Microsoft::WRL::Details::InterfaceList<Windows::System::IMemoryManagerStatics3,Microsoft::WRL::Details::Nil>>,1,0>::CanCastTo(
                    v6 + 8,
                    v5,
                    a3);
      if ( (CanCastTo & 0x80000000) != 0 )
        return CanCastTo;
    }
    v7 = (volatile signed __int32 *)*a3;
    v8 = *(__int64 (**)(void))(*(_QWORD *)*a3 + 8LL);
    if ( (char *)v8 == (char *)Windows::System::CMemoryManager::AddRef )
    {
      v10 = _InterlockedIncrement(v7 + 9);
      if ( (v7[14] & 4) != 0 || v10 != 2 )
        return CanCastTo;
      v8 = *(__int64 (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
      if ( v8 == Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
      {
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount();
        return CanCastTo;
      }
    }
LABEL_7:
    v8();
    return CanCastTo;
  }
  *a3 = this;
  v8 = *(__int64 (**)(void))(*(_QWORD *)this + 8LL);
  if ( (char *)v8 != (char *)Windows::System::CMemoryManager::AddRef )
    goto LABEL_7;
  Windows::System::CMemoryManager::AddRef(this);
  return 0LL;
}
