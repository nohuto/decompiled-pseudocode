/*
 * XREFs of _XamlBaseViewController::XamlBaseViewController_::_1_::dtor$7 @ 0x1801F53E2
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@QEAA@XZ @ 0x18001727C (--1-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall XamlBaseViewController::XamlBaseViewController_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 88) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 88) &= ~1u;
    return Microsoft::WRL::ComPtr<NotificationDispatcher>::~ComPtr<NotificationDispatcher>((volatile signed __int32 **)(a2 + 104));
  }
  return result;
}
