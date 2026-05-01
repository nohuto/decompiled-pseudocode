/*
 * XREFs of ?GetMany@?$SimpleVectorIterator@IV?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAI0@Z @ 0x1801C8AA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<unsigned int,Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,XWinRT::IntVersionTag,0>::GetMany(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // ebx
  _DWORD *v8; // r14
  unsigned __int32 v9; // esi
  _DWORD *v10; // rax
  __int64 j; // rdx
  bool v12; // zf
  signed __int32 v13; // eax
  _DWORD *v14; // rax
  __int64 i; // rdx
  unsigned int v17; // [rsp+68h] [rbp+38h]

  v17 = a2;
  *a4 = 0;
  if ( a2 )
  {
    v5 = 0LL;
    v6 = a2;
    do
    {
      *(_DWORD *)(v5 + a3) = 0;
      v5 += 4LL;
      --v6;
    }
    while ( v6 );
  }
  v7 = *(_DWORD *)(a1 + 48);
  v8 = *(_DWORD **)(a1 + 32);
  if ( v7 >= 0 )
  {
    v9 = *(_DWORD *)(a1 + 40);
    if ( *(_BYTE *)(a1 + 56) )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _DWORD *))(*(_QWORD *)v8 + 128LL))(
             *(_QWORD *)(a1 + 32),
             v9,
             a2,
             a3,
             a4);
      if ( v7 >= 0 )
        *(_DWORD *)(a1 + 40) = v9 + *a4;
    }
    else
    {
      while ( 1 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _DWORD *))(**(_QWORD **)(a1 + 32) + 128LL))(
               *(_QWORD *)(a1 + 32),
               v9,
               a2,
               a3,
               a4);
        if ( v7 < 0 )
          break;
        v13 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), v9 + *a4, v9);
        v12 = v9 == v13;
        v9 = v13;
        if ( v12 )
          break;
        v14 = a4;
        for ( i = 0LL; (unsigned int)i < *a4; v14 = a4 )
        {
          *(_DWORD *)(a3 + 4 * i) = 0;
          i = (unsigned int)(i + 1);
        }
        *v14 = 0;
        a2 = v17;
      }
    }
    if ( *(_DWORD *)(a1 + 52) != v8[22] )
    {
      *(_DWORD *)(a1 + 48) = -2147483636;
      if ( v7 < 0 )
      {
        RoTransformError((unsigned int)v7, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v10 = a4;
        for ( j = 0LL; (unsigned int)j < *a4; v10 = a4 )
        {
          *(_DWORD *)(a3 + 4 * j) = 0;
          j = (unsigned int)(j + 1);
        }
        *v10 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v7, 0LL);
  }
  return (unsigned int)v7;
}
