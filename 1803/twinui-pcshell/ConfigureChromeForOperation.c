/*
 * XREFs of ConfigureChromeForOperation @ 0x180089368
 * Callers:
 *     ?_RestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@@Z @ 0x180023304 (-_RestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAUViewSi.c)
 *     ?_ControlGainedHelper@CDesktopPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIAppLayout@@@Z @ 0x1802C0ADC (-_ControlGainedHelper@CDesktopPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PE.c)
 * Callees:
 *     ?SetChromeOptions@ApplicationViewOperation@@UEAAJW4APPLICATION_FRAME_CHROME_OPTIONS@@0@Z @ 0x180089470 (-SetChromeOptions@ApplicationViewOperation@@UEAAJW4APPLICATION_FRAME_CHROME_OPTIONS@@0@Z.c)
 *     ?SetZOrderBand@ApplicationViewOperation@@UEAAJK@Z @ 0x180089480 (-SetZOrderBand@ApplicationViewOperation@@UEAAJK@Z.c)
 *     ?SetTouchBehavior@ApplicationViewOperation@@UEAAJW4APPLICATION_FRAME_TOUCH_BEHAVIOR@@@Z @ 0x1800894A0 (-SetTouchBehavior@ApplicationViewOperation@@UEAAJW4APPLICATION_FRAME_TOUCH_BEHAVIOR@@@Z.c)
 *     ?SetSizeConstraintOverridesLogical@ApplicationViewOperation@@UEAAJPEAUtagSIZE@@0@Z @ 0x1800894B0 (-SetSizeConstraintOverridesLogical@ApplicationViewOperation@@UEAAJPEAUtagSIZE@@0@Z.c)
 *     ?SetSizeConstraintOverridesPhysical@ApplicationViewOperation@@UEAAJPEAUtagSIZE@@0@Z @ 0x180089500 (-SetSizeConstraintOverridesPhysical@ApplicationViewOperation@@UEAAJPEAUtagSIZE@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ConfigureChromeForOperation(ApplicationViewOperation *this)
{
  void (__fastcall *v2)(ApplicationViewOperation *, __int64, __int64); // rax
  __int64 (__fastcall *v3)(ApplicationViewOperation *__hidden, unsigned int); // rax
  void (__fastcall *v4)(ApplicationViewOperation *, _QWORD); // rax
  __int64 (__fastcall *v5)(ApplicationViewOperation *__hidden, struct tagSIZE *, struct tagSIZE *); // rax
  __int64 (__fastcall *v6)(ApplicationViewOperation *__hidden, struct tagSIZE *, struct tagSIZE *); // rax
  __int64 (__fastcall *v7)(ApplicationViewOperation *__hidden, struct tagSIZE *); // rax

  v2 = *(void (__fastcall **)(ApplicationViewOperation *, __int64, __int64))(*(_QWORD *)this + 112LL);
  if ( (char *)v2 == (char *)ApplicationViewOperation::SetChromeOptions )
    ApplicationViewOperation::SetChromeOptions(this, 255LL, 225LL);
  else
    v2(this, 255LL, 225LL);
  v3 = *(__int64 (__fastcall **)(ApplicationViewOperation *__hidden, unsigned int))(*(_QWORD *)this + 144LL);
  if ( v3 == ApplicationViewOperation::SetZOrderBand )
    ApplicationViewOperation::SetZOrderBand(this, 1u);
  else
    v3(this, 1u);
  v4 = *(void (__fastcall **)(ApplicationViewOperation *, _QWORD))(*(_QWORD *)this + 176LL);
  if ( (char *)v4 == (char *)ApplicationViewOperation::SetTouchBehavior )
    ApplicationViewOperation::SetTouchBehavior(this, 0LL);
  else
    v4(this, 0LL);
  v5 = *(__int64 (__fastcall **)(ApplicationViewOperation *__hidden, struct tagSIZE *, struct tagSIZE *))(*(_QWORD *)this + 192LL);
  if ( v5 == ApplicationViewOperation::SetSizeConstraintOverridesPhysical )
    ApplicationViewOperation::SetSizeConstraintOverridesPhysical(this, 0LL, 0LL);
  else
    v5(this, 0LL, 0LL);
  v6 = *(__int64 (__fastcall **)(ApplicationViewOperation *__hidden, struct tagSIZE *, struct tagSIZE *))(*(_QWORD *)this + 208LL);
  if ( v6 == ApplicationViewOperation::SetSizeConstraintOverridesLogical )
    ApplicationViewOperation::SetSizeConstraintOverridesLogical(this, 0LL, 0LL);
  else
    v6(this, 0LL, 0LL);
  v7 = *(__int64 (__fastcall **)(ApplicationViewOperation *__hidden, struct tagSIZE *))(*(_QWORD *)this + 224LL);
  if ( v7 == ApplicationViewOperation::SetPreferredAspectRatioHint )
    return ApplicationViewOperation::SetPreferredAspectRatioHint(this, 0LL);
  else
    return v7(this, 0LL);
}
