/*
 * XREFs of ?GetMany@?$SimpleVectorView@PEAUHSTRING__@@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUHSTRING__@@PEAI@Z @ 0x180013780
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x18004207E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<HSTRING__ *,Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,XWinRT::IntVersionTag,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        _DWORD *a5)
{
  int v9; // ebx
  _DWORD *v10; // r15
  int v11; // eax
  __int64 i; // rsi

  if ( a3 )
    memset(a4, 0, 8LL * a3);
  *a5 = 0;
  v9 = *(_DWORD *)(a1 + 88);
  v10 = *(_DWORD **)(a1 + 80);
  if ( v9 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD, _QWORD, void *, _DWORD *))(*(_QWORD *)v10 + 128LL))(
            v10,
            a2,
            a3,
            a4,
            a5);
    v9 = v11;
    if ( *(_DWORD *)(a1 + 92) != v10[32] )
    {
      *(_DWORD *)(a1 + 88) = -2147483636;
      if ( v11 < 0 )
      {
        RoTransformError((unsigned int)v11, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        for ( i = 0LL; (unsigned int)i < *a5; i = (unsigned int)(i + 1) )
        {
          WindowsDeleteString(*((HSTRING *)a4 + i));
          *((_QWORD *)a4 + i) = 0LL;
          *((_QWORD *)a4 + i) = 0LL;
        }
        *a5 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v9, 0LL);
  }
  return (unsigned int)v9;
}
