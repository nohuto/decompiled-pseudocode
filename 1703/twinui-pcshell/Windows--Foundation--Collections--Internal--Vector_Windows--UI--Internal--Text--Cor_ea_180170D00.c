/*
 * XREFs of Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption___::RemoveAtInternal @ 0x180170D00
 * Callers:
 *     Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption___::RemoveAt @ 0x18016FB40 (Windows--Foundation--Collections--Internal--Vector_Windows--UI--Internal--Text--Cor_ea_18016FB40.c)
 *     Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption___::RemoveAtEnd @ 0x18016FB80 (Windows--Foundation--Collections--Internal--Vector_Windows--UI--Internal--Text--Cor_ea_18016FB80.c)
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18016245C (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1801624C4 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180162534 (-RaiseEvent@-$VectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@$0.c)
 *     Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption___::ResizeStorage @ 0x180171D7C (Windows--Foundation--Collections--Internal--Vector_Windows--UI--Internal--Text--Cor_ea_180171D7C.c)
 *     _invalid_parameter_noinfo @ 0x180194E10 (_invalid_parameter_noinfo.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption___::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  int v6; // edi
  int v7; // ecx
  const void *v8; // rdx
  __int64 v9; // r8
  void *v10; // rcx
  size_t v11; // r8
  unsigned int v12; // r8d
  __int64 v13; // rdx
  _QWORD v15[3]; // [rsp+30h] [rbp-18h] BYREF
  int v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = 0;
  XWinRT::SerializingLockPolicy::Write((__int64)v15, a1 + 72, &v16);
  v6 = v16;
  if ( v16 >= 0 )
  {
    if ( a3 )
      a2 = *(_DWORD *)(a1 + 40) - 1;
    if ( a2 >= *(_DWORD *)(a1 + 40) )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v16);
      v7 = *(_DWORD *)(a1 + 40);
      v6 = 0;
      if ( a2 < v7 - 1 )
      {
        v8 = (const void *)(*(_QWORD *)(a1 + 56) + 16LL * (a2 + 1));
        v9 = v7 - a2 - 1;
        v10 = (void *)(*(_QWORD *)(a1 + 56) + 16LL * a2);
        v11 = 16 * v9;
        if ( v11 )
        {
          if ( !v10 || !v8 )
          {
            *(_DWORD *)_o__errno(v10, v8) = 22;
            invalid_parameter_noinfo();
            v6 = -2147418113;
            RoOriginateError(2147549183LL, 0LL);
            goto LABEL_17;
          }
          memmove(v10, v8, v11);
        }
      }
      v12 = *(_DWORD *)(a1 + 44);
      ++*(_DWORD *)(a1 + 88);
      if ( --*(_DWORD *)(a1 + 40) < v12 / 3 )
      {
        v13 = v12 - v12 / 3;
        if ( v12 - 1 < (unsigned int)v13 )
          v13 = v12 - 1;
        v6 = Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption___::ResizeStorage(
               a1,
               v13);
      }
    }
  }
LABEL_17:
  if ( v15[0] )
  {
    if ( *(_DWORD *)v15[0] == 1 )
      *(_DWORD *)(v15[0] + 8LL) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v15[0] + 8LL));
  }
  if ( v6 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,0,0,0>::RaiseEvent();
  return (unsigned int)v6;
}
