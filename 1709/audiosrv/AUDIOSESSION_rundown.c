/*
 * XREFs of AUDIOSESSION_rundown @ 0x1800135B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180016D70 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x180017090 (-Dispose@CServerAudioSessionControl@@EEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

unsigned int __fastcall AUDIOSESSION_rundown(CServerAudioSessionControl *this)
{
  unsigned __int32 v2; // edi
  __int64 (__fastcall *v3)(CServerAudioSessionControl *__hidden); // rax
  unsigned int (__fastcall *v4)(CServerAudioSessionControl *__hidden); // rax
  unsigned int result; // eax

  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 50LL, &WPP_f31bef8187753e0293a3e215cbf500b3_Traceguids, this);
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v2 )
  {
    v3 = *(__int64 (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)this + 104LL);
    if ( v3 == CServerAudioSessionControl::Dispose )
      CServerAudioSessionControl::Dispose(this);
    else
      v3(this);
  }
  v4 = *(unsigned int (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)this + 16LL);
  if ( v4 == CServerAudioSessionControl::Release )
    result = CServerAudioSessionControl::Release(this);
  else
    result = v4(this);
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    return WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 51LL, &WPP_f31bef8187753e0293a3e215cbf500b3_Traceguids, v2);
  }
  return result;
}
