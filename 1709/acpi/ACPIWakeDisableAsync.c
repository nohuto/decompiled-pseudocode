/*
 * XREFs of ACPIWakeDisableAsync @ 0x1C005A400
 * Callers:
 *     OSNotifyDeviceWake @ 0x1C00522CC (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0052500 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C00526CC (OSNotifyDeviceWakeByInterrupt.c)
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIWakeEnableDisablePciDevice @ 0x1C001061C (ACPIWakeEnableDisablePciDevice.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C00111E4 (ExAllocateFromNPagedLookasideList.c)
 *     AMLIAsyncEvalObject @ 0x1C001A5F8 (AMLIAsyncEvalObject.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0025DA0 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     OSNotifyDeviceWakeCallBack @ 0x1C0052860 (OSNotifyDeviceWakeCallBack.c)
 *     WPP_RECORDER_SF_LLLqss @ 0x1C005AA9C (WPP_RECORDER_SF_LLLqss.c)
 */

__int64 __fastcall ACPIWakeDisableAsync(__int64 a1, _QWORD **a2, __int64 a3, _QWORD **a4)
{
  char v4; // di
  _QWORD *v8; // rax
  int v9; // ebp
  const char *v10; // rsi
  KIRQL v11; // r13
  __int64 v12; // r8
  void *v13; // r9
  void *v14; // rdx
  __int64 v15; // rcx
  __int64 *v16; // r12
  __int64 v17; // rax
  const char *v18; // rcx
  __int64 *v20; // rax
  __int64 *v21; // r14
  __int64 v22; // r15
  __int64 **v23; // rax
  __int64 v24; // rbp
  bool v25; // zf
  int v26; // eax
  __int64 v27; // rcx
  int v28; // edi
  const char *v29; // rax
  __int64 v30; // rax
  const char *v31; // rcx
  int v32; // [rsp+30h] [rbp-F8h]
  int v33; // [rsp+38h] [rbp-F0h]
  __int64 v34; // [rsp+40h] [rbp-E8h]
  void *v35; // [rsp+48h] [rbp-E0h]
  void *v36; // [rsp+50h] [rbp-D8h]
  _QWORD v37[16]; // [rsp+60h] [rbp-C8h] BYREF

  v4 = 0;
  memset(v37, 0, 0x78uLL);
  v8 = *a2;
  v9 = 0;
  while ( v8 != a2 )
  {
    v8 = (_QWORD *)*v8;
    ++v9;
  }
  v10 = (const char *)&unk_1C0067B08;
  v11 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v12 = 0LL;
  v13 = &unk_1C0067B08;
  v14 = &unk_1C0067B08;
  if ( a1 )
  {
    v15 = *(_QWORD *)(a1 + 8);
    v12 = a1;
    if ( (v15 & 0x200000000000LL) != 0 )
    {
      v13 = *(void **)(a1 + 560);
      if ( (v15 & 0x400000000000LL) != 0 )
        v14 = *(void **)(a1 + 568);
    }
  }
  v36 = v14;
  v35 = v13;
  v34 = v12;
  v33 = *(_DWORD *)(a1 + 504) - v9;
  v32 = v9;
  WPP_RECORDER_SF_LLLqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v14, v12, (_DWORD)v13);
  *(_DWORD *)(a1 + 504) -= v9;
  v16 = *(__int64 **)(a1 + 408);
  if ( !v16 )
    goto LABEL_12;
  if ( *(_DWORD *)(a1 + 504) )
  {
    if ( (*(_QWORD *)(a1 + 8) & 0x800000000000000LL) != 0 )
      ACPIWakeEnableDisablePciDevice(a1, 1);
    goto LABEL_12;
  }
  v20 = (__int64 *)ExAllocateFromNPagedLookasideList(&XswContextLookAsideList);
  v21 = v20;
  if ( !v20 )
  {
    v4 = -102;
LABEL_12:
    KeReleaseSpinLock(&AcpiPowerLock, v11);
    v17 = *(_QWORD *)(a1 + 8);
    v18 = (const char *)&unk_1C0067B08;
    if ( (v17 & 0x200000000000LL) != 0 )
    {
      v10 = *(const char **)(a1 + 560);
      if ( (v17 & 0x400000000000LL) != 0 )
        v18 = *(const char **)(a1 + 568);
    }
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0xEu,
      (__int64)&WPP_d730237a7598333a30e93ab8e38a2180_Traceguids,
      v4,
      a1,
      v10,
      v18);
    OSNotifyDeviceWakeCallBack((__int64)v16, v4, 0LL, a4);
    return 259LL;
  }
  *((_BYTE *)v20 + 24) = 0;
  v20[5] = (__int64)a4;
  v22 = a1 + 512;
  v20[4] = (__int64)OSNotifyDeviceWakeCallBack;
  v20[2] = a1;
  *((_DWORD *)v20 + 7) = v9;
  v23 = *(__int64 ***)(a1 + 520);
  v24 = *(_QWORD *)(a1 + 512);
  if ( *v23 != (__int64 *)(a1 + 512) )
    __fastfail(3u);
  *v21 = v22;
  v21[1] = (__int64)v23;
  *v23 = v21;
  *(_QWORD *)(a1 + 520) = v21;
  KeReleaseSpinLock(&AcpiPowerLock, v11);
  if ( v24 == v22 )
  {
    if ( (*(_QWORD *)(a1 + 8) & 0x800000000000000LL) != 0 )
      ACPIWakeEnableDisablePciDevice(a1, 0);
    v25 = (*(_DWORD *)(a1 + 552) & 0x40) == 0;
    v37[2] = 0LL;
    WORD1(v37[0]) = 1;
    if ( v25 )
    {
      v26 = AMLIAsyncEvalObject(v16, 0LL, 1u, v37, ACPIWakeEnableDisableAsyncCallBack, v21, v32, v33, v34, v35, v36);
    }
    else
    {
      WORD1(v37[5]) = 1;
      v37[7] = 0LL;
      WORD1(v37[10]) = 1;
      v37[12] = 0LL;
      v26 = AMLIAsyncEvalObject(v16, 0LL, 3u, v37, ACPIWakeEnableDisableAsyncCallBack, v21, v32, v33, v34, v35, v36);
    }
    v27 = *(_QWORD *)(a1 + 8);
    v28 = v26;
    v29 = (const char *)&unk_1C0067B08;
    if ( (v27 & 0x200000000000LL) != 0 )
    {
      v10 = *(const char **)(a1 + 560);
      if ( (v27 & 0x400000000000LL) != 0 )
        v29 = *(const char **)(a1 + 568);
    }
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0xCu,
      (__int64)&WPP_d730237a7598333a30e93ab8e38a2180_Traceguids,
      v28,
      a1,
      v10,
      v29);
    if ( v28 != 259 )
      ACPIWakeEnableDisableAsyncCallBack(v16, v28, 0LL, v21);
  }
  else
  {
    v30 = *(_QWORD *)(a1 + 8);
    v31 = (const char *)&unk_1C0067B08;
    if ( (v30 & 0x200000000000LL) != 0 )
    {
      v10 = *(const char **)(a1 + 560);
      if ( (v30 & 0x400000000000LL) != 0 )
        v31 = *(const char **)(a1 + 568);
    }
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0xDu,
      (__int64)&WPP_d730237a7598333a30e93ab8e38a2180_Traceguids,
      3,
      a1,
      v10,
      v31);
  }
  return 259LL;
}
