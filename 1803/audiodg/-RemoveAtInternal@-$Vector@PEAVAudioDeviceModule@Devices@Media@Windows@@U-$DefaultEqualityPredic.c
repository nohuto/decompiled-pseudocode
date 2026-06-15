/*
 * XREFs of ?RemoveAtInternal@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x14004DF3C
 * Callers:
 *     ?RemoveAt@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x14004DF20 (-RemoveAt@-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAV.c)
 *     ?RemoveAtEnd@?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x14004DF30 (-RemoveAtEnd@-$Vector@PEAUIBuffer@Streams@Storage@Windows@@U-$DefaultEqualityPredicate@PEAUIBuff.c)
 * Callees:
 *     ??$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x1400477A0 (--$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x140048760 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x14004D8EC (-RaiseEvent@-$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collectio.c)
 *     ?ResizeStorage@?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x14004E20C (-ResizeStorage@-$Vector@PEAUIBuffer@Streams@Storage@Windows@@U-$DefaultEqualityPredicate@PEAUIBu.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x14004ED58 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  int v6; // edi
  unsigned int v7; // eax
  __int64 v8; // rbx
  int v9; // ecx
  unsigned int v10; // r9d
  unsigned int v11; // r8d
  RTL_SRWLOCK *v12; // rcx
  RTL_SRWLOCK *v14; // [rsp+30h] [rbp-28h] BYREF
  int v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0;
  v16 = 0LL;
  XWinRT::SerializingLockPolicy::Write(&v14, a1 + 72, &v15);
  v6 = v15;
  if ( v15 >= 0 )
  {
    v7 = *(_DWORD *)(a1 + 40);
    if ( a3 )
      a2 = v7 - 1;
    if ( a2 >= v7 )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v15);
      v6 = 0;
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * a2);
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Storage::Streams::IBuffer>(&v16);
      v9 = *(_DWORD *)(a1 + 40);
      v16 = v8;
      if ( a2 < v9 - 1
        && memmove_s(
             (void *const)(*(_QWORD *)(a1 + 56) + 8LL * a2),
             8LL * (v9 - a2 - 1),
             (const void *const)(*(_QWORD *)(a1 + 56) + 8LL * (a2 + 1)),
             8LL * (v9 - a2 - 1)) )
      {
        v6 = -2147418113;
        RoOriginateError(2147549183LL, 0LL);
      }
      else
      {
        v10 = *(_DWORD *)(a1 + 44);
        ++*(_DWORD *)(a1 + 88);
        if ( --*(_DWORD *)(a1 + 40) < v10 / 3 )
        {
          v11 = 1;
          if ( v10 - 1 >= v10 - v10 / 3 )
            v11 = v10 / 3;
          v6 = Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>::ResizeStorage(
                 a1,
                 v10 - v11);
        }
      }
    }
  }
  if ( v14 )
  {
    v12 = v14 + 1;
    if ( LODWORD(v14->Ptr) == 1 )
      LODWORD(v12->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v12);
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Storage::Streams::IBuffer>(&v16);
  if ( v6 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Storage::Streams::IBuffer *,0,0,0>::RaiseEvent();
  return (unsigned int)v6;
}
