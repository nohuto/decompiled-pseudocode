/*
 * XREFs of ?IndexOf@?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@5@PEAIPEAE@Z @ 0x1800196D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IndexOfInternal@?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@AEAAJPEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@5@IPEAU67895@PEAIPEAE@Z @ 0x18001CFA0 (-IndexOfInternal@-$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Wind.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C0EA8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>::IndexOf(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _BYTE *a4)
{
  __int64 v5; // r14
  int v7; // edi
  _QWORD *v8; // r15
  __int64 v9; // rsi
  _DWORD *v10; // r13
  RTL_SRWLOCK *v11; // rbx
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned int v14; // r14d
  _QWORD *v15; // rbx
  int v17; // [rsp+98h] [rbp+10h]

  v17 = a2;
  v5 = (__int64)a3;
  v7 = 0;
  *a3 = 0;
  *a4 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = (_DWORD *)(a1 + 72);
  v11 = (RTL_SRWLOCK *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( SLODWORD(v11->Ptr) >= 0 )
      ++LODWORD(v11->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 80));
    a2 = v17;
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
    v13 = 8LL * *(unsigned int *)(a1 + 40);
    if ( !is_mul_ok(*(unsigned int *)(a1 + 40), 8uLL) )
      v13 = -1LL;
    v8 = operator new[](v13, (const struct std::nothrow_t *)&std::nothrow);
    if ( v8 )
    {
      v14 = 0;
      if ( *(_DWORD *)(a1 + 40) )
      {
        v7 = 0;
        do
        {
          v12 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * v14);
          v8[v14] = v12;
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
          v9 = (unsigned int)(v9 + 1);
          ++v14;
        }
        while ( v14 < *(_DWORD *)(a1 + 40) );
      }
      v5 = (__int64)a3;
    }
    else
    {
      v7 = -2147024882;
    }
  }
  else
  {
    v7 = Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>::IndexOfInternal(
           a1,
           *(_QWORD *)(a1 + 56),
           *(_DWORD *)(a1 + 40),
           a2,
           v5,
           (__int64)a4);
  }
  if ( v10 )
  {
    if ( *v10 == 1 )
      --LODWORD(v11->Ptr);
    else
      ReleaseSRWLockShared(v11);
  }
  if ( v7 >= 0 )
  {
    if ( !(_DWORD)v9 )
      goto LABEL_29;
    v7 = Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>::IndexOfInternal(
           v12,
           (_DWORD)v8,
           v9,
           v17,
           v5,
           (__int64)a4);
  }
  if ( (_DWORD)v9 )
  {
    v15 = v8;
    do
    {
      if ( *v15 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v15 + 16LL))(*v15);
        *v15 = 0LL;
      }
      ++v15;
      --v9;
    }
    while ( v9 );
  }
LABEL_29:
  operator delete[](v8);
  return (unsigned int)v7;
}
