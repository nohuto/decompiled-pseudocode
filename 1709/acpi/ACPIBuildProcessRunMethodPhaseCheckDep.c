/*
 * XREFs of ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C001D9D0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIAsyncEvalObject @ 0x1C001A5F8 (AMLIAsyncEvalObject.c)
 *     ACPIBuildCompleteCommon @ 0x1C001EE88 (ACPIBuildCompleteCommon.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseCheckDep(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // ebx
  __int64 v4; // rcx
  const char *v5; // rax
  const char *v6; // rdx
  signed __int32 v7; // ecx
  KIRQL v8; // di
  int v9; // edx
  __int64 v11; // rcx
  __int64 *v12; // rax

  v1 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 5;
  v3 = 0;
  memset((void *)(a1 + 88), 0, 0x28uLL);
  if ( (*(_BYTE *)(v1 + 952) & 0x20) == 0 )
  {
    v11 = *(_QWORD *)(a1 + 56);
    if ( v11 )
    {
      AMLIDereferenceHandleEx(v11);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    v12 = AMLIGetNamedChild(*(__int64 **)(v1 + 712), 1346716767);
    *(_QWORD *)(a1 + 56) = v12;
    if ( v12 )
    {
      v3 = AMLIAsyncEvalObject(v12, (_SLIST_ENTRY *)(a1 + 88), 0, 0LL, ACPIBuildCompleteMustSucceed, a1);
    }
    else
    {
      KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
      _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x20uLL);
      KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
    }
  }
  v4 = *(_QWORD *)(v1 + 8);
  v5 = (const char *)&unk_1C0067B08;
  v6 = (const char *)&unk_1C0067B08;
  if ( (v4 & 0x200000000000LL) != 0 )
  {
    v5 = *(const char **)(v1 + 560);
    if ( (v4 & 0x400000000000LL) != 0 )
      v6 = *(const char **)(v1 + 568);
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x3Du,
    (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
    v3,
    v1,
    v5,
    v6);
  if ( v3 != 259 )
  {
    v7 = *(_DWORD *)(a1 + 32);
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
      _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v7, 1);
      v8 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
      v9 = AcpiBuildDpcFlags | 2;
      AcpiBuildDpcFlags = v9;
      if ( (v9 & 1) == 0 )
      {
        AcpiBuildDpcFlags = v9 | 1;
        KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
      }
      KeReleaseSpinLock(&AcpiBuildQueueLock, v8);
    }
  }
  return (unsigned int)v3;
}
