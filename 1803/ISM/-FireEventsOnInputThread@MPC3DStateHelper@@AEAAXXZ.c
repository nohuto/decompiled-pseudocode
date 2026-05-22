/*
 * XREFs of ?FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ @ 0x1800079B0
 * Callers:
 *     _lambda_cd53c665379f6d6b73078d77a45af54d_::_lambda_invoker_cdecl_ @ 0x1800079A0 (_lambda_cd53c665379f6d6b73078d77a45af54d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003128 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$emplace_back@AEAV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAAAEAV?$function@$$A6AX_N@Z@1@AEAV21@@Z @ 0x180007BE8 (--$emplace_back@AEAV-$function@$$A6AX_N@Z@std@@@-$vector@V-$function@$$A6AX_N@Z@std@@V-$allocato.c)
 *     ??1?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAA@XZ @ 0x180007F80 (--1-$vector@V-$function@$$A6AX_N@Z@std@@V-$allocator@V-$function@$$A6AX_N@Z@std@@@2@@std@@QEAA@X.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
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
  __int64 **v8; // rax
  __int64 *j; // rcx
  __int64 *i; // rax
  __int64 *v11; // rdi
  __int64 *v12; // rbx
  __int64 **v13; // rax
  __int64 *m; // rcx
  __int64 *k; // rax
  __int64 n; // rbx
  __int64 v17; // rcx
  __int64 ii; // rbx
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
      v8 = (__int64 **)v7[2];
      if ( *((_BYTE *)v8 + 25) )
      {
        for ( i = (__int64 *)v7[1]; !*((_BYTE *)i + 25) && v7 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v7 = i;
        v7 = i;
      }
      else
      {
        v7 = (__int64 *)v7[2];
        for ( j = *v8; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v7 = j;
      }
    }
  }
  v11 = (__int64 *)SRWLock[4].Ptr;
  v12 = (__int64 *)*v11;
  while ( v12 != v11 )
  {
    std::vector<std::function<void (bool)>>::emplace_back<std::function<void (bool)> &>(&v22, v12 + 5);
    if ( !*((_BYTE *)v12 + 25) )
    {
      v13 = (__int64 **)v12[2];
      if ( *((_BYTE *)v13 + 25) )
      {
        for ( k = (__int64 *)v12[1]; !*((_BYTE *)k + 25) && v12 == (__int64 *)k[2]; k = (__int64 *)k[1] )
          v12 = k;
        v12 = k;
      }
      else
      {
        v12 = (__int64 *)v12[2];
        for ( m = *v13; !*((_BYTE *)m + 25); m = (__int64 *)*m )
          v12 = m;
      }
    }
  }
  ReleaseSRWLockExclusive(SRWLock);
  if ( Ptr_high != v5 )
  {
    for ( n = v24; n != *((_QWORD *)&v24 + 1); n += 64LL )
    {
      LOBYTE(v27) = Ptr_high;
      v17 = *(_QWORD *)(n + 56);
      if ( !v17 )
      {
        std::_Xbad_function_call();
        __debugbreak();
      }
      (*(void (__fastcall **)(__int64, PSRWLOCK *))(*(_QWORD *)v17 + 16LL))(v17, &v27);
    }
  }
  if ( v2 != v3 )
  {
    for ( ii = v22; ii != *((_QWORD *)&v22 + 1); ii += 64LL )
    {
      LOBYTE(v27) = v2;
      v19 = *(_QWORD *)(ii + 56);
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
          (void *)0x86F,
          (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
          v21);
        JUMPOUT(0x180007BE4LL);
      }
    }
    else if ( !SetEvent(SRWLock[9].Ptr) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x86F,
        (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
        v20);
      __debugbreak();
    }
    ReleaseSRWLockExclusive(SRWLock);
  }
  std::vector<std::function<void (bool)>>::~vector<std::function<void (bool)>>(&v22);
  std::vector<std::function<void (bool)>>::~vector<std::function<void (bool)>>(&v24);
}
