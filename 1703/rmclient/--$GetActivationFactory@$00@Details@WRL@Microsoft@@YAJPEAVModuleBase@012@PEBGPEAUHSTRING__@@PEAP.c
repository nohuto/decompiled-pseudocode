/*
 * XREFs of ??$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z @ 0x180002A10
 * Callers:
 *     DllGetActivationFactory @ 0x180004AB0 (DllGetActivationFactory.c)
 * Callees:
 *     ??$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180001B90 (--$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCr.c)
 *     ?GetLock@ModuleBase@Details@WRL@Microsoft@@UEBAPEAU_RTL_SRWLOCK@@XZ @ 0x180002D20 (-GetLock@ModuleBase@Details@WRL@Microsoft@@UEBAPEAU_RTL_SRWLOCK@@XZ.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x180003AA0 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     __security_check_cookie @ 0x1800077B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::GetActivationFactory<1>(
        Microsoft::WRL::Details::ModuleBase *this,
        __int64 a2,
        HSTRING a3,
        volatile signed __int32 **a4)
{
  unsigned int v5; // r14d
  PCWSTR StringRawBuffer; // rdi
  const struct Microsoft::WRL::Details::CreatorMap **(__fastcall *v9)(Microsoft::WRL::Details::ModuleBase *__hidden); // rax
  char *v10; // rax
  __int64 *v11; // rsi
  const struct Microsoft::WRL::Details::CreatorMap **(__fastcall *v12)(Microsoft::WRL::Details::ModuleBase *__hidden); // rax
  __int64 *v13; // rbx
  const unsigned __int16 *(*v14)(void); // rax
  const WCHAR *v15; // r8
  unsigned __int16 *v16; // rax
  signed __int64 v17; // r8
  int v18; // ecx
  int v19; // edx
  __int64 v20; // rsi
  struct _RTL_SRWLOCK *(__fastcall *v21)(Microsoft::WRL::Details::ModuleBase *__hidden); // rax
  RTL_SRWLOCK *v22; // rdi
  void *v23; // rcx
  volatile signed __int32 *v24; // rax
  struct Microsoft::WRL::Details::ModuleBase *v25; // rcx
  __int64 (*v26)(void); // rax
  signed __int32 v28; // ebx
  int v29; // eax
  volatile signed __int32 *v30; // rbx
  struct _RTL_SRWLOCK *(__fastcall *v31)(Microsoft::WRL::Details::ModuleBase *__hidden); // rax
  RTL_SRWLOCK *v32; // rax
  RTL_SRWLOCK *v33; // rdi
  void *v34; // rcx
  int v35; // [rsp+30h] [rbp-88h] BYREF
  PVOID Ptr; // [rsp+38h] [rbp-80h] BYREF
  BOOL hasEmbedNull; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v38[2]; // [rsp+48h] [rbp-70h] BYREF
  __int64 v39; // [rsp+68h] [rbp-50h]

  v5 = 0;
  *a4 = 0LL;
  if ( WindowsIsStringEmpty(a3) || WindowsStringHasEmbeddedNull(a3, &hasEmbedNull) < 0 || hasEmbedNull )
  {
    v38[0] = *(_OWORD *)L"pActivatibleClassId";
    v39 = *(_QWORD *)L"sId";
    v38[1] = *(_OWORD *)L"ibleClassId";
    RoOriginateErrorW(2147942487LL, 19LL, v38);
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
          goto LABEL_60;
      }
      v20 = *v11;
      *a4 = 0LL;
      v35 = 1;
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
          v24 = (volatile signed __int32 *)DecodePointer(v23);
          Ptr = (PVOID)v24;
          if ( **(__int64 (__fastcall ***)(Windows::System::CMemoryManager *__hidden, const struct _GUID *, void **))v24 == Windows::System::CMemoryManager::QueryInterface )
          {
            *a4 = v24;
            if ( *(unsigned int (__fastcall **)(Windows::System::CMemoryManager *__hidden))(*(_QWORD *)v24 + 8LL) != Windows::System::CMemoryManager::AddRef )
            {
              v25 = (struct Microsoft::WRL::Details::ModuleBase *)v24;
              v26 = *(__int64 (**)(void))(*(_QWORD *)v24 + 8LL);
LABEL_27:
              ((void (__fastcall *)(struct Microsoft::WRL::Details::ModuleBase *))v26)(v25);
              goto LABEL_28;
            }
            v28 = _InterlockedIncrement(v24 + 9);
            if ( (v24[14] & 4) != 0 || v28 != 2 )
              goto LABEL_28;
            v25 = Microsoft::WRL::Details::ModuleBase::module_;
            v26 = *(__int64 (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
            if ( v26 != Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
              goto LABEL_27;
            Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount();
          }
          else
          {
            v5 = (**(__int64 (__fastcall ***)(PVOID, GUID *, volatile signed __int32 **))v24)(
                   (PVOID)v24,
                   &GUID_00000035_0000_0000_c000_000000000046,
                   a4);
          }
LABEL_28:
          if ( v22 )
            ReleaseSRWLockShared(v22);
          return v5;
        }
        if ( v22 )
          ReleaseSRWLockShared(v22);
      }
      if ( *(__int64 (__fastcall **)(_BYTE *, __int64, const struct _GUID *, _QWORD *))v20 == Microsoft::WRL::Details::CreateActivationFactory<Windows::System::CMemoryManager> )
        v29 = Microsoft::WRL::Details::CreateActivationFactory<Windows::System::CMemoryManager>(
                &v35,
                v20,
                &GUID_00000035_0000_0000_c000_000000000046,
                &Ptr);
      else
        v29 = (*(__int64 (__fastcall **)(int *, __int64, GUID *, PVOID *))v20)(
                &v35,
                v20,
                &GUID_00000035_0000_0000_c000_000000000046,
                &Ptr);
      if ( v29 < 0 )
      {
        return (unsigned int)v29;
      }
      else
      {
        if ( (v35 & 4) != 0 )
          goto LABEL_46;
        v30 = 0LL;
        v31 = *(struct _RTL_SRWLOCK *(__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_QWORD *)this + 56LL);
        v32 = v31 == Microsoft::WRL::Details::ModuleBase::GetLock
            ? Microsoft::WRL::Details::ModuleBase::GetLock(this)
            : v31(this);
        v33 = v32;
        AcquireSRWLockExclusive(v32);
        v34 = **(void ***)(v20 + 24);
        if ( v34 )
        {
          v30 = (volatile signed __int32 *)DecodePointer(v34);
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
        }
        else
        {
          **(_QWORD **)(v20 + 24) = EncodePointer(Ptr);
        }
        if ( v33 )
          ReleaseSRWLockExclusive(v33);
        if ( v30 )
        {
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
        }
        else
        {
LABEL_46:
          v30 = (volatile signed __int32 *)Ptr;
        }
        *a4 = v30;
      }
      return v5;
    }
LABEL_60:
    RoOriginateError(2147746065LL, 0LL);
    return 2147746065LL;
  }
}
