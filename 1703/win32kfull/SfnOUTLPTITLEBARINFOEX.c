/*
 * XREFs of SfnOUTLPTITLEBARINFOEX @ 0x1C0101960
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall SfnOUTLPTITLEBARINFOEX(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 *v22; // rcx
  __int64 v23; // r8
  unsigned __int64 v25; // rdx
  _DWORD v26[6]; // [rsp+30h] [rbp-208h] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-1F0h] BYREF
  __int64 v28; // [rsp+58h] [rbp-1E0h]
  __int128 v29; // [rsp+60h] [rbp-1D8h]
  __int64 v30; // [rsp+70h] [rbp-1C8h]
  _QWORD v31[3]; // [rsp+98h] [rbp-1A0h] BYREF
  __int128 v32; // [rsp+B0h] [rbp-188h]
  __int128 v33; // [rsp+C0h] [rbp-178h]
  __int128 v34; // [rsp+D0h] [rbp-168h]
  __int128 v35; // [rsp+E0h] [rbp-158h]
  __int128 v36; // [rsp+F0h] [rbp-148h]
  __int128 v37; // [rsp+100h] [rbp-138h]
  __int128 v38; // [rsp+110h] [rbp-128h]
  __int128 v39; // [rsp+120h] [rbp-118h]
  __int64 v40; // [rsp+130h] [rbp-108h]
  int v41; // [rsp+138h] [rbp-100h]
  _QWORD v42[24]; // [rsp+140h] [rbp-F8h] BYREF

  v28 = 0LL;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v42, 0, 0xB8uLL);
  v42[0] = v12;
  LODWORD(v42[1]) = a2;
  v42[2] = a3;
  *(_OWORD *)&v42[3] = *(_OWORD *)a4;
  *(_OWORD *)&v42[5] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v42[7] = *(_OWORD *)(a4 + 32);
  *(_OWORD *)&v42[9] = *(_OWORD *)(a4 + 48);
  *(_OWORD *)&v42[11] = *(_OWORD *)(a4 + 64);
  *(_OWORD *)&v42[13] = *(_OWORD *)(a4 + 80);
  *(_OWORD *)&v42[15] = *(_OWORD *)(a4 + 96);
  *(_OWORD *)&v42[17] = *(_OWORD *)(a4 + 112);
  v42[19] = *(_QWORD *)(a4 + 128);
  LODWORD(v42[20]) = *(_DWORD *)(a4 + 136);
  v42[21] = a5;
  v42[22] = a6;
  v31[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v31;
  v31[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v15 = *(_QWORD *)(gptiCurrent + 432LL);
  v29 = *(_OWORD *)(v15 + 64);
  v30 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v12;
  if ( a1 )
    v16 = *a1;
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v16;
  if ( a1 )
    v17 = a1[35];
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v17;
  if ( gdwInAtomicOperation )
  {
    v17 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v17, gdwInAtomicOperation, v13, v14);
  EtwTraceBeginCallback(111LL);
  v18 = KeUserModeCallback(111LL, v42, 184LL, &v27, v26);
  EtwTraceEndCallback(111LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v20, v19);
  v21 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v21 + 64) = v29;
  *(_QWORD *)(v21 + 80) = v30;
  if ( v18 < 0 || v26[0] != 24 )
    return 0LL;
  v22 = (__int64 *)v27;
  if ( v27 + 8 < v27 || v27 + 8 > W32UserProbeAddress )
    v22 = (__int64 *)W32UserProbeAddress;
  v23 = *v22;
  v28 = *v22;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v25 = *(_QWORD *)(v27 + 16);
    if ( v25 + 140 < v25 || v25 + 140 > W32UserProbeAddress )
      v25 = W32UserProbeAddress;
    v32 = *(_OWORD *)v25;
    v33 = *(_OWORD *)(v25 + 16);
    v34 = *(_OWORD *)(v25 + 32);
    v35 = *(_OWORD *)(v25 + 48);
    v36 = *(_OWORD *)(v25 + 64);
    v37 = *(_OWORD *)(v25 + 80);
    v38 = *(_OWORD *)(v25 + 96);
    v39 = *(_OWORD *)(v25 + 112);
    v40 = *(_QWORD *)(v25 + 128);
    v41 = *(_DWORD *)(v25 + 136);
    *(_OWORD *)a4 = v32;
    *(_OWORD *)(a4 + 16) = v33;
    *(_OWORD *)(a4 + 32) = v34;
    *(_OWORD *)(a4 + 48) = v35;
    *(_OWORD *)(a4 + 64) = v36;
    *(_OWORD *)(a4 + 80) = v37;
    *(_OWORD *)(a4 + 96) = v38;
    *(_OWORD *)(a4 + 112) = v39;
    *(_QWORD *)(a4 + 128) = v40;
    *(_DWORD *)(a4 + 136) = v41;
  }
  return v23;
}
