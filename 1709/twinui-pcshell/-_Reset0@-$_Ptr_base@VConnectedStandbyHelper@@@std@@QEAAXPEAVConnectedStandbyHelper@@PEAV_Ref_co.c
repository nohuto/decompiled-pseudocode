/*
 * XREFs of ?_Reset0@?$_Ptr_base@VConnectedStandbyHelper@@@std@@QEAAXPEAVConnectedStandbyHelper@@PEAV_Ref_count_base@2@@Z @ 0x18012B3C8
 * Callers:
 *     ?SubscribeToServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x18011EC50 (-SubscribeToServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180139E58 (-HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Intern.c)
 *     ?NotificationCallback@ConnectedStandbyHelper@@AEAAJK@Z @ 0x18013A0F4 (-NotificationCallback@ConnectedStandbyHelper@@AEAAJK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Ptr_base<ConnectedStandbyHelper>::_Reset0(_QWORD *a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v3; // rbx
  __int64 result; // rax

  v3 = (volatile signed __int32 *)a1[1];
  if ( v3 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      result = (unsigned int)_InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  a1[1] = a3;
  *a1 = a2;
  return result;
}
