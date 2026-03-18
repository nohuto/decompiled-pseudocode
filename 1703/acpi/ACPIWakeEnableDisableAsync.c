/*
 * XREFs of ACPIWakeEnableDisableAsync @ 0x1C002073C
 * Callers:
 *     ACPIDeviceInitializePowerRequest @ 0x1C00094B0 (ACPIDeviceInitializePowerRequest.c)
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C0048950 (ACPIDeviceCancelWaitWakeIrp.c)
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C000F2AC (WPP_RECORDER_SF_Dqss.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C00131D8 (ExAllocateFromNPagedLookasideList.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C00205C0 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     AMLIAsyncEvalObject @ 0x1C0022070 (AMLIAsyncEvalObject.c)
 *     ACPIWakeEnableDisablePciDevice @ 0x1C002AF08 (ACPIWakeEnableDisablePciDevice.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 __fastcall ACPIWakeEnableDisableAsync(
        __int64 a1,
        char a2,
        void (__fastcall *a3)(__int64, _QWORD, _QWORD, __int64),
        __int64 a4)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  const char *v8; // rsi
  const char *v9; // rdx
  const char *v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rax
  const char *v14; // rcx
  _BYTE *v16; // rax
  _QWORD *v17; // r14
  KIRQL v18; // al
  __int64 v19; // r15
  _QWORD *v20; // rcx
  int v21; // eax
  unsigned int v22; // edx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // edi
  const char *v26; // rax
  int v27; // ecx
  __int64 v28; // rcx
  const char *v29; // rax
  __int64 v31; // [rsp+50h] [rbp-F8h]
  __int64 v33; // [rsp+60h] [rbp-E8h]
  _QWORD v34[16]; // [rsp+70h] [rbp-D8h] BYREF

  v6 = 0LL;
  memset(v34, 0, 0x78uLL);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = (const char *)&unk_1C0066CD0;
  v9 = (const char *)&unk_1C0066CD0;
  v10 = (const char *)&unk_1C0066CD0;
  v11 = 0LL;
  if ( a2 )
  {
    ++*(_DWORD *)(a1 + 504);
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v9 = *(const char **)(a1 + 560);
      if ( (v7 & 0x400000000000LL) != 0 )
        v10 = *(const char **)(a1 + 568);
    }
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0xFu,
      (__int64)&WPP_d730237a7598333a30e93ab8e38a2180_Traceguids,
      *(_DWORD *)(a1 + 504),
      a1,
      v9,
      v10);
    if ( *(_DWORD *)(a1 + 504) != 1 )
    {
      if ( (*(_QWORD *)(a1 + 8) & 0x800000000000000LL) == 0 )
        goto LABEL_10;
      LOBYTE(v12) = 1;
      goto LABEL_9;
    }
  }
  else
  {
    --*(_DWORD *)(a1 + 504);
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v9 = *(const char **)(a1 + 560);
      if ( (v7 & 0x400000000000LL) != 0 )
        v10 = *(const char **)(a1 + 568);
    }
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0x10u,
      (__int64)&WPP_d730237a7598333a30e93ab8e38a2180_Traceguids,
      *(_DWORD *)(a1 + 504),
      a1,
      v9,
      v10);
    if ( *(_DWORD *)(a1 + 504) )
    {
      if ( (*(_QWORD *)(a1 + 8) & 0x800000000000000LL) == 0 )
        goto LABEL_10;
      v12 = 1LL;
      goto LABEL_9;
    }
  }
  v11 = *(_QWORD *)(a1 + 408);
  v33 = v11;
  if ( !v11 )
  {
    if ( (*(_QWORD *)(a1 + 8) & 0x800000000000000LL) == 0 )
    {
LABEL_10:
      v13 = *(_QWORD *)(a1 + 8);
      v14 = (const char *)&unk_1C0066CD0;
      if ( (v13 & 0x200000000000LL) != 0 )
      {
        v8 = *(const char **)(a1 + 560);
        if ( (v13 & 0x400000000000LL) != 0 )
          v14 = *(const char **)(a1 + 568);
      }
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0x13u,
        (__int64)&WPP_d730237a7598333a30e93ab8e38a2180_Traceguids,
        v6,
        a1,
        v8,
        v14);
      a3(v11, (unsigned int)v6, 0LL, a4);
      return 259LL;
    }
    LOBYTE(v12) = a2;
LABEL_9:
    ACPIWakeEnableDisablePciDevice(a1, v12);
    goto LABEL_10;
  }
  v16 = ExAllocateFromNPagedLookasideList(&XswContextLookAsideList);
  v17 = v16;
  if ( !v16 )
  {
    v11 = v33;
    LODWORD(v6) = -1073741670;
    goto LABEL_10;
  }
  v16[24] = a2;
  *((_QWORD *)v16 + 4) = a3;
  *((_QWORD *)v16 + 5) = a4;
  *((_QWORD *)v16 + 2) = a1;
  *((_DWORD *)v16 + 7) = 1;
  v18 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v19 = a1 + 512;
  v31 = *(_QWORD *)(a1 + 512);
  v20 = *(_QWORD **)(a1 + 520);
  if ( *v20 != a1 + 512 )
    __fastfail(3u);
  v17[1] = v20;
  *v17 = v19;
  *v20 = v17;
  *(_QWORD *)(a1 + 520) = v17;
  KeReleaseSpinLock(&AcpiPowerLock, v18);
  if ( v31 == v19 )
  {
    if ( (*(_QWORD *)(a1 + 8) & 0x800000000000000LL) != 0 && !*((_BYTE *)v17 + 24) )
      ACPIWakeEnableDisablePciDevice(a1, 0LL);
    v21 = *(_DWORD *)(a1 + 552);
    WORD1(v34[0]) = 1;
    if ( (v21 & 0x40) != 0 )
    {
      v27 = *(_DWORD *)(a1 + 492);
      WORD1(v34[5]) = 1;
      WORD1(v34[10]) = 1;
      v22 = 3;
      v34[2] = a2 != 0;
      LOBYTE(v6) = AcpiPowerLeavingS0 != 0;
      v34[7] = v6;
      if ( v27 != 4 || (*(_DWORD *)(a1 + 8) & 0x800LL) != 0 )
        v34[12] = v27 - 1;
      else
        v34[12] = 4LL;
    }
    else
    {
      v22 = 1;
      LOBYTE(v6) = a2 != 0;
      v34[2] = v6;
    }
    v23 = AMLIAsyncEvalObject(v33, 0LL, v22, v34, ACPIWakeEnableDisableAsyncCallBack, v17);
    v24 = *(_QWORD *)(a1 + 8);
    v25 = v23;
    v26 = (const char *)&unk_1C0066CD0;
    if ( (v24 & 0x200000000000LL) != 0 )
    {
      v8 = *(const char **)(a1 + 560);
      if ( (v24 & 0x400000000000LL) != 0 )
        v26 = *(const char **)(a1 + 568);
    }
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0x11u,
      (__int64)&WPP_d730237a7598333a30e93ab8e38a2180_Traceguids,
      v25,
      a1,
      v8,
      v26);
    if ( v25 != 259 )
      ACPIWakeEnableDisableAsyncCallBack(v33, v25, 0LL, v17);
  }
  else
  {
    v28 = *(_QWORD *)(a1 + 8);
    v29 = (const char *)&unk_1C0066CD0;
    if ( (v28 & 0x200000000000LL) != 0 )
    {
      v8 = *(const char **)(a1 + 560);
      if ( (v28 & 0x400000000000LL) != 0 )
        v29 = *(const char **)(a1 + 568);
    }
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0x12u,
      (__int64)&WPP_d730237a7598333a30e93ab8e38a2180_Traceguids,
      3,
      a1,
      v8,
      v29);
  }
  return 259LL;
}
