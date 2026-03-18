/*
 * XREFs of ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C001D1F0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C001A5F8 (AMLIAsyncEvalObject.c)
 *     WPP_RECORDER_SF_LLqss @ 0x1C001DD40 (WPP_RECORDER_SF_LLqss.c)
 *     ACPIBuildCompleteCommon @ 0x1C001EE88 (ACPIBuildCompleteCommon.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessDeviceGenericEvalStrict(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // r14d
  _QWORD *v3; // r15
  int v5; // ebp
  __int64 *v6; // rbx
  int v7; // edi
  KIRQL v8; // dl
  __int64 v9; // rax
  __int64 *v10; // rbx
  __int64 *v11; // rax
  ULONG_PTR v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdx
  void *v15; // rcx
  void *v16; // r8
  signed __int32 v17; // ecx
  KIRQL v18; // di
  int v19; // edx
  int BugCheckParameter4; // [rsp+20h] [rbp-48h]

  v1 = *(unsigned int *)(a1 + 28);
  v2 = 0;
  v3 = *(_QWORD **)(a1 + 40);
  v5 = 0;
  if ( (unsigned int)v1 >= 0x22 )
    KeBugCheckEx(0xA3u, 1uLL, 0x1012E3uLL, 0LL, 0LL);
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
    v12 = (ULONG_PTR)(v10 + 15);
    dword_1C00797B8 = 0;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
  }
  else
  {
    v12 = 0LL;
  }
  memset((void *)(a1 + 80), 0, 0x28uLL);
  v13 = *(_QWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 28) + 1;
  if ( v13 )
  {
    AMLIDereferenceHandleEx(v13);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  *(_QWORD *)(a1 + 56) = v12;
  if ( v12 )
  {
    dword_1C00797B8 = 0;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v5 = AMLIAsyncEvalObject((__int64 *)v12, (_SLIST_ENTRY *)(a1 + 80), 0, 0LL, ACPIBuildCompleteMustSucceed, a1);
  }
  v14 = v3[1];
  v15 = &unk_1C0067B08;
  v16 = &unk_1C0067B08;
  if ( (v14 & 0x200000000000LL) != 0 )
  {
    v15 = (void *)v3[70];
    if ( (v14 & 0x400000000000LL) != 0 )
      v16 = (void *)v3[71];
  }
  LOBYTE(v14) = 4;
  WPP_RECORDER_SF_LLqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v14,
    (_DWORD)v16,
    28,
    BugCheckParameter4,
    *(_DWORD *)(a1 + 28) - 3,
    v5,
    (char)v3,
    (__int64)v15,
    (__int64)v16);
  if ( v5 != 259 )
  {
    v17 = *(_DWORD *)(a1 + 32);
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
        KeBugCheckEx(0xA5u, 3uLL, v12, v5, v2);
      }
      *(_DWORD *)(a1 + 32) = 2;
      _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v17, 1);
      v18 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
      v19 = AcpiBuildDpcFlags | 2;
      AcpiBuildDpcFlags = v19;
      if ( (v19 & 1) == 0 )
      {
        AcpiBuildDpcFlags = v19 | 1;
        KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
      }
      KeReleaseSpinLock(&AcpiBuildQueueLock, v18);
    }
  }
  if ( v12 )
    AMLIDereferenceHandleEx(v12);
  return 0LL;
}
