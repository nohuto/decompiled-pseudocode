/*
 * XREFs of ??$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z @ 0x1800036C0
 * Callers:
 *     DllGetActivationFactory @ 0x180005260 (DllGetActivationFactory.c)
 * Callees:
 *     ??$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180001E80 (--$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCr.c)
 *     ?AddRef@CMemoryManager@System@Windows@@UEAAKXZ @ 0x180002F20 (-AddRef@CMemoryManager@System@Windows@@UEAAKXZ.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180003690 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?GetLock@ModuleBase@Details@WRL@Microsoft@@UEBAPEAU_RTL_SRWLOCK@@XZ @ 0x180003BE0 (-GetLock@ModuleBase@Details@WRL@Microsoft@@UEBAPEAU_RTL_SRWLOCK@@XZ.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x180003C30 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     __security_check_cookie @ 0x180007780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::GetActivationFactory<1>(
        Microsoft::WRL::Details::ModuleBase *this,
        __int64 a2,
        HSTRING a3,
        void **a4)
{
  int v5; // r14d
  PCWSTR StringRawBuffer; // rdi
  const struct Microsoft::WRL::Details::CreatorMap **(__fastcall *v9)(Microsoft::WRL::Details::ModuleBase *__hidden); // rax
  char *v10; // rax
  __int64 *v11; // rsi
  const struct Microsoft::WRL::Details::CreatorMap **(__fastcall *v12)(Microsoft::WRL::Details::ModuleBase *__hidden); // rax
  __int64 *v13; // rbx
  const unsigned __int16 *(*v14)(void); // rax
  const unsigned __int16 *v15; // r8
  unsigned __int16 *v16; // rax
  signed __int64 v17; // r8
  int v18; // ecx
  int v19; // edx
  __int64 v20; // rsi
  struct _RTL_SRWLOCK *(__fastcall *v21)(Microsoft::WRL::Details::ModuleBase *__hidden); // rax
  RTL_SRWLOCK *v22; // rdi
  void *v23; // rcx
  __int64 (__fastcall *v24)(Windows::System::CMemoryManager *, const struct _GUID *, void **); // rax
  __int64 v25; // r8
  Windows::System::CMemoryManager *v26; // r9
  __int64 v27; // r8
  void *v28; // r9
  volatile signed __int32 *v29; // rcx
  void (*v30)(void); // rax
  signed __int32 v32; // ebx
  int v33; // eax
  PVOID v34; // rbx
  struct _RTL_SRWLOCK *(__fastcall *v35)(Microsoft::WRL::Details::ModuleBase *__hidden); // rax
  RTL_SRWLOCK *Lock; // rax
  RTL_SRWLOCK *v37; // rdi
  void *v38; // rcx
  int v39; // [rsp+30h] [rbp-88h] BYREF
  PVOID Ptr; // [rsp+38h] [rbp-80h] BYREF
  BOOL hasEmbedNull; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v42[2]; // [rsp+48h] [rbp-70h] BYREF
  __int64 v43; // [rsp+68h] [rbp-50h]

  v5 = 0;
  *a4 = 0LL;
  if ( WindowsIsStringEmpty(a3) || WindowsStringHasEmbeddedNull(a3, &hasEmbedNull) < 0 || hasEmbedNull )
  {
    v42[0] = *(_OWORD *)L"pActivatibleClassId";
    v43 = *(_QWORD *)L"sId";
    v42[1] = *(_OWORD *)L"ibleClassId";
    RoOriginateErrorW(2147942487LL, 19LL, v42);
    return 2147942487LL;
  }
  else
  {
    StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
    v9 = *(const struct Microsoft::WRL::Details::CreatorMap **(__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_QWORD *)this + 40LL);
    if ( v9 == Microsoft::WRL::Details::ModuleBase::GetMidEntryPointer )
      v10 = (char *)&_pobjectentrymid;
    else
      v10 = (char *)v9(this);
    v11 = (__int64 *)(v10 + 8);
    v12 = *(const struct Microsoft::WRL::Details::CreatorMap **(__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_QWORD *)this + 48LL);
    if ( v12 == Microsoft::WRL::Details::ModuleBase::GetLastEntryPointer )
      v13 = (__int64 *)&_pobjectentrylast;
    else
      v13 = (__int64 *)v12(this);
    if ( v11 < v13 )
    {
      while ( 1 )
      {
        if ( *v11 )
        {
          v14 = *(const unsigned __int16 *(**)(void))(*v11 + 8);
          if ( v14 == Windows::System::CMemoryManager::InternalGetRuntimeClassNameStatic )
            v15 = L"Windows.System.MemoryManager";
          else
            v15 = v14 == Windows::System::CProcessMemoryReport::InternalGetRuntimeClassName
                ? L"Windows.System.ProcessMemoryReport"
                : v14();
          v16 = (unsigned __int16 *)StringRawBuffer;
          v17 = (char *)v15 - (char *)StringRawBuffer;
          do
          {
            v18 = *(unsigned __int16 *)((char *)v16 + v17);
            v19 = *v16 - v18;
            if ( v19 )
              break;
            ++v16;
          }
          while ( v18 );
          if ( !v19 )
            break;
        }
        if ( ++v11 >= v13 )
          goto LABEL_78;
      }
      v20 = *v11;
      *a4 = 0LL;
      v39 = 1;
      Ptr = 0LL;
      if ( **(_QWORD **)(v20 + 24) )
      {
        v21 = *(struct _RTL_SRWLOCK *(__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_QWORD *)this + 56LL);
        if ( v21 == Microsoft::WRL::Details::ModuleBase::GetLock )
          v22 = &Microsoft::WRL::Details::ModuleBase::moduleLock_;
        else
          v22 = v21(this);
        AcquireSRWLockShared(v22);
        v23 = **(void ***)(v20 + 24);
        if ( v23 )
        {
          Ptr = DecodePointer(v23);
          v24 = **(__int64 (__fastcall ***)(Windows::System::CMemoryManager *, const struct _GUID *, void **))Ptr;
          if ( v24 == Windows::System::CMemoryManager::QueryInterface )
          {
            *a4 = 0LL;
            if ( !InlineIsEqualGUID(
                    &GUID_00000035_0000_0000_c000_000000000046,
                    &GUID_00000000_0000_0000_c000_000000000046)
              && !InlineIsEqualGUID(
                    &GUID_00000035_0000_0000_c000_000000000046,
                    &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
            {
              if ( InlineIsEqualGUID(
                     &GUID_00000035_0000_0000_c000_000000000046,
                     &GUID_00000035_0000_0000_c000_000000000046) )
              {
                *a4 = v28;
              }
              else
              {
                if ( InlineIsEqualGUID(
                       &GUID_00000035_0000_0000_c000_000000000046,
                       &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90) )
                {
                  *a4 = (void *)v27;
                }
                else if ( InlineIsEqualGUID(
                            &GUID_00000035_0000_0000_c000_000000000046,
                            &GUID_00000003_0000_0000_c000_000000000046) )
                {
                  *a4 = (void *)v27;
                }
                else
                {
                  if ( InlineIsEqualGUID(
                         &GUID_00000035_0000_0000_c000_000000000046,
                         &GUID_5c6c279c_d7ca_4779_9188_4057219ce64c) )
                  {
                    *a4 = (void *)v27;
                  }
                  else if ( InlineIsEqualGUID(
                              &GUID_00000035_0000_0000_c000_000000000046,
                              &GUID_149b59ce_92ad_4e35_89eb_50dfb4c0d91c) )
                  {
                    *a4 = (void *)v27;
                  }
                  else if ( InlineIsEqualGUID(
                              &GUID_00000035_0000_0000_c000_000000000046,
                              &GUID_c5a94828_e84e_4886_8a0d_44b3190e3b72) )
                  {
                    *a4 = (void *)(v27 + 8);
                  }
                  else
                  {
                    v5 = -2147467262;
                  }
                  v5 >>= 31;
                }
                v5 = (v5 >> 31) & 0x80004002;
                if ( v5 < 0 )
                  goto LABEL_36;
              }
              v29 = (volatile signed __int32 *)*a4;
              v30 = *(void (**)(void))(*(_QWORD *)*a4 + 8LL);
              if ( (char *)v30 == (char *)Windows::System::CMemoryManager::AddRef )
              {
                v32 = _InterlockedIncrement(v29 + 29);
                if ( (v29[34] & 4) != 0 || v32 != 2 )
                  goto LABEL_36;
                v30 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
                if ( (char *)v30 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
                {
                  Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(
                    Microsoft::WRL::Details::ModuleBase::module_,
                    Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount,
                    v27,
                    v28);
                  goto LABEL_36;
                }
              }
LABEL_35:
              v30();
              goto LABEL_36;
            }
            *a4 = v26;
            v30 = *(void (**)(void))(*(_QWORD *)v26 + 8LL);
            if ( (char *)v30 != (char *)Windows::System::CMemoryManager::AddRef )
              goto LABEL_35;
            Windows::System::CMemoryManager::AddRef(
              v26,
              (__int64)Windows::System::CMemoryManager::AddRef,
              v25,
              (__int64)v26);
          }
          else
          {
            v5 = v24((Windows::System::CMemoryManager *)Ptr, &GUID_00000035_0000_0000_c000_000000000046, a4);
          }
LABEL_36:
          if ( v22 )
            ReleaseSRWLockShared(v22);
          return (unsigned int)v5;
        }
        if ( v22 )
          ReleaseSRWLockShared(v22);
      }
      if ( *(__int64 (__fastcall **)(_BYTE *, __int64, const struct _GUID *, void **))v20 == Microsoft::WRL::Details::CreateActivationFactory<Windows::System::CMemoryManager> )
        v33 = Microsoft::WRL::Details::CreateActivationFactory<Windows::System::CMemoryManager>(
                &v39,
                v20,
                &GUID_00000035_0000_0000_c000_000000000046,
                &Ptr);
      else
        v33 = (*(__int64 (__fastcall **)(int *, __int64, GUID *, PVOID *))v20)(
                &v39,
                v20,
                &GUID_00000035_0000_0000_c000_000000000046,
                &Ptr);
      if ( v33 < 0 )
      {
        return (unsigned int)v33;
      }
      else
      {
        if ( (v39 & 4) != 0 )
          goto LABEL_58;
        v34 = 0LL;
        v35 = *(struct _RTL_SRWLOCK *(__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_QWORD *)this + 56LL);
        if ( v35 == Microsoft::WRL::Details::ModuleBase::GetLock )
          Lock = Microsoft::WRL::Details::ModuleBase::GetLock(this);
        else
          Lock = v35(this);
        v37 = Lock;
        AcquireSRWLockExclusive(Lock);
        v38 = **(void ***)(v20 + 24);
        if ( v38 )
        {
          v34 = DecodePointer(v38);
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v34 + 8LL))(v34);
        }
        else
        {
          **(_QWORD **)(v20 + 24) = EncodePointer(Ptr);
        }
        if ( v37 )
          ReleaseSRWLockExclusive(v37);
        if ( v34 )
        {
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
        }
        else
        {
LABEL_58:
          v34 = Ptr;
        }
        *a4 = v34;
      }
      return (unsigned int)v5;
    }
LABEL_78:
    RoOriginateError(2147746065LL, 0LL);
    return 2147746065LL;
  }
}
