/*
 * XREFs of ?RemoveClientReference@CAudioSession@@UEAAJ_N@Z @ 0x180018CC0
 * Callers:
 *     ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x180017090 (-Dispose@CServerAudioSessionControl@@EEAAJXZ.c)
 * Callees:
 *     ?SubmitWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z @ 0x18001F4F0 (-SubmitWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z.c)
 *     ?LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x18002CFB0 (-LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_qdd @ 0x180077200 (WPP_SF_qdd.c)
 */

__int64 __fastcall CAudioSession::RemoveClientReference(CAudioSession *this, char a2)
{
  bool v3; // di
  __int64 (__fastcall *v4)(CPerStreamVolumeAudioSession *__hidden); // rax
  struct _TP_WORK *v5; // rdx
  void (__fastcall *v6)(CAudioThreadPool *__hidden, struct _TP_WORK *); // rax

  v3 = 0;
  if ( a2 )
    v3 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 101, 0xFFFFFFFF) == 1;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 100, 0xFFFFFFFF) == 1 )
  {
    v4 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioSession *__hidden))(*(_QWORD *)this + 288LL);
    if ( v4 == CPerStreamVolumeAudioSession::LastClientReferenceRemoved )
      CPerStreamVolumeAudioSession::LastClientReferenceRemoved(this);
    else
      v4(this);
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 92LL, &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids);
    }
LABEL_8:
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v5 = (struct _TP_WORK *)*((_QWORD *)this + 84);
    v6 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_WORK *))(*(_QWORD *)ThreadPool + 72LL);
    if ( v6 == CAudioThreadPool::SubmitWork )
      CAudioThreadPool::SubmitWork(ThreadPool, v5);
    else
      v6(ThreadPool, v5);
    return 0LL;
  }
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      93LL,
      &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
      this,
      *((_DWORD *)this + 100),
      *((_DWORD *)this + 101));
  }
  if ( v3 )
    goto LABEL_8;
  return 0LL;
}
