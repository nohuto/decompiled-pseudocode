/*
 * XREFs of ProcessKeyboardInputWorker @ 0x1C012F200
 * Callers:
 *     ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x1C012E988 (-MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z.c)
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C0130668 (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 * Callees:
 *     VKFromVSC @ 0x1C000FE60 (VKFromVSC.c)
 *     xxxProcessKeyEvent @ 0x1C00103E0 (xxxProcessKeyEvent.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     InternalMapVirtualKeyEx @ 0x1C00582A0 (InternalMapVirtualKeyEx.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C0117400 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ?AccessTimeOut@@YAXXZ @ 0x1C0117470 (-AccessTimeOut@@YAXXZ.c)
 *     ?MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z @ 0x1C012EC70 (-MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C012ECFC (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     ApiSetEditionRawInputRequestedForKeyboard @ 0x1C013B5BC (ApiSetEditionRawInputRequestedForKeyboard.c)
 *     ApiSetEditionUserBeep @ 0x1C013BDF0 (ApiSetEditionUserBeep.c)
 */

void __fastcall ProcessKeyboardInputWorker(__int64 *a1, struct DEVICEINFO *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  int v7; // r14d
  unsigned __int16 v8; // cx
  int v9; // r12d
  int v10; // r13d
  __int64 v11; // rdx
  int v12; // eax
  __int16 v13; // cx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 *v24; // rsi
  __int64 *DomainLockRef; // rbx
  unsigned __int8 v26; // r14
  __int64 v27; // rcx
  __int64 v28; // rcx
  char v29; // dl
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rdx
  int v33; // r9d
  unsigned int v34; // r8d
  unsigned int v35; // r8d
  char v36[8]; // [rsp+30h] [rbp-40h] BYREF
  tagObjLock *v37; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int16 v38; // [rsp+40h] [rbp-30h] BYREF
  __int16 v39; // [rsp+42h] [rbp-2Eh]
  int v40; // [rsp+44h] [rbp-2Ch]
  __int64 v41; // [rsp+48h] [rbp-28h]
  __int64 v42; // [rsp+50h] [rbp-20h]
  int v43; // [rsp+58h] [rbp-18h]

  v4 = 0LL;
  v7 = a3;
  v8 = *((_WORD *)a1 + 2);
  v9 = 0;
  v11 = v8;
  v10 = 0;
  LOWORD(v11) = v8 & 0x10;
  if ( (v8 & 0x10) != 0 || a2 && (*((_DWORD *)a2 + 46) & 0x1000) != 0 || *(_WORD *)a1 == 0xFFFE )
    v10 = 1;
  if ( a2 )
    v41 = *(_QWORD *)a2;
  else
    v41 = 0LL;
  v12 = *((_DWORD *)a1 + 2);
  v42 = *a1;
  v43 = v12;
  v40 = 0;
  if ( (v8 & 0x28) != 0 )
  {
    if ( (v8 & 8) != 0 )
    {
      if ( (v8 & 0x10) != 0 )
        *((_DWORD *)a1 + 2) |= 0x4000u;
      RemoteSyncToggleKeys(*((_DWORD *)a1 + 2));
    }
    v35 = *((unsigned __int16 *)a1 + 2);
    if ( (v35 & 0x20) != 0 )
    {
      v38 = *((_WORD *)a1 + 1);
      v39 = ((_WORD)v35 << 15) | 0x10E7;
      if ( a2 && (*((_DWORD *)a2 + 46) & 0x1000) != 0 )
        v4 = (__int64)a2 + 384;
      v33 = 0;
      v34 = (v35 >> 4) & 1;
      v32 = 0LL;
LABEL_93:
      xxxProcessKeyEvent(&v38, v32, v34, v33, v4);
    }
  }
  else
  {
    if ( (gSetLedReceived & 0x8000) != 0 )
      RemoteSyncToggleKeys(gSetLedReceived);
    v13 = *((_WORD *)a1 + 2);
    if ( (v13 & 2) != 0 )
      LOBYTE(v11) = -32;
    else
      LOBYTE(v11) = (v13 & 4) != 0 ? 0xE1 : 0;
    v36[0] = v11;
    if ( *((_WORD *)a1 + 1) == 255 )
    {
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, v11, a3, a4);
      ApiSetEditionUserBeep();
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v15, v14, v16, v17);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v19 = EnterCritAvoidingDitHitTestHazard(0, 1);
      EtwTraceAcquiredExclusiveUserCrit(v21, v20, v22, v23);
      gptiCurrent = v19;
      gbValidateHandleForIL = 1;
      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v37);
      v24 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        DomainLockRef = GetDomainLockRef(8);
        do
        {
          gpducstulHead = v24[2];
          v24[2] = 0LL;
          tagObjLock::UnLock((tagObjLock *)DomainLockRef);
          HMUnlockObject(*v24);
          RIMLockExclusive((__int64)DomainLockRef);
          v24 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
      }
      tagObjLock::UnLock(v37);
      return;
    }
    LOBYTE(v38) = *((_BYTE *)a1 + 2) & 0x7F;
    if ( !v7 || !gpScancodeMap && !gpFlexMap )
    {
LABEL_32:
      gbVKLastDown = VKFromVSC((unsigned __int8 *)&v38, v11);
      v26 = gbVKLastDown;
      if ( gbVKLastDown )
      {
        if ( (unsigned __int8)(gbVKLastDown - 91) <= 1u && (*((_BYTE *)a1 + 4) & 1) == 0 )
        {
          if ( gptiForeground && (v30 = *((_QWORD *)gptiForeground + 52)) != 0 )
            v31 = *(_QWORD *)(*(_QWORD *)(v30 + 48) + 32LL);
          else
            v31 = gpKbdTbl;
          if ( !LScanCode )
            LScanCode = InternalMapVirtualKeyEx(0x4Cu, 0, v31);
          goto LABEL_47;
        }
      }
      else
      {
        if ( gpqForeground )
        {
          v28 = *(_QWORD *)(gpqForeground + 120);
          if ( v28 )
            v27 = *(_QWORD *)(v28 + 16);
          else
            v27 = *(_QWORD *)(gpqForeground + 96);
        }
        else
        {
          v27 = 0LL;
        }
        if ( !(unsigned int)ApiSetEditionRawInputRequestedForKeyboard(v27) )
          return;
        v9 = 1;
      }
      if ( LScanCode )
      {
        if ( *((_WORD *)a1 + 1) == LScanCode )
        {
          v26 = 76;
          gbVKLastDown = 76;
          v39 = 76;
        }
        if ( (gfsSASModifiersDown & 8) == 0 )
          goto LABEL_46;
        if ( (*((_BYTE *)a1 + 4) & 1) == 0 )
          goto LABEL_49;
        if ( (unsigned __int8)(v26 - 91) <= 1u )
LABEL_46:
          LScanCode = 0;
      }
LABEL_47:
      if ( (*((_BYTE *)a1 + 4) & 1) != 0 )
        v39 |= 0x8000u;
LABEL_49:
      if ( (unsigned int)IsRemoteConnection() && (unsigned __int8)(v39 - 91) <= 1u && !gfEnableWindowsKey )
        return;
      if ( v26 == 91 )
      {
        v29 = 64;
      }
      else
      {
        if ( v26 == 92 )
        {
          v29 = 0x80;
          gCurrentModifierBit = 0x80;
LABEL_68:
          if ( (*((_BYTE *)a1 + 4) & 1) != 0 )
            gPhysModifierState &= ~v29;
          else
            gPhysModifierState |= v29;
LABEL_71:
          if ( v26 == 13 && (*((_BYTE *)a1 + 4) & 1) == 0 )
            PoLatencySensitivityHint(1LL);
          if ( (gdwPUDFlags & 0x100) != 0 )
          {
            AccessTimeOut();
            if ( !(unsigned int)AccessProceduresStream((struct tagKE *)&v38, *((_DWORD *)a1 + 2), 0) )
              return;
            if ( a2 && (*((_DWORD *)a2 + 46) & 0x1000) != 0 )
              v4 = (__int64)a2 + 384;
            v33 = v9;
            v32 = *((unsigned int *)a1 + 2);
            v34 = (*((unsigned __int16 *)a1 + 2) >> 4) & 1;
          }
          else
          {
            if ( a2 && (*((_DWORD *)a2 + 46) & 0x1000) != 0 )
              v4 = (__int64)a2 + 384;
            v32 = *((unsigned int *)a1 + 2);
            v33 = v9;
            v34 = v10;
          }
          goto LABEL_93;
        }
        if ( (unsigned __int8)(v26 + 96) > 5u )
        {
          gCurrentModifierBit = 0;
          goto LABEL_71;
        }
        v29 = 1 << (v26 & 0xF);
      }
      gCurrentModifierBit = v29;
      if ( !v29 )
        goto LABEL_71;
      goto LABEL_68;
    }
    v39 = 0;
    if ( (v13 & 1) != 0 )
      v39 = 0x8000;
    if ( (unsigned int)MapScancode((struct tagKE *)&v38, v36, a2) )
    {
      LOBYTE(v11) = v36[0];
      goto LABEL_32;
    }
  }
}
