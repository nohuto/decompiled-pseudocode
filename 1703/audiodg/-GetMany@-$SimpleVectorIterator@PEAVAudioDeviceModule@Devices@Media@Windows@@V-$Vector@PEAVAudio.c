/*
 * XREFs of ?GetMany@?$SimpleVectorIterator@PEAVAudioDeviceModule@Devices@Media@Windows@@V?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAudioDeviceModule@Devices@Media@5@PEAI@Z @ 0x14004BA60
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a9ede7db147a0808aca1dff73a0535ec_::operator() @ 0x140049AB4 (_lambda_a9ede7db147a0808aca1dff73a0535ec_--operator().c)
 *     _lambda_6e535b2589e16be8e59d14ca837e6d0f_::operator() @ 0x140049B88 (_lambda_6e535b2589e16be8e59d14ca837e6d0f_--operator().c)
 */

__int64 Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,XWinRT::IntVersionTag,0>::GetMany(
        __int64 a1,
        unsigned int a2,
        ...)
{
  __int64 i; // rcx
  int v4; // ebx
  __int64 v5; // r15
  bool v6; // zf
  volatile signed __int32 *v7; // rsi
  unsigned __int32 v8; // r14d
  signed __int32 v9; // eax
  __int64 v11; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v12[2]; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v13[6]; // [rsp+38h] [rbp-30h] BYREF
  signed __int32 v14; // [rsp+A0h] [rbp+38h] BYREF
  unsigned int v15; // [rsp+A8h] [rbp+40h] BYREF
  __int64 v16; // [rsp+B0h] [rbp+48h] BYREF
  va_list va; // [rsp+B0h] [rbp+48h]
  _DWORD *v18; // [rsp+B8h] [rbp+50h] BYREF
  va_list va1; // [rsp+B8h] [rbp+50h]
  va_list va2; // [rsp+C0h] [rbp+58h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v16 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v18 = va_arg(va2, _DWORD *);
  v15 = a2;
  *v18 = 0;
  for ( i = 0LL; (unsigned int)i < v15; i = (unsigned int)(i + 1) )
    *(_QWORD *)(v16 + 8 * i) = 0LL;
  v4 = *(_DWORD *)(a1 + 48);
  v5 = *(_QWORD *)(a1 + 32);
  va_copy((va_list)v12, va1);
  va_copy((va_list)&v12[1], va);
  if ( v4 >= 0 )
  {
    v6 = *(_BYTE *)(a1 + 56) == 0;
    v13[0] = &v11;
    v7 = (volatile signed __int32 *)(a1 + 40);
    v11 = a1;
    v13[1] = &v15;
    va_copy((va_list)&v13[2], va);
    va_copy((va_list)&v13[3], va1);
    if ( v6 )
    {
      v8 = *v7;
      while ( 1 )
      {
        v4 = lambda_6e535b2589e16be8e59d14ca837e6d0f_::operator()((__int64)v13, v8, &v14);
        if ( v4 < 0 )
          break;
        v9 = _InterlockedCompareExchange(v7, v14, v8);
        v6 = v8 == v9;
        v8 = v9;
        if ( v6 )
          break;
        lambda_a9ede7db147a0808aca1dff73a0535ec_::operator()((__int64)v12);
      }
    }
    else
    {
      v4 = lambda_6e535b2589e16be8e59d14ca837e6d0f_::operator()((__int64)v13, *(unsigned int *)v7, (_DWORD *)(a1 + 40));
    }
    if ( *(_DWORD *)(a1 + 52) != *(_DWORD *)(v5 + 88) )
    {
      *(_DWORD *)(a1 + 48) = -2147483636;
      if ( v4 < 0 )
      {
        RoTransformError((unsigned int)v4, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        lambda_a9ede7db147a0808aca1dff73a0535ec_::operator()((__int64)v12);
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
