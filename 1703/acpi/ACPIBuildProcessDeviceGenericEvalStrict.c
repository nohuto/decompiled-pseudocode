/*
 * XREFs of ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C000BAF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_LLqss @ 0x1C000D090 (WPP_RECORDER_SF_LLqss.c)
 *     ACPIBuildCompleteCommon @ 0x1C000FF78 (ACPIBuildCompleteCommon.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     DereferenceObjectEx @ 0x1C00156D8 (DereferenceObjectEx.c)
 *     HeapFree @ 0x1C0015C58 (HeapFree.c)
 *     AMLIAsyncEvalObject @ 0x1C0022070 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessDeviceGenericEvalStrict(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebp
  _QWORD *v3; // r15
  int v5; // r14d
  __int64 *v6; // rbx
  int v7; // edi
  KIRQL v8; // dl
  __int64 v9; // rax
  __int64 *v10; // rbx
  __int64 *v11; // rax
  volatile signed __int32 *v12; // rbx
  __int64 v13; // rdx
  volatile signed __int32 *v14; // rdi
  __int64 v15; // rdx
  void *v16; // rcx
  void *v17; // r8
  __int64 v18; // rdx
  signed __int32 v19; // ecx
  KIRQL v20; // di
  int v21; // edx
  __int64 v23; // rcx
  int BugCheckParameter4; // [rsp+20h] [rbp-58h]

  v1 = *(unsigned int *)(a1 + 28);
  v2 = 0;
  v3 = *(_QWORD **)(a1 + 40);
  v5 = 0;
  if ( (unsigned int)v1 >= 0x22 )
    KeBugCheckEx(0xA3u, 1uLL, 0x1012E1uLL, 0LL, 0LL);
  v6 = (__int64 *)v3[89];
  v7 = AcpiBuildDevicePowerNameLookup[v1];
  v8 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v9 = *v6;
  v10 = *(__int64 **)(*v6 + 24);
  v11 = (__int64 *)(v9 + 24);
  if ( v11 == v10 )
  {
LABEL_5:
    v10 = 0LL;
  }
  else
  {
    while ( v7 != *((_DWORD *)v10 + 10) )
    {
      v10 = (__int64 *)*v10;
      if ( v11 == v10 )
        goto LABEL_5;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v8);
  if ( v10 )
  {
    v12 = (volatile signed __int32 *)(v10 + 15);
    dword_1C00776F8 = 0;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement(v12 + 2);
  }
  else
  {
    v12 = 0LL;
  }
  memset((void *)(a1 + 80), 0, 0x28uLL);
  v14 = *(volatile signed __int32 **)(a1 + 56);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 28) + 1;
  if ( v14 )
  {
    dword_1C00776F8 = 0;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
    {
      v23 = *(_QWORD *)v14;
      if ( v14 == (volatile signed __int32 *)(*(_QWORD *)v14 + 120LL) )
      {
        DereferenceObjectEx(v23, v13);
      }
      else
      {
        DereferenceObjectEx(v23, v13);
        HeapFree(v14);
      }
    }
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  *(_QWORD *)(a1 + 56) = v12;
  if ( v12 )
  {
    dword_1C00776F8 = 0;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement(v12 + 2);
    v5 = AMLIAsyncEvalObject(v12, a1 + 80, 0LL, 0LL, ACPIBuildCompleteMustSucceed, a1);
  }
  v15 = v3[1];
  v16 = &unk_1C0066CD0;
  v17 = &unk_1C0066CD0;
  if ( (v15 & 0x200000000000LL) != 0 )
  {
    v16 = (void *)v3[70];
    if ( (v15 & 0x400000000000LL) != 0 )
      v17 = (void *)v3[71];
  }
  LOBYTE(v15) = 4;
  WPP_RECORDER_SF_LLqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v15,
    (_DWORD)v17,
    28,
    BugCheckParameter4,
    *(_DWORD *)(a1 + 28) - 3,
    v5,
    (char)v3,
    (__int64)v16,
    (__int64)v17);
  if ( v5 != 259 )
  {
    v19 = *(_DWORD *)(a1 + 32);
    if ( v5 == -1073741738 )
    {
      *(_DWORD *)(a1 + 48) = -1073741738;
      ACPIBuildCompleteCommon(a1 + 24, 2LL);
    }
    else
    {
      if ( v5 < 0 )
      {
        *(_DWORD *)(a1 + 48) = v5;
        if ( v12 )
          v2 = *(_DWORD *)(*(_QWORD *)v12 + 40LL);
        KeBugCheckEx(0xA5u, 3uLL, (ULONG_PTR)v12, v5, v2);
      }
      *(_DWORD *)(a1 + 32) = 2;
      _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v19, 1);
      v20 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
      v21 = AcpiBuildDpcFlags | 2;
      AcpiBuildDpcFlags = v21;
      if ( (v21 & 1) == 0 )
      {
        AcpiBuildDpcFlags = v21 | 1;
        KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
      }
      KeReleaseSpinLock(&AcpiBuildQueueLock, v20);
    }
  }
  if ( v12 )
    AMLIDereferenceHandleEx(v12, v18);
  return 0LL;
}
