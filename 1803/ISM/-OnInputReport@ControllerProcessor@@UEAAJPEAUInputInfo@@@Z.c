/*
 * XREFs of ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180032ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJW4GamepadButtons@Input@Gaming@Windows@@0@Z @ 0x180033C2C (-BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJW4GamepadButtons@Input@Gaming@Windows@@0@Z.c)
 *     ?UpdatePointerTimer@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180034FD0 (-UpdatePointerTimer@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x180035304 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x18003542C (-SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?SendGamepadAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180035764 (-SendGamepadAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GamepadButtons@Input@Gaming@Windows@@PEA_N@Z @ 0x18003707C (-ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GamepadButtons@Input@Gaming@Windows.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::OnInputReport(ControllerProcessor *this, struct InputInfo *a2)
{
  int v2; // edi
  struct InputInfo *v3; // r14
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned int *v10; // rbx
  unsigned int **v11; // r12
  __int64 v12; // rdx
  unsigned int v13; // r15d
  int updated; // eax
  char *v15; // rsi
  __int64 v16; // rax
  __int128 v17; // xmm0
  __int64 v18; // r9
  __int64 v19; // rcx

  v2 = 0;
  *((_QWORD *)this + 240) = *((_QWORD *)a2 + 61);
  v3 = a2;
  if ( (*(_BYTE *)a2 & 0x40) == 0 )
  {
    if ( (*(_BYTE *)a2 & 4) != 0 )
    {
      if ( *((_BYTE *)this + 4880) )
      {
        *((_DWORD *)a2 + 1) = *((_DWORD *)this + 974);
        v19 = *((_QWORD *)this + 486);
        goto LABEL_42;
      }
    }
    else
    {
      if ( *(char *)a2 >= 0 )
        return (unsigned int)v2;
      if ( *((_BYTE *)this + 3880) )
      {
        *((_DWORD *)a2 + 1) = *((_DWORD *)this + 724);
        v19 = *((_QWORD *)this + 361);
LABEL_42:
        v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 24LL))(v19);
        if ( v2 >= 0 )
          return (unsigned int)v2;
        goto LABEL_43;
      }
    }
    v2 = -2147418113;
    goto LABEL_43;
  }
  v5 = *((_QWORD *)this + 894);
  if ( v5 && !*((_DWORD *)this + 474) )
  {
    if ( (v6 = *((unsigned int *)a2 + 132), !*(_DWORD *)(v5 + 16))
      || (v7 = v6 & 1, v8 = *((_DWORD *)this + 172) & 1, ((v6 & 2) != 0) == ((*((_DWORD *)this + 172) & 2) != 0))
      && (_BYTE)v7 == (_BYTE)v8
      || (LOBYTE(v8) = v6 & 1,
          LOBYTE(v7) = (v6 & 2) != 0,
          v2 = ViewMenuChordedKeyHandler::ChordedKeyStateMachine(v5, v7, v8),
          v2 >= 0) )
    {
      v9 = *((_QWORD *)this + 894);
      if ( *(_BYTE *)(v9 + 73) )
      {
        v10 = *(unsigned int **)(v9 + 48);
        v11 = (unsigned int **)(v9 + 56);
        v12 = 0LL;
        if ( v10 != *(unsigned int **)(v9 + 56) )
        {
          do
          {
            v13 = *v10;
            if ( (((unsigned __int8)v12 ^ *(_BYTE *)v10) & 1) != 0 )
            {
              if ( *((_DWORD *)this + 474) )
                ControllerProcessor::BuildAndSendKeyboardInputInfo(this, 0xCFu, v13 & 1);
              else
                ControllerProcessor::BuildAndSendMouseInputInfo(this, v12, v13, v6);
            }
            ++v10;
            v12 = v13;
          }
          while ( v10 != *v11 );
          v9 = *((_QWORD *)this + 894);
        }
      }
      if ( *(_BYTE *)(v9 + 72) )
        *(_QWORD *)(v9 + 56) = *(_QWORD *)(v9 + 48);
      *(_BYTE *)(v9 + 72) = 0;
    }
  }
  if ( v2 < 0 )
    goto LABEL_43;
  if ( *((_DWORD *)this + 474) )
  {
    updated = ControllerProcessor::SendGamepadAsVirtualKeys(this, v3);
  }
  else
  {
    v2 = ControllerProcessor::SendGamepadAsVirtualKeysForNavigation(this, v3);
    if ( v2 < 0 )
      goto LABEL_43;
    v2 = ControllerProcessor::BuildAndSendMouseInputInfo(
           this,
           *((unsigned int *)this + 172),
           *((unsigned int *)v3 + 132),
           v18);
    if ( v2 < 0 )
    {
      if ( IsDebuggerPresent() )
        __debugbreak();
      RaiseFailFastException(0LL, 0LL, 0);
    }
    if ( v2 < 0 )
      goto LABEL_43;
    if ( !*((_DWORD *)this + 488) )
    {
LABEL_24:
      v15 = (char *)this + 160;
      v16 = 13LL;
      do
      {
        v17 = *(_OWORD *)v3;
        v3 = (struct InputInfo *)((char *)v3 + 128);
        *(_OWORD *)v15 = v17;
        v15 += 128;
        *((_OWORD *)v15 - 7) = *((_OWORD *)v3 - 7);
        *((_OWORD *)v15 - 6) = *((_OWORD *)v3 - 6);
        *((_OWORD *)v15 - 5) = *((_OWORD *)v3 - 5);
        *((_OWORD *)v15 - 4) = *((_OWORD *)v3 - 4);
        *((_OWORD *)v15 - 3) = *((_OWORD *)v3 - 3);
        *((_OWORD *)v15 - 2) = *((_OWORD *)v3 - 2);
        *((_OWORD *)v15 - 1) = *((_OWORD *)v3 - 1);
        --v16;
      }
      while ( v16 );
      *(_OWORD *)v15 = *(_OWORD *)v3;
      *((_OWORD *)v15 + 1) = *((_OWORD *)v3 + 1);
      *((_OWORD *)v15 + 2) = *((_OWORD *)v3 + 2);
      *((_OWORD *)v15 + 3) = *((_OWORD *)v3 + 3);
      *((_QWORD *)v15 + 8) = *((_QWORD *)v3 + 8);
      return (unsigned int)v2;
    }
    updated = ControllerProcessor::UpdatePointerTimer(this, v3);
  }
  v2 = updated;
  if ( updated >= 0 )
    goto LABEL_24;
LABEL_43:
  if ( IsDebuggerPresent() )
    __debugbreak();
  RaiseFailFastException(0LL, 0LL, 0);
  return (unsigned int)v2;
}
