/*
 * XREFs of SfnPOPTINLPUINT @ 0x1C01FF5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C005AB94 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C005D0C4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

unsigned __int8 *__fastcall SfnPOPTINLPUINT(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        char *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v8; // r13d
  unsigned __int8 *v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // r9
  __int64 v13; // r14
  __int64 v14; // rsi
  unsigned int v15; // edx
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  unsigned int v18; // ecx
  unsigned __int8 *result; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // edi
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 *v37; // rcx
  __int64 v38; // rdi
  PVOID *v39; // rdx
  char v40; // [rsp+30h] [rbp-358h] BYREF
  _BYTE v41[3]; // [rsp+31h] [rbp-357h] BYREF
  unsigned int v42; // [rsp+34h] [rbp-354h]
  unsigned __int8 *v43; // [rsp+38h] [rbp-350h]
  _DWORD v44[8]; // [rsp+40h] [rbp-348h] BYREF
  unsigned __int64 v45; // [rsp+60h] [rbp-328h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-320h] BYREF
  __int128 v47; // [rsp+70h] [rbp-318h]
  __int64 v48; // [rsp+80h] [rbp-308h]
  __int64 v49; // [rsp+88h] [rbp-300h]
  _QWORD v50[3]; // [rsp+A8h] [rbp-2E0h] BYREF
  _QWORD v51[4]; // [rsp+C0h] [rbp-2C8h] BYREF
  _DWORD v52[24]; // [rsp+E0h] [rbp-2A8h] BYREF
  unsigned __int8 v53[512]; // [rsp+140h] [rbp-248h] BYREF

  v8 = a2;
  v10 = (unsigned __int8 *)v52;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, (__int64)a4);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = (__int64)a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v14 = 0LL;
  if ( a4 )
  {
    v15 = 1;
    v16 = 4LL * (unsigned int)a3;
    v17 = 0xFFFFFFFFLL;
    v18 = -1;
    if ( v16 <= 0xFFFFFFFF )
      v18 = 4 * a3;
    v42 = v18;
    if ( v16 > 0xFFFFFFFF )
      goto LABEL_38;
  }
  else
  {
    v18 = 0;
    v42 = 0;
    v15 = 0;
  }
  if ( v15 )
  {
    result = AllocCallbackMessage(88, v15, v18, v53, 1, 0x200uLL);
    v10 = result;
    v43 = result;
    if ( !result )
      return result;
  }
  else
  {
    v10 = (unsigned __int8 *)v52;
    v43 = (unsigned __int8 *)v52;
    memset(v52, 0, 0x58uLL);
    v52[0] = 88;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21, v22);
  if ( v10 != (unsigned __int8 *)v52 && v10 != v53 )
    PushW32ThreadLock((__int64)v10, v51, (__int64)Win32FreePool, v12);
  *((_QWORD *)v10 + 5) = v14;
  *((_DWORD *)v10 + 12) = v8;
  *((_QWORD *)v10 + 7) = a3;
  if ( a4 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v10, a4, v42, (void **)v10 + 8) < 0 )
      goto LABEL_38;
  }
  else
  {
    *((_QWORD *)v10 + 8) = 0LL;
  }
  *((_QWORD *)v10 + 9) = a5;
  *((_QWORD *)v10 + 10) = a6;
  v24 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v17, v12);
  v50[0] = *(_QWORD *)(v24 + 392);
  *(_QWORD *)(v24 + 392) = v50;
  v50[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v27 = *(_QWORD *)(v13 + 456);
  v47 = *(_OWORD *)(v27 + 64);
  v48 = *(_QWORD *)(v27 + 80);
  *(_QWORD *)(v27 + 72) = v14;
  if ( a1 )
    v28 = *(_QWORD *)a1;
  else
    v28 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 456) + 64LL) = v28;
  if ( a1 )
    v29 = *((_QWORD *)a1 + 35);
  else
    v29 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 456) + 80LL) = v29;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v41,
    gdwInAtomicOperation,
    v25,
    v26);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v40);
  EtwTraceBeginCallback(36LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v30 = KeUserModeCallback(36LL, v10, *(unsigned int *)v10, &v45, v44);
  EtwTraceEndCallback(36LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v40);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v41,
    v31,
    v32,
    v33);
  ThreadUnlock1(v35, v34);
  v36 = *(_QWORD *)(v13 + 456);
  *(_OWORD *)(v36 + 64) = v47;
  *(_QWORD *)(v36 + 80) = v48;
  if ( v30 >= 0 && v44[0] == 24 )
  {
    v37 = (__int64 *)v45;
    if ( v45 + 8 < v45 || v45 + 8 > MmUserProbeAddress )
      v37 = (__int64 *)MmUserProbeAddress;
    v38 = *v37;
    v49 = *v37;
    goto LABEL_39;
  }
LABEL_38:
  v38 = 0LL;
LABEL_39:
  if ( v10 != (unsigned __int8 *)v52 && v10 != v53 )
  {
    v39 = (PVOID *)(v10 + 32);
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v39, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v51, (__int64)v39, v17, v12);
  }
  return (unsigned __int8 *)v38;
}
