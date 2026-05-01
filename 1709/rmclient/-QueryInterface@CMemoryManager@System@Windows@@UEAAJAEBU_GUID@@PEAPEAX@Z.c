/*
 * XREFs of ?QueryInterface@CMemoryManager@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800034E0
 * Callers:
 *     ?QueryInterface@CMemoryManager@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800084D0 (-QueryInterface@CMemoryManager@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800084E0 (-QueryInterface@CMemoryManager@System@Windows@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800084F0 (-QueryInterface@CMemoryManager@System@Windows@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180008500 (-QueryInterface@CMemoryManager@System@Windows@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180008510 (-QueryInterface@CMemoryManager@System@Windows@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?AddRef@CMemoryManager@System@Windows@@UEAAKXZ @ 0x180002F20 (-AddRef@CMemoryManager@System@Windows@@UEAAKXZ.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180003690 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x180003C30 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::QueryInterface(
        Windows::System::CMemoryManager *this,
        const struct _GUID *a2,
        void **a3)
{
  int v3; // ebx
  const struct _GUID *v4; // rcx
  Windows::System::CMemoryManager **v5; // r8
  __int64 v6; // r9
  Windows::System::CMemoryManager *v7; // r10
  const struct _GUID *v8; // rcx
  const struct _GUID *v9; // rcx
  __int64 *v10; // r8
  _DWORD *v11; // r9
  __int64 v12; // r10
  const struct _GUID *v13; // rcx
  __int64 v14; // r10
  const struct _GUID *v15; // rcx
  __int64 v16; // r10
  const struct _GUID *v17; // rcx
  __int64 v18; // r10
  __int64 v19; // rcx
  void (*v20)(void); // rax
  __int64 v22; // r10
  signed __int32 v23; // eax
  const struct _GUID *v24; // rcx
  __int64 v25; // r10
  __int64 v26; // r10

  v3 = 0;
  *a3 = 0LL;
  if ( !(unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    && !(unsigned int)InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    if ( (unsigned int)InlineIsEqualGUID(v8, &GUID_00000035_0000_0000_c000_000000000046) )
    {
      *v10 = v12;
    }
    else
    {
      if ( (unsigned int)InlineIsEqualGUID(v9, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90) )
      {
        *v10 = v14;
      }
      else if ( (unsigned int)InlineIsEqualGUID(v13, &GUID_00000003_0000_0000_c000_000000000046) )
      {
        *v10 = v16;
      }
      else
      {
        if ( (unsigned int)InlineIsEqualGUID(v15, &GUID_5c6c279c_d7ca_4779_9188_4057219ce64c) )
        {
          *v10 = v18;
        }
        else
        {
          v22 = v18 + 8;
          if ( *v11 == 1861104927
            && v11[1] == *(_DWORD *)&GUID_6eee351f_6d62_423f_9479_b01f9c9f7669.Data2
            && v11[2] == *(_DWORD *)GUID_6eee351f_6d62_423f_9479_b01f9c9f7669.Data4
            && v11[3] == *(_DWORD *)&GUID_6eee351f_6d62_423f_9479_b01f9c9f7669.Data4[4] )
          {
            *v10 = v22;
          }
          else if ( (unsigned int)InlineIsEqualGUID(v17, &GUID_149b59ce_92ad_4e35_89eb_50dfb4c0d91c) )
          {
            *v10 = v25;
          }
          else if ( (unsigned int)InlineIsEqualGUID(v24, &GUID_c5a94828_e84e_4886_8a0d_44b3190e3b72) )
          {
            *v10 = v26 + 8;
          }
          else
          {
            v3 = -2147467262;
          }
        }
        v3 >>= 31;
      }
      v3 = (v3 >> 31) & 0x80004002;
      if ( v3 < 0 )
        return (unsigned int)v3;
    }
    v19 = *v10;
    v20 = *(void (**)(void))(*(_QWORD *)*v10 + 8LL);
    if ( (char *)v20 == (char *)Windows::System::CMemoryManager::AddRef )
    {
      v23 = _InterlockedIncrement((volatile signed __int32 *)(v19 + 116));
      if ( (*(_BYTE *)(v19 + 136) & 4) != 0 || v23 != 2 )
        return (unsigned int)v3;
      v20 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
      if ( (char *)v20 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
      {
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(
          Microsoft::WRL::Details::ModuleBase::module_,
          Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount,
          v10,
          v11);
        return (unsigned int)v3;
      }
    }
LABEL_11:
    v20();
    return (unsigned int)v3;
  }
  *v5 = v7;
  v20 = *(void (**)(void))(*(_QWORD *)v7 + 8LL);
  if ( (char *)v20 != (char *)Windows::System::CMemoryManager::AddRef )
    goto LABEL_11;
  Windows::System::CMemoryManager::AddRef(v7, (__int64)Windows::System::CMemoryManager::AddRef, (__int64)v5, v6);
  return 0LL;
}
