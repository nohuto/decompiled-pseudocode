/*
 * XREFs of xxxClientCopyDDEIn1 @ 0x1C02017A0
 * Callers:
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01F0F24 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     ?xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z @ 0x1C01F9F98 (-xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z.c)
 *     IntToULongLong @ 0x1C01FA36C (IntToULongLong.c)
 */

__int64 __fastcall xxxClientCopyDDEIn1(__int64 a1, int a2, __int64 *a3, __int64 a4)
{
  __int64 v5; // rdi
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rdi
  ULONG64 v11; // rcx
  __int128 v12; // xmm3
  __m128i v13; // xmm2
  __int64 v14; // xmm6_8
  INT v15; // esi
  __int64 v16; // r9
  __int128 v17; // xmm4
  __int128 v18; // xmm5
  ULONGLONG v19; // rax
  ULONGLONG v20; // rcx
  __int64 v21; // rdi
  size_t v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 ThreadWin32Thread; // rax
  unsigned __int64 v31; // [rsp+48h] [rbp-140h] BYREF
  __int64 v32; // [rsp+50h] [rbp-138h] BYREF
  int v33; // [rsp+58h] [rbp-130h]
  int v34; // [rsp+5Ch] [rbp-12Ch]
  ULONGLONG v35; // [rsp+68h] [rbp-120h] BYREF
  ULONGLONG pullResult; // [rsp+70h] [rbp-118h] BYREF
  ULONGLONG v37; // [rsp+78h] [rbp-110h]
  __int128 v38; // [rsp+80h] [rbp-108h]
  __int128 v39; // [rsp+90h] [rbp-F8h]
  volatile void *Address[2]; // [rsp+A0h] [rbp-E8h]
  volatile void *v41[2]; // [rsp+B0h] [rbp-D8h]
  INT iOperand[2]; // [rsp+C0h] [rbp-C8h]
  struct _KTHREAD *CurrentThread; // [rsp+C8h] [rbp-C0h]
  _QWORD v44[3]; // [rsp+E8h] [rbp-A0h] BYREF
  __int128 v45; // [rsp+100h] [rbp-88h]
  __int128 v46; // [rsp+110h] [rbp-78h]
  __m128i v47; // [rsp+120h] [rbp-68h]
  __int128 v48; // [rsp+130h] [rbp-58h]
  __int64 v49; // [rsp+140h] [rbp-48h]
  char v50; // [rsp+190h] [rbp+8h] BYREF
  char v51; // [rsp+198h] [rbp+10h] BYREF
  __int64 *v52; // [rsp+1A0h] [rbp+18h]
  int v53; // [rsp+1A8h] [rbp+20h] BYREF

  v52 = a3;
  v34 = 0;
  LODWORD(v5) = 0;
  *a3 = 0LL;
  v32 = a1;
  v33 = a2;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v50,
    gdwInAtomicOperation,
    (__int64)a3,
    a4);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v51);
  EtwTraceBeginCallback(60LL);
  v6 = KeUserModeCallback(60LL, &v32, 16LL, &v31, &v53);
  EtwTraceEndCallback(60LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v51);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v50,
    v7,
    v8,
    v9);
  if ( v6 < 0 || v53 != 24 )
    return (unsigned int)v5;
  v10 = (__int64 *)v31;
  if ( v31 + 8 < v31 || v31 + 8 > MmUserProbeAddress )
    v10 = (__int64 *)MmUserProbeAddress;
  v5 = *v10;
  if ( v5 != 2 )
    return (unsigned int)v5;
  v11 = *(_QWORD *)(v31 + 16);
  if ( v11 + 72 < v11 || v11 + 72 > MmUserProbeAddress )
    v11 = MmUserProbeAddress;
  v12 = *(_OWORD *)v11;
  v38 = v12;
  v39 = *(_OWORD *)(v11 + 16);
  v13 = *(__m128i *)(v11 + 32);
  *(__m128i *)Address = v13;
  *(_OWORD *)v41 = *(_OWORD *)(v11 + 48);
  *(_QWORD *)iOperand = *(_QWORD *)(v11 + 64);
  v14 = *(_QWORD *)iOperand;
  v45 = v12;
  v46 = v39;
  v47 = v13;
  v48 = *(_OWORD *)v41;
  v49 = *(_QWORD *)iOperand;
  v15 = _mm_cvtsi128_si32(_mm_srli_si128(v13, 8));
  if ( IntToULongLong(v15, &pullResult) < 0 || IntToULongLong(iOperand[0], &v35) < 0 || pullResult + v35 < pullResult )
    goto LABEL_22;
  v19 = pullResult + v35 + 72;
  v20 = -1LL;
  if ( v19 >= 0x48 )
    v20 = pullResult + v35 + 72;
  v37 = v20;
  if ( v19 < 0x48 )
  {
LABEL_22:
    v21 = 0LL;
  }
  else
  {
    if ( v20 < 0x90 )
      v20 = 144LL;
    v37 = v20;
    v21 = Win32AllocPool(v20, 1164211029LL);
    v13 = *(__m128i *)Address;
    v12 = v38;
    v17 = v39;
    v18 = *(_OWORD *)v41;
    v14 = *(_QWORD *)iOperand;
  }
  if ( !v21 )
    return 3LL;
  *a3 = v21;
  *(_OWORD *)v21 = v12;
  *(_OWORD *)(v21 + 16) = v17;
  *(__m128i *)(v21 + 32) = v13;
  *(_OWORD *)(v21 + 48) = v18;
  *(_QWORD *)(v21 + 64) = v14;
  if ( v15 )
  {
    ProbeForRead(Address[0], v15, 1u);
    memmove((void *)(v21 + 72), (const void *)Address[0], v15);
  }
  if ( iOperand[0] )
  {
    v22 = iOperand[0];
    ProbeForRead(v41[1], iOperand[0], 1u);
    memmove((void *)(v21 + v15 + 72LL), (const void *)v41[1], v22);
  }
  PushW32ThreadLock(v21, v44, (__int64)Win32FreePool, v16);
  xxxClientCopyDDEIn2((struct tagINTDDEINFO *)v21, v23, v24, v25);
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)CurrentThread, v26, v27, v28);
  *(_QWORD *)(ThreadWin32Thread + 16) = v44[0];
  return 2LL;
}
