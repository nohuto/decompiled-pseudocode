/*
 * XREFs of ?GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z @ 0x18007BD80
 * Callers:
 *     <none>
 * Callees:
 *     ?ToString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800133B0 (-ToString@CAudioEndpointId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@AT.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x1800154B0 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x180016930 (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180017500 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001827C (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x18005B588 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18005B5E4 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18007E9E0 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall CAudioSessionManagerProvider::GetSessionFromSessionId(
        CAudioSessionManagerProvider *this,
        const unsigned __int16 *a2,
        struct IAudioSessionInfo **a3)
{
  CAudioSessionInstanceId *v6; // rax
  CAudioSessionInstanceId *v7; // r14
  int v8; // esi
  struct CAudioSession *v9; // rdi
  struct CAudioSession *v10; // rbx
  int AudioSession; // eax
  __int64 (__fastcall *v12)(CAudioSessionManager *); // rax
  struct CAudioSession *v14[2]; // [rsp+20h] [rbp-10h] BYREF
  CAudioSessionManager *v15; // [rsp+78h] [rbp+48h] BYREF

  v6 = (CAudioSessionInstanceId *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = CAudioSessionInstanceId::CAudioSessionInstanceId(v6);
  else
    v7 = 0LL;
  v8 = v7 == 0LL ? 0x8007000E : 0;
  if ( v7 )
    v8 = CAudioSessionInstanceId::Initialize(v7, a2);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(v14, (__int64)&ATL::g_strmgr);
  if ( v8 >= 0 )
    v8 = CAudioEndpointId::ToString((__int64 *)v7, v14);
  v15 = 0LL;
  v9 = v14[0];
  if ( v8 >= 0 )
    v8 = (*(__int64 (__fastcall **)(CAudioSessionManagerProvider *, struct CAudioSession *, CAudioSessionManager **))(*(_QWORD *)this + 48LL))(
           this,
           v14[0],
           &v15);
  v10 = 0LL;
  v14[0] = 0LL;
  if ( v8 >= 0 )
  {
    AudioSession = CAudioSessionManager::FindAudioSession(v15, v7, v14);
    v10 = v14[0];
    v8 = AudioSession;
    if ( AudioSession >= 0 )
      v8 = (**(__int64 (__fastcall ***)(struct CAudioSession *, GUID *, struct IAudioSessionInfo **))v14[0])(
             v14[0],
             &GUID_e13b3cde_f223_4043_8666_32b3f2df8ea1,
             a3);
  }
  if ( v7 )
  {
    CAudioSessionInstanceId::~CAudioSessionInstanceId(v7);
    operator delete(v7, (const struct std::nothrow_t *)0x50);
  }
  if ( v8 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManagerProvider::GetSessionFromSessionId", 752, v8);
  if ( v10 )
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v15 )
  {
    v12 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v15 + 16LL);
    if ( v12 == CAudioSessionManager::Release )
      CAudioSessionManager::Release(v15);
    else
      v12(v15);
  }
  ATL::CStringData::Release((struct CAudioSession *)((char *)v9 - 24));
  return (unsigned int)v8;
}
