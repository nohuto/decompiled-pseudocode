/*
 * XREFs of ?RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x180002200
 * Callers:
 *     AUDIOSESSION_rundown @ 0x1800021A0 (AUDIOSESSION_rundown.c)
 * Callees:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180020B80 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x180020EB0 (-Dispose@CServerAudioSessionControl@@EEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CServerAudioSessionControl::RemoveClientReference(CServerAudioSessionControl *this)
{
  unsigned __int32 v2; // edi
  void (*v3)(void); // rax
  unsigned int (__fastcall *v4)(CServerAudioSessionControl *__hidden); // rax

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v2 )
  {
    v3 = *(void (**)(void))(*(_QWORD *)this + 104LL);
    if ( (char *)v3 == (char *)CServerAudioSessionControl::Dispose )
      CServerAudioSessionControl::Dispose(this);
    else
      v3();
  }
  v4 = *(unsigned int (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)this + 16LL);
  if ( v4 == CServerAudioSessionControl::Release )
    CServerAudioSessionControl::Release(this);
  else
    v4(this);
  return v2;
}
