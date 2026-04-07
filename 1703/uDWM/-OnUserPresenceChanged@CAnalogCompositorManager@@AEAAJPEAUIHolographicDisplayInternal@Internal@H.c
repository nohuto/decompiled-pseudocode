/*
 * XREFs of ?OnUserPresenceChanged@CAnalogCompositorManager@@AEAAJPEAUIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@PEAUIInspectable@@@Z @ 0x180073D70
 * Callers:
 *     _lambda_f22d5cbf612beadeeb19a63fa8ca3a96_::operator() @ 0x180072F1C (_lambda_f22d5cbf612beadeeb19a63fa8ca3a96_--operator().c)
 * Callees:
 *     ?SetIdleState@CAnalogCompositorManager@@SAXW4AnalogIdleOrigin@@_N@Z @ 0x1800102E4 (-SetIdleState@CAnalogCompositorManager@@SAXW4AnalogIdleOrigin@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180074A58 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAnalogCompositorManager::OnUserPresenceChanged(
        CAnalogCompositorManager *this,
        struct Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal *a2,
        struct IInspectable *a3)
{
  _BYTE *v3; // rdi
  int v5; // eax
  struct _TP_TIMER *v6; // rcx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  v3 = (char *)this + 166;
  v5 = (*(__int64 (__fastcall **)(struct Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal *, char *))(*(_QWORD *)a2 + 96LL))(
         a2,
         (char *)this + 166);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x22E,
      (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
      (const char *)(unsigned int)v5,
      v8);
    __debugbreak();
  }
  v6 = (struct _TP_TIMER *)*((_QWORD *)this + 15);
  if ( *v3 )
  {
    SetThreadpoolTimer(v6, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*((PTP_TIMER *)this + 15), 1);
    CAnalogCompositorManager::SetIdleState(2, 0);
  }
  else
  {
    pftDueTime = (struct _FILETIME)-6000000000LL;
    SetThreadpoolTimer(v6, &pftDueTime, 0, 0);
  }
  return 0LL;
}
