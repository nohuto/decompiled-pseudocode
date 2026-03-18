/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C0002E90
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C00052E8 (WPP_RECORDER_SF_qdqss.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C000544C (WPP_RECORDER_SF_qLqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0006240 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIAsyncEvalObject @ 0x1C001A5F8 (AMLIAsyncEvalObject.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase2(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // r14
  unsigned int v3; // edi
  _OWORD *PoolWithTag; // rbp
  int v5; // edx
  void *v7; // r8
  void *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 result; // rax
  KIRQL v12; // al
  __int64 v13; // rcx
  KIRQL v14; // r12
  _OWORD *v15; // rax
  size_t v16; // r8
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // edx
  void *v20; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = &unk_1C0067B08;
  v3 = 0;
  PoolWithTag = 0LL;
  v5 = 0;
  v7 = &unk_1C0067B08;
  *(_DWORD *)(a1 + 212) = 5;
  v8 = &unk_1C0067B08;
  if ( v1 )
  {
    v9 = *(_QWORD *)(v1 + 8);
    v5 = v1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v7 = *(void **)(v1 + 560);
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = *(void **)(v1 + 568);
    }
  }
  WPP_RECORDER_SF_qdqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v5,
    10,
    74,
    (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids,
    a1,
    5,
    v5,
    (__int64)v7,
    (__int64)v8);
  if ( (*(_QWORD *)(v1 + 8) & 0x8000000000000LL) != 0
    || (v10 = AMLIGetNamedChild(*(_QWORD *)(v1 + 712), 1397904223LL)) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 952), 0xFFFFFFFFFFFFFEFFuLL);
LABEL_6:
    ACPIDeviceCompleteGenericPhase(0LL, v3, 0LL, a1);
    return 0LL;
  }
  v12 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v13 = *(_QWORD *)(v1 + 640);
  v14 = v12;
  if ( v13 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, *(unsigned int *)(v13 + 24) + 40LL, 0x4F706341u);
    if ( PoolWithTag )
    {
      v15 = *(_OWORD **)(v1 + 640);
      *PoolWithTag = *v15;
      PoolWithTag[1] = v15[1];
      v16 = *((unsigned int *)PoolWithTag + 6);
      *((_QWORD *)PoolWithTag + 4) = (char *)PoolWithTag + 40;
      memmove((char *)PoolWithTag + 40, *(const void **)(*(_QWORD *)(v1 + 640) + 32LL), v16);
    }
    else
    {
      v3 = -1073741670;
    }
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v14);
  if ( PoolWithTag )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 952), 0xFFFFFFFFFFFFFEFFuLL);
    *(_DWORD *)(a1 + 56) |= 0x1000000u;
    v17 = AMLIAsyncEvalObject(v10, 0LL, 1LL, PoolWithTag);
    v18 = *(_QWORD *)(v1 + 8);
    v19 = 0;
    v3 = v17;
    v20 = &unk_1C0067B08;
    if ( (v18 & 0x200000000000LL) != 0 )
    {
      v2 = *(void **)(v1 + 560);
      if ( (v18 & 0x400000000000LL) != 0 )
        v20 = *(void **)(v1 + 568);
    }
    LOBYTE(v19) = 4;
    WPP_RECORDER_SF_qLqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v19,
      10,
      75,
      (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids,
      a1,
      v3,
      v1,
      (__int64)v2,
      (__int64)v20);
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  AMLIDereferenceHandleEx(v10);
  result = 259LL;
  if ( v3 != 259 )
    goto LABEL_6;
  return result;
}
