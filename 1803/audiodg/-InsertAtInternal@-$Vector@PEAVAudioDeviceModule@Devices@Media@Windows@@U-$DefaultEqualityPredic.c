/*
 * XREFs of ?InsertAtInternal@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIAudioDeviceModule@Devices@Media@5@_N@Z @ 0x14004C698
 * Callers:
 *     ?Append@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIAudioDeviceModule@Devices@Media@5@@Z @ 0x140049AD0 (-Append@-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVAu.c)
 *     ?InsertAt@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIAudioDeviceModule@Devices@Media@5@@Z @ 0x14004C690 (-InsertAt@-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAV.c)
 * Callees:
 *     ??$?0PEAUIBuffer@Streams@Storage@Windows@@@?$AutoValue@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@@XWinRT@@QEAA@AEBQEAUIBuffer@Streams@Storage@Windows@@PEAJ@Z @ 0x140047308 (--$-0PEAUIBuffer@Streams@Storage@Windows@@@-$AutoValue@PEAUIBuffer@Streams@Storage@Windows@@U-$D.c)
 *     ??$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x1400477A0 (--$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x140048760 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x14004D8EC (-RaiseEvent@-$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collectio.c)
 *     ?ResizeStorage@?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x14004E20C (-ResizeStorage@-$Vector@PEAUIBuffer@Streams@Storage@Windows@@U-$DefaultEqualityPredicate@PEAUIBu.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x14004ED58 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4)
{
  int v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // r9d
  int v10; // edx
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  RTL_SRWLOCK *v14; // rcx
  unsigned int v16; // [rsp+20h] [rbp-30h]
  char v17[4]; // [rsp+30h] [rbp-20h] BYREF
  int v18; // [rsp+34h] [rbp-1Ch] BYREF
  __int64 v19; // [rsp+38h] [rbp-18h] BYREF
  RTL_SRWLOCK *v20; // [rsp+40h] [rbp-10h] BYREF
  __int64 v21; // [rsp+80h] [rbp+30h] BYREF

  v21 = a3;
  v18 = 0;
  XWinRT::AutoValue<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>>::AutoValue<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>>(
    &v19,
    &v21,
    &v18);
  v7 = v18;
  if ( v18 >= 0 )
  {
    XWinRT::SerializingLockPolicy::Write(&v20, a1 + 72, &v18);
    v7 = v18;
    if ( v18 >= 0 )
    {
      v8 = *(_DWORD *)(a1 + 40);
      if ( a4 )
        a2 = *(_DWORD *)(a1 + 40);
      if ( a2 <= v8 )
      {
        if ( v8 >= 0x7FFFFFFF )
          v7 = -2147024882;
        if ( v7 >= 0 )
        {
          XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)v17);
          v7 = 0;
          v9 = *(_DWORD *)(a1 + 44);
          if ( *(_DWORD *)(a1 + 40) + 1 <= v9 )
            goto LABEL_14;
          v10 = 1;
          if ( v9 + 1 <= (v9 >> 1) + v9 )
            v10 = v9 >> 1;
          v7 = Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>::ResizeStorage(
                 a1,
                 v9 + v10);
          if ( v7 >= 0 )
          {
LABEL_14:
            v11 = *(_DWORD *)(a1 + 40);
            if ( a2 < v11
              && memmove_s(
                   (void *const)(*(_QWORD *)(a1 + 56) + 8LL * (a2 + 1)),
                   8LL * (*(_DWORD *)(a1 + 44) - a2 - 1),
                   (const void *const)(*(_QWORD *)(a1 + 56) + 8LL * a2),
                   8LL * (v11 - a2)) )
            {
              v7 = -2147418113;
              RoOriginateError(2147549183LL, 0LL);
            }
            if ( v7 >= 0 )
            {
              v12 = v19;
              v13 = *(_QWORD *)(a1 + 56);
              v19 = 0LL;
              *(_QWORD *)(v13 + 8LL * a2) = v12;
              ++*(_DWORD *)(a1 + 40);
              ++*(_DWORD *)(a1 + 88);
            }
          }
        }
      }
      else
      {
        v7 = -2147483637;
        RoOriginateError(2147483659LL, 0LL);
      }
    }
    if ( v20 )
    {
      v14 = v20 + 1;
      if ( LODWORD(v20->Ptr) == 1 )
        LODWORD(v14->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v14);
    }
    if ( v7 >= 0 )
    {
      v16 = a2;
      v7 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Storage::Streams::IBuffer *,0,0,0>::RaiseEvent(
             (unsigned __int8)v17[0],
             *(unsigned __int8 *)(a1 + 92),
             a1,
             1LL,
             v16);
    }
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Storage::Streams::IBuffer>(&v19);
  return (unsigned int)v7;
}
