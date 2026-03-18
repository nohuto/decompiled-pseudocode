/*
 * XREFs of xxxClientCopyDDEOut1 @ 0x1C0201BC4
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C01F19F0 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     ?xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z @ 0x1C01FA0EC (-xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z.c)
 */

__int64 __fastcall xxxClientCopyDDEOut1(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rbx
  __int64 v12; // rbx
  ULONG64 v13; // rcx
  ULONG64 v14; // rdx
  char v16; // [rsp+30h] [rbp-148h] BYREF
  _BYTE v17[3]; // [rsp+31h] [rbp-147h] BYREF
  _DWORD v18[3]; // [rsp+34h] [rbp-144h] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp-138h] BYREF
  __int64 v20; // [rsp+48h] [rbp-130h]
  __int128 v21; // [rsp+60h] [rbp-118h] BYREF
  __int128 v22; // [rsp+70h] [rbp-108h]
  __int128 v23; // [rsp+80h] [rbp-F8h]
  __int128 v24; // [rsp+90h] [rbp-E8h]
  __int64 v25; // [rsp+A0h] [rbp-D8h]
  __int128 v26; // [rsp+B0h] [rbp-C8h]
  __int128 v27; // [rsp+C0h] [rbp-B8h]
  volatile void *Address[2]; // [rsp+D0h] [rbp-A8h]
  volatile void *v29[2]; // [rsp+E0h] [rbp-98h]
  __int64 v30; // [rsp+F0h] [rbp-88h]
  _OWORD v31[4]; // [rsp+110h] [rbp-68h] BYREF
  __int64 v32; // [rsp+150h] [rbp-28h]

  v31[0] = *(_OWORD *)a1;
  v31[1] = *(_OWORD *)(a1 + 16);
  v31[2] = *(_OWORD *)(a1 + 32);
  v31[3] = *(_OWORD *)(a1 + 48);
  v32 = *(_QWORD *)(a1 + 64);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v17,
    gdwInAtomicOperation,
    a3,
    a4);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v16);
  EtwTraceBeginCallback(62LL);
  v5 = KeUserModeCallback(62LL, v31, 72LL, &v19, v18);
  EtwTraceEndCallback(62LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v16);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v17,
    v6,
    v7,
    v8);
  if ( v5 < 0 || v18[0] != 24 )
    return 0LL;
  v11 = (__int64 *)v19;
  if ( v19 + 8 < v19 || v19 + 8 > MmUserProbeAddress )
    v11 = (__int64 *)MmUserProbeAddress;
  v12 = *v11;
  v20 = v12;
  if ( v12 )
  {
    v13 = *(_QWORD *)(v19 + 16);
    v14 = v13 + 72;
    if ( v13 + 72 < v13 || v14 > MmUserProbeAddress )
      v13 = MmUserProbeAddress;
    v26 = *(_OWORD *)v13;
    v27 = *(_OWORD *)(v13 + 16);
    *(_OWORD *)Address = *(_OWORD *)(v13 + 32);
    *(_OWORD *)v29 = *(_OWORD *)(v13 + 48);
    v30 = *(_QWORD *)(v13 + 64);
    v21 = v26;
    v22 = v27;
    v23 = *(_OWORD *)Address;
    v24 = *(_OWORD *)v29;
    v25 = v30;
    if ( *(_DWORD *)(a1 + 40) )
    {
      ProbeForWrite(Address[0], *(int *)(a1 + 40), 1u);
      memmove((void *)Address[0], (const void *)(a1 + 72), *(int *)(a1 + 40));
    }
    if ( *(_DWORD *)(a1 + 64) )
    {
      ProbeForWrite(v29[1], *(int *)(a1 + 64), 1u);
      memmove((void *)v29[1], (const void *)(*(int *)(a1 + 40) + a1 + 72), *(int *)(a1 + 64));
    }
    if ( *((_QWORD *)&v27 + 1) && (unsigned int)xxxClientCopyDDEOut2((struct tagINTDDEINFO *)&v21, v14, v9, v10) )
    {
      if ( (v22 & 0x800) != 0 )
        v12 = *((_QWORD *)&v22 + 1);
      v20 = v12;
    }
    *(_OWORD *)a1 = v21;
    *(_OWORD *)(a1 + 16) = v22;
    *(_OWORD *)(a1 + 32) = v23;
    *(_OWORD *)(a1 + 48) = v24;
    *(_QWORD *)(a1 + 64) = v25;
  }
  return v12;
}
