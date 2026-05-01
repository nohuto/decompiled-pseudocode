/*
 * XREFs of ??1?$DefaultModule@$00@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800024B0
 * Callers:
 *     ??__FmoduleSingleton@?1??Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ@YAXXZ @ 0x1800088C0 (--__FmoduleSingleton@-1--Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Mic.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180007B90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DefaultModule<1>::~DefaultModule<1>(void ***a1)
{
  void **v1; // rax
  char *v2; // rbx
  unsigned int (__fastcall *v4)(Microsoft::WRL::Details::ModuleBase *__hidden); // rax
  unsigned int (__fastcall *v5)(Microsoft::WRL::Details::ModuleBase *__hidden); // rax
  __int64 result; // rax
  RTL_SRWLOCK *v7; // rsi
  void **v8; // rax
  void *v9; // rbp
  PVOID v10; // rax

  v1 = &Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::`vftable';
  v2 = (char *)&_pobjectentrymid;
  *a1 = &Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::`vftable';
  if ( &_pobjectentrymid < (_UNKNOWN *)_pobjectentrylast )
  {
    do
    {
      if ( *(_QWORD *)v2 )
      {
        v4 = (unsigned int (__fastcall *)(Microsoft::WRL::Details::ModuleBase *__hidden))(*a1)[3];
        if ( v4 != Microsoft::WRL::Details::ModuleBase::GetObjectCount )
          v4((Microsoft::WRL::Details::ModuleBase *)a1);
        if ( **(_QWORD **)(*(_QWORD *)v2 + 24LL) )
        {
          v7 = (RTL_SRWLOCK *)((__int64 (__fastcall *)(void ***))(*a1)[7])(a1);
          AcquireSRWLockExclusive(v7);
          v8 = *(void ***)(*(_QWORD *)v2 + 24LL);
          v9 = *v8;
          if ( *v8 )
          {
            *v8 = 0LL;
            if ( v7 )
              ReleaseSRWLockExclusive(v7);
            v10 = DecodePointer(v9);
            (*(void (__fastcall **)(PVOID))(*(_QWORD *)v10 + 16LL))(v10);
          }
          else if ( v7 )
          {
            ReleaseSRWLockExclusive(v7);
          }
        }
      }
      v2 += 8;
    }
    while ( v2 < _pobjectentrylast );
    v1 = *a1;
  }
  v5 = (unsigned int (__fastcall *)(Microsoft::WRL::Details::ModuleBase *__hidden))v1[3];
  if ( v5 == Microsoft::WRL::Details::ModuleBase::GetObjectCount )
    result = Microsoft::WRL::Details::ModuleBase::objectCount_;
  else
    result = ((__int64 (__fastcall *)(void ***))v5)(a1);
  Microsoft::WRL::Details::ModuleBase::module_ = 0LL;
  Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::isInitialized = 0;
  return result;
}
