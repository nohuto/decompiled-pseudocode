/*
 * XREFs of zzzAttachToQueue @ 0x1C00B66AC
 * Callers:
 *     xxxSetThreadDesktop @ 0x1C001A398 (xxxSetThreadDesktop.c)
 *     zzzSetDesktop @ 0x1C001A520 (zzzSetDesktop.c)
 *     zzzReattachThreads @ 0x1C00B6108 (zzzReattachThreads.c)
 *     xxxSwitchDesktop @ 0x1C00B8B10 (xxxSwitchDesktop.c)
 *     xxxHardErrorControl @ 0x1C020BE9C (xxxHardErrorControl.c)
 * Callees:
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C000656C (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     LockCaptureWindow @ 0x1C003C7A4 (LockCaptureWindow.c)
 *     UpdateRawMouseMode @ 0x1C004A46C (UpdateRawMouseMode.c)
 *     ?CheckTransferState@@YAKPEAUtagTHREADINFO@@PEAUtagQ@@JH@Z @ 0x1C00B6A10 (-CheckTransferState@@YAKPEAUtagTHREADINFO@@PEAUtagQ@@JH@Z.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00B7D4C (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     IsInsideMenuLoop @ 0x1C00CAF40 (IsInsideMenuLoop.c)
 *     UnlockCaptureWindow @ 0x1C00F8780 (UnlockCaptureWindow.c)
 */

__int64 __fastcall zzzAttachToQueue(struct tagTHREADINFO *a1, struct tagQ *a2, __int64 a3, int a4)
{
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // eax
  struct tagTHREADINFO *v12; // rcx
  __int64 v13; // rbx
  unsigned int v14; // eax
  struct tagTHREADINFO *v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 result; // rax
  unsigned int v19; // ecx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  struct tagQMSG *v23; // rcx
  __int64 v24; // rcx
  int v25; // edx
  __int64 v26; // rdx
  char *v27; // [rsp+20h] [rbp-10h] BYREF
  __int64 v28; // [rsp+28h] [rbp-8h]

  v8 = CheckTransferState(a1, a2, 88, a4) - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      v27 = (char *)(v9 + 88);
      v28 = *(_QWORD *)(*(_QWORD *)(v10 + 384) + 88LL);
      HMAssignmentLock(&v27);
      HMAssignmentUnlock(*((_QWORD *)a1 + 48) + 88LL);
      v21 = *((_QWORD *)a1 + 48);
      v22 = *(_QWORD *)(v21 + 256);
      if ( v22 )
      {
        if ( *(struct tagTHREADINFO **)(v22 + 16) == a1 && !*((_QWORD *)a2 + 32) )
        {
          *((_OWORD *)a2 + 16) = *(_OWORD *)(v21 + 256);
          *((_OWORD *)a2 + 17) = *(_OWORD *)(v21 + 272);
          *((_OWORD *)a2 + 18) = *(_OWORD *)(v21 + 288);
          *((_OWORD *)a2 + 19) = *(_OWORD *)(v21 + 304);
          *((_QWORD *)a2 + 40) = *(_QWORD *)(v21 + 320);
          *(_QWORD *)(*((_QWORD *)a1 + 48) + 256LL) = 0LL;
        }
      }
    }
  }
  else
  {
    CancelInputState((struct tagTHREADINFO *)v10, 0);
  }
  v11 = CheckTransferState(a1, a2, 80, a4) - 1;
  if ( v11 )
  {
    if ( v11 == 1 )
    {
      v27 = (char *)a2 + 80;
      v28 = *(_QWORD *)(*((_QWORD *)a1 + 48) + 80LL);
      HMAssignmentLock(&v27);
      HMAssignmentUnlock(*((_QWORD *)a1 + 48) + 80LL);
    }
  }
  else
  {
    CancelInputState(v12, 1);
  }
  v13 = *((_QWORD *)a1 + 48);
  HMAssignmentUnlock(v13 + 104);
  *(_BYTE *)(v13 + 112) = 0;
  HMAssignmentUnlock((char *)a2 + 104);
  *((_BYTE *)a2 + 112) = 0;
  v14 = CheckTransferState(a1, a2, 72, a4) - 1;
  if ( v14 )
  {
    if ( v14 == 1 )
    {
      LockCaptureWindow((__int64)a2, *(_QWORD *)(*((_QWORD *)a1 + 48) + 72LL));
      UnlockCaptureWindow(*((_QWORD *)a1 + 48));
      UpdateRawMouseMode((__int64)a2);
      v25 = *((_DWORD *)a2 + 85);
      *((_DWORD *)a2 + 29) = *(_DWORD *)(*((_QWORD *)a1 + 48) + 116LL);
      *((_DWORD *)a2 + 85) = v25 ^ (v25 ^ *(_DWORD *)(*((_QWORD *)a1 + 48) + 340LL)) & 0x100000;
    }
  }
  else
  {
    CancelInputState(v15, 2);
  }
  v16 = CheckTransferState(a1, a2, 96, a4) - 1;
  if ( v16 )
  {
    if ( v16 != 1 )
      goto LABEL_11;
    v27 = (char *)a2 + 96;
    v24 = *(_QWORD *)(*((_QWORD *)a1 + 48) + 96LL);
    goto LABEL_25;
  }
  v26 = *((_QWORD *)a2 + 11);
  if ( v26 )
  {
    if ( *((_QWORD *)a2 + 12) )
    {
      v24 = *(_QWORD *)(*((_QWORD *)a1 + 48) + 96LL);
      if ( v24 )
      {
        if ( *(_QWORD *)(v26 + 88) == v24 )
        {
          v27 = (char *)a2 + 96;
LABEL_25:
          v28 = v24;
          HMAssignmentLock(&v27);
          HMAssignmentUnlock(*((_QWORD *)a1 + 48) + 96LL);
        }
      }
    }
  }
LABEL_11:
  v17 = *((_QWORD *)a1 + 48);
  if ( a1 == *(struct tagTHREADINFO **)(v17 + 32) )
  {
    *((_DWORD *)a2 + 85) ^= (*((_DWORD *)a2 + 85) ^ *(_DWORD *)(v17 + 340)) & 0xFFEFFFFF;
    if ( !(unsigned int)IsInsideMenuLoop(a1) )
      *((_DWORD *)a2 + 85) &= ~0x40u;
    *(_QWORD *)(*((_QWORD *)a1 + 48) + 32LL) = 0LL;
  }
  if ( gspwndCursor && a1 == *(struct tagTHREADINFO **)(gspwndCursor + 16) )
  {
    v27 = (char *)a2 + 328;
    v28 = *(_QWORD *)(*((_QWORD *)a1 + 48) + 328LL);
    HMAssignmentLock(&v27);
  }
  *((_DWORD *)a2 + 84) += *((_DWORD *)a1 + 168);
  *((_QWORD *)a2 + 7) = a1;
  *((_QWORD *)a2 + 8) = a1;
  result = *((_QWORD *)a1 + 47);
  v19 = *(_DWORD *)(result + 824);
  if ( *((_DWORD *)a2 + 95) < v19 )
  {
    *((_DWORD *)a2 + 96) = 0;
    *((_DWORD *)a2 + 95) = v19;
  }
  v20 = *((_QWORD *)a1 + 48);
  *((_QWORD *)a1 + 48) = a2;
  if ( v20 == a3 )
  {
    --*(_DWORD *)(v20 + 344);
  }
  else
  {
    v23 = *(struct tagQMSG **)v20;
    *(_QWORD *)v20 = 0LL;
    *(_QWORD *)(v20 + 8) = 0LL;
    *(_DWORD *)(v20 + 16) = 0;
    RedistributeInput(v23, (struct tagQ *)v20, 0LL);
    return zzzDestroyQueue(v20);
  }
  return result;
}
