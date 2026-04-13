/*
 * XREFs of ?GetMany@?$SimpleVectorIterator@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@V?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@5@PEAI@Z @ 0x18001B070
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800B4307 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,XWinRT::IntVersionTag,0>::GetMany(
        __int64 a1,
        unsigned int a2,
        void *a3,
        _DWORD *a4)
{
  unsigned int v5; // esi
  int v6; // ebx
  _DWORD *v7; // r12
  unsigned int v8; // r14d
  _DWORD *v9; // rax
  __int64 j; // rbx
  _QWORD *v11; // rdi
  __int64 v12; // rcx
  unsigned __int32 v13; // r15d
  bool v14; // zf
  signed __int32 v15; // eax
  _DWORD *v16; // rax
  __int64 i; // rbx
  _QWORD *v18; // rsi
  __int64 v19; // rcx

  *a4 = 0;
  v5 = a2;
  if ( a2 )
    memset_0(a3, 0, 8LL * a2);
  v6 = *(_DWORD *)(a1 + 48);
  v7 = *(_DWORD **)(a1 + 32);
  if ( v6 >= 0 )
  {
    if ( *(_BYTE *)(a1 + 56) )
    {
      v8 = *(_DWORD *)(a1 + 40);
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void *, _DWORD *))(*(_QWORD *)v7 + 128LL))(
             *(_QWORD *)(a1 + 32),
             v8,
             v5,
             a3,
             a4);
      if ( v6 >= 0 )
        *(_DWORD *)(a1 + 40) = v8 + *a4;
    }
    else
    {
      v13 = *(_DWORD *)(a1 + 40);
      while ( 1 )
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void *, _DWORD *))(**(_QWORD **)(a1 + 32) + 128LL))(
               *(_QWORD *)(a1 + 32),
               v13,
               v5,
               a3,
               a4);
        if ( v6 < 0 )
          break;
        v15 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), v13 + *a4, v13);
        v14 = v13 == v15;
        v13 = v15;
        if ( v14 )
          break;
        v16 = a4;
        for ( i = 0LL; (unsigned int)i < *a4; v16 = a4 )
        {
          v18 = a3;
          v19 = *((_QWORD *)a3 + i);
          if ( v19 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
            *((_QWORD *)a3 + i) = 0LL;
            v18 = a3;
          }
          v18[i] = 0LL;
          i = (unsigned int)(i + 1);
        }
        *v16 = 0;
        v5 = a2;
      }
    }
    if ( *(_DWORD *)(a1 + 52) != v7[22] )
    {
      *(_DWORD *)(a1 + 48) = -2147483636;
      if ( v6 < 0 )
      {
        RoTransformError((unsigned int)v6, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v9 = a4;
        for ( j = 0LL; (unsigned int)j < *a4; v9 = a4 )
        {
          v11 = a3;
          v12 = *((_QWORD *)a3 + j);
          if ( v12 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
            *((_QWORD *)a3 + j) = 0LL;
            v11 = a3;
          }
          v11[j] = 0LL;
          j = (unsigned int)(j + 1);
        }
        *v9 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v6, 0LL);
  }
  return (unsigned int)v6;
}
