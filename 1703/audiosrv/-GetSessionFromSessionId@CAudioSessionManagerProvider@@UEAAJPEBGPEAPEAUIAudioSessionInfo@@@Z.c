/*
 * XREFs of ?GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z @ 0x180095360
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18001F8AC (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x18001FAB4 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180020560 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x1800226B8 (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180023588 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?ToString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800236B0 (-ToString@CAudioEndpointId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@AT.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18009802C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall CAudioSessionManagerProvider::GetSessionFromSessionId(
        CAudioSessionManagerProvider *this,
        const unsigned __int16 *a2,
        struct IAudioSessionInfo **a3)
{
  CAudioSessionInstanceId *v6; // rax
  CAudioSessionInstanceId *v7; // rbp
  int v8; // esi
  __int64 v9; // r8
  __int64 v10; // r9
  struct CAudioSession *v11; // rdi
  struct CAudioSession *v12; // rbx
  int AudioSession; // eax
  CAudioSessionManager *v15; // [rsp+20h] [rbp-28h] BYREF
  struct CAudioSession *v16; // [rsp+68h] [rbp+20h] BYREF

  v6 = (CAudioSessionInstanceId *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = CAudioSessionInstanceId::CAudioSessionInstanceId(v6);
  else
    v7 = 0LL;
  v8 = v7 == 0LL ? 0x8007000E : 0;
  if ( v7 )
    v8 = CAudioSessionInstanceId::Initialize(v7, a2);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    &v16,
    (volatile signed __int32 *)&ATL::g_strmgr);
  if ( v8 >= 0 )
    v8 = CAudioEndpointId::ToString((char **)v7, &v16, v9, v10);
  v15 = 0LL;
  v11 = v16;
  if ( v8 >= 0 )
    v8 = (*(__int64 (__fastcall **)(CAudioSessionManagerProvider *, struct CAudioSession *, CAudioSessionManager **))(*(_QWORD *)this + 48LL))(
           this,
           v16,
           &v15);
  v12 = 0LL;
  v16 = 0LL;
  if ( v8 >= 0 )
  {
    AudioSession = CAudioSessionManager::FindAudioSession(v15, v7, &v16);
    v12 = v16;
    v8 = AudioSession;
    if ( AudioSession >= 0 )
      v8 = (**(__int64 (__fastcall ***)(struct CAudioSession *, GUID *, struct IAudioSessionInfo **))v16)(
             v16,
             &GUID_9b4f373f_4796_4fe8_aaaf_33562bd6f37b,
             a3);
  }
  if ( v7 )
  {
    CAudioSessionInstanceId::~CAudioSessionInstanceId(v7);
    operator delete(v7, (const struct std::nothrow_t *)0x50);
  }
  if ( v8 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManagerProvider::GetSessionFromSessionId", 733, v8);
  if ( v12 )
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v15 )
    (*(void (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v15 + 16LL))(v15);
  ATL::CStringData::Release((struct CAudioSession *)((char *)v11 - 24));
  return (unsigned int)v8;
}
