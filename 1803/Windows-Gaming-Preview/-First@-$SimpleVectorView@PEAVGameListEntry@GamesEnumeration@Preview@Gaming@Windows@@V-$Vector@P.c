/*
 * XREFs of ?First@?$SimpleVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@V?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@345@@Z @ 0x18000D4B0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_4a83d5fcae95bd4a2d61881b7fa1db90_::operator() @ 0x18000D55C (_lambda_4a83d5fcae95bd4a2d61881b7fa1db90_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,XWinRT::IntVersionTag,1>::First(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rdi
  int v3; // ebx
  __int64 v4; // rsi
  int v5; // eax
  __int64 v6; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  *a2 = 0LL;
  v2 = a1 - 16;
  v3 = *(_DWORD *)(a1 - 16 + 80);
  v4 = *(_QWORD *)(a1 - 16 + 72);
  v8[0] = a1 - 16;
  v8[1] = &v9;
  if ( v3 >= 0 )
  {
    v5 = lambda_4a83d5fcae95bd4a2d61881b7fa1db90_::operator()(v8);
    v3 = v5;
    if ( *(_DWORD *)(v2 + 84) != *(_DWORD *)(v4 + 120) )
    {
      *(_DWORD *)(v2 + 80) = -2147483636;
      if ( v5 < 0 )
      {
        RoTransformError((unsigned int)v5, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v6 = *v9;
        *v9 = 0LL;
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v3, 0LL);
  }
  return (unsigned int)v3;
}
