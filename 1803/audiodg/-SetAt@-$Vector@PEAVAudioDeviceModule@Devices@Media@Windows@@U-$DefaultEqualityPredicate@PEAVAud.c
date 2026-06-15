/*
 * XREFs of ?SetAt@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIAudioDeviceModule@Devices@Media@5@@Z @ 0x14004E750
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0PEAUIBuffer@Streams@Storage@Windows@@@?$AutoValue@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@@XWinRT@@QEAA@AEBQEAUIBuffer@Streams@Storage@Windows@@PEAJ@Z @ 0x140047308 (--$-0PEAUIBuffer@Streams@Storage@Windows@@@-$AutoValue@PEAUIBuffer@Streams@Storage@Windows@@U-$D.c)
 *     ??$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x1400477A0 (--$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x140048760 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x14004D8EC (-RaiseEvent@-$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collectio.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x14004ED58 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v4; // r14
  int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  RTL_SRWLOCK *v9; // rcx
  __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+38h] [rbp-18h] BYREF
  RTL_SRWLOCK *v13; // [rsp+40h] [rbp-10h] BYREF
  __int64 v14; // [rsp+80h] [rbp+30h] BYREF
  __int64 Destination; // [rsp+88h] [rbp+38h] BYREF

  v14 = a3;
  LODWORD(Destination) = 0;
  v12 = 0LL;
  v4 = a2;
  XWinRT::AutoValue<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>>::AutoValue<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>>(
    &v11,
    &v14,
    (int *)&Destination);
  v5 = Destination;
  if ( (int)Destination >= 0 )
  {
    XWinRT::SerializingLockPolicy::Write(&v13, a1 + 72, &Destination);
    v5 = Destination;
    if ( (int)Destination >= 0 )
    {
      if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 40) )
      {
        v5 = -2147483637;
        RoOriginateError(2147483659LL, 0LL);
      }
      if ( v5 >= 0 )
      {
        XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&Destination);
        v5 = 0;
        if ( memmove_s(&Destination, 8uLL, (const void *const)(*(_QWORD *)(a1 + 56) + 8 * v4), 8uLL) )
        {
          v5 = -2147418113;
          RoOriginateError(2147549183LL, 0LL);
        }
        else
        {
          v6 = *(_QWORD *)(a1 + 56);
          v7 = v11;
          v11 = 0LL;
          *(_QWORD *)(v6 + 8 * v4) = v7;
          ++*(_DWORD *)(a1 + 88);
          v8 = Destination;
          XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Storage::Streams::IBuffer>(&v12);
          v12 = v8;
        }
      }
    }
    if ( v13 )
    {
      v9 = v13 + 1;
      if ( LODWORD(v13->Ptr) == 1 )
        LODWORD(v9->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v9);
    }
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Storage::Streams::IBuffer>(&v11);
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Storage::Streams::IBuffer>(&v12);
  if ( v5 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Storage::Streams::IBuffer *,0,0,0>::RaiseEvent();
  return (unsigned int)v5;
}
