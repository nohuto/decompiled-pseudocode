/*
 * XREFs of ?GetDeviceGraph@CSaDeviceProxy@@UEAAJPEAPEAUIAudioDeviceGraph@@@Z @ 0x18001F2F0
 * Callers:
 *     ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x1800465C0 (-DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSaDeviceProxy::GetDeviceGraph(CSaDeviceProxy *this, struct IAudioDeviceGraph **a2)
{
  struct IAudioDeviceGraph *v4; // rcx
  __int64 result; // rax

  v4 = (struct IAudioDeviceGraph *)*((_QWORD *)this + 9);
  if ( v4 )
  {
    (*(void (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)v4 + 8LL))(v4);
    v4 = (struct IAudioDeviceGraph *)*((_QWORD *)this + 9);
  }
  result = 0LL;
  *a2 = v4;
  return result;
}
