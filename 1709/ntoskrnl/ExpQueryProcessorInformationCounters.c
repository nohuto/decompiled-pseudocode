/*
 * XREFs of ExpQueryProcessorInformationCounters @ 0x140488240
 * Callers:
 *     ExProcessorCounterSetCallback @ 0x1404875F0 (ExProcessorCounterSetCallback.c)
 * Callees:
 *     PoGetPerfStateAndParkingInfo @ 0x14000B3F4 (PoGetPerfStateAndParkingInfo.c)
 *     PoGetIdleTimes @ 0x14008CD70 (PoGetIdleTimes.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall ExpQueryProcessorInformationCounters(__int64 a1, char a2, char a3, char a4, __int64 a5)
{
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ecx
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  __int64 v15; // r9
  __int64 result; // rax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+20h] [rbp-51h] BYREF
  _DWORD v18[8]; // [rsp+28h] [rbp-49h] BYREF
  __int64 v19; // [rsp+48h] [rbp-29h] BYREF
  __int64 v20; // [rsp+50h] [rbp-21h]
  __int64 v21; // [rsp+58h] [rbp-19h]
  _DWORD v22[2]; // [rsp+60h] [rbp-11h] BYREF
  __int64 v23; // [rsp+68h] [rbp-9h]
  _BYTE v24[8]; // [rsp+70h] [rbp-1h] BYREF
  __int64 v25; // [rsp+78h] [rbp+7h]
  __int64 v26; // [rsp+80h] [rbp+Fh]
  __int64 v27; // [rsp+88h] [rbp+17h]
  unsigned int v28; // [rsp+90h] [rbp+1Fh]
  unsigned int v29; // [rsp+94h] [rbp+23h]
  unsigned int v30; // [rsp+98h] [rbp+27h]

  ProcNumber.Group = *(unsigned __int8 *)(a1 + 208);
  ProcNumber.Number = *(_BYTE *)(a1 + 209);
  ProcNumber.Reserved = 0;
  if ( a2 )
  {
    PoGetIdleTimes(&ProcNumber, (__int64)v24, (__int64)v22);
    v8 = KeMaximumIncrement;
    v9 = v22[0];
    *(_QWORD *)(a5 + 72) = v25;
    *(_QWORD *)(a5 + 96) = v28;
    *(_QWORD *)(a5 + 80) = v26;
    *(_QWORD *)(a5 + 104) = v29;
    *(_QWORD *)(a5 + 88) = v27;
    *(_QWORD *)(a5 + 112) = v30;
    *(_QWORD *)(a5 + 120) = v23;
    v10 = v8 * v9;
    *(_QWORD *)a5 = v10;
    *(_QWORD *)(a5 + 8) = v10 + v8 * *(unsigned int *)(a1 + 23468);
    *(_QWORD *)(a5 + 24) = v8 * v22[1] - v10;
  }
  else
  {
    *(_QWORD *)a5 = 0LL;
    *(_QWORD *)(a5 + 72) = 0LL;
    *(_QWORD *)(a5 + 80) = 0LL;
    *(_QWORD *)(a5 + 88) = 0LL;
    *(_QWORD *)(a5 + 96) = 0LL;
    *(_QWORD *)(a5 + 104) = 0LL;
    *(_QWORD *)(a5 + 112) = 0LL;
    *(_QWORD *)(a5 + 8) = 0LL;
    *(_QWORD *)(a5 + 24) = 0LL;
    *(_QWORD *)(a5 + 120) = 0LL;
  }
  v11 = KeMaximumIncrement;
  *(_QWORD *)(a5 + 16) = KeMaximumIncrement * (unsigned __int64)*(unsigned int *)(a1 + 23432);
  *(_DWORD *)(a5 + 32) = *(_DWORD *)(a1 + 23424);
  *(_QWORD *)(a5 + 48) = v11 * *(unsigned int *)(a1 + 23440);
  *(_DWORD *)(a5 + 60) = *(_DWORD *)(a1 + 11804);
  *(_DWORD *)(a5 + 64) = *(_DWORD *)(a1 + 11868);
  *(_QWORD *)(a5 + 40) = v11 * *(unsigned int *)(a1 + 23436);
  *(_DWORD *)(a5 + 56) = *(_DWORD *)(a1 + 11896);
  *(_QWORD *)(a5 + 168) = *(_QWORD *)(a5 + 72) + *(_QWORD *)(a5 + 80) + *(_QWORD *)(a5 + 88);
  *(_QWORD *)(a5 + 176) = *(_QWORD *)(a5 + 104) + *(_QWORD *)(a5 + 112) + *(_QWORD *)(a5 + 96);
  memset(v18, 0, sizeof(v18));
  v12 = 0;
  v19 = 0LL;
  v13 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v14 = (unsigned __int64)&v19 & -(__int64)(a4 != 0);
  v15 = 0LL;
  if ( a3 || v14 )
  {
    PoGetPerfStateAndParkingInfo(&ProcNumber, v18, v14, 0LL);
    v15 = v21;
    v13 = v20;
    v12 = v19;
  }
  *(_DWORD *)(a5 + 128) = BYTE1(v18[7]);
  *(_DWORD *)(a5 + 132) = v18[1];
  *(_DWORD *)(a5 + 136) = v18[2];
  *(_DWORD *)(a5 + 140) = v18[0];
  *(_DWORD *)(a5 + 184) = v18[5];
  *(_DWORD *)(a5 + 188) = v18[6];
  result = HIDWORD(v19);
  *(_DWORD *)(a5 + 148) = HIDWORD(v19);
  *(_DWORD *)(a5 + 144) = v12;
  *(_QWORD *)(a5 + 152) = v13;
  *(_QWORD *)(a5 + 160) = v15;
  return result;
}
