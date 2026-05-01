/*
 * XREFs of ??$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z @ 0x180002580
 * Callers:
 *     DllGetActivationFactory @ 0x180006220 (DllGetActivationFactory.c)
 * Callees:
 *     ??$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800013C0 (--$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCr.c)
 *     ?GetLock@ModuleBase@Details@WRL@Microsoft@@UEBAPEAU_RTL_SRWLOCK@@XZ @ 0x180002AF0 (-GetLock@ModuleBase@Details@WRL@Microsoft@@UEBAPEAU_RTL_SRWLOCK@@XZ.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180003360 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     __security_check_cookie @ 0x180006FE0 (__security_check_cookie.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800075C4 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180007B90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::GetActivationFactory<1>(
        Microsoft::WRL::Details::ModuleBase *this,
        __int64 a2,
        HSTRING a3,
        PVOID *a4)
{
  unsigned int v5; // edi
  PCWSTR StringRawBuffer; // rax
  __int64 v9; // rcx
  PCWSTR v10; // rbp
  const struct Microsoft::WRL::Details::CreatorMap **(__fastcall *v11)(Microsoft::WRL::Details::ModuleBase *__hidden); // rax
  char *v12; // rax
  __int64 *v13; // rbx
  const struct Microsoft::WRL::Details::CreatorMap **(__fastcall *v14)(Microsoft::WRL::Details::ModuleBase *__hidden); // rax
  char *v15; // rsi
  const unsigned __int16 *(*v16)(void); // rax
  const unsigned __int16 *v17; // rax
  PCWSTR v18; // rcx
  char *v19; // rax
  int v20; // edx
  int v21; // r8d
  __int64 result; // rax
  __int64 v23; // rsi
  struct _RTL_SRWLOCK *(__fastcall *v24)(Microsoft::WRL::Details::ModuleBase *__hidden); // rax
  RTL_SRWLOCK *v25; // rbx
  void *v26; // rcx
  int (*v27)(Windows::System::CMemoryManager *__hidden, const struct _GUID *, void **); // rax
  void *v28; // r9
  volatile int *v29; // rdx
  void *v30; // r9
  void *v31; // r9
  int v32; // eax
  int IsEqualGUID; // eax
  void *v34; // r9
  int v35; // r10d
  void *v36; // r9
  void *v37; // r8
  void *v38; // r8
  __int64 v39; // r8
  unsigned int (__fastcall *v40)(Windows::System::CMemoryManager *__hidden); // rax
  unsigned int v41; // eax
  __int64 v42; // r10
  void (*v43)(void); // rax
  PVOID v44; // rbx
  struct _RTL_SRWLOCK *(__fastcall *v45)(Microsoft::WRL::Details::ModuleBase *__hidden); // rax
  RTL_SRWLOCK *Lock; // rax
  RTL_SRWLOCK *v47; // rbp
  void *v48; // rcx
  int v49; // [rsp+30h] [rbp-88h] BYREF
  PVOID Ptr; // [rsp+38h] [rbp-80h] BYREF
  BOOL hasEmbedNull; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v52[2]; // [rsp+48h] [rbp-70h] BYREF
  __int64 v53; // [rsp+68h] [rbp-50h]

  v5 = 0;
  *a4 = 0LL;
  if ( WindowsIsStringEmpty(a3) || WindowsStringHasEmbeddedNull(a3, &hasEmbedNull) < 0 || hasEmbedNull )
  {
    v52[0] = *(_OWORD *)L"pActivatibleClassId";
    v53 = *(_QWORD *)L"sId";
    v52[1] = *(_OWORD *)L"ibleClassId";
    RoOriginateErrorW(2147942487LL, 19LL, v52);
    return 2147942487LL;
  }
  else
  {
    StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
    v9 = *(_QWORD *)this;
    v10 = StringRawBuffer;
    v11 = *(const struct Microsoft::WRL::Details::CreatorMap **(__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_QWORD *)this + 40LL);
    if ( v11 == Microsoft::WRL::Details::ModuleBase::GetMidEntryPointer )
    {
      v12 = (char *)&_pobjectentrymid;
    }
    else
    {
      v12 = (char *)v11(this);
      v9 = *(_QWORD *)this;
    }
    v13 = (__int64 *)(v12 + 8);
    v14 = *(const struct Microsoft::WRL::Details::CreatorMap **(__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(v9 + 48);
    if ( v14 == Microsoft::WRL::Details::ModuleBase::GetLastEntryPointer )
      v15 = _pobjectentrylast;
    else
      v15 = (char *)v14(this);
    if ( v13 >= (__int64 *)v15 )
    {
LABEL_22:
      RoOriginateError(2147746065LL, 0LL);
      return 2147746065LL;
    }
    else
    {
      while ( 1 )
      {
        if ( *v13 )
        {
          v16 = *(const unsigned __int16 *(**)(void))(*v13 + 8);
          if ( v16 == Windows::System::CMemoryManager::InternalGetRuntimeClassNameStatic )
            v17 = L"Windows.System.MemoryManager";
          else
            v17 = v16 == Windows::System::CProcessMemoryReport::InternalGetRuntimeClassName
                ? L"Windows.System.ProcessMemoryReport"
                : (const unsigned __int16 *)((__int64 (__fastcall *)(const unsigned __int16 *(*)(void), const unsigned __int16 *(*)(void)))v16)(
                                              Windows::System::CProcessMemoryReport::InternalGetRuntimeClassName,
                                              Windows::System::CMemoryManager::InternalGetRuntimeClassNameStatic);
          v18 = v10;
          v19 = (char *)((char *)v17 - (char *)v10);
          do
          {
            v20 = *(unsigned __int16 *)&v19[(_QWORD)v18];
            v21 = *v18 - v20;
            if ( v21 )
              break;
            ++v18;
          }
          while ( v20 );
          if ( !v21 )
            break;
        }
        if ( ++v13 >= (__int64 *)v15 )
          goto LABEL_22;
      }
      v23 = *v13;
      v49 = 1;
      *a4 = 0LL;
      Ptr = 0LL;
      if ( **(_QWORD **)(v23 + 24) )
      {
        v24 = *(struct _RTL_SRWLOCK *(__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_QWORD *)this + 56LL);
        if ( v24 == Microsoft::WRL::Details::ModuleBase::GetLock )
          v25 = &Microsoft::WRL::Details::ModuleBase::moduleLock_;
        else
          v25 = v24(this);
        AcquireSRWLockShared(v25);
        v26 = **(void ***)(v23 + 24);
        if ( v26 )
        {
          Ptr = DecodePointer(v26);
          v27 = **(int (***)(Windows::System::CMemoryManager *__hidden, const struct _GUID *, void **))Ptr;
          if ( v27 != Windows::System::CMemoryManager::QueryInterface )
          {
            v5 = ((__int64 (__fastcall *)(PVOID, GUID *, PVOID *))v27)(
                   Ptr,
                   &GUID_00000035_0000_0000_c000_000000000046,
                   a4);
            goto LABEL_61;
          }
          *a4 = 0LL;
          if ( (unsigned int)InlineIsEqualGUID(
                               &GUID_00000035_0000_0000_c000_000000000046,
                               &GUID_00000000_0000_0000_c000_000000000046)
            || (unsigned int)InlineIsEqualGUID(
                               &GUID_00000035_0000_0000_c000_000000000046,
                               &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
          {
            *a4 = v28;
            v43 = *(void (**)(void))(*(_QWORD *)v28 + 8LL);
LABEL_59:
            v43();
            goto LABEL_61;
          }
          if ( (unsigned int)InlineIsEqualGUID(
                               &GUID_00000035_0000_0000_c000_000000000046,
                               &GUID_00000035_0000_0000_c000_000000000046) )
          {
            *a4 = v30;
          }
          else
          {
            if ( (unsigned int)InlineIsEqualGUID(
                                 &GUID_00000035_0000_0000_c000_000000000046,
                                 &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90) )
            {
              *a4 = v31;
              v32 = 0;
            }
            else
            {
              IsEqualGUID = InlineIsEqualGUID(
                              &GUID_00000035_0000_0000_c000_000000000046,
                              &GUID_00000003_0000_0000_c000_000000000046);
              v35 = -2147467262;
              if ( IsEqualGUID )
              {
                *a4 = v34;
                v32 = 0;
              }
              else if ( (unsigned int)InlineIsEqualGUID(
                                        &GUID_00000035_0000_0000_c000_000000000046,
                                        &GUID_5c6c279c_d7ca_4779_9188_4057219ce64c) )
              {
                *a4 = v36;
                v32 = 0;
              }
              else
              {
                if ( (unsigned int)InlineIsEqualGUID(
                                     &GUID_00000035_0000_0000_c000_000000000046,
                                     &GUID_6eee351f_6d62_423f_9479_b01f9c9f7669) )
                {
                  *a4 = v37;
                  v32 = 0;
                }
                else if ( (unsigned int)InlineIsEqualGUID(
                                          &GUID_00000035_0000_0000_c000_000000000046,
                                          &GUID_149b59ce_92ad_4e35_89eb_50dfb4c0d91c) )
                {
                  *a4 = v38;
                  v32 = 0;
                }
                else if ( (unsigned int)InlineIsEqualGUID(
                                          &GUID_00000035_0000_0000_c000_000000000046,
                                          &GUID_c5a94828_e84e_4886_8a0d_44b3190e3b72) )
                {
                  *a4 = (PVOID)(v39 + 8);
                  v32 = 0;
                }
                else
                {
                  v32 = v35;
                }
                if ( v32 == v35 )
                  v32 = v35;
              }
              if ( v32 == v35 )
                v32 = v35;
            }
            v5 = v32;
            if ( v32 < 0 )
              goto LABEL_61;
          }
          v40 = *(unsigned int (__fastcall **)(Windows::System::CMemoryManager *__hidden))(*(_QWORD *)*a4 + 8LL);
          if ( v40 != Windows::System::CMemoryManager::AddRef )
          {
            v40((Windows::System::CMemoryManager *)*a4);
            goto LABEL_61;
          }
          v41 = Microsoft::WRL::Details::SafeUnknownIncrementReference(
                  (Microsoft::WRL::Details *)((char *)*a4 + 108),
                  v29);
          if ( (*(_BYTE *)(v42 + 128) & 4) == 0 && v41 == 2 )
          {
            v43 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
            if ( (char *)v43 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
            {
              _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
              goto LABEL_61;
            }
            goto LABEL_59;
          }
LABEL_61:
          if ( v25 )
          {
            ReleaseSRWLockShared(v25);
            return v5;
          }
          return v5;
        }
        if ( v25 )
          ReleaseSRWLockShared(v25);
      }
      if ( *(__int64 (__fastcall **)(int *, __int64, __int64, __int64))v23 == Microsoft::WRL::Details::CreateActivationFactory<Windows::System::CMemoryManager> )
        result = Microsoft::WRL::Details::CreateActivationFactory<Windows::System::CMemoryManager>(
                   &v49,
                   v23,
                   (__int64)&GUID_00000035_0000_0000_c000_000000000046,
                   (__int64)&Ptr);
      else
        result = (*(__int64 (__fastcall **)(int *, __int64, GUID *, PVOID *))v23)(
                   &v49,
                   v23,
                   &GUID_00000035_0000_0000_c000_000000000046,
                   &Ptr);
      if ( (int)result >= 0 )
      {
        if ( (v49 & 4) == 0 )
        {
          v44 = 0LL;
          v45 = *(struct _RTL_SRWLOCK *(__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_QWORD *)this + 56LL);
          if ( v45 == Microsoft::WRL::Details::ModuleBase::GetLock )
            Lock = Microsoft::WRL::Details::ModuleBase::GetLock(this);
          else
            Lock = v45(this);
          v47 = Lock;
          AcquireSRWLockExclusive(Lock);
          v48 = **(void ***)(v23 + 24);
          if ( v48 )
          {
            v44 = DecodePointer(v48);
            (*(void (__fastcall **)(PVOID))(*(_QWORD *)v44 + 8LL))(v44);
          }
          else
          {
            **(_QWORD **)(v23 + 24) = EncodePointer(Ptr);
          }
          if ( v47 )
            ReleaseSRWLockExclusive(v47);
          if ( v44 )
          {
            (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
            (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
            result = 0LL;
            *a4 = v44;
            return result;
          }
        }
        *a4 = Ptr;
        return v5;
      }
    }
  }
  return result;
}
