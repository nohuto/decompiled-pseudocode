/*
 * XREFs of RaidAdapterStartDeviceIrp @ 0x1C0028C7C
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C00125A4 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 *     RaCallMiniportAdapterControl @ 0x1C000EDD4 (RaCallMiniportAdapterControl.c)
 *     RaForwardIrpSynchronous @ 0x1C00107A4 (RaForwardIrpSynchronous.c)
 *     RaidIsAdapterControlSupported @ 0x1C0014F3C (RaidIsAdapterControlSupported.c)
 *     RaidGetD3ColdInterface @ 0x1C0015F0C (RaidGetD3ColdInterface.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqtqq @ 0x1C0024340 (McTemplateK0pqtqq.c)
 *     RaidAdapterCompleteInitialization @ 0x1C00255D4 (RaidAdapterCompleteInitialization.c)
 *     RaidAdapterConfigureResources @ 0x1C0025804 (RaidAdapterConfigureResources.c)
 *     RaidAdapterGetSystemPowerHint @ 0x1C0026234 (RaidAdapterGetSystemPowerHint.c)
 *     RaidAdapterGetSystemPowerResumeLatency @ 0x1C0026254 (RaidAdapterGetSystemPowerResumeLatency.c)
 *     RaidAdapterInitializeWmi @ 0x1C0026794 (RaidAdapterInitializeWmi.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C0026B14 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterRegisterDeviceInterface @ 0x1C0027244 (RaidAdapterRegisterDeviceInterface.c)
 *     RaidAdapterRegisterRpmbInterface @ 0x1C00272A8 (RaidAdapterRegisterRpmbInterface.c)
 *     RaidAdapterStartMiniport @ 0x1C0029188 (RaidAdapterStartMiniport.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C002BB14 (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qD @ 0x1C002C15C (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C002C280 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C002C2D0 (WPP_SF_qqD.c)
 *     RaInitializeConfiguration @ 0x1C0066364 (RaInitializeConfiguration.c)
 */

__int64 __fastcall RaidAdapterStartDeviceIrp(char *Context, PIRP Irp)
{
  int v4; // ebx
  unsigned int v5; // r8d
  int started; // esi
  __int64 v7; // r14
  __int64 v8; // r8
  _QWORD *v9; // r9
  int *v10; // rax
  int v11; // ecx
  __int64 v12; // rdx
  void **v13; // rbx
  __int64 v14; // rdx
  NTSTATUS v15; // r8d
  void *v16; // rcx
  KIRQL v17; // bl
  __int64 v18; // rax
  PVOID *Handle; // [rsp+20h] [rbp-68h]
  unsigned int v21; // [rsp+28h] [rbp-60h]
  int SystemPowerHint; // [rsp+48h] [rbp-40h]

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_0e2a19f4a3e138dc01b4b18bc88c5901_Traceguids, Context, Irp);
  }
  v4 = *((_DWORD *)Context + 22);
  *((_DWORD *)Context + 22) = 1;
  if ( v4 == 2 || v4 == 8 )
  {
    started = RaInitializeConfiguration(
                (int)Context + 304,
                *((_QWORD *)Context + 66),
                *((_DWORD *)Context + 188),
                *((_DWORD *)Context + 189),
                (Context[110] & 2) != 0);
    if ( started >= 0 )
    {
      started = RaForwardIrpSynchronous(*((struct _DEVICE_OBJECT **)Context + 3), Irp);
      if ( started >= 0 )
      {
        v7 = *((_QWORD *)Context + 66);
        if ( v7 )
        {
          started = RaidAdapterConfigureResources((__int64)Context);
          if ( started >= 0 )
          {
            if ( *((_DWORD *)Context + 78) == 5 )
              (*((void (__fastcall **)(_QWORD, __int64, char *, _QWORD, int))Context + 82))(
                *((_QWORD *)Context + 76),
                4LL,
                Context + 4828,
                0LL,
                64);
            *((_DWORD *)Context + 522) = 64;
            KeInitializeSpinLock((PKSPIN_LOCK)Context + 264);
            *((_QWORD *)Context + 263) = Context + 2096;
            *((_QWORD *)Context + 262) = Context + 2096;
            *((_QWORD *)Context + 265) = 0LL;
            *((_DWORD *)Context + 536) = 1;
            RaidGetD3ColdInterface(*((PDEVICE_OBJECT *)Context + 1), (_QWORD *)Context + 683);
            started = RaidAdapterStartMiniport(Context, v7);
            if ( started >= 0 )
            {
              if ( v4 == 8 )
              {
                v17 = KfRaiseIrql(2u);
                RaidResumeAndRestartAdapterQueues(Context);
                KeLowerIrql(v17);
              }
              else
              {
                started = RaidAdapterCompleteInitialization((__int64)Context);
                if ( started >= 0 )
                {
                  if ( StorEtwLoggingEnabled )
                  {
                    v9 = (_QWORD *)*((_QWORD *)Context + 636);
                    if ( v9 )
                    {
                      v10 = (int *)v9[1];
                      v11 = *v10;
                      if ( *v10 == 1 )
                      {
                        v12 = (__int64)(v10 + 6);
                      }
                      else
                      {
                        v12 = (__int64)(v10 + 8);
                        if ( v11 != 2 && v11 != 3 )
                          v12 = 8LL;
                      }
                      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
                      {
                        v21 = ((unsigned __int8)Context[108] >> 3) & 1;
                        LODWORD(Handle) = *((_DWORD *)Context + 14);
                        McTemplateK0pqtqq(v21, v12, v8, *v9, Handle, v21, *((_DWORD *)Context + 1276), *(_DWORD *)v12);
                      }
                    }
                  }
                  RaidAdapterInitializeWmi((__int64)Context);
                  RaidAdapterRegisterDeviceInterface((__int64)Context);
                  RaidAdapterRegisterRpmbInterface((__int64)Context);
                  if ( LOBYTE(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) == 1
                    && (unsigned int)RaidIsAdapterControlSupported((__int64)Context, 12) )
                  {
                    v13 = (void **)(Context + 5096);
                    v15 = PoRegisterPowerSettingCallback(
                            *((PDEVICE_OBJECT *)Context + 1),
                            &GUID_LOW_POWER_EPOCH,
                            RaidPowerSettingCallback,
                            Context,
                            (PVOID *)Context + 637);
                    if ( v15 < 0 )
                    {
                      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
                      {
                        WPP_SF_qD(
                          WPP_GLOBAL_Control->AttachedDevice,
                          18LL,
                          &WPP_0e2a19f4a3e138dc01b4b18bc88c5901_Traceguids,
                          Context,
                          v15);
                      }
                      *v13 = 0LL;
                      started = 0;
                    }
                    else
                    {
                      LOBYTE(v14) = 1;
                      started = PoRegisterCoalescingCallback(RaidCoalescingCallback, v14, Context + 5112, Context);
                      if ( started < 0 )
                      {
                        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
                        {
                          WPP_SF_qD(
                            WPP_GLOBAL_Control->AttachedDevice,
                            17LL,
                            &WPP_0e2a19f4a3e138dc01b4b18bc88c5901_Traceguids,
                            Context,
                            started);
                        }
                        v16 = *v13;
                        *((_QWORD *)Context + 639) = 0LL;
                        PoUnregisterPowerSettingCallback(v16);
                        *v13 = 0LL;
                        started = 0;
                      }
                      else
                      {
                        Context[108] &= ~0x80u;
                        Context[109] &= ~1u;
                        SystemPowerHint = RaidAdapterGetSystemPowerHint((__int64)Context);
                        RaidAdapterGetSystemPowerResumeLatency(SystemPowerHint);
                        RaCallMiniportAdapterControl((__int64)(Context + 296));
                      }
                    }
                  }
                  if ( (unsigned int)RaidIsAdapterControlSupported((__int64)Context, 14) )
                  {
                    PoRegisterPowerSettingCallback(
                      *((PDEVICE_OBJECT *)Context + 1),
                      &GUID_DISK_MAX_POWER,
                      RaidPowerSettingCallback,
                      Context,
                      (PVOID *)Context + 640);
                    started = IoRegisterDeviceInterface(
                                *((PDEVICE_OBJECT *)Context + 4),
                                &GUID_DEVINTERFACE_THERMAL_COOLING,
                                0LL,
                                (PUNICODE_STRING)(Context + 5128));
                    if ( started >= 0 )
                    {
                      Context[109] |= 8u;
                      IoSetDeviceInterfaceState((PUNICODE_STRING)(Context + 5128), 1u);
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          started = -1073741810;
        }
      }
    }
    v18 = *((_QWORD *)Context + 636);
    if ( v18 && (*(_DWORD *)(v18 + 20) & 4) != 0 )
    {
      RaidAdapterPoFxIdleComponent((__int64)Context, 0LL, 0LL);
      *(_DWORD *)(*((_QWORD *)Context + 636) + 20LL) &= ~4u;
    }
    *((_DWORD *)Context + 1436) = 0;
    *((_DWORD *)Context + 1437) = 0;
    if ( started < 0 )
      *((_DWORD *)Context + 22) = 2;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        19LL,
        &WPP_0e2a19f4a3e138dc01b4b18bc88c5901_Traceguids,
        Context,
        Irp,
        started);
    }
    v5 = started;
  }
  else
  {
    v5 = RaForwardIrpSynchronous(*((struct _DEVICE_OBJECT **)Context + 3), Irp);
  }
  return RaidCompleteRequestEx(Irp, 0, v5);
}
