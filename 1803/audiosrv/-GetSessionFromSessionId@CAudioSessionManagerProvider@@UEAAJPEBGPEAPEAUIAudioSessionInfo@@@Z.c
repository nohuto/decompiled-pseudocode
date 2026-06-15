/*
 * XREFs of ?GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z @ 0x1800B4D20
 * Callers:
 *     <none>
 * Callees:
 *     ?ToString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180016648 (-ToString@CAudioEndpointId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@AT.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180018A18 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180030CF0 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180030D50 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180031CA0 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180032820 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x180033FF4 (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800B7A50 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall CAudioSessionManagerProvider::GetSessionFromSessionId(
        CAudioSessionManagerProvider *this,
        const unsigned __int16 *a2,
        struct IAudioSessionInfo **a3)
{
  CAudioSessionInstanceId *v6; // rax
  CAudioSessionInstanceId *v7; // r14
  int v8; // esi
  __int64 v9; // r8
  struct CAudioSession *v10; // rdi
  struct CAudioSession *v11; // rbx
  int AudioSession; // eax
  __int64 (__fastcall *v13)(CAudioSessionManager *); // rax
  struct CAudioSession *v15[2]; // [rsp+20h] [rbp-10h] BYREF
  CAudioSessionManager *v16; // [rsp+78h] [rbp+48h] BYREF

  v6 = (CAudioSessionInstanceId *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = CAudioSessionInstanceId::CAudioSessionInstanceId(v6);
  else
    v7 = 0LL;
  v8 = v7 == 0LL ? 0x8007000E : 0;
  if ( v7 )
    v8 = CAudioSessionInstanceId::Initialize(v7, a2);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(v15, (ATL::CAtlStringMgr *)&ATL::g_strmgr);
  if ( v8 >= 0 )
    v8 = CAudioEndpointId::ToString((const void **)v7, v15, v9);
  v16 = 0LL;
  v10 = v15[0];
  if ( v8 >= 0 )
    v8 = (*(__int64 (__fastcall **)(CAudioSessionManagerProvider *, struct CAudioSession *, CAudioSessionManager **))(*(_QWORD *)this + 48LL))(
           this,
           v15[0],
           &v16);
  v11 = 0LL;
  v15[0] = 0LL;
  if ( v8 >= 0 )
  {
    AudioSession = CAudioSessionManager::FindAudioSession(v16, v7, v15);
    v11 = v15[0];
    v8 = AudioSession;
    if ( AudioSession >= 0 )
      v8 = (**(__int64 (__fastcall ***)(struct CAudioSession *, GUID *, struct IAudioSessionInfo **))v15[0])(
             v15[0],
             &GUID_5b87d7c9_ae21_4e3d_9e7b_ca3e7822759a,
             a3);
  }
  if ( v7 )
  {
    CAudioSessionInstanceId::~CAudioSessionInstanceId(v7);
    operator delete(v7, (const struct std::nothrow_t *)0x50);
  }
  if ( v8 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManagerProvider::GetSessionFromSessionId", 766, v8);
  if ( v11 )
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v16 )
  {
    v13 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v16 + 16LL);
    if ( v13 == CAudioSessionManager::Release )
      CAudioSessionManager::Release(v16);
    else
      v13(v16);
  }
  ATL::CStringData::Release((struct CAudioSession *)((char *)v10 - 24));
  return (unsigned int)v8;
}
