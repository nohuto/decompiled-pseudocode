/*
 * XREFs of ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01CB090
 * Callers:
 *     ?ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z @ 0x1C01A5648 (-ProcessLostCaptureList@@YAXGHPEBUtagPOINTERINPUTFRAME@@KK@Z.c)
 *     ?GenerateCaptureLostMessage@@YAX_KPEAUHWND__@@KHH@Z @ 0x1C01CB004 (-GenerateCaptureLostMessage@@YAX_KPEAUHWND__@@KHH@Z.c)
 *     ?GenerateWindowLeaveMessage@@YAX_KPEAUHWND__@@KHHH@Z @ 0x1C01CB378 (-GenerateWindowLeaveMessage@@YAX_KPEAUHWND__@@KHHH@Z.c)
 * Callees:
 *     MSGLUA_GPQFOREGROUND @ 0x1C004FB70 (MSGLUA_GPQFOREGROUND.c)
 *     IsGpqForegroundAccessible @ 0x1C0050654 (IsGpqForegroundAccessible.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     IsHungWindow @ 0x1C0088E80 (IsHungWindow.c)
 *     PostInputMessage @ 0x1C009ED18 (PostInputMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     ProcessHungWindow @ 0x1C013431C (ProcessHungWindow.c)
 *     InkProcessorOnPointerMessagePosted @ 0x1C01F5680 (InkProcessorOnPointerMessagePosted.c)
 */

__int64 __fastcall GeneratePointerMessage(
        const struct tagPOINTERINFONODE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        HWND a7)
{
  unsigned __int16 v7; // r14
  unsigned __int16 v9; // r12
  int v10; // ebp
  HWND v11; // rcx
  unsigned int v12; // r15d
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v16; // rsi
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // r9
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rbp
  unsigned __int64 v31; // r9
  unsigned int v32; // ebp
  int v33; // eax
  __int64 v34; // rcx
  char v35; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v36; // [rsp+A8h] [rbp+10h]
  unsigned int v37; // [rsp+B0h] [rbp+18h]
  int v38; // [rsp+B8h] [rbp+20h]

  v38 = a4;
  v37 = a3;
  v36 = a2;
  v7 = *((_WORD *)a1 + 30);
  v9 = *((_WORD *)a1 + 24);
  v10 = a3;
  v11 = a7;
  if ( !a7 )
  {
    v11 = (HWND)*((_QWORD *)a1 + 10);
    if ( !v11 )
      return 0LL;
  }
  v12 = a6;
  if ( a6 || (*(_DWORD *)a1 & 0x800) != 0 )
  {
    LOBYTE(a2) = 1;
    v13 = HMValidateHandleNoSecure((unsigned __int64)v11, a2, a3, a4);
  }
  else
  {
    v13 = ValidateHwnd(v11);
  }
  v14 = v13;
  if ( !v13 )
    return 0LL;
  v16 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 408LL);
  if ( !(unsigned int)IsGpqForegroundAccessible(a5) )
  {
    MSGLUA_GPQFOREGROUND();
    return 0LL;
  }
  if ( a5 )
  {
    if ( (*(_DWORD *)a1 & 0x800) == 0 )
    {
      v18 = *(_QWORD *)(v16 + 420);
      v17 = gbEnforceUIPI;
      v20 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 832LL);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v20 <= (unsigned int)v18 )
        {
          if ( (_DWORD)v20 != (_DWORD)v18
            || (v21 = HIDWORD(v20), v18 >>= 32, (_DWORD)v21 != (_DWORD)v18) && (_DWORD)v21 != -1 && (_DWORD)v18 != -1 )
          {
            if ( !v12 )
            {
              UserSetLastError(5LL, gbEnforceUIPI);
LABEL_21:
              EtwTraceUIPIInputError(gptiCurrent, *(_QWORD *)(v14 + 16), v16, *(_QWORD *)(v16 + 420), 8);
              return 0LL;
            }
          }
        }
      }
    }
    if ( (unsigned int)IsDwmInputThread(v18, v17, 0xFFFFFFFFLL, v19) )
    {
      if ( (*(_DWORD *)a1 & 0x800) == 0 && !v12 )
      {
        LOBYTE(v22) = 19;
        v25 = HMValidateHandleNoSecure(*((_QWORD *)a1 + 9), v22, v23, v24);
        if ( v25 )
        {
          v26 = *(_QWORD *)(v16 + 420);
          v27 = *(_QWORD *)(*(_QWORD *)(v25 + 472) + 856LL);
          if ( gbEnforceUIPI )
          {
            if ( (unsigned int)v27 <= (unsigned int)v26 )
            {
              if ( (_DWORD)v27 != (_DWORD)v26 )
                goto LABEL_21;
              v28 = HIDWORD(v27);
              v29 = HIDWORD(v26);
              if ( (_DWORD)v28 != (_DWORD)v29 && (_DWORD)v28 != -1 && (_DWORD)v29 != -1 )
                goto LABEL_21;
            }
          }
        }
      }
    }
  }
  if ( v10 == 595 )
    v30 = v7;
  else
    v30 = v7 | (unsigned __int64)((unsigned __int16)(*((_WORD *)a1 + 34) & 0xE1F7) << 16);
  GetPointerInputSource(*((unsigned int *)a1 + 14), a5, v12, &v35);
  EtwTraceBeginPointerMessageGeneration(v9, v7);
  v31 = v30;
  v32 = v37;
  if ( !(unsigned int)PostInputMessage(v16, v14, v37, v31, v36, v38, *((_QWORD *)a1 + 17), 0LL, 0, &v35, 0LL, 0LL) )
  {
    EtwTraceEndPointerMessageGeneration(v9, v7);
    return 0LL;
  }
  EtwTraceEndPointerMessageGeneration(v9, v7);
  InkProcessorOnPointerMessagePosted(v32, *((_QWORD *)a1 + 2));
  v33 = *((_DWORD *)a1 + 17);
  if ( (v33 & 0x2000) != 0 && (v33 & 0x10000) != 0 )
  {
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v14 + 16), 0);
    PoLatencySensitivityHint(2LL);
    v34 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 432LL);
    if ( v34 )
    {
      if ( *(_QWORD *)(v34 + 40) )
      {
        if ( (unsigned int)IsHungWindow(v14) )
          ProcessHungWindow(v14);
      }
    }
  }
  return 1LL;
}
