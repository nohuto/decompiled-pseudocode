/*
 * XREFs of ?OnAutoRepeatTimerStatic@ControllerProcessor@@SAJPEAX@Z @ 0x180032C40
 * Callers:
 *     <none>
 * Callees:
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x180035304 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?SetValueForKey@?$FixedSizeMap@GUActiveKeyProperties@ControllerProcessor@@$0BI@@@QEAAJAEBGAEBUActiveKeyProperties@ControllerProcessor@@@Z @ 0x180036634 (-SetValueForKey@-$FixedSizeMap@GUActiveKeyProperties@ControllerProcessor@@$0BI@@@QEAAJAEBGAEBUAc.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::OnAutoRepeatTimerStatic(ControllerProcessor *this)
{
  int v2; // ebx
  __int64 v3; // rdi
  _WORD *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rsi
  unsigned __int16 v7; // dx
  _BYTE v9[4]; // [rsp+20h] [rbp-58h] BYREF
  int v10; // [rsp+24h] [rbp-54h] BYREF
  _WORD v11[24]; // [rsp+28h] [rbp-50h] BYREF

  if ( this )
  {
    memset_0(v11, 0, sizeof(v11));
    v3 = 0LL;
    v4 = (_WORD *)((char *)this + 56);
    v5 = 24LL;
    do
    {
      if ( *v4 != *((_WORD *)this + 76) )
      {
        v11[v3] = *v4;
        v3 = (unsigned int)(v3 + 1);
      }
      v4 += 2;
      --v5;
    }
    while ( v5 );
    v10 = v3;
    v6 = 0LL;
    if ( (_DWORD)v3 )
    {
      while ( 1 )
      {
        v7 = v11[v6];
        LOWORD(v10) = v7;
        if ( v7 != 7 )
        {
          v2 = ControllerProcessor::BuildAndSendKeyboardInputInfo(this, v7, 1);
          if ( v2 < 0 )
            break;
        }
        v9[0] = 0;
        v2 = FixedSizeMap<unsigned short,ControllerProcessor::ActiveKeyProperties,24>::SetValueForKey(
               (char *)this + 56,
               &v10,
               v9);
        if ( v2 < 0 )
          break;
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= (unsigned int)v3 )
          goto LABEL_17;
      }
    }
    else
    {
      v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 238) + 96LL))(*((_QWORD *)this + 238));
      if ( v2 >= 0 )
        goto LABEL_17;
    }
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
LABEL_17:
    if ( v2 >= 0 )
      return (unsigned int)v2;
    goto LABEL_18;
  }
  v2 = -2147418113;
LABEL_18:
  if ( IsDebuggerPresent() )
    __debugbreak();
  RaiseFailFastException(0LL, 0LL, 0);
  return (unsigned int)v2;
}
