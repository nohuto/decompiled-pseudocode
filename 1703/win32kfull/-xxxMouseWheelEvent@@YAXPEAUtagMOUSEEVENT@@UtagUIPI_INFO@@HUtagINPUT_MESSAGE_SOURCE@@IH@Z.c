/*
 * XREFs of ?xxxMouseWheelEvent@@YAXPEAUtagMOUSEEVENT@@UtagUIPI_INFO@@HUtagINPUT_MESSAGE_SOURCE@@IH@Z @ 0x1C019F1B4
 * Callers:
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C019EE08 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 * Callees:
 *     PhkFirstValid @ 0x1C0048EE8 (PhkFirstValid.c)
 *     PostInputMessage @ 0x1C0049470 (PostInputMessage.c)
 *     HasHidTable @ 0x1C004A4F0 (HasHidTable.c)
 *     xxxCallHook2 @ 0x1C0053B80 (xxxCallHook2.c)
 *     DetermineMouseInputTarget @ 0x1C005F7F4 (DetermineMouseInputTarget.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0062468 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     RawInputRequestedForMouse @ 0x1C00BD9C8 (RawInputRequestedForMouse.c)
 *     FixupPromotedMouseExtraInfoForHook @ 0x1C00BD9F0 (FixupPromotedMouseExtraInfoForHook.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?MouseWheelRoutingFocus@@YAHXZ @ 0x1C019CAF8 (-MouseWheelRoutingFocus@@YAHXZ.c)
 *     ?PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C019CB40 (-PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     HasThreadRequestedLegacyMouseWheelRouting @ 0x1C01A02A4 (HasThreadRequestedLegacyMouseWheelRouting.c)
 *     IsWheelTargetDesktopApp @ 0x1C01A08C4 (IsWheelTargetDesktopApp.c)
 */

__int64 __fastcall xxxMouseWheelEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  int v7; // r13d
  __int64 v9; // rdx
  InputTransform *v10; // r12
  int v11; // eax
  int v12; // eax
  __int64 *v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  char v16; // cf
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // r10
  __int64 result; // rax
  int v21; // eax
  _QWORD *v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  struct tagQ *v25; // r10
  _QWORD *v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rsi
  __int64 v29; // rsi
  BOOL v30; // r14d
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rsi
  char v35; // dl
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rcx
  __int64 v40; // rax
  struct tagPOINT v41; // [rsp+68h] [rbp-31h] BYREF
  __int64 v42; // [rsp+70h] [rbp-29h] BYREF
  __int64 v43; // [rsp+78h] [rbp-21h]
  __int64 v44; // [rsp+80h] [rbp-19h] BYREF
  int v45; // [rsp+88h] [rbp-11h]
  int v46; // [rsp+8Ch] [rbp-Dh]
  int v47; // [rsp+90h] [rbp-9h]
  __int64 v48; // [rsp+98h] [rbp-1h]

  v7 = a3;
  v9 = *(unsigned __int16 *)(a1 + 20) << 16;
  v10 = 0LL;
  v11 = v9 | *(unsigned __int16 *)(a1 + 16);
  v42 = a4;
  v43 = v11;
  v12 = IsDwmInputThread(a1, v9, a3, a4);
  v13 = (__int64 *)gptiCurrent;
  if ( v12 )
    v13 = (__int64 *)gptiRit;
  if ( !PhkFirstValid(*v13, 14) )
    goto LABEL_16;
  v14 = *(_DWORD *)(a1 + 24);
  v15 = *(_QWORD *)(a1 + 8);
  v44 = *(_QWORD *)(a1 + 16);
  v45 = *(unsigned __int16 *)(a1 + 2) << 16;
  v16 = *(_DWORD *)(a1 + 48) & 1;
  v47 = v14;
  v46 = -v16;
  v17 = FixupPromotedMouseExtraInfoForHook(a1 + 72, v15);
  v18 = *(_QWORD *)(gptiCurrent + 1248LL);
  v48 = v17;
  *(_QWORD *)(gptiCurrent + 1248LL) = &v44;
  result = xxxCallHook2(v19, 0, a5, (int *)&v44, (int *)&v41);
  *(_QWORD *)(gptiCurrent + 1248LL) = v18;
  if ( result )
    return result;
  v21 = *(_DWORD *)(a1 + 48);
  if ( (v21 & 0x20) == 0 && (v21 & 1) != 0 )
  {
    v22 = (_QWORD *)gpqForeground;
    if ( gpqForeground )
    {
      v23 = *(_QWORD *)(gpqForeground + 380LL);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)a2 <= (unsigned int)v23 )
        {
          if ( (_DWORD)a2 != (_DWORD)v23
            || (v24 = HIDWORD(v23), HIDWORD(a2) != (_DWORD)v24) && HIDWORD(a2) != -1 && (_DWORD)v24 != -1 )
          {
            if ( !v7 )
              return EtwTraceUIPIInputError(gptiCurrent, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 1);
          }
        }
      }
    }
  }
  else
  {
LABEL_16:
    v22 = (_QWORD *)gpqForeground;
  }
  if ( (*(_DWORD *)(a1 + 48) & 0x400) == 0 && *v22 && (unsigned int)RawInputRequestedForMouse() )
  {
    PostRawMouseInput(v25, *(_DWORD *)(a1 + 24), *(_QWORD *)(a1 + 40), (struct _MOUSE_INPUT_DATA *)(a1 + 72));
    v22 = (_QWORD *)gpqForeground;
  }
  v26 = (_QWORD *)*v22;
  if ( !*v22 )
  {
    v27 = 0LL;
    goto LABEL_27;
  }
  v28 = v26[11];
  if ( v28 )
    v27 = *(_QWORD *)(v28 + 16);
  else
    v27 = v26[8];
  if ( !v27 )
  {
LABEL_27:
    if ( v26 )
    {
      v29 = v26[10];
      if ( v29 || (v29 = v26[9]) != 0 )
        v27 = *(_QWORD *)(v29 + 16);
      else
        v27 = v26[7];
    }
  }
  v30 = v42 == 34;
  if ( (unsigned int)MouseWheelRoutingFocus() && (*(_DWORD *)(a1 + 48) & 0x400) == 0 )
    goto LABEL_53;
  if ( (unsigned int)HasThreadRequestedLegacyMouseWheelRouting(v27) )
    goto LABEL_53;
  if ( v30 )
    goto LABEL_53;
  v31 = *(_QWORD *)(a1 + 32);
  v41 = *(struct tagPOINT *)(a1 + 16);
  v32 = DetermineMouseInputTarget(&v41, (struct _SUBPIXELS *)(a1 + 96), v31, a6 != 0 ? 3 : 1, 0, 0);
  v33 = v32;
  if ( !v32 )
    goto LABEL_53;
  v10 = (InputTransform *)(v32 & -(__int64)IsCompositionInputWindow((struct tagWND *)v32));
  if ( (unsigned int)IsWheelTargetDesktopApp(*(_QWORD *)(v33 + 16)) )
  {
    if ( !v10 && (*(_DWORD *)(a1 + 48) & 0x400) == 0 )
      goto LABEL_53;
  }
  v34 = *(_QWORD *)(*(_QWORD *)(v33 + 16) + 384LL);
  if ( (*(_DWORD *)(a1 + 48) & 0x400) != 0 )
  {
    if ( !v34 )
      goto LABEL_53;
    if ( (unsigned int)RawInputRequestedForMouse() )
    {
      if ( (v35 & 1) == 0
        || v7
        || (v36 = *(_QWORD *)(v34 + 380), !gbEnforceUIPI)
        || (unsigned int)a2 > (unsigned int)v36
        || (_DWORD)a2 == (_DWORD)v36
        && ((v37 = HIDWORD(v36), HIDWORD(a2) == (_DWORD)v37) || HIDWORD(a2) == -1 || (_DWORD)v37 == -1) )
      {
        PostRawMouseInput(
          (struct tagQ *)v34,
          *(_DWORD *)(a1 + 24),
          *(_QWORD *)(a1 + 40),
          (struct _MOUSE_INPUT_DATA *)(a1 + 72));
      }
    }
  }
  if ( !v34 )
  {
LABEL_53:
    result = gpqForeground;
    v34 = gpqForeground;
    if ( !gpqForeground )
      return result;
  }
  v38 = *(_QWORD *)(v34 + 72);
  if ( v38 )
    v39 = *(_QWORD *)(v38 + 16);
  else
    v39 = *(_QWORD *)(v34 + 56);
  if ( !(unsigned int)HasHidTable(v39) )
    return PostInputMessage(
             (struct tagMLIST *)v34,
             v10,
             a5,
             *(unsigned __int16 *)(a1 + 2) << 16,
             v43,
             *(_DWORD *)(a1 + 24),
             *(_QWORD *)(a1 + 32),
             *(_QWORD *)(a1 + 8),
             __CFSHR__(*(_DWORD *)(a1 + 48), 12) ? 2 : 0,
             (struct tagINPUT_MESSAGE_SOURCE *)&v42,
             0LL,
             (a1 + 52) & -(__int64)__CFSHR__(*(_DWORD *)(a1 + 48), 12));
  v40 = v38 ? *(_QWORD *)(v38 + 16) : *(_QWORD *)(v34 + 56);
  result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v40 + 376) + 776LL) + 100LL);
  if ( (result & 2) == 0 )
    return PostInputMessage(
             (struct tagMLIST *)v34,
             v10,
             a5,
             *(unsigned __int16 *)(a1 + 2) << 16,
             v43,
             *(_DWORD *)(a1 + 24),
             *(_QWORD *)(a1 + 32),
             *(_QWORD *)(a1 + 8),
             __CFSHR__(*(_DWORD *)(a1 + 48), 12) ? 2 : 0,
             (struct tagINPUT_MESSAGE_SOURCE *)&v42,
             0LL,
             (a1 + 52) & -(__int64)__CFSHR__(*(_DWORD *)(a1 + 48), 12));
  return result;
}
