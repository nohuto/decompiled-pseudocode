/*
 * XREFs of ?_Tidy@?$deque@V?$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@std@@@2@@std@@IEAAXXZ @ 0x1800921A8
 * Callers:
 *     ??1ButtonProcessor@@MEAA@XZ @ 0x18009125C (--1ButtonProcessor@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::deque<std::shared_ptr<ButtonProcessor::AsynchronousWorkItem>>::_Tidy(_QWORD *a1)
{
  __int64 i; // rcx
  volatile signed __int32 *v3; // rdi
  __int64 v5; // rdi
  void *v6; // rcx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax

  for ( i = a1[4]; i; i = a1[4] )
  {
    v3 = *(volatile signed __int32 **)(*(_QWORD *)(a1[1] + 8 * ((a1[2] - 1LL) & (a1[3] - 1LL + i))) + 8LL);
    if ( v3 )
    {
      if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
        if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
      }
    }
    if ( a1[4]-- == 1LL )
      a1[3] = 0LL;
  }
  v5 = a1[2];
  while ( v5 )
  {
    --v5;
    v6 = *(void **)(a1[1] + 8 * v5);
    if ( v6 )
      operator delete(v6);
  }
  v7 = a1[1];
  if ( v7 )
  {
    v8 = a1[2];
    if ( v8 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v8 < 0x1000 )
      {
LABEL_21:
        operator delete((void *)v7);
        goto LABEL_22;
      }
      if ( (v7 & 0x1F) == 0 )
      {
        v9 = *(_QWORD *)(v7 - 8);
        if ( v9 < v7 )
        {
          v7 = v7 - v9 - 8;
          if ( v7 <= 0x1F )
          {
            v7 = v9;
            goto LABEL_21;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v7, 0x1FFFFFFFFFFFFFFFLL);
    JUMPOUT(0x1800922B4LL);
  }
LABEL_22:
  a1[2] = 0LL;
  a1[1] = 0LL;
}
