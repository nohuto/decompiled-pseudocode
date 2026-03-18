/*
 * XREFs of ProcessHidInputViaRim @ 0x1C01A821C
 * Callers:
 *     RawInputThread @ 0x1C004A5F0 (RawInputThread.c)
 *     WaitForRitToCompleteLastCommand @ 0x1C0109144 (WaitForRitToCompleteLastCommand.c)
 *     UserProcessDwmInput @ 0x1C01A12C0 (UserProcessDwmInput.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C001B528 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     FindRimDevBackedDeviceInfo @ 0x1C01A8160 (FindRimDevBackedDeviceInfo.c)
 *     ProcessTouchInputViaRim @ 0x1C01B0D54 (ProcessTouchInputViaRim.c)
 *     ?InkProcessorOnInkDeviceInputReport@@YAXPEAURawInputManagerDeviceObject@@PEAX@Z @ 0x1C01E9358 (-InkProcessorOnInkDeviceInputReport@@YAXPEAURawInputManagerDeviceObject@@PEAX@Z.c)
 *     ?OnInteractiveControlInputReport@@YAJPEAURawInputManagerDeviceObject@@PEAXK@Z @ 0x1C020A12C (-OnInteractiveControlInputReport@@YAJPEAURawInputManagerDeviceObject@@PEAXK@Z.c)
 */

__int64 __fastcall ProcessHidInputViaRim(_DWORD *a1, int a2, unsigned int a3, void *a4)
{
  _DWORD *v8; // r15
  int v9; // r14d
  PRKEVENT v10; // rbx
  __int64 result; // rax
  void *v12; // rdx
  struct RawInputManagerDeviceObject *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // r8
  int v19; // [rsp+68h] [rbp+10h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v19);
  v8 = a1;
  v9 = 0;
  if ( (a2 & 0x1C) != 0 )
  {
    v9 = a1[12];
    v10 = aDeviceTemplate[153];
    if ( v10 )
    {
      if ( *(_QWORD *)&v10[2].Header.Lock )
      {
        HMAssignmentUnlock(&v10[2]);
        *(_QWORD *)&v10[2].Header.Lock = 0LL;
      }
      if ( v10[2].Header.WaitListHead.Flink )
      {
        HMAssignmentUnlock(&v10[2].Header.WaitListHead);
        v10[2].Header.WaitListHead.Flink = 0LL;
      }
    }
  }
  else
  {
    v8 = 0LL;
  }
  result = (__int64)FindRimDevBackedDeviceInfo(a4, v9, 2LL);
  v16 = result;
  if ( v8 )
  {
LABEL_11:
    if ( !v16 )
      goto LABEL_24;
    goto LABEL_12;
  }
  if ( !result )
  {
    result = (__int64)FindRimDevBackedDeviceInfo(a4, v9 == 0, 2LL);
    v16 = result;
    goto LABEL_11;
  }
LABEL_12:
  v17 = *(_DWORD *)(v16 + 200);
  if ( (v17 & 0x80u) == 0 )
  {
    if ( (v17 & 0x100) != 0 )
    {
      OnInteractiveControlInputReport((struct RawInputManagerDeviceObject *)(v16 - 64), a1, a3);
    }
    else if ( (v17 & 0x200) != 0 )
    {
      InkProcessorOnInkDeviceInputReport(v13, v12);
    }
  }
  else
  {
    ProcessTouchInputViaRim(*(void **)v16, v8[13]);
  }
  result = *(unsigned int *)(v16 + 200);
  if ( (result & 0x40) == 0 )
  {
    v18 = 3LL;
    if ( a2 == 4 )
    {
      v18 = 12LL;
    }
    else if ( a2 == 16 )
    {
      v18 = 10LL;
    }
    result = CInputGlobals::UpdateInputGlobals(
               gpInputGlobals,
               (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
              * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
               v18,
               0LL);
  }
LABEL_24:
  if ( !v19 )
    return UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return result;
}
