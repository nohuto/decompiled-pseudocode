/*
 * XREFs of xxxDCEWindowHitTestIndirect @ 0x1C0063700
 * Callers:
 *     xxxDCEWindowHitTest @ 0x1C0061F80 (xxxDCEWindowHitTest.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00638A0 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00638A0 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00AA600 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

HWND __fastcall xxxDCEWindowHitTestIndirect(struct tagWND *a1, struct tagPOINT a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct tagWND *v6; // rbx
  unsigned int v7; // r14d
  __int64 v8; // rdx
  _QWORD *ThreadWin32Thread; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 CurrentProcessWin32Process; // rax
  HWND v13; // rdi
  __int64 v14; // rcx
  int v15; // ebp
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct tagWND *v20; // rcx
  __int64 v22; // [rsp+20h] [rbp-48h] BYREF
  struct tagWND *i; // [rsp+28h] [rbp-40h]
  struct tagPOINT v24; // [rsp+70h] [rbp+8h] BYREF
  struct tagPOINT v25; // [rsp+78h] [rbp+10h] BYREF

  v25 = a2;
  CurrentThread = KeGetCurrentThread();
  v6 = a1;
  v7 = 18;
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))IsThreadCrossSessionAttached)(
                        a1,
                        a2,
                        a3,
                        a4) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v11 = *ThreadWin32Thread;
      if ( *ThreadWin32Thread )
      {
        if ( *(_QWORD *)(v11 + 352) )
          CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
        if ( *(_DWORD *)(v11 + 340) )
        {
          v7 = *(_DWORD *)(v11 + 340);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
          if ( CurrentProcessWin32Process )
            v7 = *(_DWORD *)(CurrentProcessWin32Process + 280);
        }
      }
    }
  }
  v13 = 0LL;
  v14 = gptiCurrent;
  v22 = *(_QWORD *)(gptiCurrent + 392LL);
  *(_QWORD *)(gptiCurrent + 392LL) = &v22;
  for ( i = 0LL; v6; v6 = (struct tagWND *)*((_QWORD *)v6 + 11) )
  {
    v15 = *(_DWORD *)(a3 + 32);
    v24 = v25;
    if ( (v15 & 4) != 0 )
    {
      v16 = *((_QWORD *)v6 + 13);
      if ( v16 )
      {
        v17 = *((_QWORD *)v6 + 3);
        v18 = 0LL;
        if ( v17 )
        {
          v19 = *(_QWORD *)(v17 + 8);
          if ( v19 )
            v18 = *(_QWORD *)(v19 + 16);
        }
        if ( v16 == v18 && (((unsigned __int16)(v7 >> 8) ^ (unsigned __int16)(*((_DWORD *)v6 + 92) >> 8)) & 0x1FF) != 0 )
        {
          LogicalToPhysicalDPIPoint(&v24, &v25, v7, 0LL);
          *(_DWORD *)(a3 + 32) &= ~4u;
        }
      }
    }
    v20 = i;
    i = v6;
    _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
    if ( v20 && _InterlockedExchangeAdd((volatile signed __int32 *)v20 + 2, 0xFFFFFFFF) == 1 )
      HMUnlockObjectInternal(v20);
    v13 = xxxDCEWindowHitTest2Internal(v6, v24, (struct tagDCE_WINDOW_HIT_TEST_ARGS *)a3);
    if ( v13 )
      break;
    *(_DWORD *)(a3 + 32) = v15;
  }
  ThreadUnlock1(v14, v8);
  return v13;
}
