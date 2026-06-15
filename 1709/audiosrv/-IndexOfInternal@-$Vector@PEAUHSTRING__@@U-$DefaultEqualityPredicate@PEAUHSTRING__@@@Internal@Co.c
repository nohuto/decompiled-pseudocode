/*
 * XREFs of ?IndexOfInternal@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJPEAPEAUHSTRING__@@IPEAU6@PEAIPEAE@Z @ 0x1800E3BE8
 * Callers:
 *     ?IndexOf@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAIPEAE@Z @ 0x1800E3A90 (-IndexOf@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collection.c)
 * Callees:
 *     memcmp_0 @ 0x180036B89 (memcmp_0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::IndexOfInternal(
        __int64 a1,
        HSTRING *a2,
        unsigned int a3,
        HSTRING a4,
        unsigned int *a5,
        _BYTE *a6)
{
  unsigned int v6; // edi
  HSTRING v10; // rbx
  PCWSTR StringRawBuffer; // r15
  PCWSTR v12; // rax
  __int64 length; // [rsp+50h] [rbp+8h] BYREF
  UINT32 v15; // [rsp+60h] [rbp+18h] BYREF

  length = a1;
  v6 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      v10 = *a2;
      StringRawBuffer = WindowsGetStringRawBuffer(a4, (UINT32 *)&length);
      v12 = WindowsGetStringRawBuffer(v10, &v15);
      if ( (_DWORD)length == v15 && !memcmp_0(StringRawBuffer, v12, 2LL * v15) )
        break;
      ++v6;
      ++a2;
      if ( v6 >= a3 )
        return 0LL;
    }
    *a6 = 1;
    *a5 = v6;
  }
  return 0LL;
}
