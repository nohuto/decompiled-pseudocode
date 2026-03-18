/*
 * XREFs of ACPIDeviceCompletePhase3Off @ 0x1C00480C0
 * Callers:
 *     ACPIDevicePowerProcessPhase3 @ 0x1C000E7F4 (ACPIDevicePowerProcessPhase3.c)
 * Callees:
 *     ACPIDeviceCompletePhase3Common @ 0x1C0003AEC (ACPIDeviceCompletePhase3Common.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0014E98 (WPP_RECORDER_SF_qD.c)
 */

void __fastcall ACPIDeviceCompletePhase3Off(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  KIRQL v6; // si
  signed __int32 v7; // edx
  _QWORD **v8; // rdi
  _QWORD *i; // rax
  char v10; // r10
  __int64 v11; // r9
  _QWORD *v12; // r8
  char v13; // dl
  __int64 v14; // rcx
  char v15; // [rsp+30h] [rbp-18h]

  v5 = a2;
  v15 = a2;
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_qD(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    10,
    15,
    (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids,
    a4,
    v15);
  v6 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  _InterlockedAnd64((volatile signed __int64 *)(a4 + 16), 0xFFFFFFFFFFFFF7FFuLL);
  if ( v5 < 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(a4 + 16), 0x10000uLL);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 16), 0xFFFFFFFFFFFFFFEFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 16), 0xFFFFFFFFFFFEFFFFuLL);
  }
  _InterlockedAnd64((volatile signed __int64 *)(a4 + 16), 0xFFFFFFFFFFFFFFF7uLL);
  v7 = *(_DWORD *)(a4 + 68);
  --Phase3PendingOffWorkCount;
  ACPIDeviceCompletePhase3Common((volatile signed __int32 *)(a4 + 64), v7);
  v8 = (_QWORD **)(a4 + 48);
  for ( i = *v8; i != v8; i = (_QWORD *)*i )
  {
    v10 = 1;
    v11 = *(i - 1);
    v12 = *(_QWORD **)(v11 + 392);
    if ( v12 )
    {
      do
      {
        v13 = 0;
        v14 = v12[1];
        v12 = (_QWORD *)*v12;
        if ( !*(_DWORD *)(v14 + 24) )
          v13 = v10;
        v10 = v13;
      }
      while ( v12 );
      if ( v13 )
        *(_QWORD *)(v11 + 952) |= 0x10000uLL;
    }
  }
  KeReleaseSpinLock(&AcpiPowerLock, v6);
}
