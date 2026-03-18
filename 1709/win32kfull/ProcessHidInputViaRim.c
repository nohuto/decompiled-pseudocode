/*
 * XREFs of ProcessHidInputViaRim @ 0x1C01AB5BC
 * Callers:
 *     RawInputThread @ 0x1C0087D60 (RawInputThread.c)
 *     WaitForRitToCompleteLastCommand @ 0x1C00FD870 (WaitForRitToCompleteLastCommand.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C008E6C4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     FindRimDevBackedDeviceInfo @ 0x1C01AB500 (FindRimDevBackedDeviceInfo.c)
 *     ProcessTouchInputViaRim @ 0x1C01B4144 (ProcessTouchInputViaRim.c)
 *     ?InkProcessorOnInkDeviceInputReport@@YAXPEAURawInputManagerDeviceObject@@PEAX@Z @ 0x1C01F535C (-InkProcessorOnInkDeviceInputReport@@YAXPEAURawInputManagerDeviceObject@@PEAX@Z.c)
 *     ?OnInteractiveControlInputReport@@YAJPEAURawInputManagerDeviceObject@@PEAXK@Z @ 0x1C020D3EC (-OnInteractiveControlInputReport@@YAJPEAURawInputManagerDeviceObject@@PEAXK@Z.c)
 */

__int64 __fastcall ProcessHidInputViaRim(_DWORD *a1, int a2, unsigned int a3, void *a4)
{
  _DWORD *v8; // r15
  int v9; // r14d
  __int64 v10; // rbx
  __int64 result; // rax
  void *v12; // rdx
  struct RawInputManagerDeviceObject *v13; // rcx
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // r8
  int v17; // [rsp+68h] [rbp+10h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v17);
  v8 = a1;
  v9 = 0;
  if ( (a2 & 0x1C) != 0 )
  {
    v9 = a1[12];
    v10 = aDeviceTemplate[153];
    if ( v10 )
    {
      if ( *(_QWORD *)(v10 + 48) )
      {
        HMAssignmentUnlock(v10 + 48);
        *(_QWORD *)(v10 + 48) = 0LL;
      }
      if ( *(_QWORD *)(v10 + 56) )
      {
        HMAssignmentUnlock(v10 + 56);
        *(_QWORD *)(v10 + 56) = 0LL;
      }
    }
  }
  else
  {
    v8 = 0LL;
  }
  result = (__int64)FindRimDevBackedDeviceInfo(a4, v9, 2LL);
  v14 = result;
  if ( v8 )
  {
LABEL_11:
    if ( !v14 )
      goto LABEL_24;
    goto LABEL_12;
  }
  if ( !result )
  {
    result = (__int64)FindRimDevBackedDeviceInfo(a4, v9 == 0, 2LL);
    v14 = result;
    goto LABEL_11;
  }
LABEL_12:
  v15 = *(_DWORD *)(v14 + 200);
  if ( (v15 & 0x80u) == 0 )
  {
    if ( (v15 & 0x100) != 0 )
    {
      OnInteractiveControlInputReport((struct RawInputManagerDeviceObject *)(v14 - 64), a1, a3);
    }
    else if ( (v15 & 0x200) != 0 )
    {
      InkProcessorOnInkDeviceInputReport(v13, v12);
    }
  }
  else
  {
    ProcessTouchInputViaRim(*(void **)v14, v8[13]);
  }
  result = *(unsigned int *)(v14 + 200);
  if ( (result & 0x40) == 0 )
  {
    v16 = 3LL;
    if ( a2 == 4 )
    {
      v16 = 12LL;
    }
    else if ( a2 == 16 )
    {
      v16 = 10LL;
    }
    result = CInputGlobals::UpdateInputGlobals(
               gpInputGlobals,
               (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
              * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
               v16,
               0LL,
               0,
               0);
  }
LABEL_24:
  if ( !v17 )
    return UserSessionSwitchLeaveCrit(v13, v12);
  return result;
}
