/*
 * XREFs of ?SendMouseInputInfo@ControllerProcessor@@AEAAJPEAULegacyInputInfo@@@Z @ 0x180033D60
 * Callers:
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x180033A24 (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 *     ?BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJW4GamepadButtons@Input@Gaming@Windows@@0@Z @ 0x180033C2C (-BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJW4GamepadButtons@Input@Gaming@Windows@@0@Z.c)
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x1800347D0 (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ @ 0x180034B98 (-ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x180034D98 (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerProcessor::SendMouseInputInfo(ControllerProcessor *this, struct LegacyInputInfo *a2)
{
  __int64 v4; // rdi
  int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v10[16]; // [rsp+30h] [rbp-20h] BYREF

  v9[1] = -2LL;
  if ( *((_BYTE *)this + 6896) )
  {
    v9[0] = 0LL;
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 64LL))(*((_QWORD *)this + 3));
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 72LL))(v4, v9);
    if ( v5 < 0
      || ((*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 861) + 40LL))(*((_QWORD *)this + 861), v10),
          v5 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)v9[0] + 32LL))(v9[0], v10),
          v5 < 0) )
    {
      if ( IsDebuggerPresent() )
        __debugbreak();
      RaiseFailFastException(0LL, 0LL, 0);
      v6 = v9[0];
      if ( v9[0] )
      {
        v9[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      return (unsigned int)v5;
    }
    *((_BYTE *)this + 6896) = 0;
    v7 = v9[0];
    if ( v9[0] )
    {
      v9[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  if ( *((_BYTE *)this + 5880) )
  {
    *((_DWORD *)a2 + 1) = *((_DWORD *)this + 1224);
    v5 = (*(__int64 (__fastcall **)(_QWORD, struct LegacyInputInfo *))(**((_QWORD **)this + 611) + 24LL))(
           *((_QWORD *)this + 611),
           a2);
    if ( v5 >= 0 )
      return (unsigned int)v5;
  }
  else
  {
    v5 = -2147418113;
  }
  if ( IsDebuggerPresent() )
    __debugbreak();
  RaiseFailFastException(0LL, 0LL, 0);
  return (unsigned int)v5;
}
