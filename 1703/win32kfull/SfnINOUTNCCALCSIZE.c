/*
 * XREFs of SfnINOUTNCCALCSIZE @ 0x1C00DD3F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall SfnINOUTNCCALCSIZE(
        __int64 *a1,
        int a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 *v11; // r15
  __int64 v12; // rdi
  unsigned int v13; // r13d
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rax
  __int128 v19; // xmm6
  __int64 v20; // xmm7_8
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 *v27; // rcx
  __int64 v28; // rdi
  unsigned __int64 v30; // rcx
  __int128 *v31; // xmm1_8
  __int128 v32; // xmm0
  __int64 v33; // rax
  unsigned __int64 v34; // [rsp+30h] [rbp-1B8h] BYREF
  _DWORD v35[12]; // [rsp+38h] [rbp-1B0h] BYREF
  __int64 v36; // [rsp+68h] [rbp-180h]
  __int64 v37; // [rsp+70h] [rbp-178h]
  _QWORD v38[3]; // [rsp+98h] [rbp-150h] BYREF
  __int128 v39; // [rsp+B0h] [rbp-138h]
  volatile void *Address; // [rsp+C0h] [rbp-128h]
  __int128 v41; // [rsp+C8h] [rbp-120h]
  __int64 v42; // [rsp+D8h] [rbp-110h]
  __int128 v43; // [rsp+E0h] [rbp-108h]
  __int128 *v44; // [rsp+F0h] [rbp-F8h]
  _OWORD v45[9]; // [rsp+100h] [rbp-E8h] BYREF

  v34 = a3;
  v36 = 0LL;
  v11 = (__int64 *)gptiCurrent;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  v13 = 136;
  memset(v45, 0, 0x88uLL);
  *(_QWORD *)&v45[0] = v12;
  DWORD2(v45[0]) = a2;
  v16 = v34;
  *(_QWORD *)&v45[1] = v34;
  *((_QWORD *)&v45[1] + 1) = a5;
  *(_QWORD *)&v45[2] = a6;
  *(_OWORD *)((char *)&v45[2] + 8) = *(_OWORD *)a4;
  if ( v34 )
  {
    *(_OWORD *)((char *)&v45[3] + 8) = *(_OWORD *)(a4 + 16);
    *(_OWORD *)((char *)&v45[4] + 8) = *(_OWORD *)(a4 + 32);
    *((_QWORD *)&v45[5] + 1) = *(_QWORD *)(a4 + 48);
    *(_DWORD *)(*((_QWORD *)&v45[5] + 1) + 36LL) = 0;
    v45[6] = **((_OWORD **)&v45[5] + 1);
    v45[7] = *(_OWORD *)(*((_QWORD *)&v45[5] + 1) + 16LL);
    *(_QWORD *)&v45[8] = *(_QWORD *)(*((_QWORD *)&v45[5] + 1) + 32LL);
    *((_QWORD *)&v45[5] + 1) = 0LL;
    v11 = (__int64 *)gptiCurrent;
  }
  else
  {
    v13 = 56;
  }
  v17 = *v11;
  v38[0] = *(_QWORD *)(*v11 + 368);
  *(_QWORD *)(v17 + 368) = v38;
  v38[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v18 = *(_QWORD *)(gptiCurrent + 432LL);
  v19 = *(_OWORD *)(v18 + 64);
  v41 = v19;
  v20 = *(_QWORD *)(v18 + 80);
  v42 = v20;
  *(_QWORD *)(v18 + 72) = v12;
  if ( a1 )
    v21 = *a1;
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v21;
  if ( a1 )
    v22 = a1[35];
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v22;
  if ( gdwInAtomicOperation )
  {
    v22 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v22, gdwInAtomicOperation, v14, v15);
  EtwTraceBeginCallback(21LL);
  v23 = KeUserModeCallback(21LL, v45, v13, &v34, v35);
  EtwTraceEndCallback(21LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v25, v24);
  v26 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v26 + 64) = v19;
  *(_QWORD *)(v26 + 80) = v20;
  if ( v23 < 0 || v35[0] != 24 )
    return 0LL;
  v27 = (__int64 *)v34;
  if ( v34 + 8 < v34 || v34 + 8 > W32UserProbeAddress )
    v27 = (__int64 *)W32UserProbeAddress;
  v28 = *v27;
  v36 = *v27;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v30 = v34;
    if ( v34 + 24 < v34 || v34 + 24 > W32UserProbeAddress )
      v30 = W32UserProbeAddress;
    v39 = *(_OWORD *)v30;
    v31 = *(__int128 **)(v30 + 16);
    Address = v31;
    v43 = v39;
    v44 = v31;
    ProbeForRead(v31, 0x60uLL, 4u);
    v32 = *v31;
    if ( v16 )
    {
      v37 = *(_QWORD *)(a4 + 48);
      v33 = v37;
      *(_OWORD *)a4 = v32;
      *(_OWORD *)(a4 + 16) = v31[1];
      *(_OWORD *)(a4 + 32) = v31[2];
      *(_QWORD *)(a4 + 48) = *((_QWORD *)v31 + 6);
      *(_OWORD *)v33 = *(__int128 *)((char *)v31 + 56);
      *(_OWORD *)(v33 + 16) = *(__int128 *)((char *)v31 + 72);
      *(_QWORD *)(v33 + 32) = *((_QWORD *)v31 + 11);
      *(_QWORD *)(a4 + 48) = v33;
    }
    else
    {
      *(_OWORD *)a4 = v32;
    }
  }
  return v28;
}
