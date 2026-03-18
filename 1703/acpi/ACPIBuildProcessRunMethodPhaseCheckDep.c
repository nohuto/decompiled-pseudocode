/*
 * XREFs of ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C000C430
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C000E580 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteCommon @ 0x1C000FF78 (ACPIBuildCompleteCommon.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C0022070 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseCheckDep(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  void *v8; // rax
  void *v9; // rdx
  signed __int32 v10; // ecx
  KIRQL v11; // di
  int v12; // edx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // [rsp+40h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 5;
  v3 = 0;
  memset((void *)(a1 + 88), 0, 0x28uLL);
  if ( (*(_BYTE *)(v1 + 952) & 0x20) == 0 )
  {
    v14 = *(_QWORD *)(a1 + 56);
    if ( v14 )
    {
      AMLIDereferenceHandleEx(v14, v4);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    v15 = AMLIGetNamedChild(*(_QWORD *)(v1 + 712), 1346716767LL, v5, v6);
    *(_QWORD *)(a1 + 56) = v15;
    if ( v15 )
    {
      v3 = AMLIAsyncEvalObject(v15, a1 + 88, 0LL, 0LL, ACPIBuildCompleteMustSucceed, a1);
    }
    else
    {
      KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
      _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x20uLL);
      KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
    }
  }
  v7 = *(_QWORD *)(v1 + 8);
  v8 = &unk_1C0066CD0;
  v9 = &unk_1C0066CD0;
  if ( (v7 & 0x200000000000LL) != 0 )
  {
    v8 = *(void **)(v1 + 560);
    if ( (v7 & 0x400000000000LL) != 0 )
      v9 = *(void **)(v1 + 568);
  }
  v16 = (__int64)v9;
  LOBYTE(v9) = 4;
  WPP_RECORDER_SF_Lqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v9,
    6,
    61,
    (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
    v3,
    v1,
    (__int64)v8,
    v16);
  if ( v3 != 259 )
  {
    v10 = *(_DWORD *)(a1 + 32);
    if ( v3 == -1073741738 )
    {
      *(_DWORD *)(a1 + 48) = -1073741738;
      ACPIBuildCompleteCommon(a1 + 24, 2LL);
    }
    else
    {
      if ( v3 < 0 )
      {
        *(_DWORD *)(a1 + 48) = v3;
        KeBugCheckEx(0xA5u, 3uLL, 0LL, v3, 0LL);
      }
      *(_DWORD *)(a1 + 32) = 2;
      _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v10, 1);
      v11 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
      v12 = AcpiBuildDpcFlags | 2;
      AcpiBuildDpcFlags = v12;
      if ( (v12 & 1) == 0 )
      {
        AcpiBuildDpcFlags = v12 | 1;
        KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
      }
      KeReleaseSpinLock(&AcpiBuildQueueLock, v11);
    }
  }
  return (unsigned int)v3;
}
