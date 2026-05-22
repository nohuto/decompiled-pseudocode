/*
 * XREFs of ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800365C0
 * Callers:
 *     ?RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800372E4 (-RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18003A6D0 (-Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18003D638 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     ?TurnNavigationOn@ControllerProcessor@@AEAAJXZ @ 0x18003F0B8 (-TurnNavigationOn@ControllerProcessor@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18004A698 (-RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?ShouldAttachDevice@MobileTouchProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x18006A9C0 (-ShouldAttachDevice@MobileTouchProcessor@@UEAA_NPEAUDeviceInfo@@@Z.c)
 *     ?Initialize@MobileTouchProcessor@@IEAAJPEAUInputProcessorCreateParams@@@Z @ 0x18006ABE8 (-Initialize@MobileTouchProcessor@@IEAAJPEAUInputProcessorCreateParams@@@Z.c)
 *     ?Initialize@MouseProcessor@@IEAAJPEBGJ@Z @ 0x18006BB64 (-Initialize@MouseProcessor@@IEAAJPEBGJ@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?CreateInputProcessorWorker@@YAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@W4InputType@@H@Z @ 0x180036510 (-CreateInputProcessorWorker@@YAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@W4InputT.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateChildInputProcessor(int a1, _QWORD *a2, __int64 a3)
{
  bool v6; // zf
  __int64 v7; // rcx
  char v8; // al
  int v9; // r9d
  int v10; // r9d
  __int64 v11; // rax
  unsigned int v12; // r9d
  int InputProcessorWorker; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  GUID v17; // [rsp+30h] [rbp-38h] BYREF

  v17 = DirectX::g_XMZero;
  if ( a1 <= 0 || (v6 = ((a1 - 1) & a1) == 0, v7 = 1LL, !v6) )
    v7 = 0LL;
  v8 = 87;
  if ( !(_DWORD)v7 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 145, (_DWORD)v7 == 0 ? 0x57 : 0);
    goto LABEL_28;
  }
  if ( !a2 || !*a2 || !a2[1] || (v7 = a2[2]) == 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_28;
    v10 = 148;
    goto LABEL_27;
  }
  if ( (*(int (__fastcall **)(__int64, GUID *))(*(_QWORD *)v7 + 24LL))(v7, &v17) < 0
    || *(_OWORD *)&DirectX::g_XMZero == *(_OWORD *)&v17 )
  {
    v8 = -112;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_28;
    v10 = 150;
LABEL_27:
    McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, v10, v8);
    goto LABEL_28;
  }
  v9 = 0;
  while ( 1 )
  {
    v7 = v9;
    if ( *(_OWORD *)&v17 == *((_OWORD *)&unk_18010D340 + 3 * v9) )
      break;
    if ( (unsigned int)++v9 >= 0x10 )
    {
      v8 = -112;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v10 = 186;
        goto LABEL_27;
      }
LABEL_28:
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
  }
  v11 = 6LL * v9;
  v12 = v9 + 1;
  if ( *((_DWORD *)&unk_18010D340 + 2 * v11 + 4) != a1 )
    v12 = 0;
  InputProcessorWorker = CreateInputProcessorWorker(a2, a3, a1, v12);
  v15 = InputProcessorWorker;
  if ( InputProcessorWorker < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v14, &MinInput_Warning_CheckResult, 0, 182, InputProcessorWorker);
  return v15;
}
