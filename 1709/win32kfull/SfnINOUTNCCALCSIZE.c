/*
 * XREFs of SfnINOUTNCCALCSIZE @ 0x1C00F0430
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall SfnINOUTNCCALCSIZE(
        volatile signed __int32 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v13; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rdi
  unsigned int v16; // r13d
  int v17; // edx
  __int64 v18; // rcx
  struct _KTHREAD *v19; // r12
  __int64 v20; // r15
  __int64 *v21; // rax
  __int64 v22; // rax
  __int128 v23; // xmm6
  __int64 v24; // xmm7_8
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 *v31; // rcx
  __int64 v32; // rdi
  ULONG64 v33; // rcx
  __int128 *v34; // xmm1_8
  __int128 v35; // xmm0
  __int64 v36; // rax
  _DWORD v38[8]; // [rsp+30h] [rbp-1B8h] BYREF
  unsigned __int64 v39[3]; // [rsp+50h] [rbp-198h] BYREF
  __int64 v40; // [rsp+68h] [rbp-180h]
  __int64 v41; // [rsp+70h] [rbp-178h]
  __int64 v42; // [rsp+78h] [rbp-170h]
  _QWORD v43[3]; // [rsp+A0h] [rbp-148h] BYREF
  __int128 v44; // [rsp+B8h] [rbp-130h]
  volatile void *Address; // [rsp+C8h] [rbp-120h]
  __int128 v46; // [rsp+D0h] [rbp-118h]
  __int64 v47; // [rsp+E0h] [rbp-108h]
  __int128 v48; // [rsp+E8h] [rbp-100h]
  __int128 *v49; // [rsp+F8h] [rbp-F0h]
  _OWORD v50[9]; // [rsp+100h] [rbp-E8h] BYREF

  v40 = a3;
  CurrentThread = KeGetCurrentThread();
  v13 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v13 = *ThreadWin32Thread;
  }
  if ( a1 )
    v15 = (__int64)a1 - *(_QWORD *)(v13 + 448);
  else
    v15 = 0LL;
  v16 = 136;
  memset(v50, 0, 0x88uLL);
  *(_QWORD *)&v50[0] = v15;
  DWORD2(v50[0]) = a2;
  *(_QWORD *)&v50[1] = a3;
  *((_QWORD *)&v50[1] + 1) = a5;
  *(_QWORD *)&v50[2] = a6;
  *(_OWORD *)((char *)&v50[2] + 8) = *(_OWORD *)a4;
  if ( a3 )
  {
    *(_OWORD *)((char *)&v50[3] + 8) = *(_OWORD *)(a4 + 16);
    *(_OWORD *)((char *)&v50[4] + 8) = *(_OWORD *)(a4 + 32);
    *((_QWORD *)&v50[5] + 1) = *(_QWORD *)(a4 + 48);
    v18 = 0LL;
    *(_DWORD *)(*((_QWORD *)&v50[5] + 1) + 36LL) = 0;
    v50[6] = **((_OWORD **)&v50[5] + 1);
    v50[7] = *(_OWORD *)(*((_QWORD *)&v50[5] + 1) + 16LL);
    *(_QWORD *)&v50[8] = *(_QWORD *)(*((_QWORD *)&v50[5] + 1) + 32LL);
    *((_QWORD *)&v50[5] + 1) = 0LL;
  }
  else
  {
    v16 = 56;
  }
  v19 = KeGetCurrentThread();
  v20 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v18, v17) )
  {
    v21 = (__int64 *)PsGetThreadWin32Thread(v19);
    if ( v21 )
      v20 = *v21;
  }
  v43[0] = *(_QWORD *)(v20 + 392);
  *(_QWORD *)(v20 + 392) = v43;
  v43[1] = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v22 = *(_QWORD *)(v13 + 456);
  v23 = *(_OWORD *)(v22 + 64);
  v46 = v23;
  v24 = *(_QWORD *)(v22 + 80);
  v47 = v24;
  *(_QWORD *)(v22 + 72) = v15;
  if ( a1 )
    v25 = *(_QWORD *)a1;
  else
    v25 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 456) + 64LL) = v25;
  if ( a1 )
    v26 = *((_QWORD *)a1 + 35);
  else
    v26 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 456) + 80LL) = v26;
  if ( gdwInAtomicOperation )
  {
    v26 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v26, gdwInAtomicOperation);
  EtwTraceBeginCallback(21LL);
  v27 = KeUserModeCallback(21LL, v50, v16, v39, v38);
  EtwTraceEndCallback(21LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v29, v28);
  v30 = *(_QWORD *)(v13 + 456);
  *(_OWORD *)(v30 + 64) = v23;
  *(_QWORD *)(v30 + 80) = v24;
  if ( v27 < 0 || v38[0] != 24 )
    return 0LL;
  v31 = (__int64 *)v39[0];
  if ( v39[0] + 8 < v39[0] || v39[0] + 8 > MmUserProbeAddress )
    v31 = (__int64 *)MmUserProbeAddress;
  v32 = *v31;
  v41 = *v31;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v33 = v39[0];
    if ( v39[0] + 24 < v39[0] || v39[0] + 24 > MmUserProbeAddress )
      v33 = MmUserProbeAddress;
    v44 = *(_OWORD *)v33;
    v34 = *(__int128 **)(v33 + 16);
    Address = v34;
    v48 = v44;
    v49 = v34;
    ProbeForRead(v34, 0x60uLL, 4u);
    v35 = *v34;
    if ( v40 )
    {
      v42 = *(_QWORD *)(a4 + 48);
      v36 = v42;
      *(_OWORD *)a4 = v35;
      *(_OWORD *)(a4 + 16) = v34[1];
      *(_OWORD *)(a4 + 32) = v34[2];
      *(_QWORD *)(a4 + 48) = *((_QWORD *)v34 + 6);
      *(_OWORD *)v36 = *(__int128 *)((char *)v34 + 56);
      *(_OWORD *)(v36 + 16) = *(__int128 *)((char *)v34 + 72);
      *(_QWORD *)(v36 + 32) = *((_QWORD *)v34 + 11);
      *(_QWORD *)(a4 + 48) = v36;
    }
    else
    {
      *(_OWORD *)a4 = v35;
    }
  }
  return v32;
}
