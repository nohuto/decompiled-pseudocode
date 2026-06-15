/*
 * XREFs of ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x180018DF0
 * Callers:
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x18002D0D0 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x1800739B0 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180015220 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180018410 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?CancelInactiveTimer@CAudioSession@@AEAAXXZ @ 0x180018A8C (-CancelInactiveTimer@CAudioSession@@AEAAXXZ.c)
 *     ?StartInactiveTimer@CAudioSession@@AEAAXXZ @ 0x180018B30 (-StartInactiveTimer@CAudioSession@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 *     WPP_SF_Sdd @ 0x180076D94 (WPP_SF_Sdd.c)
 */

void __fastcall CAudioSession::NewState(CAudioSession *this, __int32 a2)
{
  int v2; // esi
  __int64 (__fastcall *v5)(CAudioSession *); // rax
  int v6; // eax
  void (__fastcall **v7[2])(_QWORD, CAudioSessionManager **); // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+40h] [rbp-18h]
  enum _AudioSessionState v9; // [rsp+44h] [rbp-14h]

  v2 = *((_DWORD *)this + 102);
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      88,
      (unsigned int)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
      *((_QWORD *)this + 99),
      v2,
      a2);
  }
  if ( !v2 )
  {
    if ( a2 != 1 )
      goto LABEL_5;
    CAudioSession::CancelInactiveTimer((struct _TP_TIMER **)this);
    GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 412));
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        89LL,
        &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
        *((_QWORD *)this + 99));
    }
    *((_BYTE *)this + 1032) = 1;
  }
  if ( v2 == 1 && !a2 )
  {
    GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 420));
    *((_QWORD *)this + 49) = GetTickCount64();
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        90LL,
        &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
        *((_QWORD *)this + 99));
    }
    *((_BYTE *)this + 1032) = 0;
    CAudioSession::StartInactiveTimer((struct _TP_TIMER **)this);
  }
LABEL_5:
  *((_DWORD *)this + 102) = a2;
  if ( a2 == 1 )
  {
    v6 = *((_DWORD *)this + 76);
    if ( (v6 & 0x200000) != 0 )
      *((_DWORD *)this + 76) = v6 & 0xFFDFFFFF;
  }
  if ( v2 != a2 )
  {
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v7[1] = (void (__fastcall **)(_QWORD, CAudioSessionManager **))this;
    v7[0] = (void (__fastcall **)(_QWORD, CAudioSessionManager **))&CAudioSessionStateChanged::`vftable';
    v8 = v2;
    v9 = a2;
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)this + 14, v7);
    v5 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL);
    if ( v5 == CAudioSession::Release )
      CAudioSession::Release(this);
    else
      v5(this);
  }
}
