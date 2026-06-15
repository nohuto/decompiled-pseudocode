/*
 * XREFs of ??1CAppAudioSessionId@@QEAA@XZ @ 0x180047D04
 * Callers:
 *     _CAudioSessionInstanceId::CAudioSessionInstanceId_::_1_::dtor$1 @ 0x18006A2B3 (_CAudioSessionInstanceId--CAudioSessionInstanceId_--_1_--dtor$1.c)
 *     _CAudioSessionManager::OnStateChanged_::_1_::dtor$6 @ 0x18006A650 (_CAudioSessionManager--OnStateChanged_--_1_--dtor$6.c)
 * Callees:
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x180034080 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAppAudioSessionId::~CAppAudioSessionId(CAppAudioSessionId *this)
{
  volatile signed __int32 *v2; // rdx
  ATL::CAtlStringMgr *v3; // rcx
  void (__fastcall *v4)(ATL::CAtlStringMgr *, struct ATL::CStringData *); // rax
  volatile signed __int32 *v5; // rdx
  volatile signed __int32 *v6; // rdx

  v2 = (volatile signed __int32 *)(*((_QWORD *)this + 4) - 24LL);
  if ( _InterlockedExchangeAdd(v2 + 4, 0xFFFFFFFF) <= 1 )
  {
    v3 = *(ATL::CAtlStringMgr **)v2;
    v4 = *(void (__fastcall **)(ATL::CAtlStringMgr *, struct ATL::CStringData *))(**(_QWORD **)v2 + 8LL);
    if ( v4 == ATL::CAtlStringMgr::Free )
      ATL::CAtlStringMgr::Free(v3, (struct ATL::CStringData *)v2);
    else
      ((void (__fastcall *)(ATL::CAtlStringMgr *))v4)(v3);
  }
  v5 = (volatile signed __int32 *)(*((_QWORD *)this + 1) - 24LL);
  if ( _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 8LL))(*(_QWORD *)v5);
  v6 = (volatile signed __int32 *)(*(_QWORD *)this - 24LL);
  if ( _InterlockedExchangeAdd(v6 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v6 + 8LL))(*(_QWORD *)v6);
}
