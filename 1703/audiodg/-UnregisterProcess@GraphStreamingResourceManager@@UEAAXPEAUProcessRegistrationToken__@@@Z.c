/*
 * XREFs of ?UnregisterProcess@GraphStreamingResourceManager@@UEAAXPEAUProcessRegistrationToken__@@@Z @ 0x140003F80
 * Callers:
 *     ?DestroyStream@CSubmixImpl@@UEAAJ_K@Z @ 0x1400073A0 (-DestroyStream@CSubmixImpl@@UEAAJ_K@Z.c)
 * Callees:
 *     ?FinalUnregisterForProcess@GraphStreamingResourceManager@@EEAAXPEAU_t@HandleRegistrations@1@@Z @ 0x140004320 (-FinalUnregisterForProcess@GraphStreamingResourceManager@@EEAAXPEAU_t@HandleRegistrations@1@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?FreeNode@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x140013B88 (-FreeNode@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementTr.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140032784 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall GraphStreamingResourceManager::UnregisterProcess(
        GraphStreamingResourceManager *this,
        struct ProcessRegistrationToken__ *a2)
{
  GraphStreamingResourceManager *v4; // rcx
  struct GraphStreamingResourceManager::HandleRegistrations::_t *v5; // rdx
  void (__fastcall *v6)(GraphStreamingResourceManager *__hidden, struct GraphStreamingResourceManager::HandleRegistrations::_t *); // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 i; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]

  v12 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 2, 0xFFFFFFFF) == 1 )
  {
    v4 = (GraphStreamingResourceManager *)((char *)this - 8);
    v5 = (struct ProcessRegistrationToken__ *)((char *)a2 + 16);
    v6 = *(void (__fastcall **)(GraphStreamingResourceManager *__hidden, struct GraphStreamingResourceManager::HandleRegistrations::_t *))(*((_QWORD *)this - 1) + 40LL);
    if ( v6 == GraphStreamingResourceManager::FinalUnregisterForProcess )
      GraphStreamingResourceManager::FinalUnregisterForProcess(v4, v5);
    else
      v6(v4, v5);
    if ( !a2 )
      ATL::AtlThrowImpl(-2147467259);
    v7 = (unsigned int)(*((_DWORD *)a2 + 10) % *((_DWORD *)this + 18));
    v8 = *((_QWORD *)this + 7);
    v9 = *(_QWORD *)(v8 + 8 * v7);
    if ( a2 == (struct ProcessRegistrationToken__ *)v9 )
      goto LABEL_6;
    for ( i = *(_QWORD *)(v9 + 32); (struct ProcessRegistrationToken__ *)i != a2; i = *(_QWORD *)(i + 32) )
      v9 = i;
    if ( !v9 )
LABEL_6:
      *(_QWORD *)(v8 + 8 * v7) = *((_QWORD *)a2 + 4);
    else
      *(_QWORD *)(v9 + 32) = *((_QWORD *)a2 + 4);
    ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::FreeNode(
      (char *)this + 56,
      a2);
  }
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
}
