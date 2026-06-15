/*
 * XREFs of ?RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x180017350
 * Callers:
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x180027B60 (-FinalRelease@CVADServer@@QEAAXXZ.c)
 *     AudioSessionDestroy @ 0x1800784D0 (AudioSessionDestroy.c)
 * Callees:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180016D70 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x180017090 (-Dispose@CServerAudioSessionControl@@EEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CServerAudioSessionControl::RemoveClientReference(CServerAudioSessionControl *this)
{
  unsigned __int32 v2; // edi
  void (*v3)(void); // rax
  __int64 (__fastcall *v4)(CServerAudioSessionControl *); // rax

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v2 )
  {
    v3 = *(void (**)(void))(*(_QWORD *)this + 104LL);
    if ( (char *)v3 == (char *)CServerAudioSessionControl::Dispose )
      CServerAudioSessionControl::Dispose(this);
    else
      v3();
  }
  v4 = *(__int64 (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)this + 16LL);
  if ( v4 == CServerAudioSessionControl::Release )
    CServerAudioSessionControl::Release(this);
  else
    v4(this);
  return v2;
}
