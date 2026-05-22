/*
 * XREFs of ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVHomeGestureEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVHomeGestureEventArgs@2345@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180026EC4
 * Callers:
 *     ?add_OnHomeGestureDetected@MPCManagerClient@@UEAAJPEAU?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVHomeGestureEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180026BB0 (-add_OnHomeGestureDetected@MPCManagerClient@@UEAAJPEAU-$ITypedEventHandler@PEAVMPCManagerClient@.c)
 *     ?add_ButtonsChangedDuringHomeGesture@MPCManagerClient@@UEAAJPEAU?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVHomeGestureEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180026BF0 (-add_ButtonsChangedDuringHomeGesture@MPCManagerClient@@UEAAJPEAU-$ITypedEventHandler@PEAVMPCMana.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000F0F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x180027398 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x18002A028 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCManagerClient *,Windows::Internal::Input::MPCManager::HomeGestureEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        __int64 a1,
        struct IUnknown *a2,
        void *a3,
        struct IUnknown **a4)
{
  RTL_SRWLOCK *v4; // rbp
  Microsoft::WRL::Details::EventTargetArray *v9; // rcx
  __int64 v10; // rcx
  int v11; // edi
  Microsoft::WRL::Details::EventTargetArray *v12; // rax
  Microsoft::WRL::Details::EventTargetArray *v13; // rdi
  void **v14; // r14
  struct IUnknown **i; // rbx
  volatile signed __int32 *v16; // rcx
  volatile signed __int32 *v17; // rbx
  Microsoft::WRL::Details::EventTargetArray *v19; // [rsp+60h] [rbp+8h] BYREF
  __int64 v20; // [rsp+78h] [rbp+20h] BYREF

  *a4 = 0LL;
  v4 = (RTL_SRWLOCK *)(a1 + 16);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 16));
  v9 = *(Microsoft::WRL::Details::EventTargetArray **)a1;
  v19 = 0LL;
  if ( v9 )
    v10 = ((__int64)(*((_QWORD *)v9 + 3) - *((_QWORD *)v9 + 2)) >> 3) + 1;
  else
    v10 = 1LL;
  v20 = v10;
  v11 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
          &v19,
          &v20);
  if ( v11 >= 0 )
  {
    v12 = *(Microsoft::WRL::Details::EventTargetArray **)a1;
    v13 = v19;
    if ( *(_QWORD *)a1 )
    {
      v14 = (void **)*((_QWORD *)v12 + 4);
      for ( i = (struct IUnknown **)*((_QWORD *)v12 + 2); i != *((struct IUnknown ***)v12 + 3); ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v13, *i, *v14);
        v12 = *(Microsoft::WRL::Details::EventTargetArray **)a1;
        ++v14;
      }
    }
    *a4 = a2;
    Microsoft::WRL::Details::EventTargetArray::AddTail(v13, a2, a3);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
    v16 = *(volatile signed __int32 **)a1;
    v17 = 0LL;
    if ( &v19 != (Microsoft::WRL::Details::EventTargetArray **)a1 )
    {
      *(_QWORD *)a1 = 0LL;
      v17 = v16;
      v16 = 0LL;
    }
    *(_QWORD *)a1 = v13;
    if ( v16 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v16);
    if ( a1 != -8 )
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 8));
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    v11 = 0;
    if ( v17 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v17);
  }
  else
  {
    if ( v19 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v19);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
  return (unsigned int)v11;
}
