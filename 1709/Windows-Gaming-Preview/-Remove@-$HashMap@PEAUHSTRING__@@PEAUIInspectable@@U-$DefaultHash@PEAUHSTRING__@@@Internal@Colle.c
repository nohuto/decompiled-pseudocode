/*
 * XREFs of ?Remove@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x18002C3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000C55C (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000C62C (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIInspectable@@@detail@1@@Z @ 0x18000D74C (--$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$GitStorageType@UIInspectable.c)
 *     ?Lookup@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@@4@@XWinRT@@QEAAJAEBQEAUHSTRING__@@PEAPEAVCPair@12@@Z @ 0x18002E8D4 (-Lookup@-$XHashMap@PEAUHSTRING__@@V-$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@-$.c)
 *     ?FreeNode@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@@4@@XWinRT@@AEAAJPEAVCNode@12@@Z @ 0x18003352C (-FreeNode@-$XHashMap@PEAUHSTRING__@@V-$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041970 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Remove(
        __int64 a1,
        __int64 a2)
{
  int v3; // esi
  HSTRING v4; // rbx
  RTL_SRWLOCK *v5; // r14
  bool v6; // zf
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  void *v9; // rcx
  HSTRING *v10; // rsi
  __int128 v11; // xmm6
  unsigned int v12; // edx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 i; // rax
  __int128 v18; // [rsp+40h] [rbp-28h] BYREF
  char v19; // [rsp+A0h] [rbp+38h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+40h] BYREF
  HSTRING *v21; // [rsp+B8h] [rbp+50h] BYREF

  v20 = a2;
  if ( !*(_BYTE *)(a1 + 192) )
  {
    v3 = -2147418113;
    RoOriginateError(2147549183LL, 0LL);
    return (unsigned int)v3;
  }
  v4 = 0LL;
  v5 = (RTL_SRWLOCK *)(a1 + 176);
  *(_QWORD *)&v18 = 0LL;
  v6 = *(_DWORD *)(a1 + 168) == 1;
  BYTE8(v18) = 0;
  if ( v6 )
  {
    if ( !LODWORD(v5->Ptr) )
      LODWORD(v5->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 176));
  }
  XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v19);
  v21 = 0LL;
  v3 = XWinRT::XHashMap<HSTRING__ *,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::Lookup(
         a1 + 80,
         &v20,
         &v21);
  if ( v3 >= 0 )
  {
    if ( !v21 )
    {
      v3 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v3 >= 0 )
    {
      if ( **(int **)(a1 + 184) > 1 )
      {
        v7 = operator new(4uLL, (const struct std::nothrow_t *)&std::nothrow);
        v8 = v7;
        if ( v7 )
          *v7 = 1;
        else
          v8 = 0LL;
        if ( !v8 )
        {
          v4 = 0LL;
          v3 = -2147024882;
          goto LABEL_27;
        }
        v9 = *(void **)(a1 + 184);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9, 0xFFFFFFFF) == 1 )
          operator delete(v9, 4uLL);
        *(_QWORD *)(a1 + 184) = v8;
      }
      v10 = v21;
      v4 = *v21;
      WindowsDeleteString(0LL);
      v11 = *(_OWORD *)(v10 + 1);
      XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>((__int64)&v18);
      v12 = *((_DWORD *)v10 + 8) % *(_DWORD *)(a1 + 104);
      v18 = v11;
      v13 = v12;
      v14 = *(_QWORD *)(a1 + 88);
      v15 = *(_QWORD *)(v14 + 8 * v13);
      if ( v10 == (HSTRING *)v15 )
      {
        *(_QWORD *)(v14 + 8 * v13) = v10[3];
      }
      else
      {
        for ( i = *(_QWORD *)(v15 + 24); (HSTRING *)i != v10; i = *(_QWORD *)(i + 24) )
          v15 = i;
        *(_QWORD *)(v15 + 24) = v10[3];
      }
      XWinRT::XHashMap<HSTRING__ *,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::FreeNode(
        a1 + 80,
        v10);
      v3 = 0;
    }
  }
LABEL_27:
  if ( *(_DWORD *)(a1 + 168) == 1 )
    LODWORD(v5->Ptr) += 0x10000000;
  else
    ReleaseSRWLockExclusive(v5);
  XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>((__int64)&v18);
  WindowsDeleteString(v4);
  if ( v3 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
  return (unsigned int)v3;
}
