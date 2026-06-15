/*
 * XREFs of ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180015220
 * Callers:
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180018810 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x180018DF0 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x1800190E0 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180019450 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180019640 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x1800198A0 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180070A30 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x180070DD8 (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     ?SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z @ 0x180075C70 (-SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z.c)
 *     ?SetGroupingParam@CAudioSession@@UEAAJPEBU_GUID@@0@Z @ 0x180075E10 (-SetGroupingParam@CAudioSession@@UEAAJPEBU_GUID@@0@Z.c)
 *     ?SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z @ 0x180075EF0 (-SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z.c)
 * Callees:
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x1800154B0 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?AddRef@CAudioSessionManager@@UEAAKXZ @ 0x1800159F0 (-AddRef@CAudioSessionManager@@UEAAKXZ.c)
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180016D70 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
        LPCRITICAL_SECTION lpCriticalSection,
        void (__fastcall ***a2)(_QWORD, CAudioSessionManager **))
{
  LPCRITICAL_SECTION v2; // r15
  unsigned __int64 v3; // r13
  char *v4; // rsi
  unsigned __int64 v5; // rdi
  size_t v6; // r12
  unsigned __int64 v7; // r14
  unsigned int i; // ebx
  CAudioSessionManager **v9; // rcx
  unsigned __int64 v10; // rdx
  size_t v11; // rcx
  size_t v12; // rax
  char *v13; // rax
  CAudioSessionManager **v14; // rax
  CAudioSessionManager *v15; // rcx
  unsigned int (__fastcall *v16)(CAudioSessionManager *__hidden); // rax
  unsigned int j; // ebx
  CAudioSessionManager *v18; // rcx
  void (*v19)(void); // rax
  CServerAudioSessionControl *v20; // rcx
  void (*v21)(void); // rax
  CAudioSessionManager **v23; // [rsp+20h] [rbp-88h]
  char *v24; // [rsp+28h] [rbp-80h]
  ATL::CAtlException *v25; // [rsp+38h] [rbp-70h] BYREF
  ATL::CAtlException *v26; // [rsp+40h] [rbp-68h] BYREF
  char *v27; // [rsp+48h] [rbp-60h]
  unsigned __int64 v28; // [rsp+50h] [rbp-58h]
  size_t v29; // [rsp+58h] [rbp-50h]
  int v30; // [rsp+60h] [rbp-48h]
  CAudioSessionManager *v33; // [rsp+C0h] [rbp+18h] BYREF
  unsigned __int64 v34; // [rsp+C8h] [rbp+20h]

  v2 = lpCriticalSection;
  v3 = 0LL;
  v4 = 0LL;
  v27 = 0LL;
  v5 = 0LL;
  v28 = 0LL;
  v6 = 0LL;
  v29 = 0LL;
  v30 = 0;
  v7 = 0LL;
  v34 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  for ( i = 0; ; ++i )
  {
    LODWORD(v33) = i;
    if ( (unsigned __int64)i >= *(_QWORD *)&v2[1].LockCount )
      break;
    try
    {
      if ( (unsigned __int64)i >= *(_QWORD *)&v2[1].LockCount )
        ATL::AtlThrowImpl(-2147024809);
      v9 = (CAudioSessionManager **)((char *)v2[1].DebugInfo + 8 * i);
      v23 = v9;
      if ( v5 >= v6 )
      {
        v10 = v5 + 1;
        if ( v5 + 1 > v6 )
        {
          if ( v4 )
          {
            v11 = v30;
            if ( !v30 )
            {
              v11 = v6 >> 1;
              if ( v10 - v6 > v6 >> 1 )
                v11 = v10 - v6;
            }
            v12 = v6 + v11;
            v6 = v5 + 1;
            if ( v10 < v12 )
              v6 = v12;
            v13 = (char *)calloc(v6, 8uLL);
            v24 = v13;
            if ( !v13 )
              goto LABEL_51;
            if ( 8 * v5 )
              memmove(v13, v4, 8 * v5);
            free(v4);
            v4 = v24;
            v27 = v24;
          }
          else
          {
            v6 = v30;
            if ( v30 <= v10 )
              v6 = v5 + 1;
            v4 = (char *)calloc(v6, 8uLL);
            v27 = v4;
            if ( !v4 )
LABEL_51:
              ATL::AtlThrowImpl(-2147024882);
          }
          v29 = v6;
          v9 = v23;
        }
      }
      v14 = (CAudioSessionManager **)&v4[8 * v5];
      if ( v14 )
      {
        v15 = *v9;
        *v14 = v15;
        if ( v15 )
        {
          v16 = *(unsigned int (__fastcall **)(CAudioSessionManager *__hidden))(*(_QWORD *)v15 + 8LL);
          if ( v16 == CAudioSessionManager::AddRef )
            CAudioSessionManager::AddRef(v15);
          else
            ((void (__fastcall *)(CAudioSessionManager *, unsigned int (__fastcall *)(CAudioSessionManager *__hidden)))v16)(
              v15,
              CAudioSessionManager::AddRef);
        }
      }
      v28 = ++v5;
      v34 = ++v7;
    }
    catch ( ATL::CAtlException *v25 )
    {
      if ( *(_DWORD *)v25 == -1073741571 )
        _o__resetstkoflw();
      v3 = 0LL;
      v2 = lpCriticalSection;
      v6 = v29;
      v5 = v28;
      v4 = v27;
      v7 = v34;
      i = (unsigned int)v33;
      continue;
    }
  }
  LeaveCriticalSection(v2);
  for ( j = 0; j < v7; ++j )
  {
    try
    {
      if ( j >= v5 )
        ATL::AtlThrowImpl(-2147024809);
      v18 = *(CAudioSessionManager **)&v4[8 * j];
      v33 = v18;
      if ( v18 )
      {
        v19 = *(void (**)(void))(*(_QWORD *)v18 + 8LL);
        if ( (char *)v19 == (char *)CAudioSessionManager::AddRef )
          CAudioSessionManager::AddRef(v18);
        else
          v19();
      }
      (**a2)(a2, &v33);
    }
    catch ( ATL::CAtlException *v26 )
    {
      if ( *(_DWORD *)v26 == -1073741571 )
        _o__resetstkoflw();
      v3 = 0LL;
      v5 = v28;
      v4 = v27;
      v7 = v34;
      continue;
    }
  }
  if ( v4 )
  {
    if ( v5 )
    {
      do
      {
        v20 = *(CServerAudioSessionControl **)&v4[8 * v3];
        if ( v20 )
        {
          v21 = *(void (**)(void))(*(_QWORD *)v20 + 16LL);
          if ( (char *)v21 == (char *)CServerAudioSessionControl::Release )
          {
            CServerAudioSessionControl::Release(v20);
          }
          else if ( (char *)v21 == (char *)CAudioSessionManager::Release )
          {
            CAudioSessionManager::Release(v20);
          }
          else
          {
            v21();
          }
        }
        ++v3;
      }
      while ( v3 < v5 );
    }
    free(v4);
  }
  return 0LL;
}
