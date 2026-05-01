/*
 * XREFs of ??$Register@UITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP81@EAAJK@ZPEAVTouchKeyboardExperienceManager@@@SmartCookie@@QEAAJPEAUITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP81@EAAJK@ZPEAVTouchKeyboardExperienceManager@@@Z @ 0x18019E81C
 * Callers:
 *     ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18019ABC0 (-SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BEI@AA @ 0x180117FCC (--_9IPropertyValue@Foundation@Windows@@$BEI@AA.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SmartCookie::Register<ITabletModeController,long (ITabletModeController::*)(ITabletModeChangeListener *,unsigned long *),long (ITabletModeController::*)(unsigned long),TouchKeyboardExperienceManager *>(
        __int64 a1,
        __int64 a2)
{
  int v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // esi
  __int64 v8; // rsi
  __int64 v9; // rcx
  _QWORD v10[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 112) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28,
      (__int64)"internal\\shell\\private\\inc\\smartcookie.h",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
  else
  {
    v5 =  Windows::Foundation::IPropertyValue::`vcall'{72,{flat}}(a2);
    v7 = v5;
    if ( v5 >= 0 )
    {
      if ( a2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v8 = a2;
      v10[0] = a2;
      if ( a2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v10[1] =  Windows::Foundation::IPropertyValueStatics::`vcall'{80,{flat}};
      v9 = *(_QWORD *)(a1 + 104);
      if ( v9 )
      {
        LOBYTE(v6) = v9 != a1;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 24LL))(v9, v6);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      *(_QWORD *)a1 = off_180209908;
      *(_QWORD *)(a1 + 8) = 0LL;
      if ( (_QWORD *)(a1 + 8) != v10 )
      {
        *(_QWORD *)(a1 + 8) = a2;
        v8 = 0LL;
      }
      *(_QWORD *)(a1 + 16) =  Windows::Foundation::IPropertyValueStatics::`vcall'{80,{flat}};
      *(_QWORD *)(a1 + 104) = a1;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      if ( a2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x29,
        (__int64)"internal\\shell\\private\\inc\\smartcookie.h",
        (const char *)(unsigned int)v5);
      return v7;
    }
  }
}
