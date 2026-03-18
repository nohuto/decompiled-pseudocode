/*
 * XREFs of xxxDCEWindowHitTestIndirect @ 0x1C0061C80
 * Callers:
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0061EF0 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxWindowFromPoint @ 0x1C00E3160 (xxxWindowFromPoint.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01D0660 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 *     ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x1C01D14A8 (-xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0054B50 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0061EF0 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 */

HWND __fastcall xxxDCEWindowHitTestIndirect(struct tagWND *a1, struct tagPOINT a2, __int64 a3)
{
  int v5; // r14d
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 CurrentProcessWin32Process; // rax
  HWND v11; // rbp
  __int64 v12; // rcx
  int v13; // esi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct tagWND *v18; // rcx
  __int64 v21; // [rsp+20h] [rbp-38h] BYREF
  struct tagWND *i; // [rsp+28h] [rbp-30h]
  struct tagPOINT v23; // [rsp+60h] [rbp+8h] BYREF
  struct tagPOINT v24; // [rsp+68h] [rbp+10h] BYREF

  v24 = a2;
  LOBYTE(v5) = 18;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v9 = *ThreadWin32Thread;
    if ( *ThreadWin32Thread )
    {
      if ( *(_QWORD *)(v9 + 352) )
        CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
      if ( *(_DWORD *)(v9 + 340) )
      {
        v5 = *(_DWORD *)(v9 + 340);
      }
      else
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8, v7);
        if ( CurrentProcessWin32Process )
          v5 = *(_DWORD *)(CurrentProcessWin32Process + 280);
      }
    }
  }
  v11 = 0LL;
  v12 = gptiCurrent;
  v21 = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = &v21;
  for ( i = 0LL; a1; a1 = (struct tagWND *)*((_QWORD *)a1 + 11) )
  {
    v13 = *(_DWORD *)(a3 + 32);
    v23 = v24;
    if ( (v13 & 4) != 0 )
    {
      v14 = *((_QWORD *)a1 + 13);
      if ( v14 )
      {
        v15 = *((_QWORD *)a1 + 3);
        v16 = 0LL;
        if ( v15 )
        {
          v17 = *(_QWORD *)(v15 + 8);
          if ( v17 )
            v16 = *(_QWORD *)(v17 + 16);
        }
        if ( v14 == v16 && (((unsigned __int8)v5 ^ *((_BYTE *)a1 + 368)) & 0xF) != 0 )
        {
          LogicalToPhysicalDPIPoint(&v23, &v24, 0LL, 0LL);
          *(_DWORD *)(a3 + 32) &= ~4u;
        }
      }
    }
    v18 = i;
    i = a1;
    ++*((_DWORD *)a1 + 2);
    if ( v18 )
    {
      if ( (*((_DWORD *)v18 + 2))-- == 1 )
        HMUnlockObjectInternal(v18);
    }
    v11 = xxxDCEWindowHitTest2Internal(a1, v23, (struct tagDCE_WINDOW_HIT_TEST_ARGS *)a3);
    if ( v11 )
      break;
    *(_DWORD *)(a3 + 32) = v13;
  }
  ThreadUnlock1(v12, v7);
  return v11;
}
