/*
 * XREFs of xxxDoHotKeyStuff @ 0x1C00EF9D0
 * Callers:
 *     EditionDoHotKeys @ 0x1C00EF980 (EditionDoHotKeys.c)
 * Callees:
 *     DoExplorerHangDetection @ 0x1C0006F5C (DoExplorerHangDetection.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0055300 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _SetMagnificationInputTransform @ 0x1C00A236C (_SetMagnificationInputTransform.c)
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     HasRawInputForegroundTarget @ 0x1C00CB37C (HasRawInputForegroundTarget.c)
 *     _PostThreadMessageEx @ 0x1C00CBC7C (_PostThreadMessageEx.c)
 *     IsMouseInPointerActive @ 0x1C00CCE6C (IsMouseInPointerActive.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00DA6BC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     IsUninterceptable @ 0x1C00EF944 (IsUninterceptable.c)
 *     ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1C00EFE34 (-TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z.c)
 *     IsHotKey @ 0x1C00EFEC0 (IsHotKey.c)
 *     IsSAS @ 0x1C00EFFC8 (IsSAS.c)
 *     zzzCancelJournalling @ 0x1C0110594 (zzzCancelJournalling.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?TraceLoggingSuppressQuickLaunch@@YAXXZ @ 0x1C0197BA4 (-TraceLoggingSuppressQuickLaunch@@YAXXZ.c)
 *     ?DeviceHasAQuickLaunchPen@@YAHXZ @ 0x1C01C48BC (-DeviceHasAQuickLaunchPen@@YAHXZ.c)
 *     ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C01C499C (-HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z.c)
 *     ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x1C01C4B1C (-xxxHandleVolumeUpDownCombo@@YAXXZ.c)
 *     xxxActivateDebugger @ 0x1C02118E8 (xxxActivateDebugger.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxDoHotKeyStuff(struct tagHOTKEY *a1, int a2, int a3, DWORD *a4)
{
  unsigned int v4; // ebp
  __int64 v7; // rcx
  unsigned int v8; // ebx
  unsigned int v9; // esi
  unsigned int DeviceObject; // edi
  int v11; // r15d
  __int64 v12; // rdi
  __int64 v13; // rax
  int v15; // eax
  __int16 v16; // r14
  int v17; // edx
  int v18; // r14d
  int DeviceObject_high; // edx
  __int64 v20; // rsi
  struct _LARGE_STRING *v21; // r9
  __int64 v22; // rcx
  DWORD *v23; // rbp
  __int64 v24; // r8
  struct tagTHREADINFO *v25; // rdx
  void (__fastcall *v26)(_QWORD, __int64); // r8
  LARGE_INTEGER v27; // r9
  __int64 QuadPart; // rcx
  LARGE_INTEGER v29; // r8
  _QWORD *v30; // rsi
  bool v31; // zf
  bool v32; // zf
  LARGE_INTEGER *v33; // r10
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  int v37; // [rsp+20h] [rbp-A8h]
  int v38; // [rsp+28h] [rbp-A0h]
  _BYTE v39[8]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v40[3]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v41[3]; // [rsp+50h] [rbp-78h] BYREF
  __int128 v42[6]; // [rsp+68h] [rbp-60h] BYREF
  int v43; // [rsp+D0h] [rbp+8h]

  v4 = (unsigned int)a1;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v39);
  v8 = 0;
  v43 = 0;
  v9 = 0;
  DeviceObject = 0;
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
        LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject) = 0;
      else
        v9 = 8;
      break;
  }
  if ( a2 )
  {
    HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject) &= ~v9;
    if ( v9 )
    {
      DeviceObject = (unsigned int)WPP_MAIN_CB.Queue.Wcb.DeviceObject;
      v43 = (int)WPP_MAIN_CB.Queue.Wcb.DeviceObject;
      LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject) = 0;
    }
    if ( qword_1C032C3A8 )
      qword_1C032C3A8 = 0LL;
  }
  else
  {
    v15 = v9 | HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject) |= v9;
    if ( v9 )
      LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject) = v15;
  }
  LOBYTE(v7) = v4;
  v11 = IsSAS(v7, (char *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject + 4);
  if ( !v39[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v39);
  }
  if ( v4 == 174 )
  {
    if ( a2 )
    {
LABEL_81:
      gbVolumeDownPressed = 0;
      goto LABEL_15;
    }
    if ( !gbVolumeUpPressed )
    {
      gbVolumeDownPressed = 1;
      goto LABEL_15;
    }
    xxxHandleVolumeUpDownCombo();
LABEL_78:
    gbVolumeUpPressed = 0;
    goto LABEL_15;
  }
  if ( v4 != 175 )
    goto LABEL_15;
  if ( a2 )
    goto LABEL_78;
  if ( gbVolumeDownPressed )
  {
    xxxHandleVolumeUpDownCombo();
    goto LABEL_81;
  }
  gbVolumeUpPressed = 1;
LABEL_15:
  if ( !v11 && (gfInNumpadHexInput & 1) != 0 )
    return 0LL;
  if ( DeviceObject && a2 )
  {
    v12 = IsHotKey(DeviceObject);
  }
  else
  {
    v12 = IsHotKey(HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject));
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
    HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject),
    a2 == 0,
    v38);
  if ( !v12 )
    return 0LL;
  v16 = *(_WORD *)(v12 + 26);
  if ( v16 < 0 && !v11 )
    return 0LL;
  if ( (v16 & 0x8800) == 0
    && (unsigned int)HasRawInputForegroundTarget(v41)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v41[1] + 376LL) + 776LL) + 100LL) & 0x200) != 0 )
  {
    return 0LL;
  }
  v17 = *(_DWORD *)(v12 + 32);
  if ( v17 == -7 )
  {
    v20 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 160LL);
    if ( v20 )
    {
      v18 = v43;
      LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject) = 0;
      goto LABEL_67;
    }
  }
  if ( (unsigned int)(v17 + 6) <= 1 )
  {
    if ( !a2 )
      return (unsigned int)xxxActivateDebugger(*(unsigned __int16 *)(v12 + 24));
    return v8;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 32LL) & 1) != 0
    && *(PVOID *)(*(_QWORD *)v12 + 408LL) != grpdeskLogon
    && !*(_QWORD *)(v12 + 8)
    && gbLockScreenActive
    && (v16 & 0x2000) == 0 )
  {
    return 0LL;
  }
  v18 = v43;
  if ( !v43 )
  {
    if ( a2 )
      return 0LL;
  }
  if ( v11 )
    goto LABEL_98;
  if ( v4 != 27 )
  {
LABEL_43:
    DeviceObject_high = HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    goto LABEL_44;
  }
  DeviceObject_high = HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject) == 2 )
  {
LABEL_98:
    zzzCancelJournalling();
    if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 216LL) )
    {
      memset(v42, 0, 0x24uLL);
      LODWORD(v42[2]) = 3;
      SetMagnificationInputTransform(v42);
    }
    if ( (gdwMitConfig & 1) != 0 )
    {
      CancelCapturedMipOverride();
    }
    else if ( gspwndMouseOwner )
    {
      v30 = *(_QWORD **)(gspwndMouseOwner + 16LL);
      if ( IsMouseInPointerActive(v30, 0LL) )
        *(_QWORD *)(v30[48] + 392LL) = 0LL;
    }
    goto LABEL_43;
  }
LABEL_44:
  if ( !a3 )
    goto LABEL_45;
  switch ( v4 )
  {
    case 9u:
      v32 = (a3 & 1) == 0;
      goto LABEL_120;
    case 0xDu:
      v32 = (a3 & 8) == 0;
      goto LABEL_120;
    case 0x1Bu:
      if ( (a3 & 2) != 0 && (DeviceObject_high & 3) == 1 )
        return 0LL;
      if ( (a3 & 0x40) == 0 )
        break;
      v31 = (DeviceObject_high & 3) == 2;
      goto LABEL_122;
    case 0x20u:
      v32 = (a3 & 4) == 0;
LABEL_120:
      if ( v32 )
        break;
      v31 = (DeviceObject_high & 3) == 1;
      goto LABEL_122;
    case 0x2Cu:
      if ( (DeviceObject_high & 3) == 0 && (a3 & 0x20) != 0 )
        return 0LL;
      if ( (a3 & 0x10) != 0 )
      {
        v31 = (DeviceObject_high & 3) == 1;
LABEL_122:
        if ( v31 )
          return 0LL;
      }
      break;
  }
LABEL_45:
  if ( DeviceObject_high == 2 && v4 == 27 && !a2 && ghwndSwitch )
  {
    v33 = (LARGE_INTEGER *)HMValidateHandleNoSecure(ghwndSwitch, 1);
    if ( v33 )
    {
      v40[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v40;
      v40[1] = v33;
      ++v33[1].LowPart;
      xxxSetForegroundWindow2(v33, 0LL, 0, 0);
      ThreadUnlock1(v35, v34);
    }
    LOWORD(DeviceObject_high) = WORD2(WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  }
  if ( (*(_WORD *)(v12 + 26) & 0x1000) == 0 )
  {
    if ( v4 - 129 <= 2 )
    {
      wil_details_FeaturePropertyCache_ReportUsageToService(
        (__int64)&Feature_QuickLaunchInvocation__private_propertyCache,
        9100606LL,
        (const struct FEATURE_LOGGED_TRAITS *)&unk_1C02EDF88,
        1,
        v37);
      if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                              * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                            - RIMGetLastInvertedPenTime()) < 0xFA
        && (unsigned int)DeviceHasAQuickLaunchPen() )
      {
        TraceLoggingSuppressQuickLaunch();
        return 0LL;
      }
      LOWORD(DeviceObject_high) = WORD2(WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    }
    v20 = *(_QWORD *)(v12 + 16);
    if ( !v20 )
    {
      v26 = *(void (__fastcall **)(_QWORD, __int64))(v12 + 8);
      v27.QuadPart = (unsigned __int16)DeviceObject_high | ((unsigned __int16)v4 << 16);
      QuadPart = qword_1C032C3A8;
      if ( v26 )
      {
        if ( (*(_WORD *)(v12 + 26) & 0x4000) == 0 || v27.QuadPart != qword_1C032C3A8 )
        {
          v36 = (unsigned __int16)DeviceObject_high | ((unsigned __int16)v4 << 16);
          if ( qword_1C032C3A8 != v27.QuadPart )
            QuadPart = v27.QuadPart;
          qword_1C032C3A8 = QuadPart;
          v26(*(int *)(v12 + 32), v36);
        }
        goto LABEL_59;
      }
      if ( (*(_WORD *)(v12 + 26) & 0x4000) != 0 && v27.QuadPart == qword_1C032C3A8 )
      {
        v23 = a4;
      }
      else
      {
        v23 = a4;
        v29.QuadPart = *(int *)(v12 + 32);
        if ( qword_1C032C3A8 != v27.QuadPart )
          QuadPart = v27.QuadPart;
        qword_1C032C3A8 = QuadPart;
        PostThreadMessageEx(*(_QWORD *)v12, 0x312u, v29, v27, a4);
      }
      v25 = *(struct tagTHREADINFO **)v12;
      goto LABEL_58;
    }
    if ( v20 != 1 )
    {
LABEL_50:
      if ( !v20 )
      {
LABEL_59:
        LOBYTE(v8) = v18 == 0;
        return v8;
      }
      if ( v20 != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 24) + 8LL) + 160LL) || *(_DWORD *)(v12 + 32) != 61744 )
      {
        v21 = (struct _LARGE_STRING *)((unsigned __int16)DeviceObject_high | ((unsigned __int16)v4 << 16));
        v22 = qword_1C032C3A8;
        if ( (*(_WORD *)(v12 + 26) & 0x4000) != 0 && v21 == (struct _LARGE_STRING *)qword_1C032C3A8 )
        {
          v23 = a4;
        }
        else
        {
          v23 = a4;
          v24 = *(int *)(v12 + 32);
          if ( (struct _LARGE_STRING *)qword_1C032C3A8 != v21 )
            v22 = (__int64)v21;
          qword_1C032C3A8 = v22;
          _PostTransformableMessageExtended(v20, 786LL, v24, v21, (struct tagINPUT_MESSAGE_SOURCE *)a4, 1);
        }
        goto LABEL_57;
      }
LABEL_67:
      DoExplorerHangDetection(*(struct tagDESKTOP **)(v20 + 24));
      PostMessage(v20, 274LL, 61744LL, 0LL);
      v23 = a4;
      if ( qword_1C032C3A8 )
        qword_1C032C3A8 = 0LL;
LABEL_57:
      v25 = *(struct tagTHREADINFO **)(v20 + 16);
LABEL_58:
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, v25, v23[1] == 1);
      goto LABEL_59;
    }
    if ( gpqForeground )
    {
      v20 = *(_QWORD *)(gpqForeground + 80LL);
      goto LABEL_50;
    }
    return 0LL;
  }
  return HandleIAMHotKey((const struct tagHOTKEY *const)v12);
}
