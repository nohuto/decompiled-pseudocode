/*
 * XREFs of ?Run@CISMInputThread@@AEAAKXZ @ 0x1801A0C50
 * Callers:
 *     ?RunInputThreadStatic@CISMInputThread@@SAKPEAX@Z @ 0x1801A0D60 (-RunInputThreadStatic@CISMInputThread@@SAKPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CISMInputThread::Run(CISMInputThread *this)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rsi
  _QWORD *v4; // rax
  DWORD v5; // r9d
  int SystemInputHost; // eax
  __int64 v7; // rcx
  void *v8; // rcx
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v2 = 0;
  v3 = (_QWORD *)((char *)this + 32);
  *((_DWORD *)this + 2) = GetCurrentThreadId();
  if ( !*v3 )
  {
    v4 = operator new(8uLL);
    if ( v4 )
      *v4 = &CInputProxy::`vftable';
    *((_QWORD *)this + 2) = v4;
    if ( !v4 )
    {
      v2 = -2147024882;
      v10 = 131;
      v5 = -2147024882;
LABEL_6:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, v10);
      goto LABEL_13;
    }
    SystemInputHost = CoreUICreate((char *)this + 32);
    v2 = SystemInputHost;
    if ( SystemInputHost < 0 )
    {
      v10 = 133;
      goto LABEL_11;
    }
    SystemInputHost = CreateSystemInputHost(*((_QWORD *)this + 2), (char *)this + 24);
    v2 = SystemInputHost;
    if ( SystemInputHost < 0 )
    {
      v10 = 134;
LABEL_11:
      v5 = SystemInputHost;
      goto LABEL_6;
    }
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 224LL))(*v3);
LABEL_13:
  v7 = *((_QWORD *)this + 3);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    *((_QWORD *)this + 3) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 2);
  if ( v8 )
  {
    WPF::ProcessHeapImpl::Free(v8);
    *((_QWORD *)this + 2) = 0LL;
  }
  if ( (v2 & 0x1FFF0000) == 0x70000 )
    return (unsigned __int16)v2;
  return v2;
}
