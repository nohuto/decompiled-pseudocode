/*
 * XREFs of ?Run@CMit@@AEAAKXZ @ 0x1800B5BEC
 * Callers:
 *     ?RunInputThreadStatic@CMit@@SAKPEAX@Z @ 0x1800CC270 (-RunInputThreadStatic@CMit@@SAKPEAX@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateMMCSSTask@CMit@@AEAAJXZ @ 0x1800B5BA8 (-UpdateMMCSSTask@CMit@@AEAAJXZ.c)
 *     ?IsActive@CMmcssTask@@QEBA_NXZ @ 0x1800B657C (-IsActive@CMmcssTask@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMit::Run(CMit *this)
{
  _QWORD *v2; // rax
  int SystemInputHost; // eax
  unsigned int v4; // edi
  __int64 v5; // rax
  _BOOL8 v6; // rdx
  void *v7; // rcx
  unsigned int v9; // [rsp+20h] [rbp-30h]
  _QWORD v10[2]; // [rsp+40h] [rbp-10h] BYREF
  int v11; // [rsp+60h] [rbp+10h] BYREF
  __int64 v12; // [rsp+68h] [rbp+18h] BYREF

  GetCurrentThreadId();
  v12 = 0LL;
  v2 = operator new(8uLL);
  if ( v2 )
    *v2 = &CInputProxy::`vftable';
  *((_QWORD *)this + 15) = v2;
  if ( !v2 )
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, &dword_1801FD828, 1u, -2147024882, 0x102u);
    goto LABEL_25;
  }
  SystemInputHost = CoreUICreateEx(3LL, &CMit::s_pMessageSession);
  v4 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v9 = 262;
    goto LABEL_24;
  }
  SystemInputHost = CreateSystemInputHost(*((_QWORD *)this + 15), &CMit::s_pSystemInputHost);
  v4 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v9 = 266;
    goto LABEL_24;
  }
  SystemInputHost = (*(__int64 (__fastcall **)(struct IMessageSession *, __int64 *))(*(_QWORD *)CMit::s_pMessageSession
                                                                                   + 40LL))(
                      CMit::s_pMessageSession,
                      &v12);
  v4 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v9 = 279;
LABEL_24:
    MilInstrumentationCheckHR(0x14u, &dword_1801FD828, 1u, SystemInputHost, v9);
    goto LABEL_25;
  }
  while ( !*((_BYTE *)this + 24) )
  {
    ResetEvent(*((HANDLE *)this + 2));
    if ( *((_BYTE *)this + 24) )
      break;
    CMit::UpdateMMCSSTask(this);
    v6 = CMmcssTask::IsActive((CMit *)((char *)this + 32)) || *((_BYTE *)this + 25);
    MITActivateInputProcessing(CMit::s_HitTestRequest, v6);
    *((_BYTE *)this + 25) = 0;
    while ( 1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 24LL))(v12, 3LL);
      v5 = *((_QWORD *)this + 2);
      v11 = -1;
      v10[0] = v5;
      v10[1] = *((_QWORD *)this + 14);
      (*(void (__fastcall **)(__int64, __int64, _QWORD *, __int64, int, int *))(*(_QWORD *)v12 + 56LL))(
        v12,
        2LL,
        v10,
        0xFFFFFFFFLL,
        1,
        &v11);
      if ( !v11 )
        break;
      if ( v11 == 1 )
      {
        *((_BYTE *)this + 25) = 1;
        break;
      }
    }
    MITDeactivateInputProcessing(*((unsigned __int8 *)this + 25));
  }
LABEL_25:
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v12 = 0LL;
  }
  if ( CMit::s_pSystemInputHost )
  {
    (*(void (__fastcall **)(struct ISystemInputHost *))(*(_QWORD *)CMit::s_pSystemInputHost + 16LL))(CMit::s_pSystemInputHost);
    CMit::s_pSystemInputHost = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 15);
  if ( v7 )
  {
    WPF::ProcessHeapImpl::Free(v7);
    *((_QWORD *)this + 15) = 0LL;
  }
  if ( CMit::s_pMessageCallSendHost )
  {
    (*(void (__fastcall **)(struct IMessageCallSendHost *))(*(_QWORD *)CMit::s_pMessageCallSendHost + 16LL))(CMit::s_pMessageCallSendHost);
    CMit::s_pMessageCallSendHost = 0LL;
  }
  if ( CMit::s_pMessageSession )
  {
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)CMit::s_pMessageSession + 16LL))(CMit::s_pMessageSession);
    CMit::s_pMessageSession = 0LL;
  }
  if ( (v4 & 0x1FFF0000) == 0x70000 )
    return (unsigned __int16)v4;
  return v4;
}
