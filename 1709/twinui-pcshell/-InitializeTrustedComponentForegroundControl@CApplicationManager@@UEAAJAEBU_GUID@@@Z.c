/*
 * XREFs of ?InitializeTrustedComponentForegroundControl@CApplicationManager@@UEAAJAEBU_GUID@@@Z @ 0x18000FCD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UITrustedComponentForegroundControl@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002E000 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18002E000.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::InitializeTrustedComponentForegroundControl(
        CApplicationManager *this,
        const struct _GUID *a2)
{
  HRESULT Instance; // edi
  unsigned int v5; // r8d
  struct CApplicationManager::TRUSTED_COMPONENT_REGISTRATION near **i; // r9
  LPVOID *ppv; // r14
  LPVOID v8; // rcx
  unsigned __int64 v9; // rsi
  Microsoft::WRL::FtmBase *v10; // rbx
  Microsoft::WRL::FtmBase *v11; // rax
  Microsoft::WRL::FtmBase *v12; // rdi
  __int64 v13; // rcx
  Microsoft::WRL::FtmBase *v15; // [rsp+30h] [rbp-28h]
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  Instance = -2147024891;
  v5 = 0;
  for ( i = &CApplicationManager::s_rgTrustedComponentRegMap;
        *(_QWORD *)*i != *(_QWORD *)&a2->Data1 || *((_QWORD *)*i + 1) != *(_QWORD *)a2->Data4;
        i += 2 )
  {
    if ( ++v5 >= 0xB )
      return (unsigned int)Instance;
  }
  ppv = (LPVOID *)(&CApplicationManager::s_rgTrustedComponentRegMap + 2 * v5 + 1);
  v8 = *ppv;
  if ( *ppv )
  {
    *ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v8 + 16LL))(v8);
  }
  Instance = CoCreateInstance(a2, 0LL, 0x401u, &GUID_5fefbb8e_82c3_4ec4_93a0_05c4b9fcd4cd, ppv);
  if ( Instance >= 0 )
  {
    v9 = ((unsigned __int64)this - 120) & -(__int64)(this != (CApplicationManager *)280);
    v16 = 0LL;
    v10 = 0LL;
    v15 = 0LL;
    v11 = (Microsoft::WRL::FtmBase *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v11;
    if ( v11 )
    {
      Microsoft::WRL::FtmBase::FtmBase(v11);
      *((_DWORD *)v12 + 13) = 1;
      *(_QWORD *)v12 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,ITrustedComponentForegroundControl>::`vftable'{for `Microsoft::WRL::FtmBase'};
      *((_QWORD *)v12 + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,ITrustedComponentForegroundControl>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITrustedComponentForegroundControl>'};
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *(_QWORD *)v12 = &CTrustedComponentForegroundControl::`vftable'{for `Microsoft::WRL::FtmBase'};
      *((_QWORD *)v12 + 5) = &CTrustedComponentForegroundControl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITrustedComponentForegroundControl>'};
      *((_QWORD *)v12 + 7) = v9;
      if ( v9 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 8LL))(v9);
      v10 = v12;
      v15 = v12;
    }
    Instance = v10 == 0LL ? 0x8007000E : 0;
    if ( v10 )
    {
      Instance = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,ITrustedComponentForegroundControl>::QueryInterface(
                   v10,
                   &GUID_2a74d8da_47f0_47be_b3e6_195778432fb4,
                   &v16);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v10 + 13, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(Microsoft::WRL::FtmBase *, __int64))(*(_QWORD *)v15 + 72LL))(v15, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
    if ( Instance >= 0 )
      Instance = (*(__int64 (__fastcall **)(LPVOID, __int64))(*(_QWORD *)*ppv + 24LL))(*ppv, v16);
    v13 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  return (unsigned int)Instance;
}
