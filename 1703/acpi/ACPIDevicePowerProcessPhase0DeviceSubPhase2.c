/*
 * XREFs of ACPIDevicePowerProcessPhase0DeviceSubPhase2 @ 0x1C000AFC0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIPowerScheduleDpc @ 0x1C0009B6C (ACPIPowerScheduleDpc.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C000DE58 (WPP_RECORDER_SF_qqss.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase0DeviceSubPhase2(__int64 a1)
{
  _QWORD *v1; // rax
  void *v2; // rdi
  char v3; // r8
  void *v5; // r10
  void *v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  void *v10; // r10
  __int64 v11; // rcx
  KIRQL v12; // bl
  char v14; // [rsp+30h] [rbp-28h]
  __int64 v15; // [rsp+40h] [rbp-18h]

  v1 = *(_QWORD **)(a1 + 40);
  v2 = &unk_1C0066CD0;
  v3 = 0;
  v5 = &unk_1C0066CD0;
  v6 = &unk_1C0066CD0;
  if ( v1 )
  {
    v7 = v1[1];
    v3 = (char)v1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v5 = (void *)v1[70];
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = (void *)v1[71];
    }
  }
  v15 = (__int64)v6;
  LOBYTE(v6) = 4;
  WPP_RECORDER_SF_qqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v6,
    10,
    52,
    (__int64)&WPP_32a24c5e9860357aa59cb74721ebb774_Traceguids,
    a1,
    v3,
    (__int64)v5,
    v15);
  if ( (*(_DWORD *)(a1 + 232) & 1) != 0 )
  {
    *(_DWORD *)(a1 + 212) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 256) = 0;
    *(_DWORD *)(a1 + 212) = 2;
  }
  v8 = *(_QWORD **)(a1 + 40);
  LODWORD(v9) = 0;
  v10 = &unk_1C0066CD0;
  if ( v8 )
  {
    v11 = v8[1];
    v9 = *(_QWORD *)(a1 + 40);
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v2 = (void *)v8[70];
      if ( (v11 & 0x400000000000LL) != 0 )
        v10 = (void *)v8[71];
    }
  }
  v14 = v9;
  LOBYTE(v9) = 4;
  WPP_RECORDER_SF_Lqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v9,
    10,
    14,
    (__int64)&WPP_32a24c5e9860357aa59cb74721ebb774_Traceguids,
    0,
    v14,
    (__int64)v2,
    (__int64)v10);
  *(_DWORD *)(a1 + 56) &= 0xEEFFFFFF;
  _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 208), *(_DWORD *)(a1 + 212), 1);
  v12 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  ACPIPowerScheduleDpc();
  KeReleaseSpinLock(&AcpiPowerQueueLock, v12);
  return 0LL;
}
