/*
 * XREFs of ??0GENERIC_EVENT@@QEAA@$$QEAV?$function@$$A6AXXZ@std@@@Z @ 0x18000C5FC
 * Callers:
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x18000E3C4 (--1CSaDeviceProxy@@MEAA@XZ.c)
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x18000F710 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 *     ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x180090CE4 (-OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 *     ?OnDefaultDeviceChanged@CMMNotificationDelegator@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x180094330 (-OnDefaultDeviceChanged@CMMNotificationDelegator@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000.c)
 *     ?OnEndpointUnlockedForSharedUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800945F0 (-OnEndpointUnlockedForSharedUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18000C88C (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x18000C8D0 (-_Reset_move@-$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z.c)
 *     std::_Func_impl__lambda_6d8abb589d22b5930a9c9ecc0b82ece6__std::allocator_int__void_::_Copy @ 0x18000C970 (std--_Func_impl__lambda_6d8abb589d22b5930a9c9ecc0b82ece6__std--allocator_int__void_--_Copy.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall GENERIC_EVENT::GENERIC_EVENT(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rbx
  _BYTE *v4; // rax
  __int64 (__fastcall ***v5)(_QWORD, _BYTE *); // rcx
  __int64 (__fastcall *v6)(_QWORD, _BYTE *); // rax
  _BYTE v8[56]; // [rsp+38h] [rbp-39h] BYREF
  _BYTE *v9; // [rsp+70h] [rbp-1h]
  _BYTE v10[56]; // [rsp+78h] [rbp+7h] BYREF
  __int64 v11; // [rsp+B0h] [rbp+3Fh]

  *a1 = &GENERIC_EVENT::`vftable';
  a1[8] = 0LL;
  v3 = a1 + 1;
  v4 = 0LL;
  v9 = 0LL;
  v5 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v5 )
  {
    v6 = **v5;
    if ( (char *)v6 == (char *)std::_Func_impl__lambda_6d8abb589d22b5930a9c9ecc0b82ece6__std::allocator_int__void_::_Copy )
      v4 = (_BYTE *)std::_Func_impl__lambda_6d8abb589d22b5930a9c9ecc0b82ece6__std::allocator_int__void_::_Copy(v5, v8);
    else
      v4 = (_BYTE *)v6(v5, v8);
    v9 = v4;
  }
  if ( v4 == v8 || (_QWORD *)v3[7] == v3 )
  {
    v11 = 0LL;
    std::_Func_class<void,>::_Reset_move(v10, v8);
    std::_Func_class<void,>::_Reset_move(v8, v3);
    std::_Func_class<void,>::_Reset_move(v3, v10);
    std::_Func_class<void,>::_Tidy(v10);
  }
  else
  {
    v9 = (_BYTE *)v3[7];
    v3[7] = v4;
  }
  std::_Func_class<void,>::_Tidy(v8);
  return a1;
}
