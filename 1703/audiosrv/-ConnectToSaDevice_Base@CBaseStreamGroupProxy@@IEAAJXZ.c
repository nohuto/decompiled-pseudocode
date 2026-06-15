/*
 * XREFs of ?ConnectToSaDevice_Base@CBaseStreamGroupProxy@@IEAAJXZ @ 0x180079FF4
 * Callers:
 *     ?ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800A5360 (-ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::ConnectToSaDevice_Base(CBaseStreamGroupProxy *this)
{
  __int64 *v2; // rdi
  __int64 v3; // rbx
  unsigned int v4; // eax

  (*(void (__fastcall **)(_QWORD, CBaseStreamGroupProxy *))(**((_QWORD **)this + 10) + 160LL))(
    *((_QWORD *)this + 10),
    this);
  v2 = (__int64 *)*((_QWORD *)this + 10);
  v3 = *v2;
  v4 = (*(__int64 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)this + 136LL))(this);
  return (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64))(v3 + 72))(v2, 0LL, v4, 0xFFFFFFFFLL);
}
