/*
 * XREFs of ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01C58C4
 * Callers:
 *     ?ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z @ 0x1C0199A80 (-ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z.c)
 *     ?GenerateCaptureLostMessage@@YAX_KPEAUHWND__@@KHH@Z @ 0x1C01C5760 (-GenerateCaptureLostMessage@@YAX_KPEAUHWND__@@KHH@Z.c)
 *     ?GeneratePointerInputMessages@@YAXPEBUtagPOINTERINPUTFRAME@@KHHKKH@Z @ 0x1C01C57EC (-GeneratePointerInputMessages@@YAXPEBUtagPOINTERINPUTFRAME@@KHHKKH@Z.c)
 *     ?GenerateWindowLeaveMessage@@YAX_KPEAUHWND__@@KHHH@Z @ 0x1C01C5C3C (-GenerateWindowLeaveMessage@@YAX_KPEAUHWND__@@KHHH@Z.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C803C (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     PostInputMessage @ 0x1C0049470 (PostInputMessage.c)
 *     IsHungWindow @ 0x1C004A0A0 (IsHungWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     IsForegroundShellFrameQueueAccessible @ 0x1C00B8A98 (IsForegroundShellFrameQueueAccessible.c)
 *     ProcessHungWindow @ 0x1C01321FC (ProcessHungWindow.c)
 *     ?PointerFlagsToMessage@@YAII@Z @ 0x1C01C71E4 (-PointerFlagsToMessage@@YAII@Z.c)
 *     InkProcessorOnPointerMessagePosted @ 0x1C01E96A0 (InkProcessorOnPointerMessagePosted.c)
 */

__int64 __fastcall GeneratePointerMessage(
        const struct tagPOINTERINFONODE *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        HWND a7)
{
  unsigned int v7; // r14d
  unsigned __int16 v8; // r15
  unsigned __int16 v10; // r13
  HWND v12; // rcx
  unsigned int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // rdx
  struct tagTHREADINFO **v16; // rdi
  __int64 v17; // rbp
  unsigned __int64 v18; // rcx
  _DWORD *v19; // r8
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rsi
  int v30; // eax
  __int64 v31; // rcx
  char v32; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v33; // [rsp+A8h] [rbp+10h]
  int v34; // [rsp+B8h] [rbp+20h]

  v34 = a4;
  v33 = a2;
  v7 = a3;
  v8 = *((_WORD *)a1 + 30);
  v10 = *((_WORD *)a1 + 24);
  if ( !a3 )
  {
    v7 = PointerFlagsToMessage(*((_DWORD *)a1 + 17));
    if ( !v7 )
      return 0LL;
  }
  v12 = a7;
  if ( !a7 )
  {
    v12 = (HWND)*((_QWORD *)a1 + 10);
    if ( !v12 )
      return 0LL;
  }
  v13 = a6;
  if ( a6 || (*(_DWORD *)a1 & 0x800) != 0 )
    v14 = HMValidateHandleNoSecure((unsigned __int64)v12, 1);
  else
    v14 = ValidateHwnd(v12);
  v16 = (struct tagTHREADINFO **)v14;
  if ( !v14 )
    return 0LL;
  v17 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 384LL);
  if ( !a5 )
    goto LABEL_43;
  v18 = gpqForeground;
  if ( gpqForeground )
  {
    v19 = (_DWORD *)gbEnforceUIPI;
    v15 = *(_QWORD *)(gptiCurrent + 376LL);
    v18 = *(_QWORD *)(gpqForeground + 380LL);
    v20 = *(_QWORD *)(v15 + 824);
    if ( !gbEnforceUIPI )
      goto LABEL_23;
    if ( (unsigned int)v20 > (unsigned int)v18 )
      goto LABEL_23;
    if ( (_DWORD)v20 == (_DWORD)v18 )
    {
      v21 = HIDWORD(v20);
      v18 >>= 32;
      if ( (_DWORD)v21 == (_DWORD)v18 || (_DWORD)v21 == -1 || (_DWORD)v18 == -1 )
        goto LABEL_23;
    }
    if ( *(int *)(v15 + 12) < 0 )
      goto LABEL_23;
    if ( !IsForegroundShellFrameQueueAccessible(gptiCurrent) )
    {
      EtwTraceUIPIInputError(gptiCurrent, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 1);
      return 0LL;
    }
  }
  v19 = (_DWORD *)gbEnforceUIPI;
LABEL_23:
  if ( (*(_DWORD *)a1 & 0x800) == 0 )
  {
    v18 = *(_QWORD *)(v17 + 380);
    v15 = gptiCurrent;
    v22 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 824LL);
    if ( *v19 )
    {
      if ( (unsigned int)v22 <= (unsigned int)v18 )
      {
        if ( (_DWORD)v22 != (_DWORD)v18
          || (v23 = HIDWORD(v22), v18 >>= 32, (_DWORD)v23 != (_DWORD)v18) && (_DWORD)v23 != -1 && (_DWORD)v18 != -1 )
        {
          if ( !v13 )
          {
            UserSetLastError(5LL);
LABEL_32:
            EtwTraceUIPIInputError(gptiCurrent, v16[2], v17, *(_QWORD *)(v17 + 380), 8);
            return 0LL;
          }
        }
      }
    }
  }
  if ( (unsigned int)IsDwmInputThread(v18, v15, v19, 0xFFFFFFFFLL) )
  {
    if ( (*(_DWORD *)a1 & 0x800) == 0 && !v13 )
    {
      v24 = HMValidateHandleNoSecure(*((_QWORD *)a1 + 9), 19);
      if ( v24 )
      {
        v25 = *(_QWORD *)(v17 + 380);
        v26 = *(_QWORD *)(*(_QWORD *)(v24 + 472) + 1520LL);
        if ( gbEnforceUIPI )
        {
          if ( (unsigned int)v26 <= (unsigned int)v25 )
          {
            if ( (_DWORD)v26 != (_DWORD)v25 )
              goto LABEL_32;
            v27 = HIDWORD(v26);
            v28 = HIDWORD(v25);
            if ( (_DWORD)v27 != (_DWORD)v28 && (_DWORD)v27 != -1 && (_DWORD)v28 != -1 )
              goto LABEL_32;
          }
        }
      }
    }
  }
LABEL_43:
  if ( v7 == 595 )
    v29 = v8;
  else
    v29 = v8 | ((unsigned __int64)(*((_WORD *)a1 + 34) & 0xE1F7) << 16);
  GetPointerInputSource(*((unsigned int *)a1 + 14), a5, v13, &v32);
  EtwTraceBeginPointerMessageGeneration(v10, v8);
  if ( !(unsigned int)PostInputMessage(
                        (struct tagMLIST *)v17,
                        (InputTransform *)v16,
                        v7,
                        v29,
                        v33,
                        v34,
                        *((_QWORD *)a1 + 17),
                        0LL,
                        0,
                        (struct tagINPUT_MESSAGE_SOURCE *)&v32,
                        0LL,
                        0LL) )
  {
    EtwTraceEndPointerMessageGeneration(v10, v8);
    return 0LL;
  }
  EtwTraceEndPointerMessageGeneration(v10, v8);
  InkProcessorOnPointerMessagePosted(v7, *((_QWORD *)a1 + 2));
  v30 = *((_DWORD *)a1 + 17);
  if ( (v30 & 0x2000) != 0 && (v30 & 0x10000) != 0 )
  {
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, v16[2], 0);
    PoLatencySensitivityHint(2LL);
    v31 = *((_QWORD *)v16[2] + 51);
    if ( v31 )
    {
      if ( *(_QWORD *)(v31 + 40) )
      {
        if ( (unsigned int)IsHungWindow((__int64)v16) )
          ProcessHungWindow((__int64)v16);
      }
    }
  }
  return 1LL;
}
