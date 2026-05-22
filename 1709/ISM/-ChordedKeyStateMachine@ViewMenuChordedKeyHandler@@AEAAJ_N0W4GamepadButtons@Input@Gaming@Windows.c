/*
 * XREFs of ?ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GamepadButtons@Input@Gaming@Windows@@PEA_N@Z @ 0x180042B10
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18003E2F0 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??$emplace_back@AEBI@?$vector@IV?$allocator@I@std@@@std@@QEAAXAEBI@Z @ 0x18002B8F4 (--$emplace_back@AEBI@-$vector@IV-$allocator@I@std@@@std@@QEAAXAEBI@Z.c)
 *     ?LogGamepadTaskSwitcherState@ControllerProcessorTelemetry@@SAXI_N0@Z @ 0x180042318 (-LogGamepadTaskSwitcherState@ControllerProcessorTelemetry@@SAXI_N0@Z.c)
 *     ?LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z @ 0x1800423F8 (-LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
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
  unsigned int v10; // esi
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // r9d
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx

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
      if ( a2 )
      {
        v24 = *(_QWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 16) = 5;
        *v5 = 1;
        v18 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v24 + 80LL))(v24, 5000000LL, 0LL);
        v10 = v18;
        if ( v18 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_55;
          v20 = 337;
          goto LABEL_54;
        }
      }
      else if ( a3 )
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
        std::vector<unsigned int>::emplace_back<unsigned int const &>(a1 + 48, &a5);
        *(_DWORD *)(a1 + 16) = 1;
        *(_WORD *)(a1 + 72) = 257;
      }
      goto LABEL_61;
    }
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( !v14 )
      {
        if ( a3 )
        {
          if ( a2 )
            ControllerProcessorTelemetry::LogGamepadTaskSwitcherUnexpectedState(4);
          *v5 = 0;
        }
        else
        {
          *v5 = 1;
        }
        v22 = *(_QWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 16) = 1;
        v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 96LL))(v22);
        v10 = v18;
        if ( v18 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_55;
          v20 = 373;
          goto LABEL_54;
        }
        goto LABEL_61;
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
        v21 = *(_QWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 16) = 1;
        *(_WORD *)(a1 + 72) = 1;
        v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 96LL))(v21);
        v10 = v18;
        if ( v18 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_55;
          v20 = 393;
          goto LABEL_54;
        }
        goto LABEL_61;
      }
      v16 = v15 - 1;
      if ( !v16 )
      {
        *v5 = 1;
        if ( a2 )
        {
          if ( a3 )
            goto LABEL_61;
        }
        else if ( !a3 )
        {
          goto LABEL_41;
        }
        *(_DWORD *)(a1 + 16) = 7;
        goto LABEL_61;
      }
      if ( v16 != 1 )
      {
        v17 = *(_QWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 16) = 1;
        *v5 = 0;
        v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 96LL))(v17);
        v10 = v18;
        if ( v18 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_55;
          v20 = 417;
          goto LABEL_54;
        }
        goto LABEL_61;
      }
      *v5 = 1;
      if ( a2 || a3 )
        goto LABEL_61;
    }
    else
    {
      if ( a2 )
      {
        if ( a3 )
        {
          v23 = *(_QWORD *)(a1 + 24);
          *(_DWORD *)(a1 + 16) = 4;
          *v5 = 1;
          v18 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v23 + 80LL))(v23, 5000000LL, 0LL);
          v10 = v18;
          if ( v18 < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              goto LABEL_55;
            v20 = 321;
            goto LABEL_54;
          }
          goto LABEL_61;
        }
        ControllerProcessorTelemetry::LogGamepadTaskSwitcherUnexpectedState(3);
      }
      *v5 = 0;
    }
LABEL_41:
    *(_DWORD *)(a1 + 16) = 1;
    goto LABEL_61;
  }
  if ( a2 )
  {
    if ( a3 )
    {
      v25 = *(_QWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 16) = 4;
      *v5 = 1;
      v18 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v25 + 80LL))(v25, 5000000LL, 0LL);
      v10 = v18;
      if ( v18 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_55;
        v20 = 296;
LABEL_54:
        McTemplateU0qqq(v19, &MinInput_Warning_CheckResult, 0, v20, v18);
LABEL_55:
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
    }
    else
    {
      *v5 = 0;
      *(_DWORD *)(a1 + 16) = 3;
    }
  }
  else if ( a3 )
  {
    *v5 = 1;
    *(_DWORD *)(a1 + 16) = 2;
    LODWORD(a5) = a4;
    std::vector<unsigned int>::emplace_back<unsigned int const &>(a1 + 48, &a5);
  }
LABEL_61:
  ControllerProcessorTelemetry::LogGamepadTaskSwitcherState(*(_DWORD *)(a1 + 16), a2, a3);
  return v10;
}
