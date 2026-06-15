/*
 * XREFs of ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x18007A7E0
 * Callers:
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x18008DBE0 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 * Callees:
 *     ?CancelInactiveTimer@CAudioSession@@AEAAXXZ @ 0x180014400 (-CancelInactiveTimer@CAudioSession@@AEAAXXZ.c)
 *     ?StartInactiveTimer@CAudioSession@@AEAAXXZ @ 0x1800144B0 (-StartInactiveTimer@CAudioSession@@AEAAXXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x1800207F0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Sdd @ 0x1800907E8 (WPP_SF_Sdd.c)
 */

void __fastcall CAudioSession::NewState(CAudioSession *this, __int32 a2)
{
  int v2; // esi
  void (__fastcall **v5[2])(_QWORD, _QWORD *); // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+40h] [rbp-18h]
  enum _AudioSessionState v7; // [rsp+44h] [rbp-14h]

  v2 = *((_DWORD *)this + 120);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      95,
      (unsigned int)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
      *((_QWORD *)this + 108),
      v2,
      a2);
  }
  if ( !v2 )
  {
    if ( a2 != 1 )
      goto LABEL_19;
    CAudioSession::CancelInactiveTimer((struct _TP_TIMER **)this);
    GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 484));
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x60u,
        (__int64)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
        *((const wchar_t **)this + 108));
    }
    *((_BYTE *)this + 1048) = 1;
  }
  if ( v2 == 1 && !a2 )
  {
    GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 492));
    *((_QWORD *)this + 58) = GetTickCount64();
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x61u,
        (__int64)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
        *((const wchar_t **)this + 108));
    }
    *((_BYTE *)this + 1048) = 0;
    CAudioSession::StartInactiveTimer((struct _TP_TIMER **)this);
  }
LABEL_19:
  *((_DWORD *)this + 120) = a2;
  if ( v2 != a2 )
  {
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v5[1] = (void (__fastcall **)(_QWORD, _QWORD *))this;
    v5[0] = (void (__fastcall **)(_QWORD, _QWORD *))&CAudioSessionStateChanged::`vftable';
    v6 = v2;
    v7 = a2;
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 632), v5);
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
  }
}
