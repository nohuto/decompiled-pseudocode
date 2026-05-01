/*
 * XREFs of ?QueryInterface@CMemoryManager@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800031D0
 * Callers:
 *     ?QueryInterface@CMemoryManager@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180007DD0 (-QueryInterface@CMemoryManager@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180007DE0 (-QueryInterface@CMemoryManager@System@Windows@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180007DF0 (-QueryInterface@CMemoryManager@System@Windows@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180007E00 (-QueryInterface@CMemoryManager@System@Windows@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180007E10 (-QueryInterface@CMemoryManager@System@Windows@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180003360 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800075C4 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180007B90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::QueryInterface(
        Windows::System::CMemoryManager *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  const struct _GUID *v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r10
  const struct _GUID *v7; // rcx
  volatile int *v8; // rdx
  const struct _GUID *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r10
  const struct _GUID *v12; // rcx
  __int64 v13; // r10
  int v14; // eax
  int IsEqualGUID; // eax
  const struct _GUID *v16; // rcx
  __int64 v17; // r10
  int v18; // r11d
  const struct _GUID *v19; // rcx
  __int64 v20; // r10
  const struct _GUID *v21; // rcx
  __int64 v22; // r10
  const struct _GUID *v23; // rcx
  __int64 v24; // r10
  __int64 v25; // r10
  __int64 (*v26)(void); // rax
  unsigned int v27; // eax
  __int64 v28; // r10

  v3 = 0;
  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || (unsigned int)InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v5 = v6;
    v26 = *(__int64 (**)(void))(*(_QWORD *)v6 + 8LL);
  }
  else
  {
    if ( (unsigned int)InlineIsEqualGUID(v7, &GUID_00000035_0000_0000_c000_000000000046) )
    {
      *(_QWORD *)v10 = v11;
    }
    else
    {
      if ( (unsigned int)InlineIsEqualGUID(v9, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90) )
      {
        *(_QWORD *)v10 = v13;
        v14 = 0;
      }
      else
      {
        IsEqualGUID = InlineIsEqualGUID(v12, &GUID_00000003_0000_0000_c000_000000000046);
        v18 = -2147467262;
        if ( IsEqualGUID )
        {
          *(_QWORD *)v10 = v17;
          v14 = 0;
        }
        else if ( (unsigned int)InlineIsEqualGUID(v16, &GUID_5c6c279c_d7ca_4779_9188_4057219ce64c) )
        {
          *(_QWORD *)v10 = v20;
          v14 = 0;
        }
        else
        {
          if ( (unsigned int)InlineIsEqualGUID(v19, &GUID_6eee351f_6d62_423f_9479_b01f9c9f7669) )
          {
            *(_QWORD *)v10 = v22;
            v14 = 0;
          }
          else if ( (unsigned int)InlineIsEqualGUID(v21, &GUID_149b59ce_92ad_4e35_89eb_50dfb4c0d91c) )
          {
            *(_QWORD *)v10 = v24;
            v14 = 0;
          }
          else if ( (unsigned int)InlineIsEqualGUID(v23, &GUID_c5a94828_e84e_4886_8a0d_44b3190e3b72) )
          {
            *(_QWORD *)v10 = v25 + 8;
            v14 = 0;
          }
          else
          {
            v14 = v18;
          }
          if ( v14 == v18 )
            v14 = v18;
        }
        if ( v14 == v18 )
          v14 = v18;
      }
      v3 = v14;
      if ( v14 < 0 )
        return v3;
    }
    v26 = *(__int64 (**)(void))(**(_QWORD **)v10 + 8LL);
    if ( (char *)v26 == (char *)Windows::System::CMemoryManager::AddRef )
    {
      v27 = Microsoft::WRL::Details::SafeUnknownIncrementReference(
              (Microsoft::WRL::Details *)(*(_QWORD *)v10 + 108LL),
              v8);
      if ( (*(_BYTE *)(v28 + 128) & 4) != 0 || v27 != 2 )
        return v3;
      v26 = *(__int64 (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
      if ( v26 == Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
      {
        _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
        return v3;
      }
    }
  }
  v26();
  return v3;
}
