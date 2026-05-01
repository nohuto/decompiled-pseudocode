/*
 * XREFs of ??$Register@UIImmersiveApplicationNotificationService@@P81@EAAJPEAUIImmersiveApplicationNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@SmartCookie@@QEAAJPEAUIImmersiveApplicationNotificationService@@P81@EAAJPEAUIImmersiveApplicationNotification@@PEAK@ZP81@EAAJK@ZPEAVCApplicationViewManager@@@Z @ 0x180074ADC
 * Callers:
 *     ?SubscribeToServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180071B80 (-SubscribeToServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_9IImmersiveApplicationNotificationService@@$BBI@AA @ 0x180076C8C (--_9IImmersiveApplicationNotificationService@@$BBI@AA.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SmartCookie::Register<IImmersiveApplicationNotificationService,long (IImmersiveApplicationNotificationService::*)(IImmersiveApplicationNotification *,unsigned long *),long (IImmersiveApplicationNotificationService::*)(unsigned long),CApplicationViewManager *>(
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
      (__int64)"internal\\shell\\private\\inc\\SmartCookie.h",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
  else
  {
    v8 =  IImmersiveApplicationNotificationService::`vcall'{24,{flat}}(
           a2,
           (a5 + 152) & ((unsigned __int128)-(__int128)a5 >> 64));
    v10 = v8;
    if ( v8 >= 0 )
    {
      if ( a2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v11 = a2;
      v13[0] = a2;
      if ( a2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v13[1] =  IImmersiveApplicationNotificationService::`vcall'{32,{flat}};
      v12 = *(_QWORD *)(a1 + 104);
      if ( v12 )
      {
        LOBYTE(v9) = v12 != a1;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 24LL))(v12, v9);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      *(_QWORD *)a1 = off_1801AC4D0;
      *(_QWORD *)(a1 + 8) = 0LL;
      if ( (_QWORD *)(a1 + 8) != v13 )
      {
        *(_QWORD *)(a1 + 8) = a2;
        v11 = 0LL;
      }
      *(_QWORD *)(a1 + 16) =  IImmersiveApplicationNotificationService::`vcall'{32,{flat}};
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
        (__int64)"internal\\shell\\private\\inc\\SmartCookie.h",
        (const char *)(unsigned int)v8);
      return v10;
    }
  }
}
