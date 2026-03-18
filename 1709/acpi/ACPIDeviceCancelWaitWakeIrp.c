/*
 * XREFs of ACPIDeviceCancelWaitWakeIrp @ 0x1C0001310
 * Callers:
 *     ACPIDeviceIrpWaitWakeRequestPending @ 0x1C0010070 (ACPIDeviceIrpWaitWakeRequestPending.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqss @ 0x1C0001518 (WPP_RECORDER_SF_qqqss.c)
 *     ACPIWakeEmulationDisable @ 0x1C0001918 (ACPIWakeEmulationDisable.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C00055B0 (WPP_RECORDER_SF_qqss.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C000FCCC (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0010234 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ACPIDeviceCancelWaitWakeIrp(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  char v4; // bp
  void *v5; // rbx
  __int64 v6; // rdi
  int v7; // edx
  void *v8; // r8
  void *v9; // rcx
  __int64 v10; // rax
  int v11; // edx
  __int64 *i; // rsi
  int v13; // edx
  void *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 **v17; // rax
  void (__fastcall *v18)(__int64, __int64, __int64); // rbx
  __int64 v19; // rcx
  void (__fastcall *v20)(__int64, int *); // rax
  void *v21; // rcx
  __int64 v22; // rax
  char v23; // [rsp+30h] [rbp-48h]
  char v24; // [rsp+38h] [rbp-40h]
  int v25; // [rsp+90h] [rbp+18h] BYREF
  char v26; // [rsp+94h] [rbp+1Ch]

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = 0;
  v5 = &unk_1C0067B08;
  v6 = DeviceExtension;
  v7 = 0;
  v8 = &unk_1C0067B08;
  v9 = &unk_1C0067B08;
  if ( DeviceExtension )
  {
    v7 = DeviceExtension;
    v10 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v8 = *(void **)(v6 + 560);
      if ( (v10 & 0x400000000000LL) != 0 )
        v9 = *(void **)(v6 + 568);
    }
  }
  v23 = v7;
  LOBYTE(v7) = 4;
  WPP_RECORDER_SF_qqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v7,
    5,
    10,
    (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids,
    a2,
    v23,
    (__int64)v8,
    (__int64)v9);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  for ( i = (__int64 *)AcpiPowerWaitWakeList; i != &AcpiPowerWaitWakeList; i = (__int64 *)*i )
  {
    if ( i[5] == v6 && i[25] == a2 )
    {
      v13 = 0;
      v14 = &unk_1C0067B08;
      if ( v6 )
      {
        v15 = *(_QWORD *)(v6 + 8);
        v13 = v6;
        if ( (v15 & 0x200000000000LL) != 0 )
        {
          v5 = *(void **)(v6 + 560);
          if ( (v15 & 0x400000000000LL) != 0 )
            v14 = *(void **)(v6 + 568);
        }
      }
      v24 = v13;
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_qqqss(
        WPP_GLOBAL_Control->DeviceExtension,
        v13,
        10,
        11,
        (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids,
        a2,
        (char)i,
        v24,
        (__int64)v5,
        (__int64)v14);
      v16 = *i;
      if ( *(__int64 **)(*i + 8) != i || (v17 = (__int64 **)i[1], *v17 != i) )
        __fastfail(3u);
      *v17 = (__int64 *)v16;
      *(_QWORD *)(v16 + 8) = v17;
      ACPIWakeRemoveDevicesAndUpdate(0LL, 0LL);
      *((_DWORD *)i + 27) |= 4u;
      v18 = (void (__fastcall *)(__int64, __int64, __int64))i[24];
      *((_DWORD *)i + 64) = -1073741536;
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
      IoReleaseCancelSpinLock(*(_BYTE *)(a2 + 69));
      v18(v6, a2, 3221225760LL);
      if ( (*(_QWORD *)(v6 + 952) & 0x100000000LL) != 0 )
        ACPIWakeEmulationDisable(i);
      if ( (*(_QWORD *)(v6 + 952) & 0x4000000000LL) != 0 )
      {
        v19 = *(_QWORD *)(v6 + 944);
        v25 = *(_DWORD *)(v6 + 928);
        v20 = *(void (__fastcall **)(__int64, int *))(v6 + 936);
        v26 = 0;
        v20(v19, &v25);
      }
      ACPIWakeEnableDisableAsync(v6, 0LL, &ACPIDeviceCancelWaitWakeIrpCallBack, i);
      return;
    }
  }
  v21 = &unk_1C0067B08;
  if ( v6 )
  {
    v22 = *(_QWORD *)(v6 + 8);
    v4 = v6;
    if ( (v22 & 0x200000000000LL) != 0 )
    {
      v5 = *(void **)(v6 + 560);
      if ( (v22 & 0x400000000000LL) != 0 )
        v21 = *(void **)(v6 + 568);
    }
  }
  LOBYTE(v11) = 2;
  WPP_RECORDER_SF_qqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v11,
    5,
    12,
    (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids,
    a2,
    v4,
    (__int64)v5,
    (__int64)v21);
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  IoReleaseCancelSpinLock(*(_BYTE *)(a2 + 69));
}
