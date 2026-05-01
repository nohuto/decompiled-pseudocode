/*
 * XREFs of Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption___::InsertAtInternal @ 0x180170B4C
 * Callers:
 *     Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption___::InsertAt @ 0x18016FB20 (Windows--Foundation--Collections--Internal--Vector_Windows--UI--Internal--Text--Cor_ea_18016FB20.c)
 *     Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption___::Append @ 0x18016FB50 (Windows--Foundation--Collections--Internal--Vector_Windows--UI--Internal--Text--Cor_ea_18016FB50.c)
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18016245C (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1801624C4 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180162534 (-RaiseEvent@-$VectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@$0.c)
 *     Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption___::ResizeStorage @ 0x180171D7C (Windows--Foundation--Collections--Internal--Vector_Windows--UI--Internal--Text--Cor_ea_180171D7C.c)
 *     _invalid_parameter_noinfo @ 0x180194E10 (_invalid_parameter_noinfo.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption___::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        __int128 *a3,
        char a4)
{
  __int128 v5; // xmm6
  int v8; // ebx
  unsigned int v9; // ecx
  __int64 v10; // rdx
  unsigned int v11; // eax
  void *v12; // rcx
  const void *v13; // rdx
  size_t v14; // r8
  __int64 v16; // [rsp+30h] [rbp-28h] BYREF
  int v17; // [rsp+70h] [rbp+18h] BYREF

  v17 = 0;
  v5 = *a3;
  XWinRT::SerializingLockPolicy::Write((__int64)&v16, a1 + 72, &v17);
  v8 = v17;
  if ( v17 >= 0 )
  {
    if ( a4 )
      a2 = *(_DWORD *)(a1 + 40);
    if ( a2 > *(_DWORD *)(a1 + 40) )
    {
      v8 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
      goto LABEL_24;
    }
    if ( *(_DWORD *)(a1 + 40) >= 0x7FFFFFFFu )
      v8 = -2147024882;
    if ( v8 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v17);
      v8 = 0;
      v9 = *(_DWORD *)(a1 + 44);
      if ( *(_DWORD *)(a1 + 40) + 1 <= v9 )
        goto LABEL_13;
      v10 = v9 + (v9 >> 1);
      if ( v9 + 1 > (unsigned int)v10 )
        v10 = v9 + 1;
      v8 = Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption___::ResizeStorage(
             a1,
             v10);
      if ( v8 >= 0 )
      {
LABEL_13:
        v11 = *(_DWORD *)(a1 + 40);
        if ( a2 < v11 )
        {
          v12 = (void *)(*(_QWORD *)(a1 + 56) + 16LL * (a2 + 1));
          v13 = (const void *)(*(_QWORD *)(a1 + 56) + 16LL * a2);
          v14 = 16LL * (v11 - a2);
          if ( v14 )
          {
            if ( !v12 || !v13 )
            {
              *(_DWORD *)_o__errno(v12, v13) = 22;
LABEL_20:
              invalid_parameter_noinfo();
              v8 = -2147418113;
              RoOriginateError(2147549183LL, 0LL);
              goto LABEL_22;
            }
            if ( 16 * (unsigned __int64)(*(_DWORD *)(a1 + 44) - a2 - 1) < v14 )
            {
              *(_DWORD *)_o__errno(v12, v13) = 34;
              goto LABEL_20;
            }
            memmove(v12, v13, v14);
          }
        }
LABEL_22:
        if ( v8 >= 0 )
        {
          *(_OWORD *)(*(_QWORD *)(a1 + 56) + 16LL * a2) = v5;
          ++*(_DWORD *)(a1 + 40);
          ++*(_DWORD *)(a1 + 88);
        }
      }
    }
  }
LABEL_24:
  if ( v16 )
  {
    if ( *(_DWORD *)v16 == 1 )
      *(_DWORD *)(v16 + 8) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v16 + 8));
  }
  if ( v8 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,0,0,0>::RaiseEvent();
  return (unsigned int)v8;
}
