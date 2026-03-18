/*
 * XREFs of ?Run@CMit@@AEAAKXZ @ 0x180119940
 * Callers:
 *     ?RunInputThreadStatic@CMit@@SAKPEAX@Z @ 0x1801A0660 (-RunInputThreadStatic@CMit@@SAKPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?UpdateMMCSSTask@CMit@@AEAAJXZ @ 0x1800759CC (-UpdateMMCSSTask@CMit@@AEAAJXZ.c)
 *     ?IsActive@CMmcssTask@@QEBA_NXZ @ 0x180075A64 (-IsActive@CMmcssTask@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?InitializeCoreMessagingIocp@CMit@@CAXPEAX@Z @ 0x1801A0588 (-InitializeCoreMessagingIocp@CMit@@CAXPEAX@Z.c)
 */

__int64 __fastcall CMit::Run(CMit *this)
{
  _QWORD *v2; // rax
  unsigned int v3; // edi
  signed int SystemInputHost; // eax
  _BOOL8 v5; // rdx
  void *v6; // rcx
  unsigned int v8; // [rsp+20h] [rbp-18h]
  void *v9; // [rsp+40h] [rbp+8h] BYREF

  GetCurrentThreadId();
  v2 = operator new(8uLL);
  if ( v2 )
    *v2 = &CInputProxy::`vftable';
  *((_QWORD *)this + 16) = v2;
  if ( !v2 )
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021BE14, 1u, 0x8007000E, 0x113u);
    goto LABEL_25;
  }
  SystemInputHost = CoreUICreateEx(3LL, &CMit::s_pMessageSession);
  v3 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v8 = 279;
    goto LABEL_24;
  }
  SystemInputHost = (*(__int64 (__fastcall **)(struct IMessageSession *, _QWORD, __int64 (__fastcall *)(void *, unsigned int, void *), CMit *))(*(_QWORD *)CMit::s_pMessageSession + 264LL))(
                      CMit::s_pMessageSession,
                      *((_QWORD *)this + 2),
                      CMit::OnResetEvent,
                      this);
  v3 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v8 = 281;
    goto LABEL_24;
  }
  SystemInputHost = (*(__int64 (__fastcall **)(struct IMessageSession *, _QWORD, __int64 (__fastcall *)(_BYTE *, __int64, void *), CMit *))(*(_QWORD *)CMit::s_pMessageSession + 264LL))(
                      CMit::s_pMessageSession,
                      *((_QWORD *)this + 14),
                      CMit::OnMmcssResetEvent,
                      this);
  v3 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v8 = 282;
    goto LABEL_24;
  }
  SystemInputHost = CreateSystemInputHost(*((_QWORD *)this + 16), &CMit::s_pSystemInputHost);
  v3 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v8 = 286;
LABEL_24:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021BE14, 1u, SystemInputHost, v8);
    goto LABEL_25;
  }
  *((_QWORD *)this + 15) = MITGetCursorUpdateHandle();
  while ( !*((_BYTE *)this + 24) )
  {
    ResetEvent(*((HANDLE *)this + 2));
    if ( *((_BYTE *)this + 24) )
      break;
    CMit::UpdateMMCSSTask(this);
    v9 = 0LL;
    v5 = CMmcssTask::IsActive((CMit *)((char *)this + 32)) || *((_BYTE *)this + 25);
    MITActivateInputProcessing(CMit::s_HitTestRequest, v5, &v9);
    if ( v9 )
      CMit::InitializeCoreMessagingIocp(v9);
    *((_BYTE *)this + 25) = 0;
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)CMit::s_pMessageSession + 224LL))(CMit::s_pMessageSession);
    MITDeactivateInputProcessing(*((unsigned __int8 *)this + 25));
  }
LABEL_25:
  if ( CMit::s_pSystemInputHost )
  {
    (*(void (__fastcall **)(struct ISystemInputHost *))(*(_QWORD *)CMit::s_pSystemInputHost + 16LL))(CMit::s_pSystemInputHost);
    CMit::s_pSystemInputHost = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 16);
  if ( v6 )
  {
    WPF::ProcessHeapImpl::Free(v6);
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
  if ( (v3 & 0x1FFF0000) == 0x70000 )
    return (unsigned __int16)v3;
  return v3;
}
