/*
 * XREFs of ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x1800967C0
 * Callers:
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x1800AB3F0 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180031F30 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?StartInactiveTimer@CAudioSession@@AEAAXXZ @ 0x180034298 (-StartInactiveTimer@CAudioSession@@AEAAXXZ.c)
 *     ?CancelInactiveTimer@CAudioSession@@AEAAXXZ @ 0x180046AB8 (-CancelInactiveTimer@CAudioSession@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 *     WPP_SF_Sdd @ 0x1800AE008 (WPP_SF_Sdd.c)
 */

void __fastcall CAudioSession::NewState(CAudioSession *this, enum _AudioSessionState a2)
{
  int v2; // esi
  int v5; // eax
  void (__fastcall **v6[2])(_QWORD, __int64 *); // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+40h] [rbp-18h]
  enum _AudioSessionState v8; // [rsp+44h] [rbp-14h]

  v2 = *((_DWORD *)this + 102);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      76,
      (unsigned int)&WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
      *((_QWORD *)this + 91),
      v2,
      a2);
  }
  if ( !v2 )
  {
    if ( a2 != AudioSessionStateActive )
      goto LABEL_19;
    CAudioSession::CancelInactiveTimer(this);
    GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 412));
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        77LL,
        &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
        *((_QWORD *)this + 91));
    }
    *((_BYTE *)this + 976) = 1;
  }
  if ( v2 == 1 && a2 == AudioSessionStateInactive )
  {
    GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 420));
    *((_QWORD *)this + 49) = GetTickCount64();
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        78LL,
        &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
        *((_QWORD *)this + 91));
    }
    *((_BYTE *)this + 976) = 0;
    CAudioSession::StartInactiveTimer((struct _TP_TIMER **)this);
  }
LABEL_19:
  *((_DWORD *)this + 102) = a2;
  if ( a2 == AudioSessionStateActive )
  {
    v5 = *((_DWORD *)this + 76);
    if ( (v5 & 0x200000) != 0 )
      *((_DWORD *)this + 76) = v5 & 0xFFDFFFFF;
  }
  if ( v2 != a2 )
  {
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v6[1] = (void (__fastcall **)(_QWORD, __int64 *))this;
    v6[0] = (void (__fastcall **)(_QWORD, __int64 *))&CAudioSessionStateChanged::`vftable';
    v7 = v2;
    v8 = a2;
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 496), v6);
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
  }
}
