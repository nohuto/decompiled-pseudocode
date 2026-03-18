/*
 * XREFs of SfnINCNTOUTSTRINGNULL @ 0x1C01FBBD0
 * Callers:
 *     <none>
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

unsigned __int8 *__fastcall SfnINCNTOUTSTRINGNULL(
        volatile signed __int32 *a1,
        __int64 a2,
        unsigned __int64 a3,
        struct _LARGE_STRING *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v9; // r15d
  int v11; // r12d
  unsigned __int8 *v12; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // r8
  unsigned int v17; // ecx
  __int64 v18; // r9
  unsigned int v19; // edx
  unsigned __int64 v20; // rax
  unsigned __int8 *result; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
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
  __int64 *v40; // rdi
  __int64 v41; // rdi
  __m128i *v42; // rcx
  __int64 v43; // xmm1_8
  PWCH *v44; // rsi
  PVOID *v45; // rdx
  char v46; // [rsp+30h] [rbp-378h] BYREF
  _BYTE v47[3]; // [rsp+31h] [rbp-377h] BYREF
  unsigned int v48; // [rsp+34h] [rbp-374h]
  unsigned __int8 *v49; // [rsp+38h] [rbp-370h]
  int v50[6]; // [rsp+40h] [rbp-368h] BYREF
  unsigned __int64 v51; // [rsp+58h] [rbp-350h] BYREF
  struct _LARGE_STRING *v52; // [rsp+60h] [rbp-348h]
  __int64 v53; // [rsp+68h] [rbp-340h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-330h] BYREF
  __int128 v55; // [rsp+80h] [rbp-328h]
  __int64 v56; // [rsp+90h] [rbp-318h]
  __m128i v57; // [rsp+98h] [rbp-310h] BYREF
  __int64 v58; // [rsp+A8h] [rbp-300h]
  _QWORD v59[3]; // [rsp+D0h] [rbp-2D8h] BYREF
  _QWORD v60[3]; // [rsp+E8h] [rbp-2C0h] BYREF
  unsigned __int8 v61[96]; // [rsp+100h] [rbp-2A8h] BYREF
  unsigned __int8 v62[512]; // [rsp+160h] [rbp-248h] BYREF

  v52 = a4;
  v9 = a2;
  v11 = a7 & 1;
  v12 = v61;
  v53 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, (__int64)a4);
  v14 = ThreadWin32Thread;
  if ( a1 )
    v15 = (__int64)a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v15 = 0LL;
  v16 = *((unsigned int *)v52 + 1);
  v17 = *((_DWORD *)v52 + 1) & 0x7FFFFFFF;
  v18 = 0xFFFFFFFFLL;
  v19 = -1;
  if ( v17 + 2 >= v17 )
    v19 = v17 + 2;
  v48 = v19;
  if ( v17 + 2 < v17 )
    goto LABEL_43;
  if ( (int)v16 < 0 && (a7 & 1) == 0 )
  {
    v20 = 2LL * v19;
    v19 = -1;
    if ( v20 <= 0xFFFFFFFF )
      v19 = v20;
    v48 = v19;
    if ( v20 > 0xFFFFFFFF )
      goto LABEL_43;
  }
  result = AllocCallbackMessage(96, 1u, v19, v62, 0, 0x200uLL);
  v12 = result;
  v49 = result;
  if ( !result )
    return result;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24);
  if ( v12 != v61 && v12 != v62 )
    PushW32ThreadLock((__int64)v12, v60, (__int64)Win32FreePool, v18);
  if ( a3 < 2 )
    goto LABEL_43;
  *((_QWORD *)v12 + 5) = v15;
  *((_DWORD *)v12 + 12) = v9;
  *((_QWORD *)v12 + 7) = a3;
  *((_QWORD *)v12 + 8) = a5;
  *((_QWORD *)v12 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v12, v48, (void **)v12 + 10) < 0 )
    goto LABEL_43;
  *((_DWORD *)v12 + 22) = v26;
  v27 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v16, v18);
  v59[0] = *(_QWORD *)(v27 + 392);
  *(_QWORD *)(v27 + 392) = v59;
  v59[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v30 = *(_QWORD *)(v14 + 456);
  v55 = *(_OWORD *)(v30 + 64);
  v56 = *(_QWORD *)(v30 + 80);
  *(_QWORD *)(v30 + 72) = v15;
  if ( a1 )
    v31 = *(_QWORD *)a1;
  else
    v31 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 456) + 64LL) = v31;
  if ( a1 )
    v32 = *((_QWORD *)a1 + 35);
  else
    v32 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 456) + 80LL) = v32;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v47,
    gdwInAtomicOperation,
    v28,
    v29);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v46);
  EtwTraceBeginCallback(8LL);
  *((_QWORD *)v12 + 2) = 0LL;
  v33 = KeUserModeCallback(8LL, v12, *(unsigned int *)v12, &v51, v50);
  EtwTraceEndCallback(8LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v46);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v47,
    v34,
    v35,
    v36);
  ThreadUnlock1(v38, v37);
  v39 = *(_QWORD *)(v14 + 456);
  *(_OWORD *)(v39 + 64) = v55;
  *(_QWORD *)(v39 + 80) = v56;
  if ( v33 < 0 )
    goto LABEL_43;
  if ( v50[0] == 24 )
  {
    v40 = (__int64 *)v51;
    if ( v51 + 8 < v51 || v51 + 8 > MmUserProbeAddress )
      v40 = (__int64 *)MmUserProbeAddress;
    v41 = *v40;
    v53 = v41;
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      v42 = (__m128i *)v51;
      if ( v51 + 24 < v51 || v51 + 24 > MmUserProbeAddress )
        v42 = (__m128i *)MmUserProbeAddress;
      v43 = v42[1].m128i_i64[0];
      v57 = *v42;
      v58 = v43;
      if ( _mm_cvtsi128_si32(_mm_srli_si128(v57, 8)) )
      {
        v44 = (PWCH *)v52;
        v41 = (unsigned int)CalcOutputStringSize((struct _CALLBACKSTATUS *)&v57, v41, *((_DWORD *)v52 + 1) >> 31, v11);
        v53 = v41;
        CopyOutputString((struct _CALLBACKSTATUS *)&v57, v44, a3, v11);
      }
    }
  }
  else
  {
LABEL_43:
    v41 = 0LL;
  }
  if ( v12 != v61 && v12 != v62 )
  {
    v45 = (PVOID *)(v12 + 32);
    if ( *((_QWORD *)v12 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v45, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v60, (__int64)v45, v16, v18);
  }
  return (unsigned __int8 *)v41;
}
