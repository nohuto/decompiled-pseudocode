/*
 * XREFs of ?CallDestructors@?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@CAXPEAV?$CComPtr@UISessionInternalEvents@@@2@_K@Z @ 0x180043F5C
 * Callers:
 *     ??1?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@QEAA@XZ @ 0x180044094 (--1-$CAtlArray@V-$CComPtr@UISessionInternalEvents@@@ATL@@V-$CElementTraits@V-$CComPtr@UISessionI.c)
 * Callees:
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180032820 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CAtlArray<ATL::CComPtr<ISessionInternalEvents>,ATL::CElementTraits<ATL::CComPtr<ISessionInternalEvents>>>::CallDestructors(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 i; // rbx
  CAudioSessionManager *v5; // rcx
  void (*v6)(void); // rax

  if ( a2 )
  {
    for ( i = 0LL; i < a2; ++i )
    {
      v5 = *(CAudioSessionManager **)(a1 + 8 * i);
      if ( v5 )
      {
        v6 = *(void (**)(void))(*(_QWORD *)v5 + 16LL);
        if ( (char *)v6 == (char *)CAudioSessionManager::Release )
          CAudioSessionManager::Release(v5);
        else
          v6();
      }
    }
  }
}
