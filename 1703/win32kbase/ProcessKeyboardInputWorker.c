/*
 * XREFs of ProcessKeyboardInputWorker @ 0x1C012FB70
 * Callers:
 *     ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x1C012F2E4 (-MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z.c)
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C0130ED0 (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 * Callees:
 *     InternalMapVirtualKeyEx @ 0x1C0028EF0 (InternalMapVirtualKeyEx.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     xxxProcessKeyEvent @ 0x1C004D210 (xxxProcessKeyEvent.c)
 *     VKFromVSC @ 0x1C0088360 (VKFromVSC.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C0118570 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ?AccessTimeOut@@YAXXZ @ 0x1C01185E0 (-AccessTimeOut@@YAXXZ.c)
 *     ?MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z @ 0x1C012F5D0 (-MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C012F65C (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     ApiSetEditionRawInputRequestedForKeyboard @ 0x1C013C394 (ApiSetEditionRawInputRequestedForKeyboard.c)
 *     ApiSetEditionUserBeep @ 0x1C013CB34 (ApiSetEditionUserBeep.c)
 */

void __fastcall ProcessKeyboardInputWorker(__int64 *a1, struct DEVICEINFO *a2, int a3)
{
  __int64 v3; // rbx
  __int16 v7; // cx
  int v8; // r15d
  int v9; // r12d
  int v10; // eax
  __int16 v11; // cx
  unsigned __int8 v12; // dl
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rsi
  LARGE_INTEGER v22; // rcx
  LARGE_INTEGER v23; // rdi
  LARGE_INTEGER v24; // r8
  unsigned __int8 v25; // r14
  __int64 v26; // rcx
  __int64 v27; // rcx
  char v28; // dl
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rdx
  int v32; // r9d
  unsigned int v33; // r8d
  unsigned int v34; // r8d
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-40h]
  char v36[8]; // [rsp+30h] [rbp-30h] BYREF
  __int16 v37; // [rsp+38h] [rbp-28h] BYREF
  __int16 v38; // [rsp+3Ah] [rbp-26h]
  int v39; // [rsp+3Ch] [rbp-24h]
  __int64 v40; // [rsp+40h] [rbp-20h]
  __int64 v41; // [rsp+48h] [rbp-18h]
  int v42; // [rsp+50h] [rbp-10h]

  v3 = 0LL;
  v7 = *((_WORD *)a1 + 2);
  v8 = 0;
  v9 = 0;
  if ( (v7 & 0x10) != 0 || a2 && (*((_DWORD *)a2 + 46) & 0x1000) != 0 || *(_WORD *)a1 == 0xFFFE )
    v9 = 1;
  if ( a2 )
    v40 = *(_QWORD *)a2;
  else
    v40 = 0LL;
  v10 = *((_DWORD *)a1 + 2);
  v41 = *a1;
  v42 = v10;
  v39 = 0;
  if ( (v7 & 0x28) != 0 )
  {
    if ( (v7 & 8) != 0 )
    {
      if ( (v7 & 0x10) != 0 )
        *((_DWORD *)a1 + 2) |= 0x4000u;
      RemoteSyncToggleKeys(*((_DWORD *)a1 + 2));
    }
    v34 = *((unsigned __int16 *)a1 + 2);
    if ( (v34 & 0x20) != 0 )
    {
      v37 = *((_WORD *)a1 + 1);
      v38 = ((v34 & 1) << 15) | 0x10E7;
      if ( a2 && (*((_DWORD *)a2 + 46) & 0x1000) != 0 )
        v3 = (__int64)a2 + 384;
      v32 = 0;
      v33 = (v34 >> 4) & 1;
      v31 = 0LL;
LABEL_101:
      xxxProcessKeyEvent((struct tagKE *)&v37, v31, v33, v32, v3);
    }
  }
  else
  {
    if ( (gSetLedReceived & 0x8000) != 0 )
      RemoteSyncToggleKeys(gSetLedReceived);
    v11 = *((_WORD *)a1 + 2);
    if ( (v11 & 2) != 0 )
      v12 = -32;
    else
      v12 = (v11 & 4) != 0 ? 0xE1 : 0;
    v36[0] = v12;
    if ( *((_WORD *)a1 + 1) == 255 )
    {
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit();
      ApiSetEditionUserBeep();
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v14, v13, v15);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v17 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v21 = PsGetCurrentThreadWin32Thread(v19, v18, v20);
      if ( v21 )
      {
        v23 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v21 + 8));
        if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
          && (qword_1C0186D80 & 0x200000010000000LL) != 0
          && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
          && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        {
          LOBYTE(v22.LowPart) = byte_1C0186D98 - 1;
          Template_xqx(
            v22.QuadPart,
            &AcquiredExclusiveUserCritEvent,
            v24.QuadPart,
            v23.QuadPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v23.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
          && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
        {
          LODWORD(BugCheckParameter4) = 1000 * v23.QuadPart / gliQpcFreq.QuadPart;
          Template_xqx(
            (__int64)gullUserCritAcquireToken,
            &AcquiredExclusiveUserCritTelemetryEvent,
            v24.QuadPart,
            0LL,
            BugCheckParameter4,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v21 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
      }
      gptiCurrent = v17;
      gbValidateHandleForIL = 1;
      return;
    }
    LOBYTE(v37) = *((_BYTE *)a1 + 2) & 0x7F;
    if ( !a3 || !gpScancodeMap && !gpFlexMap )
    {
LABEL_40:
      gbVKLastDown = VKFromVSC((unsigned __int8 *)&v37, v12);
      v25 = gbVKLastDown;
      if ( gbVKLastDown )
      {
        if ( (unsigned __int8)(gbVKLastDown - 91) <= 1u && (*((_BYTE *)a1 + 4) & 1) == 0 )
        {
          if ( gptiForeground && (v29 = *((_QWORD *)gptiForeground + 49)) != 0 )
            v30 = *(_QWORD *)(*(_QWORD *)(v29 + 48) + 32LL);
          else
            v30 = gpKbdTbl;
          if ( !LScanCode )
            LScanCode = InternalMapVirtualKeyEx(0x4Cu, 0, v30);
          goto LABEL_55;
        }
      }
      else
      {
        if ( gpqForeground )
        {
          v27 = *(_QWORD *)(gpqForeground + 88);
          if ( v27 )
            v26 = *(_QWORD *)(v27 + 16);
          else
            v26 = *(_QWORD *)(gpqForeground + 64);
        }
        else
        {
          v26 = 0LL;
        }
        if ( !(unsigned int)ApiSetEditionRawInputRequestedForKeyboard(v26) )
          return;
        v8 = 1;
      }
      if ( LScanCode )
      {
        if ( *((_WORD *)a1 + 1) == LScanCode )
        {
          v25 = 76;
          gbVKLastDown = 76;
          v38 = 76;
        }
        if ( (gfsSASModifiersDown & 8) == 0 )
          goto LABEL_54;
        if ( (*((_BYTE *)a1 + 4) & 1) == 0 )
          goto LABEL_57;
        if ( (unsigned __int8)(v25 - 91) <= 1u )
LABEL_54:
          LScanCode = 0;
      }
LABEL_55:
      if ( (*((_BYTE *)a1 + 4) & 1) != 0 )
        v38 |= 0x8000u;
LABEL_57:
      if ( (unsigned int)IsRemoteConnection() && (unsigned __int8)(v38 - 91) <= 1u && !gfEnableWindowsKey )
        return;
      if ( v25 == 91 )
      {
        v28 = 64;
      }
      else
      {
        if ( v25 == 92 )
        {
          v28 = 0x80;
          gCurrentModifierBit = 0x80;
LABEL_76:
          if ( (*((_BYTE *)a1 + 4) & 1) != 0 )
            gPhysModifierState &= ~v28;
          else
            gPhysModifierState |= v28;
LABEL_79:
          if ( v25 == 13 && (*((_BYTE *)a1 + 4) & 1) == 0 )
            PoLatencySensitivityHint(1LL);
          if ( (gdwPUDFlags & 0x100) != 0 )
          {
            AccessTimeOut();
            if ( !(unsigned int)AccessProceduresStream((struct tagKE *)&v37, *((_DWORD *)a1 + 2), 0) )
              return;
            if ( a2 && (*((_DWORD *)a2 + 46) & 0x1000) != 0 )
              v3 = (__int64)a2 + 384;
            v32 = v8;
            v31 = *((unsigned int *)a1 + 2);
            v33 = (*((unsigned __int16 *)a1 + 2) >> 4) & 1;
          }
          else
          {
            if ( a2 && (*((_DWORD *)a2 + 46) & 0x1000) != 0 )
              v3 = (__int64)a2 + 384;
            v31 = *((unsigned int *)a1 + 2);
            v32 = v8;
            v33 = v9;
          }
          goto LABEL_101;
        }
        if ( (unsigned __int8)(v25 + 96) > 5u )
        {
          gCurrentModifierBit = 0;
          goto LABEL_79;
        }
        v28 = 1 << (v25 & 0xF);
      }
      gCurrentModifierBit = v28;
      if ( !v28 )
        goto LABEL_79;
      goto LABEL_76;
    }
    v38 = 0;
    if ( (v11 & 1) != 0 )
      v38 = 0x8000;
    if ( (unsigned int)MapScancode((struct tagKE *)&v37, v36, a2) )
    {
      v12 = v36[0];
      goto LABEL_40;
    }
  }
}
