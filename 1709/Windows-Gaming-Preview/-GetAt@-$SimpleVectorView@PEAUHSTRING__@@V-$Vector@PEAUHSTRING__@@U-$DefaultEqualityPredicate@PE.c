/*
 * XREFs of ?GetAt@?$SimpleVectorView@PEAUHSTRING__@@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUHSTRING__@@@Z @ 0x1800136D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<HSTRING__ *,Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,XWinRT::IntVersionTag,1>::GetAt(
        __int64 a1,
        __int64 a2,
        HSTRING *a3)
{
  int v4; // ebx
  _DWORD *v6; // r14
  int v7; // eax

  *a3 = 0LL;
  v4 = *(_DWORD *)(a1 + 88);
  v6 = *(_DWORD **)(a1 + 80);
  if ( v4 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 48LL))(*(_QWORD *)(a1 + 80));
    v4 = v7;
    if ( *(_DWORD *)(a1 + 92) != v6[32] )
    {
      *(_DWORD *)(a1 + 88) = -2147483636;
      if ( v7 < 0 )
      {
        RoTransformError((unsigned int)v7, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        WindowsDeleteString(*a3);
        *a3 = 0LL;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v4, 0LL);
  }
  return (unsigned int)v4;
}
