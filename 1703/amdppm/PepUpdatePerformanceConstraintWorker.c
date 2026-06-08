/*
 * XREFs of PepUpdatePerformanceConstraintWorker @ 0x1C00299A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000122C (WPP_RECORDER_SF_.c)
 *     PepNotifyPerfConstraints @ 0x1C000A7D8 (PepNotifyPerfConstraints.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 *     ProcLibCapChange @ 0x1C001CC38 (ProcLibCapChange.c)
 *     ProcLibTracePerfConstraintChange @ 0x1C001F550 (ProcLibTracePerfConstraintChange.c)
 */

void __fastcall PepUpdatePerformanceConstraintWorker(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  void *DeviceExtension; // rdi
  __int64 v3; // rbx
  int *v4; // rsi
  __int64 v5; // rcx
  unsigned int v6; // eax

  DeviceExtension = DeviceObject->DeviceExtension;
  v3 = *((_QWORD *)DeviceExtension + 146);
  if ( v3 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C00113E8,
      0LL);
    _InterlockedExchange((volatile __int32 *)DeviceExtension + 287, 0);
    v4 = (int *)(v3 + 28);
    PepNotifyPerfConstraints((__int64)DeviceExtension, (_DWORD *)(v3 + 28), (_DWORD *)(v3 + 24));
    v5 = *(_QWORD *)(v3 + 8);
    if ( *(_DWORD *)(v3 + 28) > *(_DWORD *)(v5 + 4) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        1u,
        0x1Au,
        (__int64)&WPP_4b9e3f54236f3d61f5b3facb209ab545_Traceguids);
      v5 = *(_QWORD *)(v3 + 8);
      *v4 = *(_DWORD *)(v5 + 4);
    }
    if ( (unsigned int)*v4 < *(_DWORD *)(v5 + 12) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        1u,
        0x1Bu,
        (__int64)&WPP_4b9e3f54236f3d61f5b3facb209ab545_Traceguids);
      v5 = *(_QWORD *)(v3 + 8);
      *v4 = *(_DWORD *)(v5 + 12);
    }
    v6 = (unsigned int)(100 * *v4) / *(_DWORD *)(v5 + 4);
    *(_DWORD *)(v3 + 32) = v6;
    ProcLibCapChange(
      (__int64)DeviceExtension,
      *((_DWORD *)DeviceExtension + 108),
      *((_DWORD *)DeviceExtension + 120),
      v6);
    ((void (__fastcall *)(void *))qword_1C0011790)(DeviceExtension);
    ProcLibTracePerfConstraintChange((__int64)DeviceExtension, *v4, *(_DWORD *)(v3 + 24));
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C00113E8);
  }
  else
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x19u,
      (__int64)&WPP_4b9e3f54236f3d61f5b3facb209ab545_Traceguids);
  }
}
