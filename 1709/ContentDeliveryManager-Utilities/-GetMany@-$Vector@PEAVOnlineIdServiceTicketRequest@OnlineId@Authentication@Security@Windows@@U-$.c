/*
 * XREFs of ?GetMany@?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@5@PEAI@Z @ 0x180017460
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B3E58 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800B4307 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned int *a5)
{
  _QWORD *v5; // r14
  unsigned __int64 v6; // rdi
  unsigned int v7; // ebp
  unsigned int v9; // esi
  unsigned int v10; // r12d
  int *v11; // r15
  int v12; // ebx
  unsigned int v13; // ebx
  _QWORD *v14; // rbp
  __int64 v15; // rcx
  _QWORD *v16; // r12
  __int64 v17; // rcx
  unsigned int i; // ecx
  __int64 v19; // rdi
  void *v21; // [rsp+20h] [rbp-68h]
  unsigned int v22; // [rsp+90h] [rbp+8h]
  unsigned int v24; // [rsp+A0h] [rbp+18h]

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v9 = 0;
  v24 = 0;
  v10 = 0;
  if ( a3 )
    memset_0(a4, 0, 8LL * a3);
  *a5 = 0;
  v21 = 0LL;
  v11 = (int *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( *v11 >= 0 )
      ++*v11;
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 80));
  }
  v12 = 0;
  if ( *(_DWORD *)(a1 + 48) )
  {
    v21 = operator new[](v6, (const struct std::nothrow_t *)&TLV::nothrow);
    if ( !v21 )
    {
      v12 = -2147024882;
LABEL_12:
      RoOriginateError((unsigned int)v12, 0LL);
      goto LABEL_28;
    }
  }
  v10 = *(_DWORD *)(a1 + 40);
  v22 = v10;
  if ( v7 > v10 )
  {
    v12 = -2147483637;
    goto LABEL_12;
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
    if ( (_DWORD)v6 )
    {
      v13 = v7;
      v14 = v5;
      do
      {
        if ( v13 >= v10 )
          break;
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * v13);
        *v14 = v15;
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
        ++v24;
        ++v13;
        ++v14;
      }
      while ( v24 < (unsigned int)v6 );
    }
    v12 = 0;
  }
  else if ( (_DWORD)v6 )
  {
    v16 = v5;
    do
    {
      v12 = 0;
      if ( v7 >= v22 )
        break;
      v17 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * v7);
      *v16 = v17;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      ++v9;
      ++v7;
      ++v16;
    }
    while ( v9 < (unsigned int)v6 );
    v5 = a4;
    v10 = v22;
  }
LABEL_28:
  if ( *(_DWORD *)(a1 + 72) == 1 )
    --*v11;
  else
    ReleaseSRWLockShared((PSRWLOCK)(a1 + 80));
  if ( v12 < 0 )
  {
    if ( v9 )
    {
      v19 = v9;
      do
      {
        if ( *v5 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 16LL))(*v5);
          *v5 = 0LL;
        }
        ++v5;
        --v19;
      }
      while ( v19 );
    }
  }
  else
  {
    if ( v24 )
    {
      for ( i = 0; i < (unsigned int)v6; ++i )
      {
        if ( i + a2 >= v10 )
          break;
        v12 = 0;
        ++v9;
      }
    }
    *a5 = v9;
  }
  operator delete[](v21);
  return (unsigned int)v12;
}
