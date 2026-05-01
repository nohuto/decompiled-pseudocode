/*
 * XREFs of ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180010768
 * Callers:
 *     ??_G?$CTaskWrapper@V_lambda_e039250a5e9a10031e161b6cc2d8aa5b_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18000EF70 (--_G-$CTaskWrapper@V_lambda_e039250a5e9a10031e161b6cc2d8aa5b_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_0d74f069fa796de4b01adcedcd59308d___ @ 0x180012350 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_0d74f069fa796de4b01adcedcd59308d___.c)
 *     ?OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z @ 0x180081810 (-OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z.c)
 *     ??1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ @ 0x1800F621C (--1SetSystemVisual@CFramePresentationTelemetry@@QEAA@XZ.c)
 *     ??1AltF4CloseRequested@CAppManagerTelemetry@@QEAA@XZ @ 0x180104388 (--1AltF4CloseRequested@CAppManagerTelemetry@@QEAA@XZ.c)
 *     ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x18010FDD0 (-_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z.c)
 *     ??1EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAA@XZ @ 0x18011DAD4 (--1EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ??1TitleBarButtonCloseRequested@CAppManagerTelemetry@@QEAA@XZ @ 0x1801292F0 (--1TitleBarButtonCloseRequested@CAppManagerTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?StopActivity@SetSystemVisual@CFramePresentationTelemetry@@MEAAXXZ @ 0x18000E8F0 (-StopActivity@SetSystemVisual@CFramePresentationTelemetry@@MEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?SetStopResult@?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800F7E4C (-SetStopResult@-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F7E84 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_1800F7E84.c)
 */

void __fastcall wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        CFramePresentationTelemetry::SetSystemVisual *this)
{
  RTL_SRWLOCK *v1; // rsi
  char v3; // bp
  RTL_SRWLOCK *v4; // rsi
  volatile signed __int32 *v5; // rcx
  _DWORD *v6; // rcx
  char *v7; // rdi
  __int64 v8; // rdx
  void (__fastcall *v9)(CFramePresentationTelemetry::SetSystemVisual *); // rax
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (RTL_SRWLOCK *)*((_QWORD *)this + 38);
  v3 = 1;
  if ( !v1 )
    goto LABEL_10;
  v4 = v1 + 31;
  AcquireSRWLockExclusive(v4);
  v5 = (volatile signed __int32 *)*((_QWORD *)this + 38);
  if ( !v5 || *v5 != 1 )
  {
    v3 = 0;
    if ( v5 )
    {
      if ( _InterlockedExchangeAdd(v5, 0xFFFFFFFF) == 1 )
      {
        v7 = (char *)*((_QWORD *)this + 38);
        if ( v7 )
        {
          wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v7 + 8);
          operator delete(v7, (const struct std::nothrow_t *)0x100);
        }
      }
      *((_QWORD *)this + 38) = 0LL;
    }
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( v3 )
  {
LABEL_10:
    v6 = (_DWORD *)*((_QWORD *)this + 6);
    if ( *v6 == 1 )
    {
      v8 = 2147942974LL;
      if ( (int)v6[21] < 0 )
        v8 = (unsigned int)v6[21];
      wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v6,
        v8,
        v10);
      v9 = *(void (__fastcall **)(CFramePresentationTelemetry::SetSystemVisual *))(*(_QWORD *)this + 8LL);
      if ( v9 == CFramePresentationTelemetry::SetSystemVisual::StopActivity )
        CFramePresentationTelemetry::SetSystemVisual::StopActivity(this);
      else
        v9(this);
    }
  }
}
