/*
 * XREFs of SfnINOUTMENUGETOBJECT @ 0x1C01FDA20
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

__int64 __fastcall SfnINOUTMENUGETOBJECT(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r15d
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 *v31; // rcx
  __int64 v32; // rdi
  ULONG64 v33; // rcx
  _QWORD *v34; // rbx
  __int128 v36; // [rsp+58h] [rbp-120h]
  __int64 v37; // [rsp+68h] [rbp-110h]
  _QWORD v38[3]; // [rsp+98h] [rbp-E0h] BYREF
  __m128i v39; // [rsp+B0h] [rbp-C8h]
  volatile void *Address; // [rsp+C0h] [rbp-B8h]
  _QWORD v41[10]; // [rsp+D0h] [rbp-A8h] BYREF
  __m128i v42; // [rsp+120h] [rbp-58h]
  volatile void *v43; // [rsp+130h] [rbp-48h]
  char v44; // [rsp+180h] [rbp+8h] BYREF
  char v45; // [rsp+188h] [rbp+10h] BYREF
  int v46; // [rsp+190h] [rbp+18h] BYREF
  unsigned __int64 v47; // [rsp+198h] [rbp+20h] BYREF

  v10 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = (__int64)a1 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v14 = 0LL;
  memset(v41, 0, 0x48uLL);
  v41[0] = v14;
  LODWORD(v41[1]) = v10;
  v41[2] = a3;
  *(_OWORD *)&v41[3] = *(_OWORD *)a4;
  *(_OWORD *)&v41[5] = *(_OWORD *)(a4 + 16);
  v41[7] = a5;
  v41[8] = a6;
  v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16, v17);
  v38[0] = *(_QWORD *)(v18 + 392);
  *(_QWORD *)(v18 + 392) = v38;
  v38[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v21 = *(_QWORD *)(v13 + 456);
  v36 = *(_OWORD *)(v21 + 64);
  v37 = *(_QWORD *)(v21 + 80);
  *(_QWORD *)(v21 + 72) = v14;
  if ( a1 )
    v22 = *(_QWORD *)a1;
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 456) + 64LL) = v22;
  if ( a1 )
    v23 = *((_QWORD *)a1 + 35);
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 456) + 80LL) = v23;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v44,
    gdwInAtomicOperation,
    v19,
    v20);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v45);
  EtwTraceBeginCallback(102LL);
  v24 = KeUserModeCallback(102LL, v41, 72LL, &v47, &v46);
  EtwTraceEndCallback(102LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v45);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v44,
    v25,
    v26,
    v27);
  ThreadUnlock1(v29, v28);
  v30 = *(_QWORD *)(v13 + 456);
  *(_OWORD *)(v30 + 64) = v36;
  *(_QWORD *)(v30 + 80) = v37;
  if ( v24 >= 0 && v46 == 24 )
  {
    v31 = (__int64 *)v47;
    if ( v47 + 8 < v47 || v47 + 8 > MmUserProbeAddress )
      v31 = (__int64 *)MmUserProbeAddress;
    v32 = *v31;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v32;
    v33 = v47;
    if ( v47 + 24 < v47 || v47 + 24 > MmUserProbeAddress )
      v33 = MmUserProbeAddress;
    v39 = *(__m128i *)v33;
    Address = *(volatile void **)(v33 + 16);
    v42 = v39;
    v43 = Address;
    if ( _mm_cvtsi128_si32(_mm_srli_si128(v39, 8)) == 8 )
    {
      v34 = Address;
      ProbeForRead(Address, 8uLL, 4u);
      *(_QWORD *)(a4 + 24) = *v34;
      return v32;
    }
  }
  return 0LL;
}
