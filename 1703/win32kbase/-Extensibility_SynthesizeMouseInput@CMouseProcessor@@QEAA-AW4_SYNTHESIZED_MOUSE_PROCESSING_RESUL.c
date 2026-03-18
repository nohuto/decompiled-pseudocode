/*
 * XREFs of ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C01314CC
 * Callers:
 *     SynthesizeMouseInputData @ 0x1C012EE98 (SynthesizeMouseInputData.c)
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@@Z @ 0x1C00476F8 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@K@Z @ 0x1C0080CE4 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     UpconvertTime @ 0x1C0088980 (UpconvertTime.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall CMouseProcessor::Extensibility_SynthesizeMouseInput(
        CMouseProcessor *a1,
        __int64 a2,
        char a3,
        _DWORD *a4)
{
  int v6; // ecx
  char v7; // r8
  int v8; // edx
  __int16 v9; // ax
  __int16 v10; // ax
  __int16 v11; // cx
  bool v12; // zf
  __int16 v13; // ax
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  unsigned int v17; // edi
  int v18; // edi
  int v19; // esi
  unsigned int v20; // ecx
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdi
  LARGE_INTEGER v31; // rcx
  LARGE_INTEGER v32; // rbx
  LARGE_INTEGER v33; // r8
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-79h]
  __int128 v36; // [rsp+30h] [rbp-69h] BYREF
  __int64 v37; // [rsp+40h] [rbp-59h] BYREF
  __int64 v38; // [rsp+48h] [rbp-51h]
  __int64 v39; // [rsp+50h] [rbp-49h]
  __int128 v40; // [rsp+60h] [rbp-39h] BYREF
  struct tagPOINT v41; // [rsp+70h] [rbp-29h] BYREF
  char v42; // [rsp+B0h] [rbp+17h]

  if ( (dword_1C0193BB4 & 1) == 0 )
    dword_1C0193BB4 |= 1u;
  v6 = *(_DWORD *)(a2 + 32);
  v7 = a3 & 0x3F;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v8 = 256;
  if ( v6 || *(_DWORD *)(a2 + 36) )
  {
    v9 = *(_WORD *)(a2 + 24) & 3;
    HIDWORD(v38) = v6;
    WORD1(v37) = v9;
    LODWORD(v39) = *(_DWORD *)(a2 + 36);
    if ( (v7 & 4) != 0 )
      v8 = 258;
  }
  else
  {
    v8 = 264;
  }
  v10 = *(_WORD *)(a2 + 26) & 0xFFF;
  v11 = *(_WORD *)(a2 + 28);
  WORD2(v37) = v10;
  if ( v11 )
  {
    v12 = (v10 & 0xC00) == 0;
    v13 = HIWORD(v37);
    if ( !v12 )
      v13 = v11;
    HIWORD(v37) = v13;
  }
  v14 = v8 | 0x800;
  if ( (v7 & 2) == 0 )
    v14 = v8;
  v15 = v14 | 0x200;
  if ( (v7 & 8) != 0 )
    v15 = v14;
  v16 = v15 | 0x400;
  if ( (v7 & 1) == 0 )
    v16 = v15;
  v17 = v16 | 0x2000;
  if ( (v7 & 0x20) == 0 )
    v17 = v16;
  if ( (v7 & 0x10) != 0 )
    v17 = v17 & 0xFFFFFFF3 | 4;
  v18 = v17 | 0x40;
  v19 = 0;
  if ( a4 && *a4 == 2 )
    v19 = a4[1];
  v20 = *(_DWORD *)(a2 + 8);
  v21 = *(_QWORD *)(a2 + 16);
  *((_QWORD *)&v36 + 1) = *(_QWORD *)a2;
  LODWORD(v36) = 1;
  v40 = v36;
  *(_QWORD *)&v36 = UpconvertTime(v20);
  *((_QWORD *)&v36 + 1) = v21;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v41, (__int64)&v37, &v36, v18, &v40, v19);
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit();
  CMouseProcessor::SynthesizeMouse(a1, (struct tagPOINT)&v41);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v23, v22, v24);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v26 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v30 = PsGetCurrentThreadWin32Thread(v28, v27, v29);
  if ( v30 )
  {
    v32 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v30 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x200000010000000LL) != 0
      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      LODWORD(BugCheckParameter4) = 0;
      LOBYTE(v31.LowPart) = byte_1C0186D98 - 1;
      Template_xqx(
        v31.QuadPart,
        &AcquiredExclusiveUserCritEvent,
        v33.QuadPart,
        v32.QuadPart,
        BugCheckParameter4,
        gullUserCritAcquireToken);
    }
    if ( v32.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(BugCheckParameter4) = 1000 * v32.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        (__int64)gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v33.QuadPart,
        0LL,
        BugCheckParameter4,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v30 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v26;
  gbValidateHandleForIL = 1;
  return (unsigned int)((v42 & 2) != 0) + 1;
}
