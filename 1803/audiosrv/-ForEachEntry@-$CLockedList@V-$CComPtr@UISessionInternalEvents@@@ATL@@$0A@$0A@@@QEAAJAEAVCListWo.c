/*
 * XREFs of ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180031F30
 * Callers:
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180034330 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180034980 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180035590 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x180046D50 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180047130 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     _lambda_041b38cc9b1c9530af273109c15771c6_::operator() @ 0x1800635C8 (_lambda_041b38cc9b1c9530af273109c15771c6_--operator().c)
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x1800967C0 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800A8CA0 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x1800A9038 (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     ?SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z @ 0x1800ACFE0 (-SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z.c)
 *     ?SetGroupingParam@CAudioSession@@UEAAJPEBU_GUID@@0@Z @ 0x1800AD1B0 (-SetGroupingParam@CAudioSession@@UEAAJPEBU_GUID@@0@Z.c)
 *     ?SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z @ 0x1800AD2E0 (-SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z.c)
 * Callees:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180004AF0 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
        LPCRITICAL_SECTION lpCriticalSection,
        void (__fastcall ***a2)(_QWORD, __int64 *))
{
  LPCRITICAL_SECTION v2; // r15
  unsigned __int64 v3; // r14
  void *v4; // rbx
  unsigned __int64 v5; // rsi
  size_t v6; // rdi
  unsigned __int64 v7; // r12
  unsigned int i; // r13d
  WORD *v9; // rax
  unsigned __int64 v10; // rcx
  size_t v11; // rdx
  void *v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // edi
  void (__fastcall ***v15)(_QWORD, __int64 *); // r15
  __int64 v16; // rcx
  volatile signed __int32 *v17; // rcx
  void (*v18)(void); // rax
  volatile signed __int32 *v20; // rbx
  WORD *v21; // [rsp+20h] [rbp-88h]
  void *v22; // [rsp+28h] [rbp-80h]
  ATL::CAtlException *v23; // [rsp+38h] [rbp-70h] BYREF
  ATL::CAtlException *v24; // [rsp+40h] [rbp-68h] BYREF
  void *v25; // [rsp+48h] [rbp-60h]
  unsigned __int64 v26; // [rsp+50h] [rbp-58h]
  size_t v27; // [rsp+58h] [rbp-50h]
  int v28; // [rsp+60h] [rbp-48h]
  int v30; // [rsp+B0h] [rbp+8h]
  __int64 v32; // [rsp+C0h] [rbp+18h] BYREF
  unsigned __int64 v33; // [rsp+C8h] [rbp+20h]

  v2 = lpCriticalSection;
  v3 = 0LL;
  v4 = 0LL;
  v25 = 0LL;
  v5 = 0LL;
  v26 = 0LL;
  v6 = 0LL;
  v27 = 0LL;
  v28 = 0;
  v7 = 0LL;
  v33 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  for ( i = 0; ; ++i )
  {
    LODWORD(v32) = i;
    if ( (unsigned __int64)i >= *(_QWORD *)&v2[1].LockCount )
      break;
    try
    {
      if ( (unsigned __int64)i >= *(_QWORD *)&v2[1].LockCount )
        ATL::AtlThrowImpl(-2147024809);
      v9 = &v2[1].DebugInfo->Type + 4 * i;
      v21 = v9;
      if ( v5 >= v6 )
      {
        v10 = v5 + 1;
        if ( v5 + 1 > v6 )
        {
          if ( v4 )
          {
            v11 = v28;
            if ( !v28 )
            {
              v11 = v6 >> 1;
              if ( v10 - v6 > v6 >> 1 )
                v11 = v10 - v6;
            }
            v6 += v11;
            if ( v10 >= v6 )
              v6 = v5 + 1;
            v12 = calloc(v6, 8uLL);
            v22 = v12;
            if ( !v12 )
              goto LABEL_48;
            if ( 8 * v5 )
              memmove(v12, v4, 8 * v5);
            free(v4);
            v4 = v22;
            v25 = v22;
          }
          else
          {
            v6 = v28;
            if ( v28 <= v10 )
              v6 = v5 + 1;
            v4 = calloc(v6, 8uLL);
            v25 = v4;
            if ( !v4 )
LABEL_48:
              ATL::AtlThrowImpl(-2147024882);
          }
          v27 = v6;
          v9 = v21;
        }
      }
      v13 = *(_QWORD *)v9;
      *((_QWORD *)v4 + v5) = *(_QWORD *)v9;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      v26 = ++v5;
      v33 = ++v7;
    }
    catch ( ATL::CAtlException *v23 )
    {
      if ( *(_DWORD *)v23 == -1073741571 )
        _o__resetstkoflw();
      v3 = 0LL;
      v2 = lpCriticalSection;
      v6 = v27;
      v5 = v26;
      v4 = v25;
      v7 = v33;
      i = v32;
      continue;
    }
  }
  LeaveCriticalSection(v2);
  v14 = 0;
  v30 = 0;
  v15 = a2;
  while ( v14 < v7 )
  {
    try
    {
      if ( v14 >= v5 )
        ATL::AtlThrowImpl(-2147024809);
      v16 = *((_QWORD *)v4 + v14);
      v32 = v16;
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      (**v15)(v15, &v32);
    }
    catch ( ATL::CAtlException *v24 )
    {
      if ( *(_DWORD *)v24 == -1073741571 )
        _o__resetstkoflw();
      v3 = 0LL;
      v5 = v26;
      v4 = v25;
      v7 = v33;
      v14 = v30;
      v15 = a2;
    }
    v30 = ++v14;
  }
  if ( v4 )
  {
    if ( v5 )
    {
      do
      {
        v17 = (volatile signed __int32 *)*((_QWORD *)v4 + v3);
        if ( v17 )
        {
          v18 = *(void (**)(void))(*(_QWORD *)v17 + 16LL);
          if ( (char *)v18 == (char *)CAudioSessionManager::Release )
          {
            v20 = v17 + 2;
            if ( _InterlockedExchangeAdd(v17 + 4, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 32LL))(v17 + 2);
              (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v20 + 24LL))(v20, 1LL);
            }
            v5 = v26;
            v4 = v25;
          }
          else if ( (char *)v18 == (char *)CServerAudioSessionControl::Release )
          {
            CServerAudioSessionControl::Release((CServerAudioSessionControl *)v17);
          }
          else
          {
            v18();
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
