/*
 * XREFs of xxxCreateCaret @ 0x1C0084868
 * Callers:
 *     NtUserCreateCaret @ 0x1C00847C0 (NtUserCreateCaret.c)
 *     xxxSBWndProc @ 0x1C02110F0 (xxxSBWndProc.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C001AC58 (GreExtGetObjectW.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006F614 (zzzEndDeferWinEventNotify.c)
 *     zzzInternalDestroyCaret @ 0x1C00849D4 (zzzInternalDestroyCaret.c)
 *     IsWindowBeingDestroyed @ 0x1C008BBE4 (IsWindowBeingDestroyed.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateCaret(__int64 a1, HBRUSH a2, int a3, int a4)
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
  v8 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) != v8 || (unsigned int)IsWindowBeingDestroyed(a1) )
    return 0LL;
  ++gdwDeferWinEvent;
  if ( *(_QWORD *)(v8 + 288) )
  {
    zzzInternalDestroyCaret(v11, v10, v12, v13);
    v8 = *(_QWORD *)(gptiCurrent + 408LL);
  }
  v18[1] = a1;
  v18[0] = v8 + 288;
  HMAssignmentLock(v18);
  v14 = *(_DWORD *)(v8 + 296) & 0xFFFFFFFE;
  *(_DWORD *)(v8 + 300) = 1;
  *(_DWORD *)(v8 + 296) = v14 | 2;
  ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent);
  *(_QWORD *)(v8 + 328) = a2;
  *(_DWORD *)(v8 + 344) = ThreadId;
  v16 = 1;
  v17 = 1;
  if ( a4 )
    v17 = a4;
  if ( a3 )
    v16 = a3;
  if ( (unsigned __int64)a2 > 1 )
  {
    GreExtGetObjectW(a2, 32LL, (char *)v19);
    v17 = v19[2];
    v16 = v19[1];
  }
  *(_QWORD *)(v8 + 336) = 0LL;
  *(_DWORD *)(v8 + 316) = v17;
  *(_DWORD *)(v8 + 320) = v16;
  zzzEndDeferWinEventNotify();
  xxxWindowEvent(0x8000u, (volatile signed __int32 *)a1, 4294967288LL, 0LL, 0);
  return 1LL;
}
