/*
 * XREFs of ?ResolveDemand@?$StorageTempTraits@V?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@XWinRT@@PEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@V123@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@8@@XWinRT@@SAJPEAV?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@2@PEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18000C5D8
 * Callers:
 *     ?GetAt@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@@Z @ 0x18000B0A0 (-GetAt@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEqualityPre.c)
 *     ?GetMany@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@PEAI@Z @ 0x18000B850 (-GetMany@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEqualityP.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042948 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XWinRT::StorageTempTraits<XWinRT::detail::GitStorageType<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry *,XWinRT::detail::GitStorageType<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>::ResolveDemand(
        __int64 a1,
        volatile signed __int32 **a2)
{
  int v3; // esi
  volatile signed __int32 *v4; // r10
  volatile signed __int32 *v5; // rdi

  *a2 = 0LL;
  v3 = 0;
  v4 = *(volatile signed __int32 **)a1;
  if ( *(_BYTE *)(a1 + 8) )
  {
    *a2 = 0LL;
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, volatile signed __int32 **))(*(_QWORD *)qword_18005DDB8
                                                                                        + 40LL))(
           qword_18005DDB8,
           *((unsigned int *)v4 + 1),
           &GUID_735924d3_811f_4494_b69c_c641a0c61543,
           a2);
    if ( v3 >= 0 )
    {
      v5 = *(volatile signed __int32 **)a1;
      if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 0xFFFFFFFF) == 1 && v5 )
      {
        if ( *((_DWORD *)v5 + 1) )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005DDB8 + 32LL))(qword_18005DDB8);
        operator delete((void *)v5);
      }
      *(_BYTE *)(a1 + 8) = 0;
      *(_QWORD *)a1 = 0LL;
    }
  }
  else
  {
    *a2 = v4;
    *(_QWORD *)a1 = 0LL;
  }
  return (unsigned int)v3;
}
