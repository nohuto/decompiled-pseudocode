/*
 * XREFs of ??1?$DefaultModule@$00@Details@WRL@Microsoft@@UEAA@XZ @ 0x180003B10
 * Callers:
 *     ??__FmoduleSingleton@?1??Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ@YAXXZ @ 0x180008DF0 (--__FmoduleSingleton@-1--Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Mic.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DefaultModule<1>::~DefaultModule<1>(
        Microsoft::WRL::Details::ModuleBase *a1)
{
  char *v1; // rbx
  unsigned int (__fastcall *v3)(Microsoft::WRL::Details::ModuleBase *__hidden); // rax
  unsigned int (__fastcall *v4)(Microsoft::WRL::Details::ModuleBase *__hidden); // rax
  __int64 result; // rax
  RTL_SRWLOCK *v6; // rsi
  void **v7; // rax
  void *v8; // rbp
  PVOID v9; // rax

  v1 = (char *)&_pobjectentrymid;
  *(_QWORD *)a1 = &Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::`vftable';
  if ( &_pobjectentrymid < (_UNKNOWN *)_pobjectentrylast )
  {
    do
    {
      if ( *(_QWORD *)v1 )
      {
        v3 = *(unsigned int (__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_QWORD *)a1 + 24LL);
        if ( v3 != Microsoft::WRL::Details::ModuleBase::GetObjectCount )
          v3(a1);
        if ( **(_QWORD **)(*(_QWORD *)v1 + 24LL) )
        {
          v6 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)a1 + 56LL))(a1);
          AcquireSRWLockExclusive(v6);
          v7 = *(void ***)(*(_QWORD *)v1 + 24LL);
          v8 = *v7;
          if ( *v7 )
          {
            *v7 = 0LL;
            if ( v6 )
              ReleaseSRWLockExclusive(v6);
            v9 = DecodePointer(v8);
            (*(void (__fastcall **)(PVOID))(*(_QWORD *)v9 + 16LL))(v9);
          }
          else if ( v6 )
          {
            ReleaseSRWLockExclusive(v6);
          }
        }
      }
      v1 += 8;
    }
    while ( v1 < _pobjectentrylast );
  }
  v4 = *(unsigned int (__fastcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_QWORD *)a1 + 24LL);
  if ( v4 == Microsoft::WRL::Details::ModuleBase::GetObjectCount )
    result = Microsoft::WRL::Details::ModuleBase::objectCount_;
  else
    result = ((__int64 (__fastcall *)(Microsoft::WRL::Details::ModuleBase *))v4)(a1);
  Microsoft::WRL::Details::ModuleBase::module_ = 0LL;
  Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::isInitialized = 0;
  return result;
}
