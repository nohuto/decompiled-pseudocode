/*
 * XREFs of ?RemoveAtInternal@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x1800136DC
 * Callers:
 *     ?RemoveAt@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x180012A50 (-RemoveAt@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collectio.c)
 *     ?RemoveAtEnd@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x180012A70 (-RemoveAtEnd@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collec.c)
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18000C690 (-RaiseEvent@-$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18000C6A8 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?ResizeStorage@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x1800142CC (-ResizeStorage@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Coll.c)
 *     _invalid_parameter_noinfo @ 0x180043052 (_invalid_parameter_noinfo.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  HSTRING v3; // rbx
  _DWORD *v4; // r13
  RTL_SRWLOCK *v6; // r14
  unsigned int v9; // ebp
  bool v10; // cf
  signed int v11; // edi
  int v12; // r8d
  __int64 v13; // rdx
  void *v14; // rcx
  unsigned int v15; // ecx
  unsigned int v16; // r8d
  unsigned int v17; // edx
  char v19; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = (_DWORD *)(a1 + 104);
  v6 = (RTL_SRWLOCK *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( !LODWORD(v6->Ptr) )
      LODWORD(v6->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 112));
  }
  v9 = *(_DWORD *)(a1 + 72);
  if ( a3 )
    a2 = v9 - 1;
  v10 = a2 < v9;
  if ( a2 >= v9 )
  {
    RoOriginateError(2147483659LL, 0LL);
    v10 = a2 < v9;
  }
  v11 = v10 ? 0 : 0x8000000B;
  if ( a2 < v9 )
  {
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v19);
    v11 = 0;
    v3 = *(HSTRING *)(*(_QWORD *)(a1 + 88) + 8LL * a2);
    WindowsDeleteString(0LL);
    v12 = *(_DWORD *)(a1 + 72);
    if ( a2 < v12 - 1 )
    {
      v13 = *(_QWORD *)(a1 + 88);
      v14 = (void *)(v13 + 8LL * a2);
      if ( 8LL * (v12 - a2 - 1) )
      {
        if ( !v14 || !(v13 + 8LL * (a2 + 1)) )
        {
          *(_DWORD *)_o__errno(v14, v13) = 22;
          invalid_parameter_noinfo();
          v11 = -2147418113;
          RoOriginateError(2147549183LL, 0LL);
          goto LABEL_20;
        }
        memmove(v14, (const void *)(v13 + 8LL * (a2 + 1)), 8LL * (v12 - a2 - 1));
        v12 = *(_DWORD *)(a1 + 72);
      }
    }
    ++*(_DWORD *)(a1 + 120);
    v15 = v12 - 1;
    v16 = *(_DWORD *)(a1 + 76);
    *(_DWORD *)(a1 + 72) = v15;
    v17 = v16 / 3;
    if ( v15 < v16 / 3 )
    {
      if ( v16 - 1 < v16 - v17 )
        v17 = 1;
      v11 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::ResizeStorage(
              a1,
              v16 - v17);
    }
  }
LABEL_20:
  if ( v4 )
  {
    if ( *v4 == 1 )
      LODWORD(v6->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v6);
  }
  WindowsDeleteString(v3);
  if ( v11 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>::RaiseEvent();
  return (unsigned int)v11;
}
