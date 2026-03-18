/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1C0005B30
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompletePhase3Common @ 0x1C0003AEC (ACPIDeviceCompletePhase3Common.c)
 *     ACPIPowerScheduleDpc @ 0x1C0003B2C (ACPIPowerScheduleDpc.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C00055B0 (WPP_RECORDER_SF_qqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase5(__int64 a1)
{
  _QWORD *v1; // rdi
  void *v2; // rsi
  char v3; // dl
  _QWORD *v4; // rbp
  const char *v6; // r8
  const char *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  void *v12; // r10
  __int64 v13; // rcx
  KIRQL v14; // bl
  char v16; // [rsp+30h] [rbp-38h]

  v1 = *(_QWORD **)(a1 + 40);
  v2 = &unk_1C0067B08;
  v3 = 0;
  v4 = (_QWORD *)(a1 + 216);
  v6 = (const char *)&unk_1C0067B08;
  v7 = (const char *)&unk_1C0067B08;
  if ( v1 )
  {
    v8 = v1[1];
    v3 = (char)v1;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v6 = (const char *)v1[70];
      if ( (v8 & 0x400000000000LL) != 0 )
        v7 = (const char *)v1[71];
    }
  }
  WPP_RECORDER_SF_qqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xAu,
    0x4Fu,
    (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids,
    a1,
    v3,
    v6,
    v7);
  *(_DWORD *)(a1 + 212) = 8;
  v9 = v4[2];
  if ( (v9 & 9) == 9 && ((v9 & 2) != 0 || (v1[1] & 0x40) != 0) )
  {
    memset(v4, 0, 0x28uLL);
    v10 = *(_QWORD **)(a1 + 40);
    LODWORD(v11) = 0;
    v12 = &unk_1C0067B08;
    if ( v10 )
    {
      v13 = v10[1];
      v11 = *(_QWORD *)(a1 + 40);
      if ( (v13 & 0x200000000000LL) != 0 )
      {
        v2 = (void *)v10[70];
        if ( (v13 & 0x400000000000LL) != 0 )
          v12 = (void *)v10[71];
      }
    }
    v16 = v11;
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v11,
      10,
      14,
      (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids,
      0,
      v16,
      (__int64)v2,
      (__int64)v12);
    *(_DWORD *)(a1 + 56) &= 0xEEFFFFFF;
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 208), *(_DWORD *)(a1 + 212), 1);
    v14 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
    ACPIPowerScheduleDpc();
    KeReleaseSpinLock(&AcpiPowerQueueLock, v14);
  }
  else
  {
    *(_DWORD *)(a1 + 256) = -1073741436;
    ACPIDeviceCompletePhase3Common((volatile signed __int32 *)(a1 + 208), 2);
  }
  return 0LL;
}
