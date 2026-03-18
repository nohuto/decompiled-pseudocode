/*
 * XREFs of ACPIStartNextGlobalLockRequest @ 0x1C0035494
 * Callers:
 *     ACPIInterruptServiceRoutineDPC @ 0x1C002B080 (ACPIInterruptServiceRoutineDPC.c)
 *     ACPIReleaseGlobalLock @ 0x1C0035340 (ACPIReleaseGlobalLock.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009204 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00213B4 (WPP_RECORDER_SF_qq.c)
 *     ACPIReleaseHardwareGlobalLock @ 0x1C003544C (ACPIReleaseHardwareGlobalLock.c)
 */

void ACPIStartNextGlobalLockRequest()
{
  int v0; // edx
  KIRQL v1; // di
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx
  __int64 v4; // rax
  IRP **v5; // rbx
  int v6; // edx
  IRP *v7; // rcx

  v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AcpiInformation + 8);
  v2 = (_QWORD *)((char *)AcpiInformation + 48);
  v3 = (_QWORD *)*((_QWORD *)AcpiInformation + 6);
  if ( v3 == (_QWORD *)((char *)AcpiInformation + 48) )
  {
    LOBYTE(v0) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v0,
      3,
      18,
      (__int64)&WPP_ae844b74f83f39eb48ef03799e8dc65b_Traceguids);
    ACPIReleaseHardwareGlobalLock();
    KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v1);
  }
  else
  {
    if ( (_QWORD *)v3[1] != v2 || (v4 = *v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    *(_QWORD *)(v4 + 8) = v2;
    KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v1);
    v5 = (IRP **)(v3 - 2);
    *((_QWORD *)AcpiInformation + 9) = v5;
    *((_DWORD *)AcpiInformation + 20) = *((unsigned __int16 *)v5 + 5);
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qq(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      3,
      19,
      (__int64)&WPP_ae844b74f83f39eb48ef03799e8dc65b_Traceguids,
      (char)v5,
      (char)*v5);
    if ( *((_WORD *)v5 + 4) == 1 )
    {
      v7 = *v5;
      v7->IoStatus.Status = 0;
      IofCompleteRequest(v7, 0);
    }
    else if ( *((_WORD *)v5 + 4) == 2 )
    {
      ((void (__fastcall *)(IRP **))*v5)(v5);
    }
  }
}
