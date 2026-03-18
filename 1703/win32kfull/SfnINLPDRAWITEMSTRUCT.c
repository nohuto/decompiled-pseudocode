/*
 * XREFs of SfnINLPDRAWITEMSTRUCT @ 0x1C00FB3F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _WindowFromDC @ 0x1C0048E30 (_WindowFromDC.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall SfnINLPDRAWITEMSTRUCT(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v11; // r14
  __int64 v12; // r12
  unsigned int CurrentProcessId; // ebx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rbx
  __int64 *v26; // rcx
  struct tagWND *v27; // rax
  _DWORD v29[7]; // [rsp+34h] [rbp-124h] BYREF
  unsigned __int64 v30; // [rsp+50h] [rbp-108h] BYREF
  __int64 v31; // [rsp+58h] [rbp-100h]
  __int128 v32; // [rsp+60h] [rbp-F8h]
  __int64 v33; // [rsp+70h] [rbp-E8h]
  _QWORD v34[4]; // [rsp+90h] [rbp-C8h] BYREF
  _QWORD v35[14]; // [rsp+B0h] [rbp-A8h] BYREF

  v31 = 0LL;
  if ( a1 )
    v11 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v11 = 0LL;
  memset(v35, 0, 0x68uLL);
  v12 = 0LL;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  if ( (unsigned int)GreGetObjectOwner(*(_QWORD *)(a4 + 32), 1LL) != (CurrentProcessId & 0xFFFFFFFC) )
  {
    v26 = *(__int64 **)(a4 + 32);
    if ( v26 )
    {
      v27 = WindowFromDC(v26);
      if ( v27 )
      {
        v12 = *(_QWORD *)(a4 + 32);
        *(_QWORD *)(a4 + 32) = _GetDC(v27);
      }
    }
  }
  v35[0] = v11;
  LODWORD(v35[1]) = a2;
  v35[2] = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_OWORD *)&v35[3] = *(_OWORD *)a4;
  *(_OWORD *)&v35[5] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v35[7] = *(_OWORD *)(a4 + 32);
  *(_OWORD *)&v35[9] = *(_OWORD *)(a4 + 48);
  v35[11] = a5;
  v35[12] = a6;
  v34[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v34;
  v34[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v16 = *(_QWORD *)(gptiCurrent + 432LL);
  v32 = *(_OWORD *)(v16 + 64);
  v33 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v16 + 72) = v11;
  if ( a1 )
    v17 = *a1;
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v17;
  if ( a1 )
    v18 = a1[35];
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v18;
  if ( gdwInAtomicOperation )
  {
    v18 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v18, gdwInAtomicOperation, v14, v15);
  EtwTraceBeginCallback(12LL);
  v19 = KeUserModeCallback(12LL, v35, 104LL, &v30, v29);
  EtwTraceEndCallback(12LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v21, v20);
  v22 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v22 + 64) = v32;
  *(_QWORD *)(v22 + 80) = v33;
  if ( v19 < 0 || v29[0] != 24 )
    return 0LL;
  v23 = (__int64 *)v30;
  if ( v30 + 8 < v30 || v30 + 8 > W32UserProbeAddress )
    v23 = (__int64 *)W32UserProbeAddress;
  v24 = *v23;
  v31 = *v23;
  if ( v12 && (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    _ReleaseDC(*(_QWORD *)(a4 + 32));
    *(_QWORD *)(a4 + 32) = v12;
  }
  return v24;
}
