/*
 * XREFs of ?UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x180041748
 * Callers:
 *     ?TaskSwitcherInvokedCallbackStatic@ControllerProcessor@@CAJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z @ 0x18003DD50 (-TaskSwitcherInvokedCallbackStatic@ControllerProcessor@@CAJPEAXAEAV-$vector@U-$pair@G_N@std@@V-$.c)
 *     ?SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180040A6C (-SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?SendGamepadAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180040F7C (-SendGamepadAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::UpdateAutoRepeatTimer(ControllerProcessor *this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v5; // r9d
  _WORD *v6; // rax
  unsigned int v7; // ecx
  char v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 35) + 24LL))(*((_QWORD *)this + 35), &v9);
  v4 = v2;
  if ( v2 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v5 = 2629;
      goto LABEL_15;
    }
    goto LABEL_16;
  }
  v6 = (_WORD *)((char *)this + 64);
  v7 = 0;
  while ( *v6 == *((_WORD *)this + 80) )
  {
    ++v7;
    v6 += 2;
    if ( v7 >= 0x18 )
    {
      if ( v9 )
      {
        v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 96LL))(*((_QWORD *)this + 35));
        v4 = v2;
        if ( v2 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v5 = 2642;
            goto LABEL_15;
          }
          goto LABEL_16;
        }
      }
      return v4;
    }
  }
  if ( !v9 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 35) + 80LL))(
           *((_QWORD *)this + 35),
           6640000LL,
           830000LL);
    v4 = v2;
    if ( v2 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v5 = 2637;
LABEL_15:
        McTemplateU0qqq(v3, &MinInput_Warning_CheckResult, 12, v5, v2);
      }
LABEL_16:
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
  }
  return v4;
}
