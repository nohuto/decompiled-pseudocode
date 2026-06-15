/*
 * XREFs of ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18008A940
 * Callers:
 *     ?Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18008ABF0 (-Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18008AC90 (-Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 * Callees:
 *     ?PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ @ 0x18001457C (-PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x1800207F0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x18007BE1C (-RemoveAt@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x18007BEA0 (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x18008ACE8 (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     ?NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z @ 0x18008DCE8 (-NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSession::Disconnect(__int64 a1, int a2, char a3)
{
  int v3; // edi
  __int64 v4; // rsi
  _QWORD *v6; // rcx
  __int64 v7; // r15
  unsigned int v8; // r12d
  int v9; // ecx
  enum AudioSessionDisconnectReason v10; // r14d
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int *v15; // rbx
  _QWORD v16[2]; // [rsp+20h] [rbp-88h] BYREF
  ATL::CAtlException *v17; // [rsp+30h] [rbp-78h] BYREF
  ATL::CAtlException *v18; // [rsp+38h] [rbp-70h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-68h] BYREF
  char v20; // [rsp+48h] [rbp-60h]
  LPCRITICAL_SECTION v21; // [rsp+50h] [rbp-58h] BYREF
  __int64 v22; // [rsp+58h] [rbp-50h]
  int v23; // [rsp+60h] [rbp-48h]

  v16[1] = -2LL;
  v3 = a2;
  v4 = a1;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v20 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( v3 != 5 )
    goto LABEL_9;
  if ( !*(_QWORD *)(v4 + 88) || *(_BYTE *)(**(_QWORD **)(v4 + 80) + 40LL) || !*(_QWORD *)(v4 + 88) )
  {
    if ( v20 )
      LeaveCriticalSection(lpCriticalSection);
    return 0LL;
  }
  while ( 2 )
  {
    v6 = (_QWORD *)(v4 + 80);
    if ( !*(_QWORD *)(v4 + 88) )
      ATL::AtlThrowImpl(-2147024809);
    v16[0] = *(_QWORD *)*v6;
    try
    {
      ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::RemoveAt(v6, 0LL);
    }
    catch ( ATL::CAtlException *v17 )
    {
      v15 = (int *)v17;
      if ( *(_DWORD *)v17 == -1073741571 )
        _o__resetstkoflw();
      v4 = a1;
      v3 = a2;
      if ( *v15 >= 0 )
        break;
LABEL_9:
      if ( *(_QWORD *)(v4 + 88) )
        continue;
      *(_DWORD *)(v4 + 328) = 0;
      if ( v20 )
        LeaveCriticalSection(lpCriticalSection);
      v7 = v4 - 16;
      v8 = CAudioSession::DisconnectStreamList((CAudioSession *)(v4 - 16));
      v9 = *(_DWORD *)(v4 + 464);
      v10 = DisconnectReasonServerShutdown;
      if ( v9 == 1 )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 96LL))(v4 - 16, 0LL);
      }
      else if ( !v9 )
      {
        CAudioSession::PostStateCheckExpirationWork((struct _TP_WORK **)(v4 - 16));
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v4 - 16);
      v21 = (LPCRITICAL_SECTION)&CAudioSessionDisconnected::`vftable';
      v22 = v4 - 16;
      v23 = v3;
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
        (LPCRITICAL_SECTION)(v4 + 616),
        (void (__fastcall ***)(_QWORD, _QWORD *))&v21);
      if ( a3 )
      {
        if ( v3 )
        {
          v11 = v3 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 1;
              if ( v13 )
              {
                v14 = v13 - 1;
                if ( v14 )
                {
                  if ( v14 == 1 )
                    v10 = DisconnectReasonExclusiveModeOverride;
                }
                else
                {
                  v10 = DisconnectReasonSessionDisconnected;
                }
              }
              else
              {
                v10 = DisconnectReasonSessionLogoff;
              }
            }
            else
            {
              v10 = DisconnectReasonFormatChanged;
            }
          }
        }
        else
        {
          v10 = DisconnectReasonDeviceRemoval;
        }
        CAudioSession::NotifyClientOfDisconnection((CAudioSession *)(v4 - 16), v10);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v4 - 16);
      return v8;
    }
    break;
  }
  v21 = (LPCRITICAL_SECTION)(v4 + 112);
  LOBYTE(v22) = 0;
  ATL::CCritSecLock::Lock(&v21);
  try
  {
    ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add((_QWORD *)(v4 + 152), v16);
  }
  catch ( ATL::CAtlException *v18 )
  {
    if ( *(_DWORD *)v18 == -1073741571 )
      _o__resetstkoflw();
    v4 = a1;
    v3 = a2;
  }
  if ( (_BYTE)v22 )
  {
    LeaveCriticalSection(v21);
    LOBYTE(v22) = 0;
  }
  --*(_DWORD *)(v4 + 72);
  goto LABEL_9;
}
