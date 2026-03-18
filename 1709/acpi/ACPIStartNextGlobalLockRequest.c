/*
 * XREFs of ACPIStartNextGlobalLockRequest @ 0x1C0021258
 * Callers:
 *     ACPIReleaseGlobalLock @ 0x1C0020748 (ACPIReleaseGlobalLock.c)
 *     ACPIInterruptServiceRoutineDPC @ 0x1C0050670 (ACPIInterruptServiceRoutineDPC.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000EA0C (WPP_RECORDER_SF_.c)
 *     ACPIReleaseHardwareGlobalLock @ 0x1C00207E0 (ACPIReleaseHardwareGlobalLock.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0021340 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

void ACPIStartNextGlobalLockRequest()
{
  int v0; // edx
  KIRQL v1; // di
  char *v2; // rcx
  __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 *v5; // rbx
  int v6; // edx
  IRP *v7; // rcx

  v1 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AcpiInformation + 8);
  v2 = (char *)AcpiInformation + 48;
  if ( *(char **)v2 == v2 )
  {
    LOBYTE(v0) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v0,
      3,
      18,
      (__int64)&WPP_c95983702d7738c6949a939adda35a2c_Traceguids);
    ACPIReleaseHardwareGlobalLock();
    KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v1);
  }
  else
  {
    v3 = *(__int64 **)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (v4 = *v3, *(__int64 **)(*v3 + 8) != v3) )
      __fastfail(3u);
    *(_QWORD *)v2 = v4;
    *(_QWORD *)(v4 + 8) = v2;
    KeReleaseSpinLock((PKSPIN_LOCK)AcpiInformation + 8, v1);
    v5 = v3 - 2;
    *((_QWORD *)AcpiInformation + 9) = v5;
    *((_DWORD *)AcpiInformation + 20) = *((unsigned __int16 *)v5 + 5);
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qq(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      3,
      19,
      (__int64)&WPP_c95983702d7738c6949a939adda35a2c_Traceguids,
      (char)v5,
      *v5);
    if ( *((_WORD *)v5 + 4) == 1 )
    {
      v7 = (IRP *)*v5;
      v7->IoStatus.Status = 0;
      IofCompleteRequest(v7, 0);
    }
    else if ( *((_WORD *)v5 + 4) == 2 )
    {
      ((void (__fastcall *)(__int64 *))*v5)(v5);
    }
  }
}
