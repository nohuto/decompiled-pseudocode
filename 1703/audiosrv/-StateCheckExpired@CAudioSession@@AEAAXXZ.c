/*
 * XREFs of ?StateCheckExpired@CAudioSession@@AEAAXXZ @ 0x180014734
 * Callers:
 *     ?StateCheckExpiredCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18002D870 (-StateCheckExpiredCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x18001D5D0 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 *     WPP_SF_Sd @ 0x180084A58 (WPP_SF_Sd.c)
 */

void __fastcall CAudioSession::StateCheckExpired(CAudioSession *this)
{
  int TickCount64; // eax
  unsigned int v3; // esi
  CVolumeStrip *v4; // rcx
  void (__fastcall *v5)(CPerStreamVolumeAudioSession *__hidden, enum _AudioSessionState); // rax
  __int64 v6; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v8; // [rsp+38h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 424);
  v8 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( *((_DWORD *)this + 22) )
  {
    v4 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CVolumeStrip *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_18;
    }
    v6 = 85LL;
LABEL_37:
    WPP_SF_(*((_QWORD *)v4 + 2), v6, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids);
    goto LABEL_18;
  }
  if ( *((int *)this + 119) > 0 )
  {
    v4 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CVolumeStrip *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_18;
    }
    v6 = 86LL;
    goto LABEL_37;
  }
  if ( *((_BYTE *)this + 374)
    || (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 109) + 240LL))(*((_QWORD *)this + 109)) )
  {
    v4 = WPP_GLOBAL_Control;
    goto LABEL_22;
  }
  TickCount64 = GetTickCount64();
  v3 = TickCount64 - *((_DWORD *)this + 116);
  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      87,
      (unsigned int)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
      *((_QWORD *)this + 108),
      TickCount64 - *((_BYTE *)this + 464));
    v4 = WPP_GLOBAL_Control;
  }
  if ( *((int *)this + 118) > 0 )
  {
    if ( v4 == (CVolumeStrip *)&WPP_GLOBAL_Control || (*((_BYTE *)v4 + 28) & 0x40) == 0 || *((_BYTE *)v4 + 25) < 4u )
      goto LABEL_18;
    v6 = 88LL;
    goto LABEL_37;
  }
  if ( v3 < *((_DWORD *)this + 96) - 16 )
  {
    if ( v4 != (CVolumeStrip *)&WPP_GLOBAL_Control && (*((_BYTE *)v4 + 28) & 0x40) != 0 && *((_BYTE *)v4 + 25) >= 4u )
      WPP_SF_d(*((_QWORD *)v4 + 2), 89LL, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids, v3);
    goto LABEL_18;
  }
LABEL_22:
  if ( v4 != (CVolumeStrip *)&WPP_GLOBAL_Control && (*((_BYTE *)v4 + 28) & 0x40) != 0 && *((_BYTE *)v4 + 25) >= 4u )
    WPP_SF_S(*((_QWORD *)v4 + 2), 90LL, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids, *((_QWORD *)this + 108));
  v5 = *(void (__fastcall **)(CPerStreamVolumeAudioSession *__hidden, enum _AudioSessionState))(*(_QWORD *)this + 96LL);
  if ( v5 == CPerStreamVolumeAudioSession::NewState )
    CPerStreamVolumeAudioSession::NewState(this, AudioSessionStateExpired);
  else
    v5(this, AudioSessionStateExpired);
LABEL_18:
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
}
