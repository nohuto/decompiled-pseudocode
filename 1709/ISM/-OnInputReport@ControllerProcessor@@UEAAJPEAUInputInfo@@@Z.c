/*
 * XREFs of ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18003E2F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     McTemplateU0qq @ 0x180012EF8 (McTemplateU0qq.c)
 *     ?GetDisplayInformation@ControllerProcessor@@AEAAJXZ @ 0x18003E72C (-GetDisplayInformation@ControllerProcessor@@AEAAJXZ.c)
 *     ?BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJW4GamepadButtons@Input@Gaming@Windows@@0@Z @ 0x18003F504 (-BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJW4GamepadButtons@Input@Gaming@Windows@@0@Z.c)
 *     ?UpdatePointerTimer@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x1800405A0 (-UpdatePointerTimer@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x180040938 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180040A6C (-SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?SendGamepadAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180040F7C (-SendGamepadAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GamepadButtons@Input@Gaming@Windows@@PEA_N@Z @ 0x180042B10 (-ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GamepadButtons@Input@Gaming@Windows.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::OnInputReport(ControllerProcessor *this, struct InputInfo *a2)
{
  struct InputInfo *v2; // r12
  int DisplayInformation; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rcx
  int v8; // edi
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int *v15; // rbx
  __int64 v16; // r12
  unsigned int v17; // ecx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // r9d
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // rcx
  int updated; // eax
  __int64 v25; // rcx
  unsigned int v27; // [rsp+60h] [rbp+8h]

  v2 = a2;
  *((_QWORD *)this + 37) = *((_QWORD *)a2 + 83);
  DisplayInformation = ControllerProcessor::GetDisplayInformation(this);
  v6 = DisplayInformation;
  if ( DisplayInformation >= 0 )
  {
    if ( (*(_BYTE *)v2 & 0x40) != 0 )
    {
      v7 = *((_QWORD *)this + 513);
      v8 = 0;
      if ( v7 && !*((_DWORD *)this + 59) )
      {
        v9 = *((unsigned int *)v2 + 176);
        if ( !*(_DWORD *)(v7 + 16) )
          goto LABEL_18;
        v10 = v9 & 1;
        v11 = *((_DWORD *)this + 44) & 1;
        if ( ((*((_DWORD *)v2 + 176) & 2) != 0) == ((*((_DWORD *)this + 44) & 2) != 0) && (_BYTE)v10 == (_BYTE)v11 )
          goto LABEL_18;
        LOBYTE(v11) = v9 & 1;
        LOBYTE(v10) = (*((_DWORD *)v2 + 176) & 2) != 0;
        v12 = ViewMenuChordedKeyHandler::ChordedKeyStateMachine(v7, v10, v11);
        v8 = v12;
        if ( v12 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 187, v12);
        if ( v8 >= 0 )
        {
LABEL_18:
          v13 = *((_QWORD *)this + 513);
          if ( *(_BYTE *)(v13 + 73) )
          {
            v14 = 0LL;
            v15 = *(unsigned int **)(v13 + 48);
            if ( v15 != *(unsigned int **)(v13 + 56) )
            {
              v16 = *((_QWORD *)this + 513);
              do
              {
                v17 = *v15;
                v27 = *v15;
                if ( (((unsigned __int8)v14 ^ *(_BYTE *)v15) & 1) != 0 )
                {
                  if ( *((_DWORD *)this + 59) )
                    ControllerProcessor::BuildAndSendKeyboardInputInfo(this, 0xCFu, v17 & 1);
                  else
                    ControllerProcessor::BuildAndSendMouseInputInfo(this, v14, v17, v9);
                  v17 = v27;
                }
                ++v15;
                v14 = v17;
              }
              while ( v15 != *(unsigned int **)(v16 + 56) );
              v2 = a2;
            }
          }
          v7 = *((_QWORD *)this + 513);
          if ( *(_BYTE *)(v7 + 72) )
            *(_QWORD *)(v7 + 56) = *(_QWORD *)(v7 + 48);
          *(_BYTE *)(v7 + 72) = 0;
        }
        else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 12, 514, v8);
        }
      }
      if ( v8 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 12, 689, v8);
        goto LABEL_69;
      }
      if ( *((_DWORD *)this + 59) )
      {
        v18 = ControllerProcessor::SendGamepadAsVirtualKeys(this, v2);
        v6 = v18;
        if ( v18 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_69;
          v20 = 700;
          goto LABEL_68;
        }
LABEL_59:
        *(_OWORD *)((char *)this + 168) = *(_OWORD *)((char *)v2 + 696);
        *(_OWORD *)((char *)this + 184) = *(_OWORD *)((char *)v2 + 712);
        *(_OWORD *)((char *)this + 200) = *(_OWORD *)((char *)v2 + 728);
        *(_OWORD *)((char *)this + 216) = *(_OWORD *)((char *)v2 + 744);
        *((_BYTE *)this + 232) = *((_BYTE *)v2 + 760);
        return v6;
      }
      if ( !*((_BYTE *)this + 4112) )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 8) != 0 )
          McTemplateU0qq(v7, &MinInput_Log_ControllerNavigationEnabled, 12, *((unsigned __int8 *)v2 + 760));
        *((_BYTE *)this + 4112) = 1;
      }
      v18 = ControllerProcessor::SendGamepadAsVirtualKeysForNavigation(this, v2);
      if ( v18 >= 0 )
      {
        v22 = ControllerProcessor::BuildAndSendMouseInputInfo(
                this,
                *((unsigned int *)this + 44),
                *((unsigned int *)v2 + 176),
                v21);
        v6 = v22;
        if ( v22 < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            McTemplateU0qqq(v23, &MinInput_Warning_CheckResult, 12, 1246, v22);
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
        if ( *((_DWORD *)this + 80) )
        {
          updated = ControllerProcessor::UpdatePointerTimer(this, v2);
          v6 = updated;
          if ( updated < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              McTemplateU0qqq(v25, &MinInput_Warning_CheckResult, 12, 739, updated);
            if ( IsDebuggerPresent() )
              __debugbreak();
LABEL_71:
            __fastfail(7u);
          }
        }
        goto LABEL_59;
      }
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_69;
      v20 = 726;
    }
    else if ( (*(_BYTE *)v2 & 4) != 0 )
    {
      v18 = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(**((_QWORD **)this + 30) + 48LL))(
              *((_QWORD *)this + 30),
              v2);
      v6 = v18;
      if ( v18 >= 0 )
        return v6;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_69;
      v20 = 758;
    }
    else
    {
      if ( *(char *)v2 >= 0 )
        return v6;
      v18 = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(**((_QWORD **)this + 31) + 48LL))(
              *((_QWORD *)this + 31),
              v2);
      v6 = v18;
      if ( v18 >= 0 )
        return v6;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_69;
      v20 = 767;
    }
LABEL_68:
    McTemplateU0qqq(v19, &MinInput_Warning_CheckResult, 12, v20, v18);
LABEL_69:
    if ( IsDebuggerPresent() )
      __debugbreak();
    goto LABEL_71;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 12, 678, DisplayInformation);
  return v6;
}
