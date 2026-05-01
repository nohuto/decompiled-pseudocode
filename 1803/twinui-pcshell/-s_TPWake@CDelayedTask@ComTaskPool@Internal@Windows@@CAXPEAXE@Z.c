/*
 * XREFs of ?s_TPWake@CDelayedTask@ComTaskPool@Internal@Windows@@CAXPEAXE@Z @ 0x180054340
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x1800462B0 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180054260 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CDelayedTask::s_TPWake(volatile __int64 *a1)
{
  void *v2; // rdx
  __int64 v3; // rdi
  volatile int *v4; // rdx
  __int64 v5; // rcx
  unsigned int (__fastcall *v6)(__int64, volatile int *); // rax
  unsigned int (__fastcall *v7)(__int64, volatile int *); // rax

  if ( a1 )
    (*(void (__fastcall **)(volatile __int64 *))(*a1 + 8))(a1);
  v2 = (void *)_InterlockedExchange64(a1 + 2, 0LL);
  if ( v2 )
    DeleteTimerQueueTimer(0LL, v2, 0LL);
  v3 = *((_QWORD *)a1 + 3);
  if ( (int)Windows::Internal::ComTaskPool::s_QueuePoolTask(*(_DWORD *)v3, *(_DWORD *)(v3 + 4), *(_DWORD *)(v3 + 8)) < 0 )
  {
    AcquireSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
    if ( qword_180438B00 )
      *(_QWORD *)(qword_180438B00 + 24) = v3;
    else
      Windows::Internal::ComTaskPool::s_taskFloodingList = (Windows::Internal::ComTaskPool::TaskData *)v3;
    qword_180438B00 = v3;
    ReleaseSRWLockExclusive(&Windows::Internal::ComTaskPool::s_rwLock);
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease((void **)(v3 + 16));
    operator delete((void *)v3, (const struct std::nothrow_t *)0x20);
  }
  *((_QWORD *)a1 + 3) = 0LL;
  v5 = *((_QWORD *)a1 + 4);
  if ( v5 )
  {
    *((_QWORD *)a1 + 4) = 0LL;
    v6 = *(unsigned int (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v5 + 16LL);
    if ( v6 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v5, v4);
    else
      ((void (__fastcall *)(__int64))v6)(v5);
  }
  v7 = *(unsigned int (__fastcall **)(__int64, volatile int *))(*a1 + 16);
  if ( v7 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
      (__int64)a1,
      v4);
  else
    ((void (__fastcall *)(volatile __int64 *))v7)(a1);
}
