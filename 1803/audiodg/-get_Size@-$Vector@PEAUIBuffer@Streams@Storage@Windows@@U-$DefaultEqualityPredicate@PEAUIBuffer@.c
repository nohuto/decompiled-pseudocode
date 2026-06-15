/*
 * XREFs of ?get_Size@?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJPEAI@Z @ 0x14004F180
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x14004D904 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>::get_Size(
        __int64 a1,
        _DWORD *a2)
{
  RTL_SRWLOCK *v4; // rcx
  RTL_SRWLOCK *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0;
  v7 = 0;
  XWinRT::SerializingLockPolicy::Read((__int64)&v6, (RTL_SRWLOCK *)(a1 + 72), &v7);
  if ( v7 >= 0 )
    *a2 = *(_DWORD *)(a1 + 40);
  if ( v6 )
  {
    v4 = v6 + 1;
    if ( LODWORD(v6->Ptr) == 1 )
      --LODWORD(v4->Ptr);
    else
      ReleaseSRWLockShared(v4);
  }
  return (unsigned int)v7;
}
