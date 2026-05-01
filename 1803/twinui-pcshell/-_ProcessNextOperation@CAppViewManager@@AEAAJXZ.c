/*
 * XREFs of ?_ProcessNextOperation@CAppViewManager@@AEAAJXZ @ 0x180009468
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d8d2db46f898e0ad7843c45335dab43b___::Run @ 0x18000C090 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d8d2db46f898e0ad7843c45335dab43b___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ @ 0x18000827C (-InternalRelease@-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800083E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@.c)
 *     ?_AddDelayedOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x18000A168 (-_AddDelayedOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_96f3b658638d677fbd8b16fe22f1426c__&___ptr64__1_long___lambda_96f3b658638d677fbd8b16fe22f1426c__&___ptr64_ @ 0x18000BCC4 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_18000BCC4.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18001712C (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTas.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18010A800 (-ResultFromKnownLastError@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAppViewManager::_ProcessNextOperation(CAppViewManager *this)
{
  void *v2; // rdi
  RTL_SRWLOCK *v3; // rbx
  unsigned __int64 *v4; // rax
  void *v5; // rsi
  char v6; // r15
  unsigned __int64 v7; // rdx
  char *Event; // rsi
  int Error; // ebx
  struct IAsyncCallback **v10; // rax
  volatile int *v11; // rdx
  struct IAsyncCallback *v12; // rbx
  unsigned __int64 v13; // rcx
  void *v15[3]; // [rsp+20h] [rbp-38h] BYREF
  void *v16[4]; // [rsp+38h] [rbp-20h] BYREF
  int v17; // [rsp+90h] [rbp+38h] BYREF
  unsigned __int64 UnbiasedTime; // [rsp+98h] [rbp+40h] BYREF
  __int64 pvParam; // [rsp+A0h] [rbp+48h] BYREF
  void *v20; // [rsp+A8h] [rbp+50h] BYREF

  v15[1] = (void *)-2LL;
  v2 = 0LL;
  v20 = 0LL;
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = (unsigned __int64 *)*((_QWORD *)this + 17);
  v5 = (void *)*v4;
  if ( *v4 )
  {
    UnbiasedTime = *v4;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&UnbiasedTime);
    UnbiasedTime = 0LL;
    v2 = v5;
    v20 = v5;
    Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease((void **)&UnbiasedTime);
  }
  CTSimpleArray<Microsoft::WRL::ComPtr<IAsyncCallback>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAsyncCallback>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAsyncCallback>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAsyncCallback>>>::RemoveAt(
    (char *)this + 136,
    0LL);
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  pvParam = 8LL;
  if ( SystemParametersInfoW(0x48u, 8u, &pvParam, 0) && HIDWORD(pvParam) )
  {
    v6 = 1;
    QueryUnbiasedInterruptTime(&UnbiasedTime);
    v7 = (UnbiasedTime - *((_QWORD *)this + 22)) / 0x2710;
    if ( (unsigned int)v7 < 0x1C2 )
      Sleep(450 - v7);
  }
  else
  {
    v6 = 0;
  }
  Event = (char *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  v15[2] = Event;
  if ( Event )
    Error = 0;
  else
    Error = ResultFromKnownLastError();
  v17 = Error;
  if ( Error >= 0 )
  {
    v16[0] = v2;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)v16);
    v16[1] = Event;
    v16[2] = &v17;
    v10 = (struct IAsyncCallback **)Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_96f3b658638d677fbd8b16fe22f1426c______ptr64__1_long___lambda_96f3b658638d677fbd8b16fe22f1426c______ptr64_(
                                      &UnbiasedTime,
                                      v16);
    v12 = *v10;
    v15[0] = *v10;
    *v10 = 0LL;
    v13 = UnbiasedTime;
    if ( UnbiasedTime )
    {
      UnbiasedTime = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback>::Release(
        v13,
        v11);
    }
    v17 = CAppViewManager::_AddDelayedOperation(this, v12);
    if ( v17 >= 0 )
    {
      WaitForSingleObjectEx(Event, 0xFFFFFFFF, 0);
      if ( v17 == 1 )
      {
        if ( v6 )
          QueryUnbiasedInterruptTime((PULONGLONG)this + 22);
      }
    }
    Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(v15);
    Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(v16);
    Error = v17;
  }
  if ( (unsigned __int64)(Event - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(Event);
  Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(&v20);
  return (unsigned int)Error;
}
