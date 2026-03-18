/*
 * XREFs of xxxClientFindMnemChar @ 0x1C0201EFC
 * Callers:
 *     xxxMNFindChar @ 0x1C021A60C (xxxMNFindChar.c)
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C005AB94 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C005D0C4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall xxxClientFindMnemChar(char **a1, __int16 a2)
{
  unsigned __int8 *result; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int8 *v8; // rdi
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  ULONG_PTR *v16; // rcx
  ULONG_PTR v17; // rbx
  PVOID *v18; // rdx
  char v19; // [rsp+30h] [rbp-2B8h] BYREF
  _BYTE v20[3]; // [rsp+31h] [rbp-2B7h] BYREF
  int v21; // [rsp+34h] [rbp-2B4h] BYREF
  _QWORD v22[2]; // [rsp+38h] [rbp-2B0h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+48h] [rbp-2A0h] BYREF
  _QWORD v24[4]; // [rsp+60h] [rbp-288h] BYREF
  unsigned __int8 v25[80]; // [rsp+80h] [rbp-268h] BYREF
  unsigned __int8 v26[512]; // [rsp+D0h] [rbp-218h] BYREF

  result = AllocCallbackMessage(72, 1u, *((unsigned __int16 *)a1 + 1), v26, 1, 0x200uLL);
  v8 = result;
  v22[1] = result;
  if ( result )
  {
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7);
    if ( v8 != v25 && v8 != v26 )
      PushW32ThreadLock((__int64)v8, v24, (__int64)Win32FreePool, v9);
    *((_WORD *)v8 + 28) = a2;
    *((_DWORD *)v8 + 15) = 1;
    *((_DWORD *)v8 + 16) = 1;
    *((_WORD *)v8 + 20) = *(_WORD *)a1;
    *((_WORD *)v8 + 21) = *((_WORD *)a1 + 1);
    if ( (int)CaptureCallbackData(
                (struct _CAPTUREBUF *)v8,
                a1[1],
                (unsigned int)*(unsigned __int16 *)a1 + 2,
                (void **)v8 + 6) < 0 )
      goto LABEL_15;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v20,
      gdwInAtomicOperation,
      v10,
      v11);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v19);
    EtwTraceBeginCallback(66LL);
    *((_QWORD *)v8 + 2) = 0LL;
    v12 = KeUserModeCallback(66LL, v8, *(unsigned int *)v8, v22, &v21);
    EtwTraceEndCallback(66LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v19);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v20,
      v13,
      v14,
      v15);
    if ( v12 < 0 )
      goto LABEL_15;
    if ( v21 == 24 )
    {
      v16 = (ULONG_PTR *)v22[0];
      if ( (unsigned __int64)(v22[0] + 8LL) < v22[0] || v22[0] + 8LL > MmUserProbeAddress )
        v16 = (ULONG_PTR *)MmUserProbeAddress;
      v17 = *v16;
      RegionSize[1] = *v16;
    }
    else
    {
LABEL_15:
      LODWORD(v17) = 0;
    }
    if ( v8 != v25 && v8 != v26 )
    {
      v18 = (PVOID *)(v8 + 32);
      if ( *((_QWORD *)v8 + 4) )
      {
        RegionSize[0] = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v18, RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v24, (__int64)v18, v10, v11);
    }
    return (unsigned __int8 *)(unsigned int)v17;
  }
  return result;
}
