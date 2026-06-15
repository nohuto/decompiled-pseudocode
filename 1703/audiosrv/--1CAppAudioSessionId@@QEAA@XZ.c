/*
 * XREFs of ??1CAppAudioSessionId@@QEAA@XZ @ 0x18001ECF4
 * Callers:
 *     _CAudioSessionInstanceId::CAudioSessionInstanceId_::_1_::dtor$1 @ 0x18005AE8E (_CAudioSessionInstanceId--CAudioSessionInstanceId_--_1_--dtor$1.c)
 *     _CAudioSessionManager::OnStateChanged_::_1_::dtor$5 @ 0x18005B134 (_CAudioSessionManager--OnStateChanged_--_1_--dtor$5.c)
 * Callees:
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x180022BF0 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAppAudioSessionId::~CAppAudioSessionId(CAppAudioSessionId *this)
{
  __int64 v2; // rdx
  void (*v3)(void); // rax
  volatile signed __int32 *v4; // rdx
  volatile signed __int32 *v5; // rdx

  v2 = *((_QWORD *)this + 4) - 24LL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 16), 0xFFFFFFFF) <= 1 )
  {
    v3 = *(void (**)(void))(**(_QWORD **)v2 + 8LL);
    if ( (char *)v3 == (char *)ATL::CAtlStringMgr::Free )
      ATL::CAtlStringMgr::Free(*(ATL::CAtlStringMgr **)v2, (struct ATL::CStringData *)v2);
    else
      v3();
  }
  v4 = (volatile signed __int32 *)(*((_QWORD *)this + 1) - 24LL);
  if ( _InterlockedExchangeAdd(v4 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v4 + 8LL))(*(_QWORD *)v4);
  v5 = (volatile signed __int32 *)(*(_QWORD *)this - 24LL);
  if ( _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 8LL))(*(_QWORD *)v5);
}
