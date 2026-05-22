/*
 * XREFs of ?ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GamepadButtons@Input@Gaming@Windows@@PEA_N@Z @ 0x18003707C
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180032ED0 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?LogGamepadTaskSwitcherState@ControllerProcessorTelemetry@@SAXI_N0@Z @ 0x180036A48 (-LogGamepadTaskSwitcherState@ControllerProcessorTelemetry@@SAXI_N0@Z.c)
 *     ?LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z @ 0x180036B28 (-LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z.c)
 *     ??$emplace_back@AEAW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAAAEAW4_Button@@AEAW42@@Z @ 0x1800372B0 (--$emplace_back@AEAW4_Button@@@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAAAEAW4.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewMenuChordedKeyHandler::ChordedKeyStateMachine(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        int a4,
        _BYTE *a5)
{
  _BYTE *v5; // rdi
  int v7; // ecx
  unsigned int v10; // r14d
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx

  v5 = a5;
  *(_WORD *)(a1 + 72) = 0;
  v7 = *(_DWORD *)(a1 + 16);
  v10 = 0;
  *v5 = 0;
  v11 = v7 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( !v12 )
    {
      if ( !a2 )
      {
        if ( a3 )
        {
          ControllerProcessorTelemetry::LogGamepadTaskSwitcherUnexpectedState(2);
          *v5 = 0;
          *(_DWORD *)(a1 + 16) = 1;
          *(_WORD *)(a1 + 72) = 1;
        }
        else
        {
          *v5 = 1;
          LODWORD(a5) = a4;
          std::vector<enum _Button>::emplace_back<enum _Button &>(a1 + 48, &a5);
          *(_DWORD *)(a1 + 16) = 1;
          *(_WORD *)(a1 + 72) = 257;
        }
        goto LABEL_48;
      }
      *(_DWORD *)(a1 + 16) = 5;
      goto LABEL_40;
    }
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( !v14 )
      {
        if ( !a3 )
        {
          *v5 = 1;
          goto LABEL_9;
        }
        if ( a2 )
          ControllerProcessorTelemetry::LogGamepadTaskSwitcherUnexpectedState(4);
LABEL_8:
        *v5 = 0;
LABEL_9:
        v17 = *(_QWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 16) = 1;
        v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 96LL))(v17);
        goto LABEL_41;
      }
      v15 = v14 - 1;
      if ( !v15 )
      {
        if ( a3 && a2 )
        {
          ControllerProcessorTelemetry::LogGamepadTaskSwitcherUnexpectedState(5);
          *v5 = 0;
        }
        else
        {
          *v5 = 1;
        }
        *(_WORD *)(a1 + 72) = 1;
        goto LABEL_9;
      }
      v16 = v15 - 1;
      if ( v16 )
      {
        if ( v16 != 1 )
          goto LABEL_8;
        *v5 = 1;
        if ( a2 || a3 )
          goto LABEL_48;
        goto LABEL_31;
      }
      *v5 = 1;
      if ( a2 )
      {
        if ( a3 )
        {
LABEL_48:
          ControllerProcessorTelemetry::LogGamepadTaskSwitcherState(*(_DWORD *)(a1 + 16), a2, a3);
          return v10;
        }
      }
      else if ( !a3 )
      {
        goto LABEL_31;
      }
      *(_DWORD *)(a1 + 16) = 7;
      goto LABEL_48;
    }
    if ( !a2 )
    {
LABEL_30:
      *v5 = 0;
LABEL_31:
      *(_DWORD *)(a1 + 16) = 1;
      goto LABEL_48;
    }
    if ( !a3 )
    {
      ControllerProcessorTelemetry::LogGamepadTaskSwitcherUnexpectedState(3);
      goto LABEL_30;
    }
  }
  else
  {
    if ( !a2 )
    {
      if ( a3 )
      {
        *v5 = 1;
        *(_DWORD *)(a1 + 16) = 2;
        LODWORD(a5) = a4;
        std::vector<enum _Button>::emplace_back<enum _Button &>(a1 + 48, &a5);
      }
      goto LABEL_48;
    }
    if ( !a3 )
    {
      *v5 = 0;
      *(_DWORD *)(a1 + 16) = 3;
      goto LABEL_48;
    }
  }
  *(_DWORD *)(a1 + 16) = 4;
LABEL_40:
  v19 = *(_QWORD *)(a1 + 24);
  *v5 = 1;
  v18 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v19 + 80LL))(v19, 5000000LL, 0LL);
LABEL_41:
  v10 = v18;
  if ( v18 >= 0 )
    goto LABEL_48;
  if ( IsDebuggerPresent() )
    __debugbreak();
  RaiseFailFastException(0LL, 0LL, 0);
  return v10;
}
