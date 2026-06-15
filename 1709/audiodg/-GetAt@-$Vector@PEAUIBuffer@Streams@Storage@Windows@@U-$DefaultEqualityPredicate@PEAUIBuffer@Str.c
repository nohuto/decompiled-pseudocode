/*
 * XREFs of ?GetAt@?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIBuffer@Streams@Storage@5@@Z @ 0x14004CB00
 * Callers:
 *     <none>
 * Callees:
 *     ??$Construct@UIAudioDeviceModule@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUIAudioDeviceModule@Devices@Media@Windows@@PEAU2345@@Z @ 0x1400497D4 (--$Construct@UIAudioDeviceModule@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAP.c)
 *     ??$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x140049900 (--$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x14004F1F0 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>::GetAt(
        __int64 a1,
        unsigned int a2,
        __int64 *a3)
{
  __int64 v3; // rsi
  int v6; // ebx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+50h] [rbp+8h] BYREF

  v3 = a2;
  *a3 = 0LL;
  XWinRT::SerializingLockPolicy::Read(v8, a1 + 72, &v9);
  v6 = v9;
  if ( v9 >= 0 )
  {
    if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 40) )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Storage::Streams::IBuffer>(a3);
      v6 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Media::Devices::IAudioDeviceModule>(
             a3,
             *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v3));
    }
  }
  if ( v8[0] )
  {
    if ( *(_DWORD *)v8[0] == 1 )
      --*(_DWORD *)(v8[0] + 8LL);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v8[0] + 8LL));
  }
  if ( v6 >= 0 )
    return 0;
  return (unsigned int)v6;
}
