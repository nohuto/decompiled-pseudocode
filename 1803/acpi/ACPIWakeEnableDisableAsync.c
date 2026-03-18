/*
 * XREFs of ACPIWakeEnableDisableAsync @ 0x1C0040BA4
 * Callers:
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C0019920 (ACPIDeviceCancelWaitWakeIrp.c)
 *     ACPIDeviceInitializePowerRequest @ 0x1C001A5DC (ACPIDeviceInitializePowerRequest.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1C0003CBC (ExAllocateFromNPagedLookasideList.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0041080 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIWakeEnableDisablePciDevice @ 0x1C00413F8 (ACPIWakeEnableDisablePciDevice.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 */

__int64 __fastcall ACPIWakeEnableDisableAsync(
        __int64 a1,
        char a2,
        __int64 (__fastcall *a3)(__int64, _QWORD, _QWORD, __int64),
        __int64 a4)
{
  unsigned int v6; // r15d
  int v7; // eax
  const char *v8; // rsi
  __int64 v9; // rdi
  char v10; // dl
  const char *v11; // r8
  const char *v12; // rcx
  char v13; // r10
  __int64 v14; // rax
  __int64 v15; // rdx
  char v16; // r10
  __int64 v17; // rax
  _BYTE *v18; // rax
  _BYTE *v19; // r14
  __int64 v20; // rax
  const char *v21; // rcx
  KIRQL v23; // al
  __int64 v24; // r12
  _QWORD *v25; // rcx
  __int64 v26; // rdx
  int v27; // eax
  unsigned int v28; // edx
  int v29; // ecx
  unsigned int v30; // eax
  __int64 v31; // rcx
  unsigned int v32; // edi
  const char *v33; // rax
  const char *v34; // rax
  __int64 v37; // [rsp+58h] [rbp-F0h]
  __int64 v38; // [rsp+60h] [rbp-E8h]
  _QWORD v40[16]; // [rsp+70h] [rbp-D8h] BYREF

  v6 = 259;
  memset(v40, 0, 0x78uLL);
  v7 = *(_DWORD *)(a1 + 504);
  v8 = (const char *)&unk_1C005B1F0;
  v9 = 0LL;
  v38 = 0LL;
  v10 = 0;
  v11 = (const char *)&unk_1C005B1F0;
  v12 = (const char *)&unk_1C005B1F0;
  if ( a2 )
  {
    v13 = v7 + 1;
    *(_DWORD *)(a1 + 504) = v7 + 1;
    if ( a1 )
    {
      v14 = *(_QWORD *)(a1 + 8);
      v10 = a1;
      if ( (v14 & 0x200000000000LL) != 0 )
      {
        v11 = *(const char **)(a1 + 560);
        if ( (v14 & 0x400000000000LL) != 0 )
          v12 = *(const char **)(a1 + 568);
      }
    }
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0xFu,
      (__int64)&WPP_77f4a81bb1c43aa26362b868938d336a_Traceguids,
      v13,
      v10,
      v11,
      v12);
    if ( *(_DWORD *)(a1 + 504) != 1 )
    {
      if ( (*(_QWORD *)(a1 + 8) & 0x800000000000000LL) == 0 )
      {
LABEL_22:
        v20 = *(_QWORD *)(a1 + 8);
        v21 = (const char *)&unk_1C005B1F0;
        if ( (v20 & 0x200000000000LL) != 0 )
        {
          v8 = *(const char **)(a1 + 560);
          if ( (v20 & 0x400000000000LL) != 0 )
            v21 = *(const char **)(a1 + 568);
        }
        WPP_RECORDER_SF_Dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x11u,
          0x13u,
          (__int64)&WPP_77f4a81bb1c43aa26362b868938d336a_Traceguids,
          v6,
          a1,
          v8,
          v21);
        return a3(v38, v6, 0LL, a4);
      }
      LOBYTE(v15) = 1;
LABEL_9:
      ACPIWakeEnableDisablePciDevice(a1, v15);
      goto LABEL_22;
    }
  }
  else
  {
    v16 = v7 - 1;
    *(_DWORD *)(a1 + 504) = v7 - 1;
    if ( a1 )
    {
      v17 = *(_QWORD *)(a1 + 8);
      v10 = a1;
      if ( (v17 & 0x200000000000LL) != 0 )
      {
        v11 = *(const char **)(a1 + 560);
        if ( (v17 & 0x400000000000LL) != 0 )
          v12 = *(const char **)(a1 + 568);
      }
    }
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0x10u,
      (__int64)&WPP_77f4a81bb1c43aa26362b868938d336a_Traceguids,
      v16,
      v10,
      v11,
      v12);
    if ( *(_DWORD *)(a1 + 504) )
    {
      if ( (*(_QWORD *)(a1 + 8) & 0x800000000000000LL) == 0 )
        goto LABEL_22;
      v15 = 1LL;
      goto LABEL_9;
    }
  }
  v38 = *(_QWORD *)(a1 + 408);
  if ( !v38 )
  {
    if ( (*(_QWORD *)(a1 + 8) & 0x800000000000000LL) == 0 )
      goto LABEL_22;
    LOBYTE(v15) = a2;
    goto LABEL_9;
  }
  v18 = ExAllocateFromNPagedLookasideList(&XswContextLookAsideList);
  v19 = v18;
  if ( !v18 )
  {
    v6 = -1073741670;
    goto LABEL_22;
  }
  v18[24] = a2;
  *((_QWORD *)v18 + 4) = a3;
  *((_QWORD *)v18 + 5) = a4;
  *((_QWORD *)v18 + 2) = a1;
  *((_DWORD *)v18 + 7) = 1;
  v23 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v24 = a1 + 512;
  v37 = *(_QWORD *)(a1 + 512);
  v25 = *(_QWORD **)(a1 + 520);
  if ( *v25 != a1 + 512 )
    __fastfail(3u);
  *((_QWORD *)v19 + 1) = v25;
  *(_QWORD *)v19 = v24;
  *v25 = v19;
  *(_QWORD *)(a1 + 520) = v19;
  KeReleaseSpinLock(&AcpiPowerLock, v23);
  v26 = *(_QWORD *)(a1 + 8);
  if ( v37 == v24 )
  {
    if ( (v26 & 0x800000000000000LL) != 0 && !v19[24] )
      ACPIWakeEnableDisablePciDevice(a1, 0LL);
    v27 = *(_DWORD *)(a1 + 552);
    WORD1(v40[0]) = 1;
    if ( (v27 & 0x40) != 0 )
    {
      v29 = *(_DWORD *)(a1 + 492);
      v28 = 3;
      WORD1(v40[5]) = 1;
      v40[2] = a2 != 0;
      LOBYTE(v9) = AcpiPowerLeavingS0 != 0;
      WORD1(v40[10]) = 1;
      v40[7] = v9;
      if ( v29 != 4 || (*(_DWORD *)(a1 + 8) & 0x800LL) != 0 )
        v40[12] = v29 - 1;
      else
        v40[12] = 4LL;
    }
    else
    {
      v28 = 1;
      LOBYTE(v9) = a2 != 0;
      v40[2] = v9;
    }
    v30 = AMLIAsyncEvalObject(v38, 0LL, v28, v40, ACPIWakeEnableDisableAsyncCallBack, v19);
    v31 = *(_QWORD *)(a1 + 8);
    v32 = v30;
    v33 = (const char *)&unk_1C005B1F0;
    if ( (v31 & 0x200000000000LL) != 0 )
    {
      v8 = *(const char **)(a1 + 560);
      if ( (v31 & 0x400000000000LL) != 0 )
        v33 = *(const char **)(a1 + 568);
    }
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0x11u,
      (__int64)&WPP_77f4a81bb1c43aa26362b868938d336a_Traceguids,
      v32,
      a1,
      v8,
      v33);
    if ( v32 != 259 )
      ACPIWakeEnableDisableAsyncCallBack(v38, v32, 0LL, v19);
  }
  else
  {
    v34 = (const char *)&unk_1C005B1F0;
    if ( (v26 & 0x200000000000LL) != 0 )
    {
      v8 = *(const char **)(a1 + 560);
      if ( (v26 & 0x400000000000LL) != 0 )
        v34 = *(const char **)(a1 + 568);
    }
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0x12u,
      (__int64)&WPP_77f4a81bb1c43aa26362b868938d336a_Traceguids,
      3,
      a1,
      v8,
      v34);
  }
  return 259LL;
}
