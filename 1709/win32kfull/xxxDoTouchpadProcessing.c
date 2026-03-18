/*
 * XREFs of xxxDoTouchpadProcessing @ 0x1C01B47C0
 * Callers:
 *     ProcessTouchInputViaRim @ 0x1C01B4144 (ProcessTouchInputViaRim.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?GetEarliestTPFrame@PointerFrameList@@YAPEAUtagPOINTERINPUTFRAME@@PEAI@Z @ 0x1C01A508C (-GetEarliestTPFrame@PointerFrameList@@YAPEAUtagPOINTERINPUTFRAME@@PEAI@Z.c)
 *     ?GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C01A50D0 (-GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     CreateTPFrame @ 0x1C01A64E8 (CreateTPFrame.c)
 *     FindHoldingFrameForDevice @ 0x1C01A67E8 (FindHoldingFrameForDevice.c)
 *     FreeTPFrame @ 0x1C01A686C (FreeTPFrame.c)
 *     ResetHoldingFrame @ 0x1C01A6E04 (ResetHoldingFrame.c)
 *     ?HasActiveContacts@@YAHPEBUtagTPSTATE@@@Z @ 0x1C01AEA94 (-HasActiveContacts@@YAHPEBUtagTPSTATE@@@Z.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01B2518 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     ?zzzCancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01B3D44 (-zzzCancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     TPAAPShouldAllowNow @ 0x1C01B4574 (TPAAPShouldAllowNow.c)
 *     xxxCancelMouseUpTimer @ 0x1C01B4760 (xxxCancelMouseUpTimer.c)
 *     xxxGeneratePointerInputMessages @ 0x1C01CECD0 (xxxGeneratePointerInputMessages.c)
 */

__int64 __fastcall xxxDoTouchpadProcessing(void *a1, int a2)
{
  int v2; // esi
  struct tagPOINTERHOLDINGFRAME *HoldingFrameForDevice; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 TPFrame; // r13
  unsigned int *v14; // rdx
  struct tagPOINTERINPUTFRAME *EarliestTPFrame; // rbp
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // r14
  int v19; // esi
  int v20; // ecx
  int v21; // eax
  bool v22; // zf
  int v23; // edx
  int v24; // esi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 ThreadWin32Thread; // rax
  struct _LIST_ENTRY *v29; // r8
  struct tagPOINTERINPUTFRAME *NextFrame; // rsi
  __int64 v31; // rdx
  __int64 *v32; // rcx
  __int64 v33; // r8
  struct tagPOINTERHOLDINGFRAME *v34; // rax
  __int64 v35; // rcx
  int v36; // eax
  struct tagTPSTATE *v37; // rcx
  unsigned int *v38; // rdx
  _QWORD v39[11]; // [rsp+30h] [rbp-58h] BYREF
  char v41; // [rsp+A0h] [rbp+18h] BYREF

  v2 = a2;
  HoldingFrameForDevice = FindHoldingFrameForDevice((__int64)a1);
  v8 = (__int64)HoldingFrameForDevice;
  if ( !HoldingFrameForDevice )
    return 0LL;
  v9 = *((_QWORD *)HoldingFrameForDevice + 11);
  if ( !v9 )
    return 0LL;
  LOBYTE(v5) = 19;
  v10 = HMValidateHandleNoSecure(*((_QWORD *)HoldingFrameForDevice + 2), v5, v6, v7);
  if ( !v10 )
    return 0LL;
  v11 = *(_QWORD *)(v10 + 472);
  if ( !v11 )
    return 0LL;
  TPFrame = CreateTPFrame(v8);
  if ( !TPFrame )
    return 1LL;
  ResetHoldingFrame(v8);
  EarliestTPFrame = PointerFrameList::GetEarliestTPFrame((PointerFrameList *)&v41, v14);
  if ( EarliestTPFrame )
  {
    do
    {
      if ( gbTapTimerFired )
      {
        *(_DWORD *)(v9 + 1920) &= ~0x10u;
        gbTapTimerFired = 0;
      }
      v17 = *(_DWORD *)(v9 + 1920);
      if ( (v17 & 1) == 0 )
      {
        v18 = *((_QWORD *)EarliestTPFrame + 11);
        v19 = *(_DWORD *)(v18 + 68) & 0x10;
        if ( (v17 & 0x200) == 0 && v19 )
        {
          if ( *(_DWORD *)(v11 + 864) == 2 && !(unsigned int)TPAAPShouldAllowNow(8, 0, 0, 0LL)
            || *(_DWORD *)(v9 + 1640)
            || gidTapTimer && !a2 )
          {
            v20 = 512;
          }
          else
          {
            v20 = 0;
          }
          *(_DWORD *)(v9 + 1920) = v20 | *(_DWORD *)(v9 + 1920) & 0xFFFFFDFF;
        }
        v21 = *(_DWORD *)(v9 + 1920);
        if ( (v21 & 0x200) != 0 )
        {
          v22 = v19 == 0;
          v2 = a2;
          if ( v22 )
            *(_DWORD *)(v9 + 1920) = v21 & 0xFFFFFDFF;
          else
            *(_DWORD *)(v18 + 68) &= ~0x10u;
        }
        else
        {
          if ( v19 )
          {
            if ( guMouseUpPending )
              *(_DWORD *)(v9 + 1920) = v21 & 0xFFFFFFEF;
            xxxCancelMouseUpTimer(1);
            gbTapTimerFired = 0;
          }
          v2 = a2;
        }
      }
      v23 = *(_DWORD *)(v9 + 1920);
      if ( (v23 & 4) == 0
        && (v23 & 8) == 0
        && ((*(_DWORD *)(*((_QWORD *)EarliestTPFrame + 11) + 68LL) & 0x20) != 0
         || (*(_DWORD *)(*((_QWORD *)EarliestTPFrame + 11) + 68LL) & 0x40) != 0) )
      {
        if ( guMouseUpPending )
          *(_DWORD *)(v9 + 1920) = v23 & 0xFFFFFFEF;
        xxxCancelMouseUpTimer(1);
        gbTapTimerFired = 0;
      }
      PushW32ThreadLock(TPFrame, v39, (__int64)CleanupTPFrameList, v16);
      v24 = xxxInternalTPProcessing(v2, v9, (struct tagHID_POINTER_DEVICE_INFO *)v11, (__int64)EarliestTPFrame, a1);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26, v27);
      *(_QWORD *)(ThreadWin32Thread + 16) = v39[0];
      if ( v24 == 3 || v24 == 6 )
      {
        xxxGeneratePointerInputMessages(a1);
        NextFrame = PointerFrameList::GetEarliestTPFrame((PointerFrameList *)&v41, v38);
      }
      else
      {
        NextFrame = PointerFrameList::GetNextFrame(
                      EarliestTPFrame,
                      (const struct tagPOINTERINPUTFRAME *)&gFrameTPListHead,
                      v29);
        FreeTPFrame(v32, v31, v33);
        v34 = FindHoldingFrameForDevice((__int64)a1);
        if ( v34 )
        {
          v35 = *((_QWORD *)v34 + 11);
          if ( v35 )
          {
            v36 = *(_DWORD *)(v35 + 1920);
            if ( (v36 & 0x200000) != 0
              && (v36 & 1) == 0
              && !(unsigned int)HasActiveContacts((const struct tagTPSTATE *)v35) )
            {
              zzzCancelInertiaState(v37, 0);
            }
          }
        }
      }
      EarliestTPFrame = NextFrame;
      v22 = NextFrame == 0LL;
      v2 = a2;
    }
    while ( !v22 );
  }
  return 1LL;
}
