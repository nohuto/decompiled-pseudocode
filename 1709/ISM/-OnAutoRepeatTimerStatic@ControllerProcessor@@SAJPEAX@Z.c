/*
 * XREFs of ?OnAutoRepeatTimerStatic@ControllerProcessor@@SAJPEAX@Z @ 0x18003DFA0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x180040938 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::OnAutoRepeatTimerStatic(ControllerProcessor *this)
{
  __int64 v2; // rdi
  _WORD *v3; // rcx
  __int16 v4; // r9
  __int64 v5; // r8
  int v6; // ebx
  __int64 v7; // rbp
  unsigned __int16 v8; // dx
  int v9; // eax
  int v10; // r9d
  _WORD v12[24]; // [rsp+38h] [rbp-50h] BYREF

  if ( !this )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(0LL, &MinInput_Warning_CheckResult, 12, 481, 255);
    if ( IsDebuggerPresent() )
      __debugbreak();
    goto LABEL_28;
  }
  memset(v12, 0, sizeof(v12));
  v2 = 0LL;
  v3 = (_WORD *)((char *)this + 64);
  v4 = *((_WORD *)this + 80);
  v5 = 24LL;
  do
  {
    if ( *v3 != v4 )
    {
      v12[v2] = *v3;
      v2 = (unsigned int)(v2 + 1);
    }
    v3 += 2;
    --v5;
  }
  while ( v5 );
  v6 = 0;
  v7 = 0LL;
  if ( (_DWORD)v2 )
  {
    while ( 1 )
    {
      v8 = v12[v7];
      if ( v8 != 7 )
      {
        v9 = ControllerProcessor::BuildAndSendKeyboardInputInfo(this, v8, 1);
        v6 = v9;
        if ( v9 < 0 )
          break;
      }
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= (unsigned int)v2 )
        goto LABEL_23;
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
    {
LABEL_20:
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    v10 = 2668;
LABEL_19:
    McTemplateU0qqq((__int64)v3, &MinInput_Warning_CheckResult, 12, v10, v9);
    goto LABEL_20;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 96LL))(*((_QWORD *)this + 35));
  v6 = v9;
  if ( v9 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_20;
    v10 = 2674;
    goto LABEL_19;
  }
LABEL_23:
  if ( v6 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)v3, &MinInput_Warning_CheckResult, 12, 486, v6);
    if ( IsDebuggerPresent() )
      __debugbreak();
LABEL_28:
    __fastfail(7u);
  }
  return (unsigned int)v6;
}
