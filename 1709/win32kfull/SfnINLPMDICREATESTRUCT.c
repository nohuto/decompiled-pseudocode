/*
 * XREFs of SfnINLPMDICREATESTRUCT @ 0x1C013C9A0
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
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00FCFF0 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0110214 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

unsigned __int8 *__fastcall SfnINLPMDICREATESTRUCT(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned int v9; // r12d
  int v10; // r14d
  unsigned __int8 *v11; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // r9
  __int64 v14; // r13
  unsigned __int64 v15; // rcx
  unsigned int v16; // edx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // esi
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 *v36; // rcx
  __int64 v37; // rsi
  unsigned __int8 *result; // rax
  unsigned int v39; // ecx
  unsigned int v40; // eax
  unsigned __int64 v41; // rcx
  int v42; // eax
  unsigned int v43; // ecx
  unsigned int v44; // eax
  unsigned __int64 v45; // rcx
  int v46; // eax
  void **v47; // r9
  unsigned int v48; // r8d
  CHAR *v49; // rdx
  int v50; // eax
  unsigned int v51; // r8d
  unsigned int v52; // r8d
  void **v53; // r9
  CHAR *v54; // rdx
  int v55; // eax
  unsigned int v56; // r8d
  PVOID *v57; // rdx
  char v58; // [rsp+30h] [rbp-398h] BYREF
  _BYTE v59[3]; // [rsp+31h] [rbp-397h] BYREF
  unsigned int v60; // [rsp+34h] [rbp-394h]
  int v61; // [rsp+38h] [rbp-390h]
  unsigned __int8 *v62; // [rsp+40h] [rbp-388h]
  unsigned int v63; // [rsp+48h] [rbp-380h]
  _DWORD v64[9]; // [rsp+4Ch] [rbp-37Ch] BYREF
  __int64 v65; // [rsp+70h] [rbp-358h]
  __int64 v66; // [rsp+78h] [rbp-350h]
  unsigned __int64 v67; // [rsp+80h] [rbp-348h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp-340h] BYREF
  __int128 v69; // [rsp+90h] [rbp-338h]
  __int64 v70; // [rsp+A0h] [rbp-328h]
  __int64 v71; // [rsp+A8h] [rbp-320h]
  _QWORD v72[3]; // [rsp+C8h] [rbp-300h] BYREF
  _QWORD v73[4]; // [rsp+E0h] [rbp-2E8h] BYREF
  _DWORD v74[36]; // [rsp+100h] [rbp-2C8h] BYREF
  unsigned __int8 v75[512]; // [rsp+190h] [rbp-238h] BYREF

  v65 = a3;
  v63 = a2;
  v60 = 0;
  v61 = 0;
  v9 = 0;
  v10 = a7 & 1;
  v11 = (unsigned __int8 *)v74;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v66 = ThreadWin32Thread;
  if ( a1 )
    v14 = (__int64)a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v14 = 0LL;
  v15 = *(_QWORD *)(a4 + 8);
  if ( v15 && (v15 >= (unsigned __int64)MmSystemRangeStart || *(_DWORD *)(a4 + 60) >> 31 != v10) )
  {
    v39 = *(_DWORD *)(a4 + 56);
    v40 = v39 + 2;
    v16 = -1;
    v17 = 0xFFFFFFFFLL;
    if ( v39 + 2 >= v39 )
      v17 = v40;
    v60 = v17;
    if ( v40 < v39 )
      goto LABEL_35;
    if ( *(int *)(a4 + 60) < 0 && (a7 & 1) == 0 )
    {
      v41 = 2LL * (unsigned int)v17;
      v42 = -1;
      if ( v41 <= 0xFFFFFFFF )
        v42 = 2 * v17;
      v60 = v42;
      if ( v41 > 0xFFFFFFFF )
        goto LABEL_35;
    }
    v9 = 1;
  }
  else
  {
    v16 = -1;
  }
  if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) != 0
    && (*(_QWORD *)a4 >= (unsigned __int64)MmSystemRangeStart || *(_DWORD *)(a4 + 76) >> 31 != v10) )
  {
    v43 = *(_DWORD *)(a4 + 72);
    v44 = v43 + 2;
    v17 = 0xFFFFFFFFLL;
    if ( v43 + 2 >= v43 )
      v17 = v44;
    v61 = v17;
    if ( v44 < v43 )
      goto LABEL_35;
    if ( *(int *)(a4 + 76) < 0 && (a7 & 1) == 0 )
    {
      v45 = 2LL * (unsigned int)v17;
      v46 = -1;
      if ( v45 <= 0xFFFFFFFF )
        v46 = 2 * v17;
      v61 = v46;
      if ( v45 > 0xFFFFFFFF )
        goto LABEL_35;
    }
    ++v9;
  }
  v17 = v60;
  if ( v60 + v61 >= v60 )
    v16 = v60 + v61;
  v64[5] = v16;
  if ( v60 + v61 >= v60 )
  {
    if ( v9 )
    {
      result = AllocCallbackMessage(144, v9, v16, v75, 1, 0x200uLL);
      v11 = result;
      v62 = result;
      if ( !result )
        return result;
    }
    else
    {
      v11 = (unsigned __int8 *)v74;
      v62 = (unsigned __int8 *)v74;
      memset(v74, 0, sizeof(v74));
      v74[0] = 144;
    }
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19, v20);
    if ( v11 != (unsigned __int8 *)v74 && v11 != v75 )
      PushW32ThreadLock((__int64)v11, v73, (__int64)Win32FreePool, v13);
    *((_QWORD *)v11 + 5) = v14;
    *((_DWORD *)v11 + 12) = v63;
    *((_QWORD *)v11 + 7) = v65;
    *(_DWORD *)(a4 + 44) = 0;
    *((_OWORD *)v11 + 4) = *(_OWORD *)a4;
    *((_OWORD *)v11 + 5) = *(_OWORD *)(a4 + 16);
    *((_OWORD *)v11 + 6) = *(_OWORD *)(a4 + 32);
    *((_QWORD *)v11 + 14) = *(_QWORD *)(a4 + 48);
    if ( !v60 )
      goto LABEL_17;
    v47 = (void **)(v11 + 72);
    v48 = *(_DWORD *)(a4 + 56);
    v49 = *(CHAR **)(a4 + 64);
    if ( *(int *)(a4 + 60) < 0 )
    {
      if ( (a7 & 1) == 0 )
      {
        v50 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v11, v49, 2 * v48 + 2, v47);
LABEL_67:
        if ( v50 < 0 )
          goto LABEL_35;
LABEL_17:
        if ( !v61 )
        {
LABEL_18:
          *((_QWORD *)v11 + 15) = a5;
          *((_QWORD *)v11 + 16) = a6;
          v22 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v17, v13);
          v72[0] = *(_QWORD *)(v22 + 392);
          *(_QWORD *)(v22 + 392) = v72;
          v72[1] = a1;
          if ( a1 )
            _InterlockedIncrement(a1 + 2);
          v25 = v66;
          v26 = *(_QWORD *)(v66 + 456);
          v69 = *(_OWORD *)(v26 + 64);
          v70 = *(_QWORD *)(v26 + 80);
          *(_QWORD *)(v26 + 72) = v14;
          if ( a1 )
            v27 = *(_QWORD *)a1;
          else
            v27 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v25 + 456) + 64LL) = v27;
          if ( a1 )
            v28 = *((_QWORD *)a1 + 35);
          else
            v28 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v25 + 456) + 80LL) = v28;
          if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
          ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
            (ReleaseAndReacquirePerObjectLocks *)v59,
            gdwInAtomicOperation,
            v23,
            v24);
          LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v58);
          EtwTraceBeginCallback(15LL);
          *((_QWORD *)v11 + 2) = 0LL;
          v29 = KeUserModeCallback(15LL, v11, *(unsigned int *)v11, &v67, v64);
          EtwTraceEndCallback(15LL);
          LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v58);
          ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
            (ReleaseAndReacquirePerObjectLocks *)v59,
            v30,
            v31,
            v32);
          ThreadUnlock1(v34, v33);
          v35 = *(_QWORD *)(v25 + 456);
          *(_OWORD *)(v35 + 64) = v69;
          *(_QWORD *)(v35 + 80) = v70;
          if ( v29 >= 0 && v64[0] == 24 )
          {
            v36 = (__int64 *)v67;
            if ( v67 + 8 < v67 || v67 + 8 > MmUserProbeAddress )
              v36 = (__int64 *)MmUserProbeAddress;
            v37 = *v36;
            v71 = *v36;
            goto LABEL_33;
          }
          goto LABEL_35;
        }
        v52 = *(_DWORD *)(a4 + 72);
        v53 = (void **)(v11 + 64);
        v54 = *(CHAR **)(a4 + 80);
        if ( *(int *)(a4 + 76) < 0 )
        {
          if ( (a7 & 1) == 0 )
          {
            v55 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v11, v54, 2 * v52 + 2, v53);
LABEL_77:
            if ( v55 < 0 )
              goto LABEL_35;
            goto LABEL_18;
          }
          v56 = v52 + 1;
        }
        else
        {
          if ( (a7 & 1) != 0 )
          {
            v55 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v11, (PCWCH)v54, (v52 >> 1) + 1, v53);
            goto LABEL_77;
          }
          v56 = v52 + 2;
        }
        v55 = CaptureCallbackData((struct _CAPTUREBUF *)v11, v54, v56, v53);
        goto LABEL_77;
      }
      v51 = v48 + 1;
    }
    else
    {
      if ( (a7 & 1) != 0 )
      {
        v50 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v11, (PCWCH)v49, (v48 >> 1) + 1, v47);
        goto LABEL_67;
      }
      v51 = v48 + 2;
    }
    v50 = CaptureCallbackData((struct _CAPTUREBUF *)v11, v49, v51, v47);
    goto LABEL_67;
  }
LABEL_35:
  v37 = 0LL;
LABEL_33:
  if ( v11 != (unsigned __int8 *)v74 && v11 != v75 )
  {
    v57 = (PVOID *)(v11 + 32);
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v57, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v73, (__int64)v57, v17, v13);
  }
  return (unsigned __int8 *)v37;
}
