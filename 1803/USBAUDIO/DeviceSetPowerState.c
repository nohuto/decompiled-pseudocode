/*
 * XREFs of DeviceSetPowerState @ 0x1C0017AA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qdd @ 0x1C0001508 (WPP_RECORDER_SF_qdd.c)
 *     WmiLogPowerStateChange @ 0x1C0002628 (WmiLogPowerStateChange.c)
 *     _guard_dispatch_icall_nop @ 0x1C0009630 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall DeviceSetPowerState(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int128 v6; // rdi
  __int64 v7; // rbx
  _DWORD *v8; // rcx

  v6 = a3;
  WPP_RECORDER_SF_qdd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    a4 - 1,
    1u,
    0x1Au,
    (__int64)&WPP_f0533e5d5f783f1fc772c257a08fb41e_Traceguids,
    a1,
    a4 - 1,
    a3 - 1);
  v7 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v7 + 520) != (_DWORD)v6 )
  {
    DWORD2(v6) = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(pExtBusDeviceDispatchTable + 48))(
                   a1,
                   (unsigned int)v6,
                   a4);
    if ( (SDWORD2(v6) & 0x80000000) == 0 )
    {
      *(_DWORD *)(v7 + 520) = v6;
      if ( (_DWORD)v6 == 1 )
      {
        v8 = *(_DWORD **)(v7 + 512);
        if ( v8 )
          *v8 = 0;
      }
      else
      {
        KeResetEvent((PRKEVENT)(v7 + 536));
      }
    }
  }
  return WmiLogPowerStateChange(*(unsigned int *)(v7 + 520), a4, v6, SDWORD2(v6));
}
