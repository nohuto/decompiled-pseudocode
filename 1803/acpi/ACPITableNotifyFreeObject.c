/*
 * XREFs of ACPITableNotifyFreeObject @ 0x1C003B510
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009204 (WPP_RECORDER_SF_.c)
 *     ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x1C000C15C (ACPIBuildProcessDelayedDependencyExternalTrigger.c)
 *     ACPIBuildProcessNotifyPepDeleteDevice @ 0x1C000EC80 (ACPIBuildProcessNotifyPepDeleteDevice.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C00286A0 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     WPP_RECORDER_SF_qqDD @ 0x1C003B900 (WPP_RECORDER_SF_qqDD.c)
 *     AMLIFinalizeObject @ 0x1C0043734 (AMLIFinalizeObject.c)
 */

__int64 __fastcall ACPITableNotifyFreeObject(int a1, KIRQL *a2, int a3, int a4)
{
  KIRQL *v5; // rbx
  __int64 v7; // rdx
  int v8; // edi
  __int64 v9; // rdx
  volatile signed __int32 *v10; // rcx
  ULONG_PTR v11; // rdi
  __int64 v12; // rax
  bool v13; // di
  __int64 v14; // rbx
  KIRQL v15; // al

  v5 = a2;
  switch ( a1 )
  {
    case 1:
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        22,
        10,
        (__int64)&WPP_3c7d9887b9043d14dda536222ad8cbda_Traceguids);
      *v5 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
      return 0LL;
    case 3:
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        22,
        11,
        (__int64)&WPP_3c7d9887b9043d14dda536222ad8cbda_Traceguids);
      KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
      KeReleaseSpinLock(&AcpiPowerLock, *v5);
      return 0LL;
    case 6:
      if ( a3 == 6 || (unsigned int)(a3 - 12) <= 1 )
      {
        v13 = 1;
        v14 = *(_QWORD *)(*(_QWORD *)a2 + 104LL);
        v15 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
        if ( v14 )
          v13 = (*(_BYTE *)(v14 + 8) & 0x60) != 0;
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v15);
        if ( v14 && !v13 )
          ACPIBuildProcessNotifyPepDeleteDevice(v14, 1);
      }
      break;
    default:
      WPP_RECORDER_SF_qqDD(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)a2, a3, a4);
      v8 = a1 - 4;
      if ( !v8 )
        KeBugCheckEx(0xA5u, 0x13uLL, (ULONG_PTR)v5, 0LL, 0LL);
      if ( v8 == 1 )
        KeBugCheckEx(0xA5u, 0x13uLL, (ULONG_PTR)v5, 1uLL, 0LL);
      if ( a3 == 11 )
      {
        LOBYTE(v7) = 1;
LABEL_8:
        AMLIFinalizeObject(v5, v7);
        return 0LL;
      }
      if ( a3 == 10 )
      {
        v9 = *(_QWORD *)v5;
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v5 + 96LL) + 12LL) == 2 )
        {
          v10 = *(volatile signed __int32 **)(v9 + 104);
          *(_QWORD *)(v9 + 104) = 0LL;
          AMLIDereferenceHandleEx(v10);
        }
      }
      v11 = *(_QWORD *)(*(_QWORD *)v5 + 104LL);
      if ( !v11 )
      {
        v7 = 0LL;
        goto LABEL_8;
      }
      _InterlockedOr64((volatile signed __int64 *)(v11 + 8), 0x80000000000uLL);
      v12 = *(_QWORD *)(v11 + 744);
      if ( v12 )
        _InterlockedOr64((volatile signed __int64 *)(v12 + 8), 0x40000000000uLL);
      ACPIBuildProcessDelayedDependencyExternalTrigger(v11);
      *(_QWORD *)(*(_QWORD *)v5 + 104LL) = 0LL;
      ACPIInitDereferenceDeviceExtensionLocked(v11);
      break;
  }
  return 0LL;
}
