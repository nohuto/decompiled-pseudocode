/*
 * XREFs of ?StateCheckExpired@CAudioSession@@AEAAXXZ @ 0x180046C00
 * Callers:
 *     ?StateCheckExpiredCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180046980 (-StateCheckExpiredCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180035590 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 *     WPP_SF_Sd @ 0x1800ADF18 (WPP_SF_Sd.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 */

void __fastcall CAudioSession::StateCheckExpired(CAudioSession *this)
{
  __int64 v2; // rdi
  unsigned int v3; // edi
  CAudioSessionManager *v4; // rcx
  void (__fastcall *v5)(CPerStreamVolumeAudioSession *, enum _AudioSessionState); // rax
  CAudioSessionManager *v6; // rcx
  __int64 v7; // rdx
  LPCRITICAL_SECTION v8; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+38h] [rbp-10h]

  v8 = (LPCRITICAL_SECTION)((char *)this + 352);
  v9 = 0;
  ATL::CCritSecLock::Lock(&v8);
  if ( *((_DWORD *)this + 22) )
  {
    v6 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_13;
    }
    v7 = 66LL;
LABEL_29:
    WPP_SF_(*((_QWORD *)v6 + 2), v7, &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids);
    goto LABEL_13;
  }
  if ( *((int *)this + 101) > 0 )
  {
    v6 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_13;
    }
    v7 = 67LL;
    goto LABEL_29;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  v2 = (__int64)(*((_QWORD *)this + 98) - *((_QWORD *)this + 97)) >> 3;
  if ( this != (CAudioSession *)-736LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  if ( *((_BYTE *)this + 302) || !v2 )
  {
    v4 = WPP_GLOBAL_Control;
LABEL_16:
    if ( v4 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)v4 + 28) & 0x40) != 0
      && *((_BYTE *)v4 + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)v4 + 2), 71LL, &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids, *((_QWORD *)this + 91));
    }
    v5 = *(void (__fastcall **)(CPerStreamVolumeAudioSession *, enum _AudioSessionState))(*(_QWORD *)this + 96LL);
    if ( v5 == CPerStreamVolumeAudioSession::NewState )
      CPerStreamVolumeAudioSession::NewState(this, AudioSessionStateExpired);
    else
      v5(this, AudioSessionStateExpired);
    goto LABEL_13;
  }
  v3 = GetTickCount64() - *((_DWORD *)this + 98);
  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      68,
      (unsigned int)&WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
      *((_QWORD *)this + 91),
      v3);
    v4 = WPP_GLOBAL_Control;
  }
  if ( *((int *)this + 100) <= 0 )
  {
    if ( v3 < *((_DWORD *)this + 78) - 16 )
    {
      if ( v4 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)v4 + 28) & 0x40) != 0
        && *((_BYTE *)v4 + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)v4 + 2), 70LL, &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids, v3);
      }
      goto LABEL_13;
    }
    goto LABEL_16;
  }
  if ( v4 != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)v4 + 28) & 0x40) != 0
    && *((_BYTE *)v4 + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)v4 + 2), 69LL, &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids);
  }
LABEL_13:
  if ( v9 )
    LeaveCriticalSection(v8);
}
