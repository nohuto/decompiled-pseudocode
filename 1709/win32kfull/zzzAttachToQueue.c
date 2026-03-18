/*
 * XREFs of zzzAttachToQueue @ 0x1C00CAED8
 * Callers:
 *     xxxSwitchDesktop @ 0x1C005089C (xxxSwitchDesktop.c)
 *     xxxSetThreadDesktop @ 0x1C008C4B4 (xxxSetThreadDesktop.c)
 *     zzzSetDesktop @ 0x1C008C630 (zzzSetDesktop.c)
 *     zzzReattachThreads @ 0x1C00CA9AC (zzzReattachThreads.c)
 *     xxxHardErrorControl @ 0x1C020DE0C (xxxHardErrorControl.c)
 * Callees:
 *     LockCaptureWindow @ 0x1C0046C44 (LockCaptureWindow.c)
 *     UpdateRawMouseMode @ 0x1C00A0E54 (UpdateRawMouseMode.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00C8CC4 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     ?CheckTransferState@@YAKPEAUtagTHREADINFO@@PEAUtagQ@@JH@Z @ 0x1C00CB250 (-CheckTransferState@@YAKPEAUtagTHREADINFO@@PEAUtagQ@@JH@Z.c)
 *     IsInsideMenuLoop @ 0x1C00CF214 (IsInsideMenuLoop.c)
 *     UnlockCaptureWindow @ 0x1C01048B0 (UnlockCaptureWindow.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01405C0 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 */

__int64 __fastcall zzzAttachToQueue(struct tagTHREADINFO *a1, struct tagQ *a2, __int64 a3, int a4)
{
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // eax
  struct tagTHREADINFO *v14; // rcx
  __int64 v15; // rbx
  unsigned int v16; // eax
  struct tagTHREADINFO *v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 result; // rax
  unsigned int v22; // ecx
  __int64 v23; // rbx
  struct tagQMSG *v24; // rcx
  __int64 v25; // rcx
  int v26; // edx
  int v27; // edx
  __int64 v28; // rdx
  char *v29; // [rsp+20h] [rbp-10h] BYREF
  __int64 v30; // [rsp+28h] [rbp-8h]

  v8 = CheckTransferState(a1, a2, 120, a4) - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      v29 = (char *)(v9 + 120);
      v30 = *(_QWORD *)(*(_QWORD *)(v10 + 408) + 120LL);
      HMAssignmentLock(&v29);
      HMAssignmentUnlock(*((_QWORD *)a1 + 51) + 120LL);
      v11 = *((_QWORD *)a1 + 51);
      v12 = *(_QWORD *)(v11 + 288);
      if ( v12 )
      {
        if ( *(struct tagTHREADINFO **)(v12 + 16) == a1 && !*((_QWORD *)a2 + 36) )
        {
          *((_OWORD *)a2 + 18) = *(_OWORD *)(v11 + 288);
          *((_OWORD *)a2 + 19) = *(_OWORD *)(v11 + 304);
          *((_OWORD *)a2 + 20) = *(_OWORD *)(v11 + 320);
          *((_OWORD *)a2 + 21) = *(_OWORD *)(v11 + 336);
          *((_OWORD *)a2 + 22) = *(_OWORD *)(v11 + 352);
          *(_QWORD *)(*((_QWORD *)a1 + 51) + 288LL) = 0LL;
        }
      }
    }
  }
  else
  {
    CancelInputState((struct tagTHREADINFO *)v10, 0);
  }
  v13 = CheckTransferState(a1, a2, 112, a4) - 1;
  if ( v13 )
  {
    if ( v13 == 1 )
    {
      v29 = (char *)a2 + 112;
      v30 = *(_QWORD *)(*((_QWORD *)a1 + 51) + 112LL);
      HMAssignmentLock(&v29);
      HMAssignmentUnlock(*((_QWORD *)a1 + 51) + 112LL);
    }
  }
  else
  {
    CancelInputState(v14, 1u);
  }
  v15 = *((_QWORD *)a1 + 51);
  HMAssignmentUnlock(v15 + 136);
  *(_BYTE *)(v15 + 144) = 0;
  HMAssignmentUnlock((char *)a2 + 136);
  *((_BYTE *)a2 + 144) = 0;
  v16 = CheckTransferState(a1, a2, 104, a4) - 1;
  if ( v16 )
  {
    if ( v16 == 1 )
    {
      LockCaptureWindow((__int64)a2, *(_QWORD *)(*((_QWORD *)a1 + 51) + 104LL));
      UnlockCaptureWindow(*((_QWORD *)a1 + 51));
      UpdateRawMouseMode((__int64)a2);
      v27 = *((_DWORD *)a2 + 95);
      *((_DWORD *)a2 + 37) = *(_DWORD *)(*((_QWORD *)a1 + 51) + 148LL);
      *((_DWORD *)a2 + 95) = v27 ^ (v27 ^ *(_DWORD *)(*((_QWORD *)a1 + 51) + 380LL)) & 0x100000;
    }
  }
  else
  {
    CancelInputState(v17, 2u);
  }
  v18 = CheckTransferState(a1, a2, 128, a4) - 1;
  if ( v18 )
  {
    if ( v18 != 1 )
      goto LABEL_12;
    v29 = (char *)a2 + 128;
    v25 = *(_QWORD *)(*((_QWORD *)a1 + 51) + 128LL);
    goto LABEL_22;
  }
  v28 = *((_QWORD *)a2 + 15);
  if ( v28 )
  {
    if ( *((_QWORD *)a2 + 16) )
    {
      v25 = *(_QWORD *)(*((_QWORD *)a1 + 51) + 128LL);
      if ( v25 )
      {
        if ( *(_QWORD *)(v28 + 88) == v25 )
        {
          v29 = (char *)a2 + 128;
LABEL_22:
          v30 = v25;
          HMAssignmentLock(&v29);
          HMAssignmentUnlock(*((_QWORD *)a1 + 51) + 128LL);
        }
      }
    }
  }
LABEL_12:
  v20 = *((_QWORD *)a1 + 51);
  if ( a1 == *(struct tagTHREADINFO **)(v20 + 64) )
  {
    *((_DWORD *)a2 + 95) ^= (*((_DWORD *)a2 + 95) ^ *(_DWORD *)(v20 + 380)) & 0xFFEFFFFF;
    if ( !(unsigned int)IsInsideMenuLoop(a1) )
      *((_DWORD *)a2 + 95) = v26 & 0xFFFFFFBF;
    *(_QWORD *)(*((_QWORD *)a1 + 51) + 64LL) = 0LL;
  }
  if ( gspwndCursor && a1 == *(struct tagTHREADINFO **)(gspwndCursor + 16) )
  {
    v29 = (char *)a2 + 368;
    v30 = *(_QWORD *)(*((_QWORD *)a1 + 51) + 368LL);
    HMAssignmentLock(&v29);
  }
  *((_DWORD *)a2 + 94) += *((_DWORD *)a1 + 182);
  *((_QWORD *)a2 + 11) = a1;
  *((_QWORD *)a2 + 12) = a1;
  result = *((_QWORD *)a1 + 50);
  v22 = *(_DWORD *)(result + 832);
  if ( *((_DWORD *)a2 + 105) < v22 )
  {
    *((_DWORD *)a2 + 106) = 0;
    *((_DWORD *)a2 + 105) = v22;
  }
  v23 = *((_QWORD *)a1 + 51);
  *((_QWORD *)a1 + 51) = a2;
  if ( v23 == a3 )
  {
    --*(_DWORD *)(v23 + 384);
  }
  else
  {
    v24 = *(struct tagQMSG **)(v23 + 24);
    *(_QWORD *)(v23 + 24) = 0LL;
    *(_QWORD *)(v23 + 32) = 0LL;
    *(_DWORD *)(v23 + 40) = 0;
    RedistributeInput(v24, (struct tagQ *)v23, 0LL, v19);
    return zzzDestroyQueue(v23, a1);
  }
  return result;
}
