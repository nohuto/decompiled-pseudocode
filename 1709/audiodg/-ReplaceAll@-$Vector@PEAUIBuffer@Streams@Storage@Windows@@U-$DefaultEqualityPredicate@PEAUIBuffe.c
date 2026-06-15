/*
 * XREFs of ?ReplaceAll@?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIBuffer@Streams@Storage@5@@Z @ 0x14004F930
 * Callers:
 *     <none>
 * Callees:
 *     ??$Construct@UIAudioDeviceModule@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUIAudioDeviceModule@Devices@Media@Windows@@PEAU2345@@Z @ 0x1400497D4 (--$Construct@UIAudioDeviceModule@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAP.c)
 *     ??$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x140049900 (--$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x14004A86C (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x14004F1D8 (-RaiseEvent@-$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collectio.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1400505D8 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        __int64 *a3)
{
  __int64 *v3; // rsi
  unsigned int v4; // r14d
  int v8; // ebx
  __int64 v9; // rdi
  unsigned int v10; // eax
  __int64 *v11; // rax
  __int64 *v12; // r14
  __int64 v14[5]; // [rsp+30h] [rbp-28h] BYREF
  int v15; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0;
  v3 = 0LL;
  v4 = 0;
  if ( a2 )
  {
    v3 = (__int64 *)malloc(8LL * a2);
    if ( !v3 )
      return (unsigned int)-2147024882;
    v4 = a2;
  }
  v9 = 0LL;
  if ( v4 )
  {
    while ( 1 )
    {
      v15 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Media::Devices::IAudioDeviceModule>(&v3[v9], *a3);
      v8 = v15;
      if ( v15 < 0 )
        break;
      v9 = (unsigned int)(v9 + 1);
      ++a3;
      if ( (unsigned int)v9 >= v4 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    XWinRT::SerializingLockPolicy::Write(v14, a1 + 72, &v15);
    v8 = v15;
    if ( v15 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v15);
      v10 = *(_DWORD *)(a1 + 40);
      v8 = 0;
      *(_DWORD *)(a1 + 40) = v9;
      v9 = v10;
      *(_DWORD *)(a1 + 44) = v4;
      *(_DWORD *)(a1 + 48) = 0;
      v11 = *(__int64 **)(a1 + 56);
      *(_QWORD *)(a1 + 56) = v3;
      v3 = v11;
      ++*(_DWORD *)(a1 + 88);
    }
    if ( v14[0] )
    {
      if ( *(_DWORD *)v14[0] == 1 )
        *(_DWORD *)(v14[0] + 8) += 0x10000000;
      else
        ReleaseSRWLockExclusive((PSRWLOCK)(v14[0] + 8));
    }
  }
  if ( v3 )
  {
    if ( (_DWORD)v9 )
    {
      v12 = v3;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Storage::Streams::IBuffer>(v12++);
        --v9;
      }
      while ( v9 );
    }
    free(v3);
  }
  if ( v8 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Storage::Streams::IBuffer *,0,0,0>::RaiseEvent();
  return (unsigned int)v8;
}
