/*
 * XREFs of xxxCreateCaret @ 0x1C00B0198
 * Callers:
 *     NtUserCreateCaret @ 0x1C00B00F0 (NtUserCreateCaret.c)
 *     xxxSBWndProc @ 0x1C020F940 (xxxSBWndProc.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C001DCFC (IsWindowBeingDestroyed.c)
 *     GreExtGetObjectW @ 0x1C00462D8 (GreExtGetObjectW.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00631F4 (xxxFlushDeferredWindowEvents.c)
 *     zzzInternalDestroyCaret @ 0x1C00B031C (zzzInternalDestroyCaret.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateCaret(__int64 *a1, HBRUSH a2, int a3, int a4)
{
  __int64 v8; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // eax
  unsigned int ThreadId; // eax
  int v16; // ecx
  int v17; // eax
  _QWORD v18[2]; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v19[8]; // [rsp+40h] [rbp-38h] BYREF

  memset(v19, 0, sizeof(v19));
  v8 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( *(_QWORD *)(a1[2] + 384) != v8 || (unsigned int)IsWindowBeingDestroyed((__int64)a1) )
    return 0LL;
  ++gdwDeferWinEvent;
  if ( *(_QWORD *)(v8 + 256) )
  {
    zzzInternalDestroyCaret(v11, v10, v12, v13);
    v8 = *(_QWORD *)(gptiCurrent + 384LL);
  }
  v18[1] = a1;
  v18[0] = v8 + 256;
  HMAssignmentLock(v18);
  v14 = *(_DWORD *)(v8 + 264) & 0xFFFFFFFE;
  *(_DWORD *)(v8 + 268) = 1;
  *(_DWORD *)(v8 + 264) = v14 | 2;
  ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent);
  *(_QWORD *)(v8 + 288) = a2;
  *(_DWORD *)(v8 + 304) = ThreadId;
  v16 = 1;
  v17 = 1;
  if ( a4 )
    v17 = a4;
  if ( a3 )
    v16 = a3;
  if ( (unsigned __int64)a2 > 1 )
  {
    GreExtGetObjectW(a2, 32LL, (unsigned __int16 *)v19);
    v17 = v19[2];
    v16 = v19[1];
  }
  *(_QWORD *)(v8 + 296) = 0LL;
  *(_DWORD *)(v8 + 280) = v17;
  *(_DWORD *)(v8 + 284) = v16;
  if ( --gdwDeferWinEvent == 1 )
  {
    if ( gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
  }
  xxxWindowEvent(0x8000u, a1, -8, 0, 0);
  return 1LL;
}
