/*
 * XREFs of ACPIBuildProcessDeviceGenericEval @ 0x1C001CB90
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     ACPIBuildScheduleDpc @ 0x1C0011220 (ACPIBuildScheduleDpc.c)
 *     AMLIAsyncEvalObject @ 0x1C001A5F8 (AMLIAsyncEvalObject.c)
 *     WPP_RECORDER_SF_LLqss @ 0x1C001DD40 (WPP_RECORDER_SF_LLqss.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessDeviceGenericEval(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ebp
  _QWORD *v3; // r14
  __int64 *v5; // rbx
  int v6; // edi
  KIRQL v7; // dl
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  signed __int32 v13; // ecx
  KIRQL v14; // bl
  __int64 v15; // rax
  void *v16; // rcx
  void *v17; // rdx
  int BugCheckParameter4; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+48h] [rbp-20h]

  v1 = *(unsigned int *)(a1 + 28);
  v2 = 0;
  v3 = *(_QWORD **)(a1 + 40);
  if ( (unsigned int)v1 >= 0x22 )
    KeBugCheckEx(0xA3u, 1uLL, 0x101269uLL, 0LL, 0LL);
  v5 = (__int64 *)v3[89];
  v6 = AcpiBuildDevicePowerNameLookup[v1];
  v7 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v8 = *v5;
  v9 = *(__int64 **)(*v5 + 24);
  v10 = (__int64 *)(v8 + 24);
  if ( v10 == v9 )
  {
LABEL_5:
    v9 = 0LL;
  }
  else
  {
    while ( v6 != *((_DWORD *)v9 + 10) )
    {
      v9 = (__int64 *)*v9;
      if ( v10 == v9 )
        goto LABEL_5;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v7);
  if ( v9 )
  {
    v11 = (__int64)(v9 + 15);
    dword_1C00797B8 = 0;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)v9 + 32);
  }
  else
  {
    v11 = 0LL;
  }
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 28) + 1;
  memset((void *)(a1 + 80), 0, 0x28uLL);
  v12 = *(_QWORD *)(a1 + 56);
  if ( v12 )
  {
    AMLIDereferenceHandleEx(v12);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  *(_QWORD *)(a1 + 56) = v11;
  if ( !v11 )
    goto LABEL_11;
  dword_1C00797B8 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
  v2 = AMLIAsyncEvalObject((__int64 *)v11, (_SLIST_ENTRY *)(a1 + 80), 0, 0LL, ACPIBuildCompleteGeneric, a1);
  if ( v2 != 259 )
  {
LABEL_11:
    v13 = *(_DWORD *)(a1 + 32);
    if ( v2 < 0 )
      *(_DWORD *)(a1 + 48) = v2;
    *(_DWORD *)(a1 + 32) = 2;
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v13, 1);
    v14 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    ACPIBuildScheduleDpc();
    KeReleaseSpinLock(&AcpiBuildQueueLock, v14);
  }
  if ( v11 )
    AMLIDereferenceHandleEx(v11);
  v15 = v3[1];
  v16 = &unk_1C0067B08;
  v17 = &unk_1C0067B08;
  if ( (v15 & 0x200000000000LL) != 0 )
  {
    v16 = (void *)v3[70];
    if ( (v15 & 0x400000000000LL) != 0 )
      v17 = (void *)v3[71];
  }
  v20 = (__int64)v17;
  LOBYTE(v17) = 4;
  WPP_RECORDER_SF_LLqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v17,
    0,
    27,
    BugCheckParameter4,
    *(_DWORD *)(a1 + 28) - 3,
    v2,
    (char)v3,
    (__int64)v16,
    v20);
  return 0LL;
}
