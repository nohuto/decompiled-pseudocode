/*
 * XREFs of AcpiHandleInternalNotify @ 0x1C00539B0
 * Callers:
 *     AcpiNativeNotifyEventHandler @ 0x1C0053BB0 (AcpiNativeNotifyEventHandler.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     AMLIIterateParentNext @ 0x1C0027690 (AMLIIterateParentNext.c)
 *     WPP_RECORDER_SF_qs @ 0x1C00453F4 (WPP_RECORDER_SF_qs.c)
 */

void __fastcall AcpiHandleInternalNotify(volatile signed __int32 *a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rdx
  KIRQL v4; // si
  __int64 v5; // rcx

  v1 = a1;
  v2 = 0LL;
  dword_1C0077574 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
  byte_1C0077578 = 0;
  WPP_RECORDER_SF_qs(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    8,
    10,
    (__int64)&WPP_5c100f413c4c39dd209df17ee6fff58b_Traceguids,
    (char)a1,
    (__int64)&dword_1C0077574);
  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  dword_1C00776F8 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement(v1 + 2);
  do
  {
    if ( v2 )
      break;
    v5 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
    if ( v5 )
    {
      v2 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
      if ( *(_DWORD *)(v5 + 16) != 1599293264 )
        v2 = 0LL;
    }
    v1 = (volatile signed __int32 *)AMLIIterateParentNext(v1);
  }
  while ( v1 );
  if ( v1 )
    AMLIDereferenceHandleEx(v1, v3);
  _InterlockedOr64((volatile signed __int64 *)(v2 + 8), 0x20000000000uLL);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v4);
}
