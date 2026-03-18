/*
 * XREFs of ?Run@CMit@@AEAAKXZ @ 0x18001DECC
 * Callers:
 *     ?RunInputThreadStatic@CMit@@SAKPEAX@Z @ 0x1800CA220 (-RunInputThreadStatic@CMit@@SAKPEAX@Z.c)
 * Callees:
 *     ?UpdateMMCSSTask@CMit@@AEAAJXZ @ 0x18001DE88 (-UpdateMMCSSTask@CMit@@AEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InitializeCoreMessagingIocp@CMit@@CAXPEAX@Z @ 0x1800BAA90 (-InitializeCoreMessagingIocp@CMit@@CAXPEAX@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_MitLoopInversion@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800BAAF0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_MitLoopInversion@@@wil@@CAX_NW4Repor.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMit::Run(CMit *this)
{
  _QWORD *v2; // rax
  int SystemInputHost; // eax
  unsigned int v4; // ebx
  int v5; // r9d
  void *v6; // rcx
  __int64 result; // rax
  unsigned int v8; // [rsp+20h] [rbp-18h]
  void *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  GetCurrentThreadId();
  v2 = operator new(8uLL);
  if ( v2 )
    *v2 = &CInputProxy::`vftable';
  *((_QWORD *)this + 16) = v2;
  if ( !v2 )
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ADC6C, 1u, -2147024882, 0x114u);
    goto LABEL_23;
  }
  wil::Feature<__WilFeatureTraits_Feature_MitLoopInversion>::ReportUsageToService();
  SystemInputHost = CoreUICreateEx(1LL, &CMit::s_pMessageSession);
  v4 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v8 = 287;
    goto LABEL_21;
  }
  SystemInputHost = (*(__int64 (__fastcall **)(struct IMessageSession *, _QWORD, __int64 (__fastcall *)(void *, unsigned int, void *), CMit *))(*(_QWORD *)CMit::s_pMessageSession + 264LL))(
                      CMit::s_pMessageSession,
                      *((_QWORD *)this + 2),
                      CMit::OnResetEvent,
                      this);
  v4 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v8 = 289;
    goto LABEL_21;
  }
  SystemInputHost = (*(__int64 (__fastcall **)(struct IMessageSession *, _QWORD, __int64 (__fastcall *)(void *, unsigned int, void *), CMit *))(*(_QWORD *)CMit::s_pMessageSession + 264LL))(
                      CMit::s_pMessageSession,
                      *((_QWORD *)this + 14),
                      CMit::OnResetEvent,
                      this);
  v4 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v8 = 290;
    goto LABEL_21;
  }
  SystemInputHost = CreateSystemInputHost(*((_QWORD *)this + 16), &CMit::s_pSystemInputHost);
  v4 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v8 = 294;
LABEL_21:
    v5 = SystemInputHost;
    goto LABEL_22;
  }
  *((_QWORD *)this + 15) = MITGetCursorUpdateHandle();
  if ( !(unsigned int)MITActivateInputProcessing(CMit::s_HitTestRequest, &v9) )
  {
    v4 = -2147467259;
    v8 = 302;
    v5 = -2147467259;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ADC6C, 1u, v5, v8);
    goto LABEL_23;
  }
  v4 = 0;
  CMit::InitializeCoreMessagingIocp(v9);
  while ( !*((_BYTE *)this + 24) )
  {
    ResetEvent(*((HANDLE *)this + 2));
    if ( *((_BYTE *)this + 24) )
      break;
    CMit::UpdateMMCSSTask(this);
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)CMit::s_pMessageSession + 224LL))(CMit::s_pMessageSession);
  }
  MITDeactivateInputProcessing();
LABEL_23:
  if ( CMit::s_pSystemInputHost )
  {
    (*(void (__fastcall **)(struct ISystemInputHost *))(*(_QWORD *)CMit::s_pSystemInputHost + 16LL))(CMit::s_pSystemInputHost);
    CMit::s_pSystemInputHost = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 16);
  if ( v6 )
  {
    operator delete(v6, 8uLL);
    *((_QWORD *)this + 16) = 0LL;
  }
  if ( CMit::s_pMessageCallSendHost )
  {
    (*(void (__fastcall **)(struct IMessageCallSendHost *))(*(_QWORD *)CMit::s_pMessageCallSendHost + 16LL))(CMit::s_pMessageCallSendHost);
    CMit::s_pMessageCallSendHost = 0LL;
  }
  if ( CMit::s_pMessageSession )
  {
    (*(void (__fastcall **)(struct IMessageSession *, _QWORD))(*(_QWORD *)CMit::s_pMessageSession + 280LL))(
      CMit::s_pMessageSession,
      *((_QWORD *)this + 14));
    (*(void (__fastcall **)(struct IMessageSession *, _QWORD))(*(_QWORD *)CMit::s_pMessageSession + 280LL))(
      CMit::s_pMessageSession,
      *((_QWORD *)this + 2));
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)CMit::s_pMessageSession + 16LL))(CMit::s_pMessageSession);
    CMit::s_pMessageSession = 0LL;
  }
  result = (unsigned __int16)v4;
  if ( (v4 & 0x1FFF0000) != 0x70000 )
    return v4;
  return result;
}
