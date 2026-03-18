/*
 * XREFs of xxxKeyEvent @ 0x1C004D5A0
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C004D210 (xxxProcessKeyEvent.c)
 *     ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x1C004E340 (-xxxNumpadCursor@@YAHPEAUtagKE@@@Z.c)
 *     ?xxxICO_00@@YAHPEAUtagKE@@@Z @ 0x1C004E3D0 (-xxxICO_00@@YAHPEAUtagKE@@@Z.c)
 *     ?xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z @ 0x1C012CF90 (-xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z.c)
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C012D260 (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012D660 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012D7B0 (-NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012D9B0 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012DB80 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012DDD0 (-NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012DEE0 (-NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?xxxAltGr@@YAXPEAUtagKE@@@Z @ 0x1C0130098 (-xxxAltGr@@YAXPEAUtagKE@@@Z.c)
 *     ?xxxShiftLock@@YAHPEAUtagKE@@@Z @ 0x1C0130114 (-xxxShiftLock@@YAHPEAUtagKE@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     UpdateAsyncKeyState @ 0x1C004DA40 (UpdateAsyncKeyState.c)
 *     ApiSetEditionDoHotKeys @ 0x1C004DB9C (ApiSetEditionDoHotKeys.c)
 *     ApiSetEditionHandleAltTabCancel @ 0x1C004DC50 (ApiSetEditionHandleAltTabCancel.c)
 *     ApiSetEditionKeyEventLLHook @ 0x1C004DD10 (ApiSetEditionKeyEventLLHook.c)
 *     GetKeyEventInputSource @ 0x1C004DE10 (GetKeyEventInputSource.c)
 *     ApiSetEditionGetActiveHKL @ 0x1C004DE9C (ApiSetEditionGetActiveHKL.c)
 *     ApiSetEditionHandleAndPostKeyEvent @ 0x1C004DF04 (ApiSetEditionHandleAndPostKeyEvent.c)
 *     ApiSetEditionHandleRawInput @ 0x1C004E024 (ApiSetEditionHandleRawInput.c)
 *     ApiSetEditionIsGpqForegroundInaccessibleExplicit @ 0x1C004E10C (ApiSetEditionIsGpqForegroundInaccessibleExplicit.c)
 *     ApiSetEditionHandleAltTab @ 0x1C008D114 (ApiSetEditionHandleAltTab.c)
 *     UpdateKeyLights @ 0x1C008EA30 (UpdateKeyLights.c)
 *     ApiSetEditionIsSAS @ 0x1C00983D8 (ApiSetEditionIsSAS.c)
 *     ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x1C012F19C (-LowLevelHexNumpad@@YAXGEHG@Z.c)
 */

__int64 __fastcall xxxKeyEvent(
        unsigned __int16 a1,
        unsigned __int16 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        int a8,
        __int64 a9)
{
  struct tagTHREADINFO *v9; // r12
  unsigned int v11; // ebx
  __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // r8
  unsigned __int16 v16; // r15
  unsigned __int8 v17; // di
  PDEVICE_OBJECT v18; // rcx
  void *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r9
  PDEVICE_OBJECT v22; // rcx
  __int64 result; // rax
  __int64 v24; // r8
  int v25; // r15d
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  int v30; // ecx
  __int16 v31; // bx
  __int16 v32; // r13
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int16 ActiveHKL; // ax
  int v38; // [rsp+78h] [rbp-21h]
  unsigned int v39; // [rsp+7Ch] [rbp-1Dh]
  int v40; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v41[4]; // [rsp+84h] [rbp-15h] BYREF
  __int64 v42; // [rsp+88h] [rbp-11h] BYREF
  _BYTE v43[72]; // [rsp+90h] [rbp-9h] BYREF
  unsigned __int16 v44; // [rsp+E8h] [rbp+4Fh]

  v9 = gptiCurrent;
  v40 = 0;
  v11 = 0;
  v39 = 0;
  v42 = -1LL;
  if ( a7 )
  {
    if ( a9 )
    {
      v11 = *(_DWORD *)(a9 + 8);
      v14 = *(_QWORD *)a9;
    }
    else
    {
      v12 = *((_QWORD *)gptiCurrent + 47);
      v13 = *(_DWORD *)(v12 + 12);
      v14 = *(_QWORD *)(v12 + 824);
      v11 = v13 >> 31;
    }
    v39 = v11;
    v42 = v14;
  }
  GetKeyEventInputSource(a7, a9, v43);
  v15 = 4LL;
  *(_DWORD *)gpsi |= 0x40u;
  v38 = (unsigned __int16)(((a1 & 0x8000) != 0) + 256);
  if ( (byte_1C018A9C4 & 0x10) != 0 && (byte_1C018A9C4 & 4) == 0 )
    v38 = (unsigned __int16)(((a1 & 0x8000) != 0) + 256) + 4;
  v16 = a1 & 0x100;
  v44 = a1 & 0x100;
  if ( (unsigned __int8)(a1 + 96) <= 5u )
    v17 = ((unsigned __int8)a1 - 160) / 2 + 16;
  else
    v17 = a1;
  v18 = WPP_GLOBAL_Control;
  v19 = &WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v19) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v19,
      14,
      288,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  if ( (int)IsEditionUpdateSASModifiersSupported(v18, v19, v15) >= 0 )
  {
    LOBYTE(v20) = v17;
    EditionUpdateSASModifiers(a7, v20, a2, a1 & 0x8000);
  }
  v22 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v20) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v20,
      14,
      289,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  if ( a8
    || (result = ApiSetEditionKeyEventLLHook(
                   (_DWORD)v9,
                   v16,
                   (unsigned __int16)(((a1 & 0x8000) != 0) + 256),
                   v38,
                   a1,
                   a2,
                   a1 & 0x8000,
                   a7,
                   a3,
                   a4,
                   v11,
                   (__int64)&v42),
        (_DWORD)result != 1) )
  {
    v24 = gptiBlockInput;
    if ( gptiBlockInput && (struct tagTHREADINFO *)gptiBlockInput != v9 )
    {
      LOBYTE(v22) = a1;
      result = ApiSetEditionIsSAS(v22, v41);
      if ( !(_DWORD)result )
        return result;
      v24 = 0LL;
      gptiBlockInput = 0LL;
    }
    if ( v17 != (_BYTE)a1 )
    {
      LOBYTE(v21) = a1 ^ 1;
      if ( ((a1 & 0x8000) == 0
         || ((unsigned __int8)(1 << (2 * (v21 & 3))) & *((_BYTE *)&gafAsyncKeyState
                                                       + ((unsigned __int64)(unsigned __int8)v21 >> 2))) == 0)
        && (!v24 || (struct tagTHREADINFO *)v24 == v9) )
      {
        UpdateAsyncKeyState(gpqForeground, v17, a1 & 0x8000, v21);
      }
    }
    UpdateAsyncKeyState(gpqForeground, (unsigned __int8)a1, a1 & 0x8000, v21);
    if ( gfEnableHexNumpad && gpqForeground )
    {
      v33 = *(_QWORD *)(gpqForeground + 88);
      v34 = v33 ? *(_QWORD *)(v33 + 16) : *(_QWORD *)(gpqForeground + 64);
      if ( !(unsigned int)HasHidTable(v34)
        || ((v35 = *(_QWORD *)(gpqForeground + 88)) == 0
          ? (v36 = *(_QWORD *)(gpqForeground + 64))
          : (v36 = *(_QWORD *)(v35 + 16)),
            (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 376) + 776LL) + 100LL) & 0x20) == 0) )
      {
        LowLevelHexNumpad(a2, v17, a1 & 0x8000, v16);
      }
    }
    v25 = 0;
    if ( (a1 & 0x8000) == 0 )
    {
      if ( v17 == 20
        || (unsigned __int8)(v17 + 112) <= 1u
        || v17 == 21 && (ActiveHKL = ApiSetEditionGetActiveHKL(), (ActiveHKL & 0x3FF) == 0x11) )
      {
        UpdateKeyLights(a7);
        xxxWindowEvent(2147483654LL, 0LL, v17);
      }
    }
    if ( gptiForeground )
      v25 = *((_DWORD *)gptiForeground + 191);
    result = ApiSetEditionHandleAltTabCancel(v42, v11, (_DWORD)v9, a1 & 0x8000, v17, a7, v25);
    if ( !(_DWORD)result )
    {
      LOBYTE(v26) = a1;
      LOBYTE(v27) = v17;
      result = ApiSetEditionDoHotKeys(v27, v26, a1 & 0x8000, v25, (__int64)v43, (__int64)&v40);
      if ( !(_DWORD)result )
      {
        result = ApiSetEditionIsGpqForegroundInaccessibleExplicit(a7, v9, v42, v11);
        if ( !(_DWORD)result )
        {
          LOBYTE(v29) = a1;
          LOBYTE(v28) = v17;
          result = ApiSetEditionHandleRawInput(a3, a8, v28, v29, v38, a6, a2, a1, a1 & 0x8000, a5);
          v30 = 0;
          if ( !(_DWORD)result && !v40 )
          {
            if ( (BYTE4(gafAsyncKeyState) & 0x10) == 0 || (BYTE4(gafAsyncKeyState) & 4) != 0 || v17 == 23 )
            {
              v31 = ((a1 & 0x8000) != 0) + 256;
              if ( v17 == 18 )
              {
                v31 = ((a1 & 0x8000) != 0) + 256;
                if ( (a1 & 0x8000) != 0 )
                {
                  if ( dword_1C018C170 )
                    v31 = ((a1 & 0x8000) != 0) + 260;
                  v32 = a1 & 0x100;
                  LOBYTE(v30) = 18;
                  ApiSetEditionHandleAltTab(v30, a2, v44, a3, a4, (__int64)v43, a5, v31);
                  return ApiSetEditionHandleAndPostKeyEvent(
                           a7,
                           v42,
                           v39,
                           a1 & 0x8000,
                           v17,
                           v25,
                           a2,
                           a1,
                           v32,
                           (__int64)v43,
                           a3,
                           a5,
                           a4,
                           v31);
                }
                gppiLockSFW = 0LL;
              }
              v32 = a1 & 0x100;
            }
            else
            {
              v31 = ((a1 & 0x8000) != 0) + 260;
              v32 = v44 | 0x2000;
              if ( v17 == 18 )
              {
                dword_1C018C170 = 1;
                if ( (a1 & 0x8000) == 0 )
                  gppiLockSFW = 0LL;
              }
              else
              {
                dword_1C018C170 = 0;
              }
            }
            return ApiSetEditionHandleAndPostKeyEvent(
                     a7,
                     v42,
                     v39,
                     a1 & 0x8000,
                     v17,
                     v25,
                     a2,
                     a1,
                     v32,
                     (__int64)v43,
                     a3,
                     a5,
                     a4,
                     v31);
          }
        }
      }
    }
  }
  return result;
}
