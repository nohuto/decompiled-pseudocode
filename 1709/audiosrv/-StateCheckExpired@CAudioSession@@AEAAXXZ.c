/*
 * XREFs of ?StateCheckExpired@CAudioSession@@AEAAXXZ @ 0x180018F68
 * Callers:
 *     ?StateCheckExpiredCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18002F440 (-StateCheckExpiredCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x18002D0D0 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 *     WPP_SF_Sd @ 0x180067B48 (WPP_SF_Sd.c)
 */

void __fastcall CAudioSession::StateCheckExpired(struct _RTL_CRITICAL_SECTION *this)
{
  __int64 v2; // rsi
  CAudioDGProcess *v3; // rcx
  void (__fastcall *v4)(CPerStreamVolumeAudioSession *__hidden, enum _AudioSessionState); // rax
  int TickCount64; // eax
  unsigned int v6; // esi
  __int64 v7; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+38h] [rbp-10h]

  lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)((char *)this + 352);
  v9 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( this[2].LockCount )
  {
    v3 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioDGProcess *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_12;
    }
    v7 = 78LL;
LABEL_37:
    WPP_SF_(*((_QWORD *)v3 + 2), v7, &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids);
    goto LABEL_12;
  }
  if ( SHIDWORD(this[10].DebugInfo) > 0 )
  {
    v3 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioDGProcess *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_12;
    }
    v7 = 79LL;
    goto LABEL_37;
  }
  EnterCriticalSection(this + 20);
  v2 = (__int64)(*(_QWORD *)&this[21].LockCount - (unsigned __int64)this[21].DebugInfo) >> 3;
  if ( this != (struct _RTL_CRITICAL_SECTION *)-800LL )
    LeaveCriticalSection(this + 20);
  if ( BYTE6(this[7].OwningThread) || !v2 )
  {
    v3 = WPP_GLOBAL_Control;
    goto LABEL_8;
  }
  TickCount64 = GetTickCount64();
  v6 = TickCount64 - LODWORD(this[9].SpinCount);
  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      80,
      (unsigned int)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
      this[19].SpinCount,
      TickCount64 - LOBYTE(this[9].SpinCount));
    v3 = WPP_GLOBAL_Control;
  }
  if ( SLODWORD(this[10].DebugInfo) > 0 )
  {
    if ( v3 == (CAudioDGProcess *)&WPP_GLOBAL_Control || (*((_BYTE *)v3 + 28) & 0x40) == 0 || *((_BYTE *)v3 + 25) < 4u )
      goto LABEL_12;
    v7 = 81LL;
    goto LABEL_37;
  }
  if ( v6 >= LODWORD(this[7].SpinCount) - 16 )
  {
LABEL_8:
    if ( v3 != (CAudioDGProcess *)&WPP_GLOBAL_Control && (*((_BYTE *)v3 + 28) & 0x40) != 0 && *((_BYTE *)v3 + 25) >= 4u )
      WPP_SF_S(*((_QWORD *)v3 + 2), 83LL, &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, this[19].SpinCount);
    v4 = *(void (__fastcall **)(CPerStreamVolumeAudioSession *__hidden, enum _AudioSessionState))&this->DebugInfo[1].Flags;
    if ( v4 == CPerStreamVolumeAudioSession::NewState )
      CPerStreamVolumeAudioSession::NewState((CPerStreamVolumeAudioSession *)this, AudioSessionStateExpired);
    else
      v4((CPerStreamVolumeAudioSession *)this, AudioSessionStateExpired);
    goto LABEL_12;
  }
  if ( v3 != (CAudioDGProcess *)&WPP_GLOBAL_Control && (*((_BYTE *)v3 + 28) & 0x40) != 0 && *((_BYTE *)v3 + 25) >= 4u )
    WPP_SF_d(*((_QWORD *)v3 + 2), 82LL, &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, v6);
LABEL_12:
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
}
