/*
 * XREFs of ?_ForEachTrueHost@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXAEBUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@@Z@std@@@Z @ 0x180123F68
 * Callers:
 *     ?_ChangePopupUIShowingCount@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@W4PopupCountOperation@@_K@Z @ 0x1801203E4 (-_ChangePopupUIShowingCount@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@W4PopupCountOper.c)
 *     ?GetTopLevelHost@ViewEventDispatcher@@UEAAJIPEAUClientIdentifier@Popups@Shell@Internal@Windows@@@Z @ 0x180122070 (-GetTopLevelHost@ViewEventDispatcher@@UEAAJIPEAUClientIdentifier@Popups@Shell@Internal@Windows@@.c)
 * Callees:
 *     ?GetHostIdentifierForComponent@ViewEventDispatcher@@UEAAJIPEAW4CRSComponentRelationshipFlags@ViewEventHandlers@OneCore@Internal@Windows@@PEAUtagHostIdentifier@3456@@Z @ 0x180120C30 (-GetHostIdentifierForComponent@ViewEventDispatcher@@UEAAJIPEAW4CRSComponentRelationshipFlags@Vie.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventDispatcher::_ForEachTrueHost(__int64 a1, __int64 a2, __int64 a3)
{
  ViewEventDispatcher *v4; // rdi
  __int64 v5; // rcx
  __int64 result; // rax
  _BYTE v7[8]; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v9; // [rsp+2Ch] [rbp-1Ch]

  v4 = (ViewEventDispatcher *)(a1 + 192);
  do
  {
    result = ViewEventDispatcher::GetHostIdentifierForComponent(
               v4,
               a2,
               (enum Windows::Internal::OneCore::ViewEventHandlers::CRSComponentRelationshipFlags *)v7,
               (struct Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier *)&v8);
    if ( (int)result < 0 || (v7[0] & 1) == 0 )
      break;
    v5 = *(_QWORD *)(a3 + 56);
    if ( !v5 )
    {
      std::_Xbad_function_call();
      JUMPOUT(0x180123FF2LL);
    }
    result = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v5 + 16LL))(v5, &v8);
    if ( v8 )
      break;
    a2 = v9;
  }
  while ( v9 );
  return result;
}
