/*
 * XREFs of ACPIWakeDisableAsync @ 0x1C004066C
 * Callers:
 *     OSNotifyDeviceWake @ 0x1C002EECC (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C002F100 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C002F2CC (OSNotifyDeviceWakeByInterrupt.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1C0003CBC (ExAllocateFromNPagedLookasideList.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     OSNotifyDeviceWakeCallBack @ 0x1C002F460 (OSNotifyDeviceWakeCallBack.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0041080 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIWakeEnableDisablePciDevice @ 0x1C00413F8 (ACPIWakeEnableDisablePciDevice.c)
 *     WPP_RECORDER_SF_LLLqss @ 0x1C0041EB8 (WPP_RECORDER_SF_LLLqss.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 */

__int64 __fastcall ACPIWakeDisableAsync(__int64 a1, _QWORD **a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // edi
  _QWORD *v8; // rax
  int v9; // ebp
  const char *v10; // rsi
  KIRQL v11; // r13
  int v12; // r8d
  void *v13; // r9
  void *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // r12
  __int64 v19; // rax
  const char *v20; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // r14
  __int64 v24; // r15
  _QWORD *v25; // rax
  __int64 v26; // rbp
  __int64 v27; // rax
  bool v28; // zf
  unsigned int v29; // ecx
  unsigned int v30; // eax
  __int64 v31; // rcx
  unsigned int v32; // edi
  const char *v33; // rax
  const char *v34; // rcx
  _QWORD v35[16]; // [rsp+60h] [rbp-C8h] BYREF

  v4 = 0;
  memset(v35, 0, 0x78uLL);
  v8 = *a2;
  v9 = 0;
  while ( v8 != a2 )
  {
    v8 = (_QWORD *)*v8;
    ++v9;
  }
  v10 = (const char *)&unk_1C005B1F0;
  v11 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v12 = 0;
  v13 = &unk_1C005B1F0;
  v14 = &unk_1C005B1F0;
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
  WPP_RECORDER_SF_LLLqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v14, v12, (_DWORD)v13);
  v17 = *(_DWORD *)(a1 + 504) - v9;
  *(_DWORD *)(a1 + 504) = v17;
  v18 = *(_QWORD *)(a1 + 408);
  if ( !v18 )
    goto LABEL_12;
  if ( v17 )
  {
    if ( (*(_QWORD *)(a1 + 8) & 0x800000000000000LL) != 0 )
    {
      LOBYTE(v16) = 1;
      ACPIWakeEnableDisablePciDevice(a1, v16);
    }
    goto LABEL_12;
  }
  v22 = ExAllocateFromNPagedLookasideList(&XswContextLookAsideList);
  v23 = v22;
  if ( !v22 )
  {
    v4 = -1073741670;
LABEL_12:
    KeReleaseSpinLock(&AcpiPowerLock, v11);
    v19 = *(_QWORD *)(a1 + 8);
    v20 = (const char *)&unk_1C005B1F0;
    if ( (v19 & 0x200000000000LL) != 0 )
    {
      v10 = *(const char **)(a1 + 560);
      if ( (v19 & 0x400000000000LL) != 0 )
        v20 = *(const char **)(a1 + 568);
    }
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0xEu,
      (__int64)&WPP_77f4a81bb1c43aa26362b868938d336a_Traceguids,
      v4,
      a1,
      v10,
      v20);
    OSNotifyDeviceWakeCallBack(v18, v4, 0LL, a4);
    return 259LL;
  }
  *((_BYTE *)v22 + 24) = 0;
  v22[5] = a4;
  v24 = a1 + 512;
  v22[4] = OSNotifyDeviceWakeCallBack;
  v22[2] = a1;
  *((_DWORD *)v22 + 7) = v9;
  v25 = *(_QWORD **)(a1 + 520);
  v26 = *(_QWORD *)(a1 + 512);
  if ( *v25 != a1 + 512 )
    __fastfail(3u);
  *v23 = v24;
  v23[1] = v25;
  *v25 = v23;
  *(_QWORD *)(a1 + 520) = v23;
  KeReleaseSpinLock(&AcpiPowerLock, v11);
  v27 = *(_QWORD *)(a1 + 8);
  if ( v26 == v24 )
  {
    if ( (v27 & 0x800000000000000LL) != 0 )
      ACPIWakeEnableDisablePciDevice(a1, 0LL);
    v28 = (*(_DWORD *)(a1 + 552) & 0x40) == 0;
    v35[2] = 0LL;
    WORD1(v35[0]) = 1;
    if ( v28 )
    {
      v29 = 1;
    }
    else
    {
      v29 = 3;
      WORD1(v35[5]) = 1;
      v35[7] = 0LL;
      WORD1(v35[10]) = 1;
      v35[12] = 0LL;
    }
    v30 = AMLIAsyncEvalObject(v18, 0LL, v29, v35, ACPIWakeEnableDisableAsyncCallBack, v23);
    v31 = *(_QWORD *)(a1 + 8);
    v32 = v30;
    v33 = (const char *)&unk_1C005B1F0;
    if ( (v31 & 0x200000000000LL) != 0 )
    {
      v10 = *(const char **)(a1 + 560);
      if ( (v31 & 0x400000000000LL) != 0 )
        v33 = *(const char **)(a1 + 568);
    }
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0xCu,
      (__int64)&WPP_77f4a81bb1c43aa26362b868938d336a_Traceguids,
      v32,
      a1,
      v10,
      v33);
    if ( v32 != 259 )
      ACPIWakeEnableDisableAsyncCallBack(v18, v32, 0LL, v23);
  }
  else
  {
    v34 = (const char *)&unk_1C005B1F0;
    if ( (v27 & 0x200000000000LL) != 0 )
    {
      v10 = *(const char **)(a1 + 560);
      if ( (v27 & 0x400000000000LL) != 0 )
        v34 = *(const char **)(a1 + 568);
    }
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0xDu,
      (__int64)&WPP_77f4a81bb1c43aa26362b868938d336a_Traceguids,
      3,
      a1,
      v10,
      v34);
  }
  return 259LL;
}
