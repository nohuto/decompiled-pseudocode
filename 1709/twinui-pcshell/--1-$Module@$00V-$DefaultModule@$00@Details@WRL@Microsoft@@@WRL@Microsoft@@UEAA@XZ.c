/*
 * XREFs of ??1?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAA@XZ @ 0x18000573C
 * Callers:
 *     ??_G?$DefaultModule@$00@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800059C0 (--_G-$DefaultModule@$00@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ??__FmoduleSingleton@?1??Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ@YAXXZ @ 0x1801F7F70 (--__FmoduleSingleton@-1--Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Mic.c)
 * Callees:
 *     ?GetFirstEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ @ 0x1800025B0 (-GetFirstEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ.c)
 *     ?GetLastEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ @ 0x1800025D0 (-GetLastEntryPointer@ModuleBase@Details@WRL@Microsoft@@UEBAPEAPEBUCreatorMap@234@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::~Module<1,Microsoft::WRL::Details::DefaultModule<1>>(
        Microsoft::WRL::Details::ModuleBase *this)
{
  const struct Microsoft::WRL::Details::CreatorMap **v2; // rbx
  const struct Microsoft::WRL::Details::CreatorMap **i; // rbp
  RTL_SRWLOCK *v4; // rsi
  void **v5; // rax
  void *v6; // r14
  PVOID v7; // rax
  __int64 result; // rax

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
        AcquireSRWLockExclusive(v4);
        v5 = (void **)*((_QWORD *)*v2 + 3);
        v6 = *v5;
        if ( *v5 )
        {
          *v5 = 0LL;
          if ( v4 )
            ReleaseSRWLockExclusive(v4);
          v7 = DecodePointer(v6);
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v7 + 16LL))(v7);
        }
        else if ( v4 )
        {
          ReleaseSRWLockExclusive(v4);
        }
      }
    }
  }
  result = (*(__int64 (__fastcall **)(Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)this + 24LL))(this);
  Microsoft::WRL::Details::ModuleBase::module_ = 0LL;
  Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::isInitialized = 0;
  return result;
}
