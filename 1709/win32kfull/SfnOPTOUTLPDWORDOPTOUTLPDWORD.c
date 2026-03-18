/*
 * XREFs of SfnOPTOUTLPDWORDOPTOUTLPDWORD @ 0x1C0059BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall SfnOPTOUTLPDWORDOPTOUTLPDWORD(
        volatile signed __int32 *a1,
        int a2,
        _DWORD *a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // r8
  _DWORD *v26; // rdx
  _DWORD *v27; // rdx
  _QWORD v28[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v29; // [rsp+78h] [rbp-90h]
  __int64 v30; // [rsp+88h] [rbp-80h]
  __int64 v31; // [rsp+90h] [rbp-78h]
  _QWORD v32[10]; // [rsp+B8h] [rbp-50h] BYREF
  char v33; // [rsp+110h] [rbp+8h] BYREF
  char v34; // [rsp+118h] [rbp+10h] BYREF
  int v35; // [rsp+120h] [rbp+18h] BYREF
  unsigned __int64 v36; // [rsp+128h] [rbp+20h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = (__int64)a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v14 = 0LL;
  memset(v28, 0, sizeof(v28));
  v28[0] = v14;
  LODWORD(v28[1]) = a2;
  v28[2] = a5;
  v28[3] = a6;
  v15 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v32[0] = *(_QWORD *)(v15 + 392);
  *(_QWORD *)(v15 + 392) = v32;
  v32[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v16 = *(_QWORD *)(v13 + 456);
  v29 = *(_OWORD *)(v16 + 64);
  v30 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v16 + 72) = v14;
  if ( a1 )
    v17 = *(_QWORD *)a1;
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 456) + 64LL) = v17;
  if ( a1 )
    v18 = *((_QWORD *)a1 + 35);
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 456) + 80LL) = v18;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v33);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v34);
  EtwTraceBeginCallback(31LL);
  v19 = KeUserModeCallback(31LL, v28, 32LL, &v36, &v35);
  EtwTraceEndCallback(31LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v34);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v33);
  ThreadUnlock1(v21, v20);
  v22 = *(_QWORD *)(v13 + 456);
  *(_OWORD *)(v22 + 64) = v29;
  *(_QWORD *)(v22 + 80) = v30;
  if ( v19 < 0 || v35 != 24 )
    return 0LL;
  v23 = (__int64 *)v36;
  if ( v36 + 8 < v36 || v36 + 8 > MmUserProbeAddress )
    v23 = (__int64 *)MmUserProbeAddress;
  v24 = *v23;
  v31 = *v23;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    if ( a3 )
    {
      v26 = *(_DWORD **)(v36 + 16);
      if ( (unsigned __int64)v26 >= MmUserProbeAddress )
        v26 = (_DWORD *)MmUserProbeAddress;
      *a3 = *v26;
    }
    if ( a4 )
    {
      v27 = (_DWORD *)(*(_QWORD *)(v36 + 16) + 4LL);
      if ( (unsigned __int64)v27 >= MmUserProbeAddress )
        v27 = (_DWORD *)MmUserProbeAddress;
      *a4 = *v27;
    }
  }
  return v24;
}
