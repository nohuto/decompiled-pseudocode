/*
 * XREFs of ?IndexOfInternal@?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@Internal@Collections@Foundation@Windows@@AEAAJPEAPEAUICoreInputViewOcclusion@Core@ViewManagement@UI@5@IPEAU67895@PEAIPEAE@Z @ 0x180196018
 * Callers:
 *     ?IndexOf@?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@25@PEAIPEAE@Z @ 0x180196180 (-IndexOf@-$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U-$DefaultE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::IndexOfInternal(
        __int64 a1,
        __int64 (__fastcall ****a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3,
        __int64 (__fastcall ***a4)(_QWORD, GUID *, __int64 *),
        unsigned int *a5,
        _BYTE *a6)
{
  int v9; // ebx
  unsigned int v10; // edi
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rsi
  bool v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  _QWORD v17[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v18; // [rsp+60h] [rbp+30h] BYREF

  v18 = a1;
  v17[1] = -2LL;
  v9 = 0;
  v10 = 0;
  if ( a3 )
  {
    while ( v9 >= 0 )
    {
      v11 = *a2;
      v12 = 0;
      v9 = 0;
      if ( a4 == *a2 )
        goto LABEL_21;
      if ( a4 && v11 )
      {
        v17[0] = 0LL;
        v18 = 0LL;
        v9 = (**a4)(a4, &GUID_00000000_0000_0000_c000_000000000046, v17);
        if ( v9 < 0 )
          goto LABEL_11;
        v13 = v18;
        if ( v18 )
        {
          v18 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        v9 = (**v11)(v11, &GUID_00000000_0000_0000_c000_000000000046, &v18);
        if ( v9 < 0 )
        {
LABEL_11:
          v15 = v18;
          v14 = v17[0];
        }
        else
        {
          v14 = v17[0];
          v15 = v18;
          v12 = v17[0] == v18;
        }
        if ( v15 )
        {
          v18 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          v14 = v17[0];
        }
        if ( v14 )
        {
          v17[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
      else
      {
        v12 = 0;
      }
      if ( v9 >= 0 && v12 )
      {
LABEL_21:
        *a6 = 1;
        *a5 = v10;
        return (unsigned int)v9;
      }
      ++v10;
      ++a2;
      if ( v10 >= a3 )
        return (unsigned int)v9;
    }
  }
  return (unsigned int)v9;
}
