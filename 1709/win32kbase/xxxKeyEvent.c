/*
 * XREFs of xxxKeyEvent @ 0x1C0010760
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C00103E0 (xxxProcessKeyEvent.c)
 *     ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x1C00120C0 (-xxxNumpadCursor@@YAHPEAUtagKE@@@Z.c)
 *     ?xxxICO_00@@YAHPEAUtagKE@@@Z @ 0x1C0012150 (-xxxICO_00@@YAHPEAUtagKE@@@Z.c)
 *     ?xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z @ 0x1C012C540 (-xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z.c)
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C012C810 (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012CC40 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012CD90 (-NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012CF90 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012D160 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012D3B0 (-NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012D4C0 (-NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?xxxAltGr@@YAXPEAUtagKE@@@Z @ 0x1C012F6B0 (-xxxAltGr@@YAXPEAUtagKE@@@Z.c)
 *     ?xxxShiftLock@@YAHPEAUtagKE@@@Z @ 0x1C012F72C (-xxxShiftLock@@YAHPEAUtagKE@@@Z.c)
 * Callees:
 *     ApiSetEditionHandleAltTab @ 0x1C000EE00 (ApiSetEditionHandleAltTab.c)
 *     UpdateAsyncKeyState @ 0x1C0010C20 (UpdateAsyncKeyState.c)
 *     ApiSetEditionDoHotKeys @ 0x1C0010D7C (ApiSetEditionDoHotKeys.c)
 *     ApiSetEditionHandleAltTabCancel @ 0x1C0010E30 (ApiSetEditionHandleAltTabCancel.c)
 *     ApiSetEditionKeyEventLLHook @ 0x1C0010EF0 (ApiSetEditionKeyEventLLHook.c)
 *     GetKeyEventInputSource @ 0x1C0010FF0 (GetKeyEventInputSource.c)
 *     ApiSetEditionGetActiveHKL @ 0x1C001171C (ApiSetEditionGetActiveHKL.c)
 *     ApiSetEditionHandleAndPostKeyEvent @ 0x1C0011784 (ApiSetEditionHandleAndPostKeyEvent.c)
 *     ApiSetEditionHandleRawInput @ 0x1C0011DA4 (ApiSetEditionHandleRawInput.c)
 *     ApiSetEditionIsGpqForegroundInaccessibleExplicit @ 0x1C0011E8C (ApiSetEditionIsGpqForegroundInaccessibleExplicit.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     UpdateKeyLights @ 0x1C0096C70 (UpdateKeyLights.c)
 *     ApiSetEditionIsSAS @ 0x1C00A2508 (ApiSetEditionIsSAS.c)
 *     ?OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ @ 0x1C00ED5DC (-OnKeyEvent@CAsyncKeyEventMonitor@@QEAAXXZ.c)
 *     ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x1C012E84C (-LowLevelHexNumpad@@YAXGEHG@Z.c)
 */

__int64 __fastcall xxxKeyEvent(
        CAsyncKeyEventMonitor *a1,
        unsigned __int16 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned __int16 *a6,
        unsigned int a7,
        int a8,
        __int64 a9)
{
  struct tagTHREADINFO *v9; // r12
  unsigned int v10; // ebx
  unsigned __int16 v11; // r14
  __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rax
  unsigned __int16 v15; // ax
  __int64 v16; // r8
  unsigned __int16 v17; // r15
  unsigned __int8 v18; // di
  PDEVICE_OBJECT v19; // rcx
  void *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r9
  PDEVICE_OBJECT v23; // rcx
  __int64 result; // rax
  __int64 v25; // r8
  int v26; // r12d
  unsigned int v27; // r15d
  struct tagTHREADINFO *v28; // r15
  int v29; // edx
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  __int16 v33; // bx
  __int16 v34; // r13
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int16 ActiveHKL; // ax
  unsigned int v40; // [rsp+30h] [rbp-79h]
  int v41; // [rsp+78h] [rbp-31h]
  unsigned int v42; // [rsp+7Ch] [rbp-2Dh]
  int v43; // [rsp+80h] [rbp-29h] BYREF
  _BYTE v44[4]; // [rsp+84h] [rbp-25h] BYREF
  __int64 v45; // [rsp+88h] [rbp-21h] BYREF
  _BYTE v46[8]; // [rsp+90h] [rbp-19h] BYREF
  struct tagTHREADINFO *v47; // [rsp+98h] [rbp-11h]
  unsigned __int16 v48; // [rsp+F8h] [rbp+4Fh]

  v9 = gptiCurrent;
  v47 = gptiCurrent;
  v10 = 0;
  v42 = 0;
  v11 = (unsigned __int16)a1;
  v43 = 0;
  v45 = -1LL;
  if ( gpAsyncKeyEventMonitor )
    CAsyncKeyEventMonitor::OnKeyEvent(a1);
  if ( a7 )
  {
    if ( a9 )
    {
      v10 = *(_DWORD *)(a9 + 8);
      v14 = *(_QWORD *)a9;
    }
    else
    {
      v12 = *((_QWORD *)v9 + 50);
      v13 = *(_DWORD *)(v12 + 12);
      v14 = *(_QWORD *)(v12 + 832);
      v10 = v13 >> 31;
    }
    v42 = v10;
    v45 = v14;
  }
  if ( a6 )
    v15 = *a6;
  else
    v15 = -1;
  GetKeyEventInputSource(a7, v15, a9, v46);
  v16 = 4LL;
  *(_DWORD *)gpsi |= 0x40u;
  v41 = (unsigned __int16)(((v11 & 0x8000) != 0) + 256);
  if ( (byte_1C018F544 & 0x10) != 0 && (byte_1C018F544 & 4) == 0 )
    v41 = (unsigned __int16)(((v11 & 0x8000) != 0) + 256) + 4;
  v17 = v11 & 0x100;
  v48 = v11 & 0x100;
  if ( (unsigned __int8)(v11 + 96) <= 5u )
    v18 = ((unsigned __int8)v11 - 160) / 2 + 16;
  else
    v18 = v11;
  v19 = WPP_GLOBAL_Control;
  v20 = &WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v20) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v20,
      14,
      300,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  }
  if ( (int)IsEditionUpdateSASModifiersSupported(v19, v20, v16) >= 0 )
  {
    LOBYTE(v21) = v18;
    EditionUpdateSASModifiers(a7, v21, a2, v11 & 0x8000);
  }
  v23 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v21) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v21,
      14,
      301,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  }
  if ( a8
    || (result = ApiSetEditionKeyEventLLHook(
                   (_DWORD)v9,
                   v17,
                   (unsigned __int16)(((v11 & 0x8000) != 0) + 256),
                   v41,
                   v11,
                   a2,
                   v11 & 0x8000,
                   a7,
                   a3,
                   a4,
                   v10,
                   (__int64)&v45),
        (_DWORD)result != 1) )
  {
    v25 = gptiBlockInput;
    if ( gptiBlockInput && (struct tagTHREADINFO *)gptiBlockInput != v9 )
    {
      LOBYTE(v23) = v11;
      result = ApiSetEditionIsSAS(v23, v44);
      if ( !(_DWORD)result )
        return result;
      v25 = 0LL;
      gptiBlockInput = 0LL;
    }
    if ( v18 != (_BYTE)v11 )
    {
      LOBYTE(v22) = v11 ^ 1;
      if ( ((v11 & 0x8000) == 0
         || ((unsigned __int8)(1 << (2 * (v22 & 3))) & *((_BYTE *)&gafAsyncKeyState
                                                       + ((unsigned __int64)(unsigned __int8)v22 >> 2))) == 0)
        && (!v25 || (struct tagTHREADINFO *)v25 == v9) )
      {
        UpdateAsyncKeyState(gpqForeground, v18, v11 & 0x8000, v22);
      }
    }
    UpdateAsyncKeyState(gpqForeground, (unsigned __int8)v11, v11 & 0x8000, v22);
    v26 = 0;
    if ( gfEnableHexNumpad && gpqForeground )
    {
      v35 = *(_QWORD *)(gpqForeground + 120);
      v36 = v35 ? *(_QWORD *)(v35 + 16) : *(_QWORD *)(gpqForeground + 96);
      if ( !(unsigned int)HasHidTable(v36)
        || ((v37 = *(_QWORD *)(gpqForeground + 120)) == 0
          ? (v38 = *(_QWORD *)(gpqForeground + 96))
          : (v38 = *(_QWORD *)(v37 + 16)),
            (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v38 + 400) + 784LL) + 100LL) & 0x20) == 0) )
      {
        LowLevelHexNumpad(a2, v18, v11 & 0x8000, v17);
      }
    }
    if ( (v11 & 0x8000) == 0
      && (v18 == 20
       || (unsigned __int8)(v18 + 112) <= 1u
       || v18 == 21 && (ActiveHKL = ApiSetEditionGetActiveHKL(), (ActiveHKL & 0x3FF) == 0x11)) )
    {
      v27 = a7;
      UpdateKeyLights(a7);
      xxxWindowEvent(2147483654LL, 0LL, v18, 0LL, 0);
    }
    else
    {
      v27 = a7;
    }
    if ( gptiForeground )
      v26 = *((_DWORD *)gptiForeground + 213);
    v40 = v27;
    v28 = v47;
    result = ApiSetEditionHandleAltTabCancel(v45, v10, (_DWORD)v47, v11 & 0x8000, v18, v40, v26);
    if ( !(_DWORD)result )
    {
      LOBYTE(v29) = v11;
      LOBYTE(v30) = v18;
      result = ApiSetEditionDoHotKeys(v30, v29, v11 & 0x8000, v26, (__int64)v46, (__int64)&v43);
      if ( !(_DWORD)result )
      {
        result = ApiSetEditionIsGpqForegroundInaccessibleExplicit(a7, v28, v45, v10);
        if ( !(_DWORD)result )
        {
          LOBYTE(v32) = v11;
          LOBYTE(v31) = v18;
          result = ApiSetEditionHandleRawInput(a3, a8, v31, v32, v41, (__int64)a6, a2, v11, v11 & 0x8000, a5);
          if ( !(_DWORD)result && !v43 )
          {
            if ( (BYTE4(gafAsyncKeyState) & 0x10) == 0 || (BYTE4(gafAsyncKeyState) & 4) != 0 || v18 == 23 )
            {
              v33 = ((v11 & 0x8000) != 0) + 256;
              if ( v18 == 18 )
              {
                v33 = ((v11 & 0x8000) != 0) + 256;
                if ( (v11 & 0x8000) != 0 )
                {
                  if ( dword_1C0190EA0 )
                    v33 = ((v11 & 0x8000) != 0) + 260;
                  v34 = v11 & 0x100;
                  ApiSetEditionHandleAltTab(18, a2, v48, a3, a4, (__int64)v46, a5, v33);
                  return ApiSetEditionHandleAndPostKeyEvent(
                           a7,
                           v45,
                           v42,
                           v11 & 0x8000,
                           v18,
                           v26,
                           a2,
                           v11,
                           v34,
                           (__int64)v46,
                           a3,
                           a5,
                           a4,
                           v33);
                }
                gppiLockSFW = 0LL;
              }
              v34 = v11 & 0x100;
            }
            else
            {
              v33 = ((v11 & 0x8000) != 0) + 260;
              v34 = v48 | 0x2000;
              if ( v18 == 18 )
              {
                dword_1C0190EA0 = 1;
                if ( (v11 & 0x8000) == 0 )
                  gppiLockSFW = 0LL;
              }
              else
              {
                dword_1C0190EA0 = 0;
              }
            }
            return ApiSetEditionHandleAndPostKeyEvent(
                     a7,
                     v45,
                     v42,
                     v11 & 0x8000,
                     v18,
                     v26,
                     a2,
                     v11,
                     v34,
                     (__int64)v46,
                     a3,
                     a5,
                     a4,
                     v33);
          }
        }
      }
    }
  }
  return result;
}
