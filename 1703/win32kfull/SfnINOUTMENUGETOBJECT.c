/*
 * XREFs of SfnINOUTMENUGETOBJECT @ 0x1C01FBEA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall SfnINOUTMENUGETOBJECT(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v12; // rdi
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
  __int64 v23; // rdi
  __int64 v24; // rcx
  _QWORD *v25; // rbx
  __int128 v27; // [rsp+60h] [rbp-F8h]
  __int64 v28; // [rsp+70h] [rbp-E8h]
  _QWORD v29[3]; // [rsp+98h] [rbp-C0h] BYREF
  __m128i v30; // [rsp+B0h] [rbp-A8h]
  volatile void *Address; // [rsp+C0h] [rbp-98h]
  _QWORD v32[10]; // [rsp+D0h] [rbp-88h] BYREF
  __m128i v33; // [rsp+120h] [rbp-38h]
  volatile void *v34; // [rsp+130h] [rbp-28h]
  int v35; // [rsp+168h] [rbp+10h] BYREF

  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v32, 0, 0x48uLL);
  v32[0] = v12;
  LODWORD(v32[1]) = a2;
  v32[2] = a3;
  *(_OWORD *)&v32[3] = *(_OWORD *)a4;
  *(_OWORD *)&v32[5] = *(_OWORD *)(a4 + 16);
  v32[7] = a5;
  v32[8] = a6;
  v29[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v29;
  v29[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v15 = *(_QWORD *)(gptiCurrent + 432LL);
  v27 = *(_OWORD *)(v15 + 64);
  v28 = *(_QWORD *)(v15 + 80);
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
  EtwTraceBeginCallback(102LL);
  v18 = KeUserModeCallback(102LL, v32, 72LL, &a5, &v35);
  EtwTraceEndCallback(102LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v20, v19);
  v21 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v21 + 64) = v27;
  *(_QWORD *)(v21 + 80) = v28;
  if ( v18 >= 0 && v35 == 24 )
  {
    v22 = (__int64 *)a5;
    if ( a5 + 8 < a5 || a5 + 8 > W32UserProbeAddress )
      v22 = (__int64 *)W32UserProbeAddress;
    v23 = *v22;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v23;
    v24 = a5;
    if ( a5 + 24 < a5 || a5 + 24 > W32UserProbeAddress )
      v24 = W32UserProbeAddress;
    v30 = *(__m128i *)v24;
    Address = *(volatile void **)(v24 + 16);
    v33 = v30;
    v34 = Address;
    if ( _mm_cvtsi128_si32(_mm_srli_si128(v30, 8)) == 8 )
    {
      v25 = Address;
      ProbeForRead(Address, 8uLL, 4u);
      *(_QWORD *)(a4 + 24) = *v25;
      return v23;
    }
  }
  return 0LL;
}
