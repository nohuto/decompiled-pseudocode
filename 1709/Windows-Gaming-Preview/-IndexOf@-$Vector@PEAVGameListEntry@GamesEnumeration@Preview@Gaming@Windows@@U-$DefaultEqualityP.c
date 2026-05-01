/*
 * XREFs of ?IndexOf@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@PEAIPEAE@Z @ 0x18000B010
 * Callers:
 *     <none>
 * Callees:
 *     ?IndexOfInternal@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJPEAV?$GitStorageType@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@detail@XWinRT@@IPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@PEAIPEAE@Z @ 0x18000CCCC (-IndexOfInternal@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultE.c)
 *     ??$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UIInspectable@@@detail@1@@Z @ 0x18000D74C (--$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV-$GitStorageType@UIInspectable.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041990 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::IndexOf(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _BYTE *a4)
{
  __int64 v5; // r12
  char *v7; // rdi
  unsigned int v8; // r15d
  _DWORD *v9; // rbx
  RTL_SRWLOCK *v10; // rsi
  int v11; // r14d
  unsigned __int64 v12; // rdx
  int v13; // ecx
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rax
  char *v16; // rax
  unsigned int v17; // r12d
  char *v18; // rbx
  __int64 v19; // rsi
  __int128 v21; // [rsp+40h] [rbp-58h]
  _DWORD *v22; // [rsp+50h] [rbp-48h]
  int v23; // [rsp+A8h] [rbp+10h]

  v23 = a2;
  v5 = (__int64)a3;
  *a3 = 0;
  *a4 = 0;
  v7 = 0LL;
  v8 = 0;
  v9 = (_DWORD *)(a1 + 112);
  v22 = (_DWORD *)(a1 + 112);
  v10 = (RTL_SRWLOCK *)(a1 + 120);
  if ( *(_DWORD *)(a1 + 112) == 1 )
  {
    if ( SLODWORD(v10->Ptr) >= 0 )
      ++LODWORD(v10->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 120));
    a2 = v23;
  }
  v11 = 0;
  if ( *(_DWORD *)(a1 + 88) )
  {
    v14 = *(unsigned int *)(a1 + 80);
    v15 = 16 * v14;
    if ( !is_mul_ok(v14, 0x10uLL) )
      v15 = -1LL;
    v16 = (char *)operator new[](v15, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v16;
    if ( v16 )
    {
      for ( ; v14; --v14 )
      {
        *(_QWORD *)v16 = 0LL;
        v16[8] = 0;
        v16 += 16;
      }
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      v17 = 0;
      if ( *(_DWORD *)(a1 + 80) )
      {
        v11 = 0;
        do
        {
          v13 = 2 * v17;
          v21 = *(_OWORD *)(*(_QWORD *)(a1 + 96) + 16LL * v17);
          v12 = (unsigned __int64)&v7[16 * v17];
          if ( v12 )
          {
            *(_QWORD *)v12 = 0LL;
            *(_BYTE *)(v12 + 8) = 0;
          }
          *(_BYTE *)(v12 + 8) = BYTE8(v21);
          if ( BYTE8(v21) )
          {
            *(_QWORD *)v12 = v21;
            _InterlockedIncrement((volatile signed __int32 *)v21);
          }
          else
          {
            v13 = v21;
            *(_QWORD *)v12 = v21;
            if ( (_QWORD)v21 )
              (*(void (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(*(_QWORD *)v21 + 8LL))(v21, v12, 0LL);
          }
          ++v8;
          ++v17;
        }
        while ( v17 < *(_DWORD *)(a1 + 80) );
        v9 = v22;
      }
    }
    else
    {
      v11 = -2147024882;
    }
    v5 = (__int64)a3;
  }
  else
  {
    v11 = Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::IndexOfInternal(
            -1,
            *(_QWORD *)(a1 + 96),
            *(_DWORD *)(a1 + 80),
            a2,
            v5,
            (__int64)a4);
  }
  if ( *v9 == 1 )
    --LODWORD(v10->Ptr);
  else
    ReleaseSRWLockShared(v10);
  if ( v11 >= 0 )
  {
    if ( !v8 )
      goto LABEL_36;
    v11 = Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::IndexOfInternal(
            v13,
            (_DWORD)v7,
            v8,
            v23,
            v5,
            (__int64)a4);
  }
  if ( v8 )
  {
    v18 = v7;
    v19 = v8;
    do
    {
      XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>(v18);
      v18 += 16;
      --v19;
    }
    while ( v19 );
  }
LABEL_36:
  operator delete(v7, v12);
  return (unsigned int)v11;
}
