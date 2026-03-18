/*
 * XREFs of xxxDoTouchpadProcessing @ 0x1C01B13B8
 * Callers:
 *     ProcessTouchInputViaRim @ 0x1C01B0D54 (ProcessTouchInputViaRim.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     FreeTPFrame @ 0x1C01992F8 (FreeTPFrame.c)
 *     ?GetEarliestTPFrame@PointerFrameList@@YAPEAUtagPOINTERINPUTFRAME@@PEAI@Z @ 0x1C01994F0 (-GetEarliestTPFrame@PointerFrameList@@YAPEAUtagPOINTERINPUTFRAME@@PEAI@Z.c)
 *     ?GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C0199534 (-GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     CreateTPFrame @ 0x1C019A8B0 (CreateTPFrame.c)
 *     FindHoldingFrameForDevice @ 0x1C019AB7C (FindHoldingFrameForDevice.c)
 *     ResetHoldingFrame @ 0x1C019B118 (ResetHoldingFrame.c)
 *     ?HasActiveContacts@@YAHPEBUtagTPSTATE@@@Z @ 0x1C01AB6D4 (-HasActiveContacts@@YAHPEBUtagTPSTATE@@@Z.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01AF180 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     ?zzzCancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01B095C (-zzzCancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     TPAAPShouldAllowNow @ 0x1C01B116C (TPAAPShouldAllowNow.c)
 *     xxxCancelMouseUpTimer @ 0x1C01B1358 (xxxCancelMouseUpTimer.c)
 *     xxxGeneratePointerInputMessages @ 0x1C01CA88C (xxxGeneratePointerInputMessages.c)
 */

__int64 __fastcall xxxDoTouchpadProcessing(void *a1, int a2)
{
  int v2; // esi
  struct tagPOINTERHOLDINGFRAME *HoldingFrameForDevice; // rax
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 TPFrame; // r13
  unsigned int *v11; // rdx
  struct tagPOINTERINPUTFRAME *EarliestTPFrame; // rbp
  int v13; // eax
  __int64 v14; // r14
  int v15; // esi
  int v16; // ecx
  int v17; // eax
  bool v18; // zf
  int v19; // edx
  int v20; // esi
  __int64 ThreadWin32Thread; // rax
  struct _LIST_ENTRY *v22; // r8
  struct tagPOINTERINPUTFRAME *NextFrame; // rsi
  __int64 *v24; // rcx
  struct tagPOINTERHOLDINGFRAME *v25; // rax
  __int64 v26; // rcx
  int v27; // eax
  struct tagTPSTATE *v28; // rcx
  unsigned int *v29; // rdx
  _QWORD v30[11]; // [rsp+30h] [rbp-58h] BYREF
  char v32; // [rsp+A0h] [rbp+18h] BYREF

  v2 = a2;
  HoldingFrameForDevice = FindHoldingFrameForDevice((__int64)a1);
  v5 = (__int64)HoldingFrameForDevice;
  if ( !HoldingFrameForDevice )
    return 0LL;
  v6 = *((_QWORD *)HoldingFrameForDevice + 11);
  if ( !v6 )
    return 0LL;
  v7 = HMValidateHandleNoSecure(*((_QWORD *)HoldingFrameForDevice + 2), 19);
  if ( !v7 )
    return 0LL;
  v8 = *(_QWORD *)(v7 + 472);
  if ( !v8 )
    return 0LL;
  TPFrame = CreateTPFrame(v5);
  if ( !TPFrame )
    return 1LL;
  ResetHoldingFrame(v5);
  EarliestTPFrame = PointerFrameList::GetEarliestTPFrame((PointerFrameList *)&v32, v11);
  if ( EarliestTPFrame )
  {
    do
    {
      if ( gbTapTimerFired )
      {
        *(_DWORD *)(v6 + 1920) &= ~0x10u;
        gbTapTimerFired = 0;
      }
      v13 = *(_DWORD *)(v6 + 1920);
      if ( (v13 & 1) == 0 )
      {
        v14 = *((_QWORD *)EarliestTPFrame + 11);
        v15 = *(_DWORD *)(v14 + 68) & 0x10;
        if ( (v13 & 0x200) == 0 && v15 )
        {
          if ( *(_DWORD *)(v8 + 1528) == 2 && !(unsigned int)TPAAPShouldAllowNow(8, 0, 0, 0LL)
            || *(_DWORD *)(v6 + 1640)
            || gidTapTimer && !a2 )
          {
            v16 = 512;
          }
          else
          {
            v16 = 0;
          }
          *(_DWORD *)(v6 + 1920) = v16 | *(_DWORD *)(v6 + 1920) & 0xFFFFFDFF;
        }
        v17 = *(_DWORD *)(v6 + 1920);
        if ( (v17 & 0x200) != 0 )
        {
          v18 = v15 == 0;
          v2 = a2;
          if ( v18 )
            *(_DWORD *)(v6 + 1920) = v17 & 0xFFFFFDFF;
          else
            *(_DWORD *)(v14 + 68) &= ~0x10u;
        }
        else
        {
          if ( v15 )
          {
            if ( guMouseUpPending )
              *(_DWORD *)(v6 + 1920) = v17 & 0xFFFFFFEF;
            xxxCancelMouseUpTimer(1);
            gbTapTimerFired = 0;
          }
          v2 = a2;
        }
      }
      v19 = *(_DWORD *)(v6 + 1920);
      if ( (v19 & 4) == 0
        && (v19 & 8) == 0
        && ((*(_DWORD *)(*((_QWORD *)EarliestTPFrame + 11) + 68LL) & 0x20) != 0
         || (*(_DWORD *)(*((_QWORD *)EarliestTPFrame + 11) + 68LL) & 0x40) != 0) )
      {
        if ( guMouseUpPending )
          *(_DWORD *)(v6 + 1920) = v19 & 0xFFFFFFEF;
        xxxCancelMouseUpTimer(1);
        gbTapTimerFired = 0;
      }
      PushW32ThreadLock(TPFrame, v30, (__int64)CleanupTPFrameList);
      v20 = xxxInternalTPProcessing(v2, v6, (struct tagHID_POINTER_DEVICE_INFO *)v8, (__int64)EarliestTPFrame, a1);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(ThreadWin32Thread + 16) = v30[0];
      if ( v20 == 3 || v20 == 6 )
      {
        xxxGeneratePointerInputMessages(a1);
        NextFrame = PointerFrameList::GetEarliestTPFrame((PointerFrameList *)&v32, v29);
      }
      else
      {
        NextFrame = PointerFrameList::GetNextFrame(
                      EarliestTPFrame,
                      (const struct tagPOINTERINPUTFRAME *)&gFrameTPListHead,
                      v22);
        FreeTPFrame(v24);
        v25 = FindHoldingFrameForDevice((__int64)a1);
        if ( v25 )
        {
          v26 = *((_QWORD *)v25 + 11);
          if ( v26 )
          {
            v27 = *(_DWORD *)(v26 + 1920);
            if ( (v27 & 0x200000) != 0
              && (v27 & 1) == 0
              && !(unsigned int)HasActiveContacts((const struct tagTPSTATE *)v26) )
            {
              zzzCancelInertiaState(v28, 0);
            }
          }
        }
      }
      EarliestTPFrame = NextFrame;
      v18 = NextFrame == 0LL;
      v2 = a2;
    }
    while ( !v18 );
  }
  return 1LL;
}
