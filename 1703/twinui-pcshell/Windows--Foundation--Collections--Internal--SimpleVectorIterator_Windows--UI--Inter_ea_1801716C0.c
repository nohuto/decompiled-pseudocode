/*
 * XREFs of Windows::Foundation::Collections::Internal::SimpleVectorIterator_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption_Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption_____TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_XWinRT::IntVersionTag_0_::GetMany @ 0x1801716C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption_Windows::Foundation::Collections::Internal::Vector_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionEquality__TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption_____TabTipAdapter::OnShellRequestedShow_::_2_::CoreKeyboardPositionAndSizeOptionLifetimeTraits_XWinRT::IntVersionTag_0_::GetMany(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // ebx
  _DWORD *v8; // r14
  unsigned __int32 v9; // esi
  unsigned int *v10; // rax
  unsigned int j; // ecx
  __int64 v12; // rax
  _QWORD *v13; // rax
  bool v14; // zf
  signed __int32 v15; // eax
  unsigned int *v16; // rax
  unsigned int i; // ecx
  __int64 v18; // rax
  _QWORD *v19; // rax
  unsigned int v21; // [rsp+68h] [rbp+38h]

  v21 = a2;
  *a4 = 0;
  if ( a2 )
  {
    v5 = 0LL;
    v6 = a2;
    do
    {
      *(_QWORD *)(v5 + a3) = 0LL;
      *(_QWORD *)(v5 + a3 + 8) = 0LL;
      v5 += 16LL;
      --v6;
    }
    while ( v6 );
  }
  v7 = *(_DWORD *)(a1 + 48);
  v8 = *(_DWORD **)(a1 + 32);
  if ( v7 >= 0 )
  {
    v9 = *(_DWORD *)(a1 + 40);
    if ( *(_BYTE *)(a1 + 56) )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, unsigned int *))(*(_QWORD *)v8 + 128LL))(
             *(_QWORD *)(a1 + 32),
             v9,
             a2,
             a3,
             a4);
      if ( v7 >= 0 )
        *(_DWORD *)(a1 + 40) = v9 + *a4;
    }
    else
    {
      while ( 1 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, unsigned int *))(**(_QWORD **)(a1 + 32) + 128LL))(
               *(_QWORD *)(a1 + 32),
               v9,
               a2,
               a3,
               a4);
        if ( v7 < 0 )
          break;
        v15 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), v9 + *a4, v9);
        v14 = v9 == v15;
        v9 = v15;
        if ( v14 )
          break;
        v16 = a4;
        for ( i = 0; i < *a4; v16 = a4 )
        {
          v18 = 16LL * i++;
          v19 = (_QWORD *)(a3 + v18);
          *v19 = 0LL;
          v19[1] = 0LL;
        }
        *v16 = 0;
        a2 = v21;
      }
    }
    if ( *(_DWORD *)(a1 + 52) != v8[22] )
    {
      *(_DWORD *)(a1 + 48) = -2147483636;
      if ( v7 < 0 )
      {
        RoTransformError((unsigned int)v7, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v10 = a4;
        for ( j = 0; j < *a4; v10 = a4 )
        {
          v12 = 16LL * j++;
          v13 = (_QWORD *)(a3 + v12);
          *v13 = 0LL;
          v13[1] = 0LL;
        }
        *v10 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v7, 0LL);
  }
  return (unsigned int)v7;
}
