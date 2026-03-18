/*
 * XREFs of ClientGetListboxString @ 0x1C00DDC8C
 * Callers:
 *     SfnOUTCBOXSTRING @ 0x1C00DCB00 (SfnOUTCBOXSTRING.c)
 *     SfnOUTLBOXSTRING @ 0x1C00DCE70 (SfnOUTLBOXSTRING.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C005D0C4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00DDA7C (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00DDBC8 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00DE0CC (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall ClientGetListboxString(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        __int64 a9)
{
  int v11; // r12d
  unsigned __int8 *v13; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // r14
  __int64 v16; // rsi
  __int64 v17; // r8
  unsigned int v18; // ecx
  __int64 v19; // r9
  unsigned int v20; // edx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r9
  __int64 v25; // rdx
  int v26; // r11d
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // edi
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  unsigned __int64 *v40; // rdi
  unsigned __int64 v41; // rdi
  ULONG64 v43; // rcx
  __int64 v44; // xmm1_8
  int v45; // r14d
  int v46; // r8d
  unsigned int v47; // r8d
  unsigned int v48; // eax
  unsigned __int64 v49; // rax
  _QWORD *v50; // rcx
  PVOID *v51; // rdx
  char v52; // [rsp+30h] [rbp-378h] BYREF
  _BYTE v53[3]; // [rsp+31h] [rbp-377h] BYREF
  unsigned int v54; // [rsp+34h] [rbp-374h]
  int v55; // [rsp+38h] [rbp-370h]
  unsigned __int8 *v56; // [rsp+40h] [rbp-368h]
  _DWORD v57[6]; // [rsp+48h] [rbp-360h] BYREF
  unsigned __int64 v58; // [rsp+60h] [rbp-348h] BYREF
  unsigned __int64 v59; // [rsp+68h] [rbp-340h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-330h] BYREF
  __int128 v61; // [rsp+80h] [rbp-328h]
  __int64 v62; // [rsp+90h] [rbp-318h]
  __int128 v63; // [rsp+98h] [rbp-310h] BYREF
  __int64 v64; // [rsp+A8h] [rbp-300h]
  _QWORD v65[3]; // [rsp+D8h] [rbp-2D0h] BYREF
  _QWORD v66[4]; // [rsp+F0h] [rbp-2B8h] BYREF
  unsigned __int8 v67[96]; // [rsp+110h] [rbp-298h] BYREF
  unsigned __int8 v68[512]; // [rsp+170h] [rbp-238h] BYREF

  v11 = a2;
  v55 = a7 & 1;
  v13 = v67;
  v59 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v15 = ThreadWin32Thread;
  if ( a1 )
    v16 = (__int64)a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v16 = 0LL;
  v17 = *(unsigned int *)(a4 + 4);
  v18 = *(_DWORD *)(a4 + 4) & 0x7FFFFFFF;
  v19 = 0xFFFFFFFFLL;
  v20 = -1;
  if ( v18 + 2 >= v18 )
    v20 = v18 + 2;
  v54 = v20;
  if ( v18 + 2 < v18 )
    goto LABEL_46;
  if ( (int)v17 < 0 && !v55 )
  {
    v49 = 2LL * v20;
    v20 = -1;
    if ( v49 <= 0xFFFFFFFF )
      v20 = v49;
    v54 = v20;
    if ( v49 > 0xFFFFFFFF )
      goto LABEL_46;
  }
  v13 = AllocCallbackMessage(96, 1u, v20, v68, 0, 0x200uLL);
  v56 = v13;
  if ( !v13 )
    return 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v22, v23);
  if ( v13 != v67 && v13 != v68 )
    PushW32ThreadLock((__int64)v13, v66, (__int64)Win32FreePool, v24);
  *((_QWORD *)v13 + 5) = v16;
  *((_DWORD *)v13 + 12) = v11;
  *((_QWORD *)v13 + 7) = a3;
  *((_QWORD *)v13 + 8) = a5;
  *((_QWORD *)v13 + 9) = a6;
  if ( AllocateCallbackData((struct _CAPTUREBUF *)v13, v54, (void **)v13 + 10) < 0 )
    goto LABEL_46;
  *((_DWORD *)v13 + 22) = v26;
  v27 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v17, v19);
  v65[0] = *(_QWORD *)(v27 + 392);
  *(_QWORD *)(v27 + 392) = v65;
  v65[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v30 = *(_QWORD *)(v15 + 456);
  v61 = *(_OWORD *)(v30 + 64);
  v62 = *(_QWORD *)(v30 + 80);
  *(_QWORD *)(v30 + 72) = v16;
  if ( a1 )
    v31 = *(_QWORD *)a1;
  else
    v31 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v15 + 456) + 64LL) = v31;
  if ( a1 )
    v32 = *((_QWORD *)a1 + 35);
  else
    v32 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v15 + 456) + 80LL) = v32;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v53,
    gdwInAtomicOperation,
    v28,
    v29);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v52);
  EtwTraceBeginCallback(72LL);
  *((_QWORD *)v13 + 2) = 0LL;
  v33 = KeUserModeCallback(72LL, v13, *(unsigned int *)v13, &v58, v57);
  EtwTraceEndCallback(72LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v52);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v53,
    v34,
    v35,
    v36);
  ThreadUnlock1(v38, v37);
  v39 = *(_QWORD *)(v15 + 456);
  *(_OWORD *)(v39 + 64) = v61;
  *(_QWORD *)(v39 + 80) = v62;
  if ( v33 < 0 )
    goto LABEL_46;
  if ( v57[0] == 24 )
  {
    v40 = (unsigned __int64 *)v58;
    if ( v58 + 8 < v58 || v58 + 8 > MmUserProbeAddress )
      v40 = (unsigned __int64 *)MmUserProbeAddress;
    v41 = *v40;
    v59 = v41;
    if ( (v41 & 0x80000000) == 0LL && (!a9 || (*(_DWORD *)(a9 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      if ( a8 )
      {
        v50 = *(_QWORD **)(v58 + 16);
        if ( v50 + 1 < v50 || (unsigned __int64)(v50 + 1) > MmUserProbeAddress )
          v50 = (_QWORD *)MmUserProbeAddress;
        **(_QWORD **)(a4 + 8) = *v50;
      }
      else
      {
        v43 = v58;
        if ( v58 + 24 < v58 || v58 + 24 > MmUserProbeAddress )
          v43 = MmUserProbeAddress;
        v44 = *(_QWORD *)(v43 + 16);
        v63 = *(_OWORD *)v43;
        v64 = v44;
        v45 = v55;
        v41 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v63, v41, *(_DWORD *)(a4 + 4) >> 31, v55);
        v59 = v41;
        v46 = *(_DWORD *)(a4 + 4);
        if ( v46 < 0 )
          v47 = v46 & 0x7FFFFFFF;
        else
          v47 = ((unsigned int)v46 >> 1) & 0x3FFFFFFF;
        CopyOutputString((struct _CALLBACKSTATUS *)&v63, (PWCH *)a4, v47, v45);
      }
      v48 = *(_DWORD *)a4;
      if ( *(int *)(a4 + 4) >= 0 )
        v48 >>= 1;
      if ( !a8 && v41 != -1LL && v41 > v48 )
        LODWORD(v41) = v48;
    }
  }
  else
  {
LABEL_46:
    LODWORD(v41) = 0;
  }
  if ( v13 != v67 && v13 != v68 )
  {
    v51 = (PVOID *)(v13 + 32);
    if ( *((_QWORD *)v13 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v51, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v66, (__int64)v51, v17, v19);
  }
  return (unsigned int)v41;
}
