/*
 * XREFs of Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption___::SetAt @ 0x18016F9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18016245C (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x1801624C4 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x180162534 (-RaiseEvent@-$VectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@$0.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x180194E10 (_invalid_parameter_noinfo.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption___::SetAt(
        __int64 a1,
        unsigned int a2,
        __int128 *a3)
{
  __int128 v3; // xmm6
  __int64 v4; // rbp
  int v6; // ebx
  __int64 v7; // rcx
  const void *v8; // rdx
  _BYTE v10[4]; // [rsp+30h] [rbp-58h] BYREF
  int v11; // [rsp+34h] [rbp-54h] BYREF
  __int64 v12; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v13[16]; // [rsp+48h] [rbp-40h] BYREF

  v3 = *a3;
  v11 = 0;
  v4 = a2;
  XWinRT::SerializingLockPolicy::Write((__int64)&v12, a1 + 72, &v11);
  v6 = v11;
  if ( v11 >= 0 )
  {
    if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 40) )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)v10);
      v6 = 0;
      v8 = (const void *)(16 * v4 + *(_QWORD *)(a1 + 56));
      if ( v8 )
      {
        memmove(v13, v8, 0x10uLL);
        *(_OWORD *)(16 * v4 + *(_QWORD *)(a1 + 56)) = v3;
        ++*(_DWORD *)(a1 + 88);
      }
      else
      {
        *(_DWORD *)_o__errno(v7, 0LL) = 22;
        invalid_parameter_noinfo();
        v6 = -2147418113;
        RoOriginateError(2147549183LL, 0LL);
      }
    }
  }
  if ( v12 )
  {
    if ( *(_DWORD *)v12 == 1 )
      *(_DWORD *)(v12 + 8) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v12 + 8));
  }
  if ( v6 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,0,0,0>::RaiseEvent();
  return (unsigned int)v6;
}
