/*
 * XREFs of ?CreateInstance@?$SimpleClassFactory@VNotificationsTargetedContentClient@ToastNotification@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18004F840
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VNotificationsTargetedContentClient@ToastNotification@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18004FC90 (--$MakeAndInitialize@VNotificationsTargetedContentClient@ToastNotification@@UIUnknown@@$$V@Detai.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::SimpleClassFactory<ToastNotification::NotificationsTargetedContentClient,0>::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v7; // eax
  __int64 (__fastcall ***v8)(_QWORD, _QWORD, _QWORD *); // rbx
  unsigned int v9; // edi
  __int64 (__fastcall ***v10)(_QWORD, __int64, _QWORD *); // [rsp+38h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    RoOriginateError(2147746064LL, 0LL);
    return 2147746064LL;
  }
  else
  {
    v10 = 0LL;
    v7 = Microsoft::WRL::Details::MakeAndInitialize<ToastNotification::NotificationsTargetedContentClient,IUnknown,>(&v10);
    v8 = v10;
    v9 = v7;
    if ( v7 >= 0 )
      v9 = (**v10)(v10, a3, a4);
    if ( v8 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD *)))(*v8)[2])(v8);
    return v9;
  }
}
