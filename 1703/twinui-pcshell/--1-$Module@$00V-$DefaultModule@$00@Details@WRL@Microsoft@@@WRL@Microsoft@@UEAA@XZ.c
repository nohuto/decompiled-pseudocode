/*
 * XREFs of ??1?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAA@XZ @ 0x18000543C
 * Callers:
 *     ??_G?$DefaultModule@$00@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180005700 (--_G-$DefaultModule@$00@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ??__FmoduleSingleton@?1??Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ@YAXXZ @ 0x1801A5A30 (--__FmoduleSingleton@-1--Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Mic.c)
 * Callees:
 *     ?GetFirstEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ @ 0x180002400 (-GetFirstEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ.c)
 *     ?GetLastEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ @ 0x180002420 (-GetLastEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800026E8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::~Module<1,Microsoft::WRL::Details::DefaultModule<1>>(
        Microsoft::WRL::Details::ModuleBase *this)
{
  const struct Microsoft::WRL::Details::CreatorMap **v2; // rbx
  const struct Microsoft::WRL::Details::CreatorMap **i; // rsi
  RTL_SRWLOCK *v4; // rax
  void **v5; // rcx
  void *v6; // rbp
  PVOID v7; // rax
  __int64 result; // rax
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::`vftable';
  v2 = Microsoft::WRL::Details::ModuleBase::GetFirstEntryPointer(this) + 1;
  for ( i = Microsoft::WRL::Details::ModuleBase::GetLastEntryPointer(this); v2 < i; ++v2 )
  {
    if ( *v2 )
    {
      (*(void (__fastcall **)(Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)this + 24LL))(this);
      if ( **((_QWORD **)*v2 + 3) )
      {
        v4 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)this + 56LL))(this);
        Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&SRWLock, v4);
        v5 = (void **)*((_QWORD *)*v2 + 3);
        v6 = *v5;
        if ( *v5 )
        {
          *v5 = 0LL;
          if ( SRWLock )
          {
            ReleaseSRWLockExclusive(SRWLock);
            SRWLock = 0LL;
          }
          v7 = DecodePointer(v6);
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v7 + 16LL))(v7);
        }
        else if ( SRWLock )
        {
          ReleaseSRWLockExclusive(SRWLock);
          SRWLock = 0LL;
        }
      }
    }
  }
  result = (*(__int64 (__fastcall **)(Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)this + 24LL))(this);
  Microsoft::WRL::Details::ModuleBase::module_ = 0LL;
  Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::isInitialized = 0;
  return result;
}
