/*
 * XREFs of ?get_Size@?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJPEAI@Z @ 0x1400509E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x14004F1F0 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>::get_Size(
        __int64 a1,
        _DWORD *a2)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0;
  v6 = 0;
  XWinRT::SerializingLockPolicy::Read((__int64)v5, (RTL_SRWLOCK *)(a1 + 72), &v6);
  if ( v6 >= 0 )
    *a2 = *(_DWORD *)(a1 + 40);
  if ( v5[0] )
  {
    if ( *(_DWORD *)v5[0] == 1 )
      --*(_DWORD *)(v5[0] + 8LL);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v5[0] + 8LL));
  }
  return (unsigned int)v6;
}
