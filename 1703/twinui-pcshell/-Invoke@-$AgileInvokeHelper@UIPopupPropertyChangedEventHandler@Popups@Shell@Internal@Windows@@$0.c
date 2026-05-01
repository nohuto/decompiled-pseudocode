/*
 * XREFs of ?Invoke@?$AgileInvokeHelper@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@$00@Details@WRL@Microsoft@@UEAAJW4PopupClientPropertyChangedEventType@Popups@Shell@Internal@Windows@@@Z @ 0x18011A160
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::AgileInvokeHelper<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,1>::Invoke(
        __int64 a1,
        unsigned int a2)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 40);
  v4 = 0LL;
  v8 = 0LL;
  if ( v3 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL))(
           v3,
           &GUID_39651043_0a27_44fb_aa1f_c9b50d082ca0,
           &v8);
    if ( v5 < 0 )
      goto LABEL_5;
    v4 = v8;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 24LL))(v4, a2);
LABEL_5:
  v6 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return (unsigned int)v5;
}
