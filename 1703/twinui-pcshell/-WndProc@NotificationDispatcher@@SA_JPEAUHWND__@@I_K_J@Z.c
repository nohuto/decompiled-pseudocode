/*
 * XREFs of ?WndProc@NotificationDispatcher@@SA_JPEAUHWND__@@I_K_J@Z @ 0x18007AB60
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ?DispatchNotifications@NotificationDispatcher@@QEAAXXZ @ 0x18007ABD8 (-DispatchNotifications@NotificationDispatcher@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall NotificationDispatcher::WndProc(HWND a1, UINT a2, WPARAM a3, LPARAM a4)
{
  LONG_PTR WindowLongPtrW; // rax
  volatile signed __int32 *v5; // rbx
  signed __int32 i; // eax
  volatile signed __int32 *v8; // [rsp+20h] [rbp-18h]

  if ( a2 != 1025 )
    return DefWindowProcW(a1, a2, a3, a4);
  WindowLongPtrW = GetWindowLongPtrW(a1, 0);
  v5 = (volatile signed __int32 *)WindowLongPtrW;
  v8 = (volatile signed __int32 *)WindowLongPtrW;
  if ( WindowLongPtrW )
  {
    for ( i = *(_DWORD *)(WindowLongPtrW + 28);
          i != 0x7FFFFFFF && i != _InterlockedCompareExchange(v5 + 7, i + 1, i);
          i = *((_DWORD *)v5 + 7) )
    {
      ;
    }
    v5 = v8;
  }
  if ( v5 )
  {
    NotificationDispatcher::DispatchNotifications((NotificationDispatcher *)v5);
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v5);
  }
  return 0LL;
}
