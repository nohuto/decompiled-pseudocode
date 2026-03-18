/*
 * XREFs of xxxDoHotKeyStuff @ 0x1C00F9E80
 * Callers:
 *     EditionDoHotKeys @ 0x1C00F9E30 (EditionDoHotKeys.c)
 * Callees:
 *     DoExplorerHangDetection @ 0x1C000C474 (DoExplorerHangDetection.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _PostThreadMessageEx @ 0x1C009E6C0 (_PostThreadMessageEx.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00AB4B0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     IsMouseInPointerActive @ 0x1C00CF7DC (IsMouseInPointerActive.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00E1100 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     IsUninterceptable @ 0x1C00F9DFC (IsUninterceptable.c)
 *     ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1C00FA340 (-TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z.c)
 *     IsHotKey @ 0x1C00FA3CC (IsHotKey.c)
 *     IsSAS @ 0x1C00FA4E0 (IsSAS.c)
 *     HasRawInputForegroundTarget @ 0x1C00FA77C (HasRawInputForegroundTarget.c)
 *     zzzCancelJournalling @ 0x1C011A924 (zzzCancelJournalling.c)
 *     _SetMagnificationInputTransform @ 0x1C01231AC (_SetMagnificationInputTransform.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?TraceLoggingSuppressQuickLaunch@@YAXXZ @ 0x1C01A3654 (-TraceLoggingSuppressQuickLaunch@@YAXXZ.c)
 *     ?TraceLoggingYieldedHotkey@@YAXII@Z @ 0x1C01A396C (-TraceLoggingYieldedHotkey@@YAXII@Z.c)
 *     ?DeviceHasAQuickLaunchPen@@YAHXZ @ 0x1C01C6A2C (-DeviceHasAQuickLaunchPen@@YAHXZ.c)
 *     ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C01C6D00 (-HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z.c)
 *     ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x1C01C6E80 (-xxxHandleVolumeUpDownCombo@@YAXXZ.c)
 *     xxxActivateDebugger @ 0x1C0212DFC (xxxActivateDebugger.c)
 */

__int64 __fastcall xxxDoHotKeyStuff(struct tagHOTKEY *a1, int a2, int a3, struct tagINPUT_MESSAGE_SOURCE *a4)
{
  unsigned int v4; // ebp
  __int64 v7; // rcx
  unsigned int v8; // ebx
  unsigned int v9; // esi
  ULONG NumberOfMapRegisters; // edi
  int v11; // r15d
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  ULONG v18; // eax
  __int16 v19; // r14
  int v20; // eax
  __int16 v21; // r14
  __int64 v22; // rsi
  int v23; // r15d
  void (__fastcall *v24)(_QWORD, _QWORD); // r12
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // r9
  struct tagINPUT_MESSAGE_SOURCE *v28; // rdi
  struct tagTHREADINFO *v29; // rdx
  __int64 v30; // rax
  struct _LARGE_STRING *v31; // r9
  __int64 v32; // rcx
  bool v33; // zf
  bool v34; // zf
  __int64 v35; // rdx
  LARGE_INTEGER *v36; // rsi
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  _QWORD *i; // rax
  int v43; // [rsp+20h] [rbp-B8h]
  int v44; // [rsp+28h] [rbp-B0h]
  _BYTE v45[8]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v46[3]; // [rsp+48h] [rbp-90h] BYREF
  _BYTE v47[8]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v48; // [rsp+68h] [rbp-70h]
  _DWORD v49[24]; // [rsp+78h] [rbp-60h] BYREF
  ULONG v50; // [rsp+E0h] [rbp+8h]

  v4 = (unsigned int)a1;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v45);
  v8 = 0;
  v50 = 0;
  v9 = 0;
  NumberOfMapRegisters = 0;
  switch ( v4 )
  {
    case 0x10u:
      v9 = 4;
      break;
    case 0x11u:
      v9 = 2;
      break;
    case 0x12u:
      v9 = 1;
      break;
    default:
      if ( v4 <= 0x5A || v4 > 0x5C )
        WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = 0;
      else
        v9 = 8;
      break;
  }
  if ( a2 )
  {
    *(&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 1) &= ~v9;
    if ( v9 )
    {
      NumberOfMapRegisters = WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
      v50 = WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
      WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = 0;
    }
    if ( qword_1C0327628 )
      qword_1C0327628 = 0LL;
  }
  else
  {
    v18 = v9 | *(&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 1);
    *(&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 1) |= v9;
    if ( v9 )
      WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = v18;
  }
  LOBYTE(v7) = v4;
  v11 = IsSAS(v7, &WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 1);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v45);
  if ( v4 == 174 )
  {
    if ( a2 )
    {
LABEL_84:
      gbVolumeDownPressed = 0;
      goto LABEL_13;
    }
    if ( !gbVolumeUpPressed )
    {
      gbVolumeDownPressed = 1;
      goto LABEL_13;
    }
    xxxHandleVolumeUpDownCombo();
LABEL_81:
    gbVolumeUpPressed = 0;
    goto LABEL_13;
  }
  if ( v4 != 175 )
    goto LABEL_13;
  if ( a2 )
    goto LABEL_81;
  if ( gbVolumeDownPressed )
  {
    xxxHandleVolumeUpDownCombo();
    goto LABEL_84;
  }
  gbVolumeUpPressed = 1;
LABEL_13:
  if ( !v11 && (gfInNumpadHexInput & 1) != 0 )
    return 0LL;
  if ( NumberOfMapRegisters && a2 )
  {
    v12 = IsHotKey(NumberOfMapRegisters);
  }
  else
  {
    v12 = IsHotKey(*(&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 1));
    if ( !v12 || !v11 )
    {
      v13 = IsUninterceptable();
      if ( v13 )
        v12 = v13;
    }
  }
  if ( v12 && gbLockScreenActive && !v11 && (*(_WORD *)(v12 + 26) & 0x2000) == 0 )
    return 0LL;
  WindowArrangementSequence::TestSequence(
    (WindowArrangementSequence *)v12,
    (const struct tagHOTKEY *const)v4,
    v9,
    *(&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 1),
    a2 == 0,
    v44);
  if ( !v12 )
    return 0LL;
  v19 = *(_WORD *)(v12 + 26);
  if ( v19 < 0 && !v11 )
    return 0LL;
  if ( (v19 & 0x8800) == 0
    && (unsigned int)HasRawInputForegroundTarget(v47)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v48 + 400) + 784LL) + 100LL) & 0x200) != 0 )
  {
    return 0LL;
  }
  v20 = *(_DWORD *)(v12 + 32);
  if ( v20 == -7 )
  {
    v22 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 160LL);
    if ( v22 )
    {
      WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = 0;
      goto LABEL_58;
    }
  }
  else if ( (unsigned int)(v20 + 6) <= 1 )
  {
    if ( !a2 )
      return (unsigned int)xxxActivateDebugger(*(unsigned __int16 *)(v12 + 24));
    return v8;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 32LL) & 1) != 0
    && *(PVOID *)(*(_QWORD *)v12 + 432LL) != grpdeskLogon
    && !*(_QWORD *)(v12 + 8)
    && gbLockScreenActive
    && (v19 & 0x2000) == 0
    || !v50 && a2 )
  {
    return 0LL;
  }
  if ( v11 || v4 == 27 && *(&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 1) == 2 )
  {
    zzzCancelJournalling();
    if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 216LL) )
    {
      memset(v49, 0, 0x24uLL);
      v49[8] = 3;
      SetMagnificationInputTransform(v49);
    }
    if ( (gdwMitConfig & 1) != 0 )
    {
      CancelCapturedMipOverride();
    }
    else if ( gspwndMouseOwner && IsMouseInPointerActive(*(_QWORD *)(gspwndMouseOwner + 16LL), 0LL) )
    {
      *(_QWORD *)(*(_QWORD *)(v32 + 408) + 432LL) = 0LL;
    }
  }
  if ( a3 )
  {
    switch ( v4 )
    {
      case 9u:
        v34 = (a3 & 1) == 0;
        break;
      case 0xDu:
        v34 = (a3 & 8) == 0;
        break;
      case 0x1Bu:
        if ( (a3 & 2) != 0 && (*(_BYTE *)(&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 1) & 3) == 1 )
          return 0LL;
        if ( (a3 & 0x40) == 0 )
          goto LABEL_42;
        v33 = (*(_BYTE *)(&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 1) & 3) == 2;
        goto LABEL_125;
      case 0x20u:
        v34 = (a3 & 4) == 0;
        break;
      case 0x2Cu:
        v14 = *(_BYTE *)(&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 1) & 3;
        if ( (*(_BYTE *)(&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 1) & 3) == 0 && (a3 & 0x20) != 0 )
          return 0LL;
        if ( (a3 & 0x10) == 0 )
          goto LABEL_42;
        v33 = (_DWORD)v14 == 1;
LABEL_125:
        if ( !v33 )
          goto LABEL_42;
        return 0LL;
      default:
        goto LABEL_42;
    }
    if ( v34 )
      goto LABEL_42;
    v33 = (*(_BYTE *)(&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 1) & 3) == 1;
    goto LABEL_125;
  }
LABEL_42:
  if ( *(&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 1) == 2 && v4 == 27 && !a2 )
  {
    if ( ghwndSwitch )
    {
      LOBYTE(v14) = 1;
      v36 = (LARGE_INTEGER *)HMValidateHandleNoSecure(ghwndSwitch, v14, v15, v16);
      if ( v36 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v37, v38);
        v46[0] = *(_QWORD *)(ThreadWin32Thread + 392);
        *(_QWORD *)(ThreadWin32Thread + 392) = v46;
        v46[1] = v36;
        _InterlockedIncrement((volatile signed __int32 *)&v36[1]);
        xxxSetForegroundWindow2(v36, 0LL, 0, 0);
        ThreadUnlock1(v41, v40);
      }
    }
  }
  if ( (*(_WORD *)(v12 + 26) & 0x1000) == 0 )
  {
    if ( v4 - 129 <= 2 )
    {
      wil_details_FeaturePropertyCache_ReportUsageToService(
        (__int64)&Feature_QuickLaunchInvocation__private_propertyCache,
        9100606LL,
        (const struct FEATURE_LOGGED_TRAITS *)&unk_1C02EAAC0,
        1,
        v43);
      if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                              * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                            - RIMGetLastInvertedPenTime()) < 0xFA )
      {
        if ( (unsigned int)DeviceHasAQuickLaunchPen() )
        {
          TraceLoggingSuppressQuickLaunch();
          return 0LL;
        }
      }
    }
    v21 = *(_WORD *)(v12 + 26);
    v22 = *(_QWORD *)(v12 + 16);
    v23 = *(_DWORD *)(v12 + 32);
    v24 = *(void (__fastcall **)(_QWORD, _QWORD))(v12 + 8);
    v25 = *(_QWORD *)v12;
    if ( (HIDWORD(gpdwCPUserPreferencesMask) & 0x200) == 0
      && (v21 & 0x200) != 0
      && gpqForeground
      && *(_QWORD *)(gpqForeground + 120LL) )
    {
      for ( i = *(_QWORD **)(v12 + 48); i != (_QWORD *)(v12 + 48); i = (_QWORD *)*i )
      {
        if ( *(_QWORD *)(*(i - 3) + 408LL) == gpqForeground )
        {
          v24 = 0LL;
          v25 = *(i - 3);
          v22 = *(i - 2);
          v23 = *((_DWORD *)i - 1);
          v21 = *((_WORD *)i - 4);
          TraceLoggingYieldedHotkey(*(unsigned __int16 *)(v12 + 24), *(_DWORD *)(v12 + 28));
          break;
        }
      }
    }
    if ( (v21 & 0x100) != 0 )
      goto LABEL_62;
    if ( !v22 )
    {
      v26 = qword_1C0327628;
      v27 = *((unsigned __int16 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 2) | ((unsigned __int16)v4 << 16);
      if ( v24 )
      {
        if ( (v21 & 0x4000) == 0 || v27 != qword_1C0327628 )
        {
          if ( qword_1C0327628 != v27 )
            v26 = *((unsigned __int16 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 2) | ((unsigned __int16)v4 << 16);
          qword_1C0327628 = v26;
          v24(
            v23,
            *((unsigned __int16 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 2) | ((unsigned __int16)v4 << 16));
        }
        goto LABEL_62;
      }
      if ( (v21 & 0x4000) != 0 && v27 == qword_1C0327628 )
      {
        v28 = a4;
      }
      else
      {
        v28 = a4;
        if ( qword_1C0327628 != v27 )
          v26 = *((unsigned __int16 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 2) | ((unsigned __int16)v4 << 16);
        qword_1C0327628 = v26;
        PostThreadMessageEx(v25, 786LL, v23, v27, (__int64)a4);
      }
      v29 = (struct tagTHREADINFO *)v25;
LABEL_61:
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, v29, *((_DWORD *)v28 + 1) == 1);
LABEL_62:
      if ( (*(_BYTE *)(&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 1) & 8) != 0 && v4 - 129 <= 2 )
        ZwUpdateWnfStateData(&WNF_ISM_INPUT_UPDATE_AFTER_TRACK_INTERVAL, 0LL, 0LL, 0LL, gSessionId, 0, 0);
      LOBYTE(v8) = v50 == 0;
      return v8;
    }
    if ( v22 == 1 )
    {
      if ( !gpqForeground )
        return 0LL;
      v22 = *(_QWORD *)(gpqForeground + 112LL);
    }
    if ( !v22 )
      goto LABEL_62;
    if ( v22 != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 24) + 8LL) + 160LL) || v23 != 61744 )
    {
      v30 = qword_1C0327628;
      v31 = (struct _LARGE_STRING *)(*((unsigned __int16 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 2) | ((unsigned __int16)v4 << 16));
      if ( (v21 & 0x4000) != 0 && v31 == (struct _LARGE_STRING *)qword_1C0327628 )
      {
        v28 = a4;
      }
      else
      {
        v28 = a4;
        if ( (struct _LARGE_STRING *)qword_1C0327628 != v31 )
          v30 = *((unsigned __int16 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 2) | ((unsigned __int16)v4 << 16);
        qword_1C0327628 = v30;
        _PostTransformableMessageExtended(v22, 786LL, v23, v31, a4, 1);
      }
      goto LABEL_60;
    }
LABEL_58:
    DoExplorerHangDetection(*(struct tagDESKTOP **)(v22 + 24));
    PostMessage(v22, 274LL, 0xF130uLL, 0LL);
    v28 = a4;
    if ( qword_1C0327628 )
      qword_1C0327628 = 0LL;
LABEL_60:
    v29 = *(struct tagTHREADINFO **)(v22 + 16);
    goto LABEL_61;
  }
  return HandleIAMHotKey((const struct tagHOTKEY *const)v12);
}
