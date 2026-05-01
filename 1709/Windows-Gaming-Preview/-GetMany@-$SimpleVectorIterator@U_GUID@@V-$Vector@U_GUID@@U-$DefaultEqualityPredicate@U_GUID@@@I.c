/*
 * XREFs of ?GetMany@?$SimpleVectorIterator@U_GUID@@V?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEAU_GUID@@PEAI@Z @ 0x18002F120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<_GUID,Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,XWinRT::IntVersionTag,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // ebx
  __int64 v8; // r14
  unsigned __int32 v9; // esi
  bool v10; // zf
  signed __int32 v11; // eax
  unsigned int *v12; // rax
  unsigned int i; // ecx
  __int64 v14; // rax
  _QWORD *v15; // rax
  unsigned int *v16; // rax
  unsigned int j; // ecx
  __int64 v18; // rax
  _QWORD *v19; // rax
  unsigned int v21; // [rsp+68h] [rbp+38h]

  v21 = a2;
  *a4 = 0;
  if ( a2 )
  {
    v5 = 0LL;
    v6 = a2;
    do
    {
      *(_QWORD *)(v5 + a3) = 0LL;
      *(_QWORD *)(v5 + a3 + 8) = 0LL;
      v5 += 16LL;
      --v6;
    }
    while ( v6 );
  }
  v7 = *(_DWORD *)(a1 + 88);
  v8 = *(_QWORD *)(a1 + 72);
  if ( v7 >= 0 )
  {
    v9 = *(_DWORD *)(a1 + 80);
    while ( 1 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, unsigned int *))(**(_QWORD **)(a1 + 72) + 128LL))(
             *(_QWORD *)(a1 + 72),
             v9,
             a2,
             a3,
             a4);
      if ( v7 < 0 )
        break;
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 80), v9 + *a4, v9);
      v10 = v9 == v11;
      v9 = v11;
      if ( v10 )
        break;
      v12 = a4;
      for ( i = 0; i < *a4; v12 = a4 )
      {
        v14 = 16LL * i++;
        v15 = (_QWORD *)(a3 + v14);
        *v15 = 0LL;
        v15[1] = 0LL;
      }
      *v12 = 0;
      a2 = v21;
    }
    if ( *(_DWORD *)(a1 + 92) != *(_DWORD *)(v8 + 128) )
    {
      *(_DWORD *)(a1 + 88) = -2147483636;
      if ( v7 < 0 )
      {
        RoTransformError((unsigned int)v7, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v16 = a4;
        for ( j = 0; j < *a4; v16 = a4 )
        {
          v18 = 16LL * j++;
          v19 = (_QWORD *)(a3 + v18);
          *v19 = 0LL;
          v19[1] = 0LL;
        }
        *v16 = 0;
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
