/*
 * XREFs of RaidAdapterStartDeviceIrp @ 0x1C0010F4C
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C0012070 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     RaidAdapterConfigureResources @ 0x1C00111CC (RaidAdapterConfigureResources.c)
 *     RaidAdapterInitializeWmi @ 0x1C00112E0 (RaidAdapterInitializeWmi.c)
 *     RaidAdapterRegisterDeviceInterface @ 0x1C0011AF4 (RaidAdapterRegisterDeviceInterface.c)
 *     RaCallMiniportAdapterControl @ 0x1C0011DF0 (RaCallMiniportAdapterControl.c)
 *     RaForwardIrpSynchronous @ 0x1C0012394 (RaForwardIrpSynchronous.c)
 *     RaidIsAdapterControlSupported @ 0x1C00127FC (RaidIsAdapterControlSupported.c)
 *     RaidGetD3ColdInterface @ 0x1C0012FA8 (RaidGetD3ColdInterface.c)
 *     RaidAdapterCompleteInitialization @ 0x1C0018904 (RaidAdapterCompleteInitialization.c)
 *     RaidAdapterStartMiniport @ 0x1C00195D8 (RaidAdapterStartMiniport.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C001E788 (RaidAdapterPoFxIdleComponent.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqtqq @ 0x1C002BB8C (McTemplateK0pqtqq.c)
 *     RaidAdapterGetSystemPowerHint @ 0x1C002D380 (RaidAdapterGetSystemPowerHint.c)
 *     RaidAdapterGetSystemPowerResumeLatency @ 0x1C002D3A0 (RaidAdapterGetSystemPowerResumeLatency.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C0030614 (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qD @ 0x1C0030A88 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C0030BAC (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C0030BFC (WPP_SF_qqD.c)
 *     RaInitializeConfiguration @ 0x1C005FDE4 (RaInitializeConfiguration.c)
 */

__int64 __fastcall RaidAdapterStartDeviceIrp(char *Context, PIRP Irp)
{
  int v4; // ebx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_SECURITY_CONTEXT *SecurityContext; // r15
  _UNICODE_STRING *FileName; // r12
  NTSTATUS started; // esi
  __int64 v9; // rbp
  int v10; // r8d
  _QWORD *v11; // r9
  __int64 v12; // rax
  unsigned int v13; // r8d
  int *v15; // rax
  int v16; // ecx
  __int64 v17; // rdx
  PVOID *v18; // rbx
  __int64 v19; // rdx
  NTSTATUS v20; // r8d
  KIRQL v21; // bl
  _DWORD v22[2]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int SystemPowerHint; // [rsp+48h] [rbp-40h]
  int SystemPowerResumeLatency; // [rsp+4Ch] [rbp-3Ch]

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_d17971f34b7c3fdc440c591ea55cafdf_Traceguids, Context, Irp);
  }
  v4 = *((_DWORD *)Context + 22);
  *((_DWORD *)Context + 22) = 1;
  if ( v4 != 2 && v4 != 8 )
  {
    v13 = RaForwardIrpSynchronous(*((_QWORD *)Context + 3), Irp);
    return RaidCompleteRequestEx(Irp, 0, v13);
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  FileName = CurrentStackLocation->Parameters.QueryDirectory.FileName;
  started = RaInitializeConfiguration(
              Context + 304,
              *((_QWORD *)Context + 66),
              *((unsigned int *)Context + 188),
              *((unsigned int *)Context + 189));
  if ( started >= 0 )
  {
    started = RaForwardIrpSynchronous(*((_QWORD *)Context + 3), Irp);
    if ( started >= 0 )
    {
      v9 = *((_QWORD *)Context + 66);
      if ( v9 )
      {
        started = RaidAdapterConfigureResources(Context, SecurityContext, FileName);
        if ( started < 0 )
          goto LABEL_18;
        if ( *(_DWORD *)(v9 + 4) == 5 )
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
        RaidGetD3ColdInterface(*((PDEVICE_OBJECT *)Context + 1));
        started = RaidAdapterStartMiniport(Context, v9);
        if ( started < 0 )
          goto LABEL_18;
        if ( v4 == 8 )
        {
          v21 = KfRaiseIrql(2u);
          RaidResumeAndRestartAdapterQueues(Context);
          KeLowerIrql(v21);
        }
        else
        {
          started = RaidAdapterCompleteInitialization(Context);
          if ( started >= 0 )
          {
            if ( StorEtwLoggingEnabled )
            {
              v11 = (_QWORD *)*((_QWORD *)Context + 636);
              if ( v11 )
              {
                v15 = (int *)v11[1];
                v16 = *v15;
                if ( *v15 == 1 )
                {
                  v17 = (__int64)(v15 + 6);
                }
                else
                {
                  v17 = (__int64)(v15 + 8);
                  if ( v16 != 2 && v16 != 3 )
                    v17 = 8LL;
                }
                if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
                  McTemplateK0pqtqq(
                    ((unsigned __int8)Context[108] >> 3) & 1,
                    v17,
                    v10,
                    *v11,
                    *((_DWORD *)Context + 14),
                    (Context[108] & 8) != 0,
                    *((_DWORD *)Context + 1276),
                    *(_DWORD *)v17);
              }
            }
            RaidAdapterInitializeWmi(Context);
            RaidAdapterRegisterDeviceInterface(Context);
            if ( *((_DWORD *)Context + 1410)
              && IoRegisterDeviceInterface(
                   *((PDEVICE_OBJECT *)Context + 4),
                   &GUID_DEVINTERFACE_UNIFIED_ACCESS_RPMB,
                   0LL,
                   (PUNICODE_STRING)(Context + 5624)) >= 0
              && IoSetDeviceInterfaceState((PUNICODE_STRING)(Context + 5624), 1u) < 0 )
            {
              RtlFreeUnicodeString((PUNICODE_STRING)(Context + 5624));
            }
            if ( IsSystemAoAC != 1 || !(unsigned int)RaidIsAdapterControlSupported(Context, 12LL) )
              goto LABEL_17;
            v18 = (PVOID *)(Context + 5096);
            v20 = PoRegisterPowerSettingCallback(
                    *((PDEVICE_OBJECT *)Context + 1),
                    &GUID_LOW_POWER_EPOCH,
                    RaidPowerSettingCallback,
                    Context,
                    (PVOID *)Context + 637);
            if ( v20 < 0 )
            {
              if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
              {
                WPP_SF_qD(
                  WPP_GLOBAL_Control->AttachedDevice,
                  18LL,
                  &WPP_d17971f34b7c3fdc440c591ea55cafdf_Traceguids,
                  Context,
                  v20);
              }
            }
            else
            {
              LOBYTE(v19) = 1;
              started = PoRegisterCoalescingCallback(RaidCoalescingCallback, v19, Context + 5112, Context);
              if ( started >= 0 )
              {
                Context[108] &= ~0x80u;
                Context[109] &= ~1u;
                v22[1] = 16;
                v22[0] = 1;
                SystemPowerHint = RaidAdapterGetSystemPowerHint(Context);
                SystemPowerResumeLatency = RaidAdapterGetSystemPowerResumeLatency(SystemPowerHint);
                RaCallMiniportAdapterControl(Context + 296, 12LL, v22);
LABEL_17:
                if ( (unsigned int)RaidIsAdapterControlSupported(Context, 14LL) )
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
                goto LABEL_18;
              }
              if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
              {
                WPP_SF_qD(
                  WPP_GLOBAL_Control->AttachedDevice,
                  17LL,
                  &WPP_d17971f34b7c3fdc440c591ea55cafdf_Traceguids,
                  Context,
                  started);
              }
              *((_QWORD *)Context + 639) = 0LL;
              PoUnregisterPowerSettingCallback(*v18);
            }
            *v18 = 0LL;
            started = 0;
            goto LABEL_17;
          }
        }
      }
      else
      {
        started = -1073741810;
      }
    }
  }
LABEL_18:
  v12 = *((_QWORD *)Context + 636);
  if ( v12 && (*(_DWORD *)(v12 + 20) & 4) != 0 )
  {
    RaidAdapterPoFxIdleComponent(Context, 0LL, 0LL);
    *(_DWORD *)(*((_QWORD *)Context + 636) + 20LL) &= ~4u;
  }
  if ( started < 0 )
    *((_DWORD *)Context + 22) = 2;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      19LL,
      &WPP_d17971f34b7c3fdc440c591ea55cafdf_Traceguids,
      Context,
      Irp,
      started);
  }
  v13 = started;
  return RaidCompleteRequestEx(Irp, 0, v13);
}
