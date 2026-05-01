/*
 * XREFs of Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption___::IndexOf @ 0x18016F8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180162E38 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption___::IndexOfInternal @ 0x180170E64 (Windows--Foundation--Collections--Internal--Vector_Windows--UI--Internal--Text--Cor_ea_180170E64.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194F9C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption___::IndexOf(
        __int64 a1,
        __int128 *a2,
        _DWORD *a3,
        _BYTE *a4)
{
  _OWORD *v8; // rsi
  int v9; // ebp
  int v10; // ecx
  int v11; // ebx
  __int64 v12; // rdx
  int v13; // r8d
  unsigned __int64 v14; // rax
  unsigned int v15; // edx
  __int64 v16; // rcx
  int v17; // ecx
  __int64 v19; // [rsp+30h] [rbp-48h] BYREF
  __int128 v20; // [rsp+40h] [rbp-38h] BYREF
  int v21; // [rsp+80h] [rbp+8h] BYREF

  *a3 = 0;
  *a4 = 0;
  v8 = 0LL;
  v9 = 0;
  XWinRT::SerializingLockPolicy::Read((__int64)&v19, (RTL_SRWLOCK *)(a1 + 72), &v21);
  v11 = v21;
  if ( v21 >= 0 )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      v14 = 16LL * *(unsigned int *)(a1 + 40);
      if ( !is_mul_ok(*(unsigned int *)(a1 + 40), 0x10uLL) )
        v14 = -1LL;
      v8 = operator new[](v14, (const struct std::nothrow_t *)&std::nothrow);
      if ( v8 )
      {
        v15 = 0;
        if ( *(_DWORD *)(a1 + 40) )
        {
          v11 = 0;
          do
          {
            ++v9;
            v16 = v15++;
            v8[v16] = *(_OWORD *)(*(_QWORD *)(a1 + 56) + 16 * v16);
          }
          while ( v15 < *(_DWORD *)(a1 + 40) );
        }
      }
      else
      {
        v11 = -2147024882;
      }
    }
    else
    {
      v12 = *(_QWORD *)(a1 + 56);
      v13 = *(_DWORD *)(a1 + 40);
      v20 = *a2;
      v11 = Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption___::IndexOfInternal(
              v10,
              v12,
              v13,
              (unsigned int)&v20,
              (__int64)a3,
              (__int64)a4);
    }
  }
  v17 = v19;
  if ( v19 )
  {
    if ( *(_DWORD *)v19 == 1 )
      --*(_DWORD *)(v19 + 8);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v19 + 8));
    v19 = 0LL;
  }
  if ( v11 >= 0 && v9 )
  {
    v20 = *a2;
    v11 = Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption___::IndexOfInternal(
            v17,
            (_DWORD)v8,
            v9,
            (unsigned int)&v20,
            (__int64)a3,
            (__int64)a4);
  }
  operator delete(v8);
  return (unsigned int)v11;
}
