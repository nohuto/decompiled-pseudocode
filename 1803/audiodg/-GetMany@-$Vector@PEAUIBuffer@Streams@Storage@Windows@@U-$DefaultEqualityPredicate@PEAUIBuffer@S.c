/*
 * XREFs of ?GetMany@?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIBuffer@Streams@Storage@5@PEAI@Z @ 0x14004B4E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D418 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$Construct@UIAudioDeviceModule@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUIAudioDeviceModule@Devices@Media@Windows@@PEAU2345@@Z @ 0x140047674 (--$Construct@UIAudioDeviceModule@Devices@Media@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAP.c)
 *     ??$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x1400477A0 (--$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x14004D904 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 *a4,
        _DWORD *a5)
{
  __int64 v5; // rdi
  __int64 v7; // r14
  unsigned int v8; // r12d
  size_t v9; // rbx
  __int64 *v10; // r15
  int v13; // ebx
  __int64 v14; // rax
  RTL_SRWLOCK *v15; // rcx
  unsigned int i; // ecx
  RTL_SRWLOCK *v18; // [rsp+20h] [rbp-48h] BYREF
  void *Block; // [rsp+70h] [rbp+8h]
  int v20; // [rsp+80h] [rbp+18h] BYREF

  v5 = 0LL;
  v20 = 0;
  v7 = 0LL;
  v8 = 0;
  v9 = a3;
  v10 = a4;
  if ( a3 )
    memset_0(a4, 0, 8LL * a3);
  Block = 0LL;
  *a5 = 0;
  XWinRT::SerializingLockPolicy::Read(&v18, a1 + 72, &v20);
  if ( !*(_DWORD *)(a1 + 48) || (Block = operator new[](v9, (const struct std::nothrow_t *)&std::nothrow)) != 0LL )
  {
    v13 = v20;
  }
  else
  {
    v13 = -2147024882;
    RoOriginateError(2147942414LL, 0LL);
  }
  if ( v13 >= 0 )
  {
    v8 = *(_DWORD *)(a1 + 40);
    if ( a2 > v8 )
    {
      v13 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v13 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        if ( a3 )
        {
          do
          {
            if ( (unsigned int)v7 + a2 >= v8 )
              break;
            v13 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Media::Devices::IAudioDeviceModule>(
                    &v10[v7],
                    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * ((unsigned int)v7 + a2)));
            if ( v13 < 0 )
              break;
            v7 = (unsigned int)(v7 + 1);
          }
          while ( (unsigned int)v7 < a3 );
        }
      }
      else if ( a3 )
      {
        do
        {
          v14 = (unsigned int)v5 + a2;
          if ( (unsigned int)v14 >= v8 )
            break;
          v13 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Media::Devices::IAudioDeviceModule>(
                  &v10[v5],
                  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v14));
          if ( v13 < 0 )
            break;
          v5 = (unsigned int)(v5 + 1);
        }
        while ( (unsigned int)v5 < a3 );
      }
    }
  }
  if ( v18 )
  {
    v15 = v18 + 1;
    if ( LODWORD(v18->Ptr) == 1 )
      --LODWORD(v15->Ptr);
    else
      ReleaseSRWLockShared(v15);
  }
  if ( v13 < 0 )
  {
    if ( (_DWORD)v5 )
    {
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Storage::Streams::IBuffer>(v10++);
        --v5;
      }
      while ( v5 );
    }
  }
  else
  {
    if ( (_DWORD)v7 )
    {
      for ( i = 0; i < a3; ++i )
      {
        if ( i + a2 >= v8 )
          break;
        v13 = 0;
        LODWORD(v5) = v5 + 1;
      }
    }
    *a5 = v5;
  }
  operator delete(Block);
  return (unsigned int)v13;
}
