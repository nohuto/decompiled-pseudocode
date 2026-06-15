/*
 * XREFs of ?GetMany@?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIBuffer@Streams@Storage@5@PEAI@Z @ 0x14004D330
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D298 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x14001D9AC (memset.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001E360 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$Construct@UIAudioDeviceModule@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUIAudioDeviceModule@Devices@Media@Windows@@PEAU2345@@Z @ 0x1400497D4 (--$Construct@UIAudioDeviceModule@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAP.c)
 *     ??$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x140049900 (--$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x14004F1F0 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 *a4,
        _DWORD *a5)
{
  size_t v5; // rsi
  __int64 v6; // rbx
  __int64 *v7; // r14
  unsigned int v10; // r15d
  unsigned int v11; // r12d
  int v12; // edi
  __int64 v13; // rax
  unsigned int i; // ecx
  _QWORD v16[9]; // [rsp+20h] [rbp-48h] BYREF
  void *Block; // [rsp+70h] [rbp+8h]
  int v18; // [rsp+80h] [rbp+18h] BYREF

  v5 = a3;
  v6 = 0LL;
  v7 = a4;
  v18 = 0;
  v10 = 0;
  v11 = 0;
  if ( a3 )
    memset(a4, 0, 8LL * a3);
  Block = 0LL;
  *a5 = 0;
  XWinRT::SerializingLockPolicy::Read(v16, a1 + 72, &v18);
  if ( !*(_DWORD *)(a1 + 48) || (Block = operator new[](v5, (const struct std::nothrow_t *)&std::nothrow)) != 0LL )
  {
    v12 = v18;
  }
  else
  {
    v12 = -2147024882;
    RoOriginateError(2147942414LL, 0LL);
  }
  if ( v12 >= 0 )
  {
    v11 = *(_DWORD *)(a1 + 40);
    if ( a2 > v11 )
    {
      v12 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v12 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        if ( (_DWORD)v5 )
        {
          do
          {
            if ( v10 + a2 >= v11 )
              break;
            v12 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Media::Devices::IAudioDeviceModule>(
                    &v7[v10],
                    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * (v10 + a2)));
            if ( v12 < 0 )
              break;
            ++v10;
          }
          while ( v10 < (unsigned int)v5 );
        }
      }
      else if ( (_DWORD)v5 )
      {
        do
        {
          v13 = (unsigned int)v6 + a2;
          if ( (unsigned int)v13 >= v11 )
            break;
          v12 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Media::Devices::IAudioDeviceModule>(
                  &v7[v6],
                  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v13));
          if ( v12 < 0 )
            break;
          v6 = (unsigned int)(v6 + 1);
        }
        while ( (unsigned int)v6 < (unsigned int)v5 );
      }
    }
  }
  if ( v16[0] )
  {
    if ( *(_DWORD *)v16[0] == 1 )
      --*(_DWORD *)(v16[0] + 8LL);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v16[0] + 8LL));
  }
  if ( v12 < 0 )
  {
    if ( (_DWORD)v6 )
    {
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Storage::Streams::IBuffer>(v7++);
        --v6;
      }
      while ( v6 );
    }
  }
  else
  {
    if ( v10 )
    {
      for ( i = 0; i < (unsigned int)v5; ++i )
      {
        if ( i + a2 >= v11 )
          break;
        v12 = 0;
        LODWORD(v6) = v6 + 1;
      }
    }
    *a5 = v6;
  }
  operator delete(Block);
  return (unsigned int)v12;
}
