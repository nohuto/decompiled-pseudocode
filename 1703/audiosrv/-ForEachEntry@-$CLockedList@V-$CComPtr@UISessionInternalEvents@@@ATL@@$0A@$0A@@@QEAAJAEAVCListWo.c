/*
 * XREFs of ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x1800207F0
 * Callers:
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180014190 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z @ 0x1800148D0 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180014D50 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180014FA0 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180015200 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x18001D5D0 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x18007A7E0 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18008A940 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x18008ACE8 (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     ?SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z @ 0x18008F6E0 (-SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z.c)
 *     ?SetGroupingParam@CAudioSession@@UEAAJPEBU_GUID@@0@Z @ 0x18008F880 (-SetGroupingParam@CAudioSession@@UEAAJPEBU_GUID@@0@Z.c)
 *     ?SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z @ 0x18008F960 (-SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z.c)
 * Callees:
 *     ?FinalRelease@CServerAudioSessionControl@@UEAAXXZ @ 0x180020E50 (-FinalRelease@CServerAudioSessionControl@@UEAAXXZ.c)
 *     WPP_SF_qd @ 0x18004B79C (WPP_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
        LPCRITICAL_SECTION lpCriticalSection,
        void (__fastcall ***a2)(_QWORD, _QWORD *))
{
  LPCRITICAL_SECTION v2; // r14
  unsigned __int64 v3; // rdi
  size_t v4; // r12
  unsigned __int64 v5; // rsi
  unsigned int i; // ebx
  volatile signed __int32 **v7; // r15
  unsigned __int64 v8; // rdx
  size_t v9; // rcx
  size_t v10; // rax
  void *v11; // rax
  void *v12; // r13
  volatile signed __int32 **v13; // rdx
  volatile signed __int32 *v14; // rcx
  unsigned int (__fastcall *v15)(CAudioSessionManager *__hidden); // rax
  unsigned int v16; // ebx
  void (__fastcall ***v17)(_QWORD, _QWORD *); // r15
  volatile signed __int32 *v18; // rcx
  void (*v19)(void); // rax
  volatile signed __int32 *v20; // rbx
  unsigned int (__fastcall *v21)(CServerAudioSessionControl *__hidden); // rax
  volatile signed __int32 *v22; // rbx
  signed __int32 v24; // esi
  signed __int32 v25; // eax
  signed __int32 v26; // eax
  void (__fastcall *v27)(CServerAudioSessionControl *__hidden); // rax
  _QWORD v28[2]; // [rsp+30h] [rbp-78h] BYREF
  ATL::CAtlException *v29; // [rsp+40h] [rbp-68h] BYREF
  ATL::CAtlException *v30; // [rsp+48h] [rbp-60h] BYREF
  void *Src; // [rsp+50h] [rbp-58h]
  unsigned __int64 v32; // [rsp+58h] [rbp-50h]
  size_t v33; // [rsp+60h] [rbp-48h]
  int v34; // [rsp+68h] [rbp-40h]
  unsigned __int64 v37; // [rsp+C8h] [rbp+20h]

  v28[1] = -2LL;
  v2 = lpCriticalSection;
  v3 = 0LL;
  Src = 0LL;
  v32 = 0LL;
  v4 = 0LL;
  v33 = 0LL;
  v34 = 0;
  v5 = 0LL;
  v37 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  for ( i = 0; (unsigned __int64)i < *(_QWORD *)&v2[1].LockCount; ++i )
  {
    try
    {
      if ( (unsigned __int64)i >= *(_QWORD *)&v2[1].LockCount )
        ATL::AtlThrowImpl(-2147024809);
      v7 = (volatile signed __int32 **)((char *)v2[1].DebugInfo + 8 * i);
      if ( v32 >= v4 )
      {
        v8 = v32 + 1;
        if ( v32 + 1 > v4 )
        {
          if ( Src )
          {
            v9 = v34;
            if ( !v34 )
            {
              v9 = v4 >> 1;
              if ( v8 - v4 > v4 >> 1 )
                v9 = v8 - v4;
            }
            v10 = v4 + v9;
            v4 = v32 + 1;
            if ( v8 < v10 )
              v4 = v10;
            v11 = calloc(v4, 8uLL);
            v12 = v11;
            if ( !v11 )
              goto LABEL_66;
            if ( 8 * v32 )
              memmove(v11, Src, 8 * v32);
            free(Src);
            Src = v12;
            v33 = v4;
          }
          else
          {
            v4 = v34;
            if ( v34 <= v8 )
              v4 = v32 + 1;
            Src = calloc(v4, 8uLL);
            if ( !Src )
LABEL_66:
              ATL::AtlThrowImpl(-2147024882);
            v33 = v4;
          }
        }
      }
      v13 = (volatile signed __int32 **)((char *)Src + 8 * v32);
      if ( v13 )
      {
        v14 = *v7;
        *v13 = *v7;
        if ( v14 )
        {
          v15 = *(unsigned int (__fastcall **)(CAudioSessionManager *__hidden))(*(_QWORD *)v14 + 8LL);
          if ( v15 == CAudioSessionManager::AddRef )
          {
            v25 = _InterlockedIncrement(v14 + 4);
            if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
            {
              WPP_SF_qd(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                54LL,
                &WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids,
                v14,
                v25);
            }
            v4 = v33;
          }
          else
          {
            ((void (__fastcall *)(volatile signed __int32 *, volatile signed __int32 **, CVolumeStrip **))v15)(
              v14,
              v13,
              &WPP_GLOBAL_Control);
          }
        }
      }
      ++v32;
      v37 = ++v5;
    }
    catch ( ATL::CAtlException *v29 )
    {
      if ( *(_DWORD *)v29 == -1073741571 )
        _o__resetstkoflw();
      v3 = 0LL;
      v2 = lpCriticalSection;
      v4 = v33;
      v5 = v37;
      continue;
    }
  }
  LeaveCriticalSection(v2);
  v16 = 0;
  v17 = a2;
  while ( v16 < v5 )
  {
    try
    {
      if ( v16 >= v32 )
        ATL::AtlThrowImpl(-2147024809);
      v18 = (volatile signed __int32 *)*((_QWORD *)Src + v16);
      v28[0] = v18;
      if ( v18 )
      {
        v19 = *(void (**)(void))(*(_QWORD *)v18 + 8LL);
        if ( (char *)v19 == (char *)CAudioSessionManager::AddRef )
        {
          v26 = _InterlockedIncrement(v18 + 4);
          if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
          {
            WPP_SF_qd(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              54LL,
              &WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids,
              v18,
              v26);
          }
        }
        else
        {
          v19();
        }
      }
      (**v17)(v17, v28);
    }
    catch ( ATL::CAtlException *v30 )
    {
      if ( *(_DWORD *)v30 == -1073741571 )
        _o__resetstkoflw();
      v3 = 0LL;
      v5 = v37;
      v17 = a2;
    }
    ++v16;
  }
  if ( Src )
  {
    if ( v32 )
    {
      do
      {
        v20 = (volatile signed __int32 *)*((_QWORD *)Src + v3);
        if ( v20 )
        {
          v21 = *(unsigned int (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)v20 + 16LL);
          if ( v21 == CServerAudioSessionControl::Release )
          {
            v22 = v20 + 2;
            if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
            {
              v27 = *(void (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)v22 + 32LL);
              if ( v27 == CServerAudioSessionControl::FinalRelease )
                CServerAudioSessionControl::FinalRelease((CServerAudioSessionControl *)v22);
              else
                v27((CServerAudioSessionControl *)v22);
              (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v22 + 24LL))(v22, 1LL);
            }
          }
          else if ( v21 == CAudioSessionManager::Release )
          {
            v24 = _InterlockedDecrement(v20 + 4);
            if ( !v24 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*((_QWORD *)v20 + 1) + 32LL))(v20 + 2);
              (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*((_QWORD *)v20 + 1) + 24LL))(v20 + 2, 1LL);
            }
            if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
            {
              WPP_SF_qd(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                55LL,
                &WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids,
                v20,
                v24);
            }
          }
          else
          {
            v21(*((CServerAudioSessionControl **)Src + v3));
          }
        }
        ++v3;
      }
      while ( v3 < v32 );
    }
    free(Src);
  }
  return 0LL;
}
