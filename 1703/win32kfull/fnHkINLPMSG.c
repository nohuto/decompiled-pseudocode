/*
 * XREFs of fnHkINLPMSG @ 0x1C0054DB0
 * Callers:
 *     xxxCallCtfHook @ 0x1C004DFF4 (xxxCallCtfHook.c)
 *     xxxHkCallHook @ 0x1C00544D0 (xxxHkCallHook.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C011745C (RtlWCSMessageWParamCharToMB.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     _FreeTouchInputInfo @ 0x1C01B8360 (_FreeTouchInputInfo.c)
 *     _FreeGestureInfo @ 0x1C01EF7C0 (_FreeGestureInfo.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C02393E4 (RtlMBMessageWParamCharToWCS.c)
 */

__int64 __fastcall fnHkINLPMSG(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, _DWORD *a7)
{
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // rcx
  __int64 v14; // r8
  _DWORD *v15; // r9
  unsigned int v16; // r14d
  _DWORD *v17; // r15
  int v18; // ebx
  __int64 *v19; // rax
  __int64 v20; // rdi
  unsigned __int64 v21; // rax
  _OWORD *v22; // xmm1_8
  __int64 v23; // r8
  int v24; // ecx
  __int64 v26; // rbx
  __int64 v27; // rdi
  _DWORD *v28; // rax
  int v29; // r10d
  __int64 v30; // rbx
  unsigned __int64 v31[3]; // [rsp+38h] [rbp-100h] BYREF
  _OWORD v32[6]; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v33; // [rsp+B0h] [rbp-88h]
  __int128 v34; // [rsp+C8h] [rbp-70h]
  volatile void *Address; // [rsp+D8h] [rbp-60h]
  __int128 v36; // [rsp+E0h] [rbp-58h]
  _OWORD *v37; // [rsp+F0h] [rbp-48h]
  int v38; // [rsp+140h] [rbp+8h] BYREF
  __int64 v39; // [rsp+148h] [rbp+10h]
  __int64 v40; // [rsp+150h] [rbp+18h]

  v39 = 0LL;
  v40 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  memset(v32, 0, 0x58uLL);
  LODWORD(v32[0]) = a1;
  *((_QWORD *)&v32[0] + 1) = a2;
  *(_DWORD *)(a3 + 12) = 0;
  *(_DWORD *)(a3 + 44) = 0;
  v32[2] = *(_OWORD *)a3;
  v32[3] = *(_OWORD *)(a3 + 16);
  v32[4] = *(_OWORD *)(a3 + 32);
  v16 = *(_DWORD *)(a3 + 8);
  if ( ((v16 - 258) & 0xFFFFFFFB) != 0 || !a6 )
  {
    if ( v16 == 576 || ((v16 - 281) & 0xFFFFFFFD) == 0 )
    {
      v26 = *(_QWORD *)(a3 + 16);
      v39 = v26;
      v27 = *(_QWORD *)(a3 + 24);
      v40 = v27;
      v28 = (_DWORD *)HMValidateHandle(v27, 255);
      v15 = v28;
      if ( !v28 )
        return 0LL;
      v29 = *(_DWORD *)(a3 + 8);
      v14 = gSharedInfo[0];
      if ( v29 == 576
        && *(_BYTE *)((unsigned int)(unsigned __int16)*v28 * LODWORD(gSharedInfo[2]) + gSharedInfo[1] + 24LL) != 20 )
      {
        return 0LL;
      }
      if ( ((v29 - 281) & 0xFFFFFFFD) == 0
        && *(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*v28 + gSharedInfo[1] + 24LL) != 21 )
      {
        return 0LL;
      }
      v11 = *(_QWORD *)(gptiCurrent + 616LL);
      v12 = *(_QWORD *)(gptiCurrent + 624LL);
      *(_QWORD *)(gptiCurrent + 616LL) = v27;
      v13 = gptiCurrent;
      *(_QWORD *)(gptiCurrent + 624LL) = v26;
    }
  }
  else
  {
    v39 = *(_QWORD *)(a3 + 16);
    RtlWCSMessageWParamCharToMB(v16, &v32[3]);
  }
  *(_QWORD *)&v32[1] = a4;
  *((_QWORD *)&v32[1] + 1) = a5;
  v17 = a7;
  LODWORD(v32[5]) = *a7;
  if ( gdwInAtomicOperation )
  {
    v13 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v13, gdwInAtomicOperation, v14, v15);
  EtwTraceBeginCallback(47LL);
  v18 = KeUserModeCallback(47LL, v32, 88LL, v31, &v38);
  EtwTraceEndCallback(47LL);
  EnterCrit(0LL, 1LL);
  if ( v16 == 576 || ((v16 - 281) & 0xFFFFFFFD) == 0 )
  {
    *(_QWORD *)(gptiCurrent + 616LL) = v11;
    *(_QWORD *)(gptiCurrent + 624LL) = v12;
  }
  if ( v18 < 0 || v38 != 24 )
    return 0LL;
  v19 = (__int64 *)v31[0];
  if ( v31[0] + 8 < v31[0] || v31[0] + 8 > W32UserProbeAddress )
    v19 = (__int64 *)W32UserProbeAddress;
  v20 = *v19;
  v33 = *v19;
  v21 = v31[0];
  if ( v31[0] + 24 < v31[0] || v31[0] + 24 > W32UserProbeAddress )
    v21 = W32UserProbeAddress;
  v34 = *(_OWORD *)v21;
  v22 = *(_OWORD **)(v21 + 16);
  Address = v22;
  v36 = v34;
  v37 = v22;
  ProbeForRead(v22, 0x38uLL, 4u);
  *(_OWORD *)a3 = *v22;
  *(_OWORD *)(a3 + 16) = v22[1];
  *(_OWORD *)(a3 + 32) = v22[2];
  *v17 ^= (*v17 ^ *((_DWORD *)v22 + 12)) & 0x10;
  if ( ((*(_DWORD *)(a3 + 8) - 258) & 0xFFFFFFFB) != 0 || !a6 )
    goto LABEL_16;
  if ( *(_QWORD *)&v32[3] != *(_QWORD *)(a3 + 16) )
  {
    RtlMBMessageWParamCharToWCS();
LABEL_16:
    v23 = v39;
    goto LABEL_17;
  }
  v23 = v39;
  *(_QWORD *)(a3 + 16) = v39;
LABEL_17:
  v24 = *(_DWORD *)(a3 + 8);
  if ( v24 == 576 || ((v24 - 281) & 0xFFFFFFFD) == 0 )
  {
    *(_DWORD *)(a3 + 8) = v16;
    *(_QWORD *)(a3 + 16) = v23;
    *(_QWORD *)(a3 + 24) = v40;
  }
  else if ( v23 == 1 )
  {
    v30 = v40;
    if ( v16 == 576 )
      FreeTouchInputInfo(v40, v16 - 576 + 1);
    if ( ((v16 - 281) & 0xFFFFFFFD) == 0 )
      FreeGestureInfo(v30, 1LL);
  }
  return (unsigned int)v20;
}
