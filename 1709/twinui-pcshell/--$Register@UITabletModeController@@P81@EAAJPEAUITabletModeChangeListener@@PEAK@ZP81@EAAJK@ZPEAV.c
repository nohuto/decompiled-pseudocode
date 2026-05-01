/*
 * XREFs of ??$Register@UITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP81@EAAJK@ZPEAVPeoplePaneViewManager@@@SmartCookie@@QEAAJPEAUITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP81@EAAJK@ZPEAVPeoplePaneViewManager@@@Z @ 0x1801169BC
 * Callers:
 *     ?SubscribeToServices@PeoplePaneViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801102B0 (-SubscribeToServices@PeoplePaneViewManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BEI@AA @ 0x180117FCC (--_9IPropertyValue@Foundation@Windows@@$BEI@AA.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SmartCookie::Register<ITabletModeController,long (ITabletModeController::*)(ITabletModeChangeListener *,unsigned long *),long (ITabletModeController::*)(unsigned long),PeoplePaneViewManager *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // esi
  __int64 v11; // rsi
  __int64 v12; // rcx
  _QWORD v13[4]; // [rsp+28h] [rbp-20h] BYREF
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
    v8 =  Windows::Foundation::IPropertyValue::`vcall'{72,{flat}}(
           a2,
           (a5 + 112) & ((unsigned __int128)-(__int128)a5 >> 64));
    v10 = v8;
    if ( v8 >= 0 )
    {
      if ( a2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v11 = a2;
      v13[0] = a2;
      if ( a2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v13[1] =  Windows::Foundation::IPropertyValueStatics::`vcall'{80,{flat}};
      v12 = *(_QWORD *)(a1 + 104);
      if ( v12 )
      {
        LOBYTE(v9) = v12 != a1;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 24LL))(v12, v9);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      *(_QWORD *)a1 = off_180209908;
      *(_QWORD *)(a1 + 8) = 0LL;
      if ( (_QWORD *)(a1 + 8) != v13 )
      {
        *(_QWORD *)(a1 + 8) = a2;
        v11 = 0LL;
      }
      *(_QWORD *)(a1 + 16) =  Windows::Foundation::IPropertyValueStatics::`vcall'{80,{flat}};
      *(_QWORD *)(a1 + 104) = a1;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
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
        (const char *)(unsigned int)v8);
      return v10;
    }
  }
}
