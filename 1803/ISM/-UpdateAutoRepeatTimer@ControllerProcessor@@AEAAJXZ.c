/*
 * XREFs of ?UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x180035CCC
 * Callers:
 *     ?TaskSwitcherInvokedCallbackStatic@ControllerProcessor@@CAJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z @ 0x180032AE0 (-TaskSwitcherInvokedCallbackStatic@ControllerProcessor@@CAJPEAXAEAV-$vector@U-$pair@G_N@std@@V-$.c)
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x180033A24 (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 *     ?SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x18003542C (-SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?SendGamepadAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180035764 (-SendGamepadAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::UpdateAutoRepeatTimer(ControllerProcessor *this)
{
  unsigned int v2; // ebx
  _WORD *v3; // rax
  unsigned int v4; // ecx
  int v5; // eax
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 238) + 24LL))(*((_QWORD *)this + 238), &v7);
  if ( (v2 & 0x80000000) != 0 )
    goto LABEL_16;
  v3 = (_WORD *)((char *)this + 56);
  v4 = 0;
  while ( *v3 == *((_WORD *)this + 76) )
  {
    ++v4;
    v3 += 2;
    if ( v4 >= 0x18 )
    {
      if ( !v7 )
        return v2;
      v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 238) + 96LL))(*((_QWORD *)this + 238));
      goto LABEL_9;
    }
  }
  if ( v7 )
    return v2;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 238) + 80LL))(
         *((_QWORD *)this + 238),
         6640000LL,
         830000LL);
LABEL_9:
  v2 = v5;
  if ( v5 < 0 )
  {
LABEL_16:
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
  }
  return v2;
}
