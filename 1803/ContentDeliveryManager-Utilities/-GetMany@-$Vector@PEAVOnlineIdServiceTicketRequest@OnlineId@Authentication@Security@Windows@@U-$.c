/*
 * XREFs of ?GetMany@?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@5@PEAI@Z @ 0x180019B00
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C0EA8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800C1147 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        _DWORD *a5)
{
  _QWORD *v5; // r14
  __int64 v8; // rdi
  unsigned int v9; // r15d
  unsigned __int64 v10; // rbx
  _DWORD *v11; // rbp
  RTL_SRWLOCK *v12; // r12
  int v13; // ebx
  unsigned int v14; // ebx
  _QWORD *v15; // r15
  __int64 v16; // rcx
  unsigned int v17; // ebp
  _QWORD *v18; // r15
  __int64 v19; // rcx
  unsigned int i; // ecx
  void *v22; // [rsp+20h] [rbp-68h]
  unsigned int v23; // [rsp+90h] [rbp+8h]
  unsigned int v25; // [rsp+A0h] [rbp+18h]

  v5 = a4;
  v8 = 0LL;
  v23 = 0;
  v9 = 0;
  v10 = a3;
  if ( a3 )
    memset_0(a4, 0, 8LL * a3);
  *a5 = 0;
  v22 = 0LL;
  v11 = (_DWORD *)(a1 + 72);
  v12 = (RTL_SRWLOCK *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( SLODWORD(v12->Ptr) >= 0 )
      ++LODWORD(v12->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 80));
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
    v22 = operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v22 )
    {
      v13 = -2147024882;
LABEL_12:
      RoOriginateError((unsigned int)v13, 0LL);
      goto LABEL_29;
    }
  }
  v9 = *(_DWORD *)(a1 + 40);
  v25 = v9;
  if ( a2 > v9 )
  {
    v13 = -2147483637;
    goto LABEL_12;
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
    if ( a3 )
    {
      v14 = a2;
      v15 = v5;
      do
      {
        if ( v14 >= v25 )
          break;
        v16 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * v14);
        *v15 = v16;
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
        ++v23;
        ++v14;
        ++v15;
      }
      while ( v23 < a3 );
      v12 = (RTL_SRWLOCK *)(a1 + 80);
      v9 = v25;
    }
    v13 = 0;
  }
  else
  {
    v13 = 0;
    if ( a3 )
    {
      v17 = a2;
      v18 = v5;
      do
      {
        v13 = 0;
        if ( v17 >= v25 )
          break;
        v19 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * v17);
        *v18 = v19;
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
        v8 = (unsigned int)(v8 + 1);
        ++v17;
        ++v18;
      }
      while ( (unsigned int)v8 < a3 );
      v12 = (RTL_SRWLOCK *)(a1 + 80);
      v11 = (_DWORD *)(a1 + 72);
      v9 = v25;
    }
  }
LABEL_29:
  if ( v11 )
  {
    if ( *v11 == 1 )
      --LODWORD(v12->Ptr);
    else
      ReleaseSRWLockShared(v12);
  }
  if ( v13 < 0 )
  {
    if ( (_DWORD)v8 )
    {
      do
      {
        if ( *v5 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 16LL))(*v5);
          *v5 = 0LL;
        }
        ++v5;
        --v8;
      }
      while ( v8 );
    }
  }
  else
  {
    if ( v23 )
    {
      for ( i = 0; i < a3; ++i )
      {
        if ( i + a2 >= v9 )
          break;
        v13 = 0;
        LODWORD(v8) = v8 + 1;
      }
    }
    *a5 = v8;
  }
  operator delete[](v22);
  return (unsigned int)v13;
}
