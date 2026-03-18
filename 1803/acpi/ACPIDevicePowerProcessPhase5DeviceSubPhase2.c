/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C001DBA0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C0008814 (WPP_RECORDER_SF_qdqss.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C0015708 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0019CA0 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase2(__int64 a1)
{
  __int64 v1; // rbx
  const char *v2; // r14
  int v3; // edi
  _OWORD *PoolWithTag; // rbp
  __int64 v5; // rdx
  const char *v7; // r8
  const char *v8; // rcx
  __int64 v9; // rax
  __int64 *v10; // r15
  KIRQL v11; // al
  __int64 v12; // rcx
  KIRQL v13; // r12
  _OWORD *v14; // rax
  size_t v15; // r8
  int v16; // eax
  __int64 v17; // rcx
  const char *v18; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (const char *)&unk_1C005B1F0;
  v3 = 0;
  PoolWithTag = 0LL;
  v5 = 0LL;
  v7 = (const char *)&unk_1C005B1F0;
  *(_DWORD *)(a1 + 212) = 5;
  v8 = (const char *)&unk_1C005B1F0;
  if ( v1 )
  {
    v9 = *(_QWORD *)(v1 + 8);
    v5 = v1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v7 = *(const char **)(v1 + 560);
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = *(const char **)(v1 + 568);
    }
  }
  WPP_RECORDER_SF_qdqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v5,
    0xAu,
    0x4Au,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    a1,
    5,
    v5,
    v7,
    v8);
  if ( (*(_QWORD *)(v1 + 8) & 0x8000000000000LL) != 0
    || (v10 = AMLIGetNamedChild(*(_QWORD **)(v1 + 712), 1397904223)) == 0LL )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 952), 0xFFFFFFFFFFFFFEFFuLL);
LABEL_19:
    ACPIDeviceCompleteGenericPhase(0LL, v3, 0LL, a1);
    return 0LL;
  }
  v11 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v12 = *(_QWORD *)(v1 + 640);
  v13 = v11;
  if ( v12 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, *(unsigned int *)(v12 + 24) + 40LL, 0x4F706341u);
    if ( PoolWithTag )
    {
      v14 = *(_OWORD **)(v1 + 640);
      *PoolWithTag = *v14;
      PoolWithTag[1] = v14[1];
      v15 = *((unsigned int *)PoolWithTag + 6);
      *((_QWORD *)PoolWithTag + 4) = (char *)PoolWithTag + 40;
      memmove((char *)PoolWithTag + 40, *(const void **)(*(_QWORD *)(v1 + 640) + 32LL), v15);
    }
    else
    {
      v3 = -1073741670;
    }
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v13);
  if ( PoolWithTag )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 952), 0xFFFFFFFFFFFFFEFFuLL);
    *(_DWORD *)(a1 + 56) |= 0x1000000u;
    v16 = AMLIAsyncEvalObject(v10, 0LL, 1LL, PoolWithTag, ACPIDeviceCompleteGenericPhase, a1);
    v17 = *(_QWORD *)(v1 + 8);
    v3 = v16;
    v18 = (const char *)&unk_1C005B1F0;
    if ( (v17 & 0x200000000000LL) != 0 )
    {
      v2 = *(const char **)(v1 + 560);
      if ( (v17 & 0x400000000000LL) != 0 )
        v18 = *(const char **)(v1 + 568);
    }
    WPP_RECORDER_SF_qLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x4Bu,
      (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
      a1,
      v3,
      v1,
      v2,
      v18);
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  AMLIDereferenceHandleEx((volatile signed __int32 *)v10);
  result = 259LL;
  if ( v3 != 259 )
    goto LABEL_19;
  return result;
}
