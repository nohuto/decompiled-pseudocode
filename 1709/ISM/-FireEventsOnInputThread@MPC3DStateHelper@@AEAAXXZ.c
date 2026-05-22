/*
 * XREFs of ?FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ @ 0x180007AB0
 * Callers:
 *     _lambda_cd53c665379f6d6b73078d77a45af54d_::_lambda_invoker_cdecl_ @ 0x180007AA0 (_lambda_cd53c665379f6d6b73078d77a45af54d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003368 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAA@XZ @ 0x180007DF0 (--1-$vector@V-$function@$$A6AX_N@Z@std@@V-$allocator@V-$function@$$A6AX_N@Z@std@@@2@@std@@QEAA@X.c)
 *     ??$emplace_back@AEAV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAAXAEAV?$function@$$A6AX_N@Z@1@@Z @ 0x18000868C (--$emplace_back@AEAV-$function@$$A6AX_N@Z@std@@@-$vector@V-$function@$$A6AX_N@Z@std@@V-$allocato.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPC3DStateHelper::FireEventsOnInputThread(PSRWLOCK SRWLock)
{
  char v2; // r14
  char v3; // r13
  char Ptr_high; // r15
  char v5; // r12
  __int64 *Ptr; // rdi
  __int64 *v7; // rbx
  __int64 *v8; // rax
  __int64 *i; // rax
  __int64 *v10; // rdi
  __int64 *v11; // rbx
  __int64 *v12; // rax
  __int64 *j; // rax
  __int64 k; // rbx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 m; // rbx
  __int64 v18; // rdi
  __int64 v19; // rcx
  const char *v20; // r9
  const char *v21; // r9
  __int128 v22; // [rsp+28h] [rbp-38h] BYREF
  __int64 v23; // [rsp+38h] [rbp-28h]
  __int128 v24; // [rsp+40h] [rbp-20h] BYREF
  __int64 v25; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  PSRWLOCK v27; // [rsp+90h] [rbp+30h] BYREF

  v24 = 0LL;
  v25 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  AcquireSRWLockExclusive(SRWLock);
  v27 = SRWLock;
  v2 = BYTE6(SRWLock[2].Ptr);
  v3 = BYTE4(SRWLock[2].Ptr);
  Ptr_high = HIBYTE(SRWLock[2].Ptr);
  v5 = BYTE5(SRWLock[2].Ptr);
  BYTE4(SRWLock[2].Ptr) = v2;
  BYTE5(SRWLock[2].Ptr) = Ptr_high;
  Ptr = (__int64 *)SRWLock[6].Ptr;
  v7 = (__int64 *)*Ptr;
  while ( v7 != Ptr )
  {
    std::vector<std::function<void (bool)>>::emplace_back<std::function<void (bool)> &>(&v24, v7 + 5);
    if ( !*((_BYTE *)v7 + 25) )
    {
      v8 = (__int64 *)v7[2];
      if ( *((_BYTE *)v8 + 25) )
      {
        for ( i = (__int64 *)v7[1]; !*((_BYTE *)i + 25) && v7 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v7 = i;
        v7 = i;
      }
      else
      {
        do
        {
          v7 = v8;
          v8 = (__int64 *)*v8;
        }
        while ( !*((_BYTE *)v8 + 25) );
      }
    }
  }
  v10 = (__int64 *)SRWLock[4].Ptr;
  v11 = (__int64 *)*v10;
  while ( v11 != v10 )
  {
    std::vector<std::function<void (bool)>>::emplace_back<std::function<void (bool)> &>(&v22, v11 + 5);
    if ( !*((_BYTE *)v11 + 25) )
    {
      v12 = (__int64 *)v11[2];
      if ( *((_BYTE *)v12 + 25) )
      {
        for ( j = (__int64 *)v11[1]; !*((_BYTE *)j + 25) && v11 == (__int64 *)j[2]; j = (__int64 *)j[1] )
          v11 = j;
        v11 = j;
      }
      else
      {
        do
        {
          v11 = v12;
          v12 = (__int64 *)*v12;
        }
        while ( !*((_BYTE *)v12 + 25) );
      }
    }
  }
  ReleaseSRWLockExclusive(SRWLock);
  if ( Ptr_high != v5 )
  {
    v15 = *((_QWORD *)&v24 + 1);
    for ( k = v24; k != v15; k += 64LL )
    {
      LOBYTE(v27) = Ptr_high;
      v16 = *(_QWORD *)(k + 56);
      if ( !v16 )
      {
        std::_Xbad_function_call();
        __debugbreak();
      }
      (*(void (__fastcall **)(__int64, PSRWLOCK *))(*(_QWORD *)v16 + 16LL))(v16, &v27);
    }
  }
  if ( v2 != v3 )
  {
    v18 = *((_QWORD *)&v22 + 1);
    for ( m = v22; m != v18; m += 64LL )
    {
      LOBYTE(v27) = v2;
      v19 = *(_QWORD *)(m + 56);
      if ( !v19 )
      {
        std::_Xbad_function_call();
        __debugbreak();
      }
      (*(void (__fastcall **)(__int64, PSRWLOCK *))(*(_QWORD *)v19 + 16LL))(v19, &v27);
    }
    AcquireSRWLockExclusive(SRWLock);
    if ( v2 )
    {
      if ( !SetEvent(SRWLock[8].Ptr) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x86E,
          (__int64)"internal\\sdk\\inc\\wil\\resource.h",
          v21);
        __debugbreak();
      }
    }
    else if ( !SetEvent(SRWLock[9].Ptr) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x86E,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        v20);
      __debugbreak();
    }
    ReleaseSRWLockExclusive(SRWLock);
  }
  std::vector<std::function<void (bool)>>::~vector<std::function<void (bool)>>(&v22);
  std::vector<std::function<void (bool)>>::~vector<std::function<void (bool)>>(&v24);
}
