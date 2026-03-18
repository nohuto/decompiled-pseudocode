/*
 * XREFs of xxxClientCopyDDEIn1 @ 0x1C01FFD10
 * Callers:
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01E4EE0 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     IntToULongLong @ 0x1C01F89A4 (IntToULongLong.c)
 *     xxxClientCopyDDEIn2 @ 0x1C020012C (xxxClientCopyDDEIn2.c)
 */

__int64 __fastcall xxxClientCopyDDEIn1(__int64 a1, int a2, __int64 *a3, __int64 a4)
{
  __int64 v5; // rdi
  int v6; // ebx
  __int64 *v7; // rdi
  unsigned __int64 v8; // rcx
  __int128 v9; // xmm3
  __m128i v10; // xmm2
  __int64 v11; // xmm6_8
  INT v12; // esi
  __int128 v13; // xmm4
  __int128 v14; // xmm5
  ULONGLONG v15; // rax
  ULONGLONG v16; // rcx
  __int64 v17; // rdi
  size_t v18; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v21; // [rsp+48h] [rbp-130h] BYREF
  int v22; // [rsp+50h] [rbp-128h]
  int v23; // [rsp+54h] [rbp-124h]
  ULONGLONG v24; // [rsp+60h] [rbp-118h] BYREF
  ULONGLONG pullResult; // [rsp+68h] [rbp-110h] BYREF
  __int128 v26; // [rsp+70h] [rbp-108h]
  __int128 v27; // [rsp+80h] [rbp-F8h]
  volatile void *Address[2]; // [rsp+90h] [rbp-E8h]
  volatile void *v29[2]; // [rsp+A0h] [rbp-D8h]
  INT iOperand[2]; // [rsp+B0h] [rbp-C8h]
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-C0h]
  _QWORD v32[3]; // [rsp+D8h] [rbp-A0h] BYREF
  __int128 v33; // [rsp+F0h] [rbp-88h]
  __int128 v34; // [rsp+100h] [rbp-78h]
  __m128i v35; // [rsp+110h] [rbp-68h]
  __int128 v36; // [rsp+120h] [rbp-58h]
  __int64 v37; // [rsp+130h] [rbp-48h]
  int v38; // [rsp+188h] [rbp+10h] BYREF
  __int64 *v39; // [rsp+190h] [rbp+18h]
  unsigned __int64 v40; // [rsp+198h] [rbp+20h] BYREF

  v39 = a3;
  v23 = 0;
  LODWORD(v5) = 0;
  *a3 = 0LL;
  v21 = a1;
  v22 = a2;
  if ( gdwInAtomicOperation )
  {
    a1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, gdwInAtomicOperation, a3, a4);
  EtwTraceBeginCallback(60LL);
  v6 = KeUserModeCallback(60LL, &v21, 16LL, &v40, &v38);
  EtwTraceEndCallback(60LL);
  EnterCrit(0LL, 1LL);
  if ( v6 < 0 || v38 != 24 )
    return (unsigned int)v5;
  v7 = (__int64 *)v40;
  if ( v40 + 8 < v40 || v40 + 8 > W32UserProbeAddress )
    v7 = (__int64 *)W32UserProbeAddress;
  v5 = *v7;
  if ( v5 != 2 )
    return (unsigned int)v5;
  v8 = *(_QWORD *)(v40 + 16);
  if ( v8 + 72 < v8 || v8 + 72 > W32UserProbeAddress )
    v8 = W32UserProbeAddress;
  v9 = *(_OWORD *)v8;
  v26 = v9;
  v27 = *(_OWORD *)(v8 + 16);
  v10 = *(__m128i *)(v8 + 32);
  *(__m128i *)Address = v10;
  *(_OWORD *)v29 = *(_OWORD *)(v8 + 48);
  *(_QWORD *)iOperand = *(_QWORD *)(v8 + 64);
  v11 = *(_QWORD *)iOperand;
  v33 = v9;
  v34 = v27;
  v35 = v10;
  v36 = *(_OWORD *)v29;
  v37 = *(_QWORD *)iOperand;
  v12 = _mm_cvtsi128_si32(_mm_srli_si128(v10, 8));
  if ( IntToULongLong(v12, &pullResult) < 0
    || IntToULongLong(iOperand[0], &v24) < 0
    || pullResult + v24 < pullResult
    || (v15 = pullResult + v24 + 72, v15 < 0x48) )
  {
    v17 = 0LL;
  }
  else
  {
    v16 = pullResult + v24 + 72;
    if ( v15 < 0x90 )
      v16 = 144LL;
    v17 = Win32AllocPool(v16, 1164211029LL);
    v10 = *(__m128i *)Address;
    v9 = v26;
    v13 = v27;
    v14 = *(_OWORD *)v29;
    v11 = *(_QWORD *)iOperand;
  }
  if ( !v17 )
    return 3LL;
  *a3 = v17;
  *(_OWORD *)v17 = v9;
  *(_OWORD *)(v17 + 16) = v13;
  *(__m128i *)(v17 + 32) = v10;
  *(_OWORD *)(v17 + 48) = v14;
  *(_QWORD *)(v17 + 64) = v11;
  if ( v12 )
  {
    ProbeForRead(Address[0], v12, 1u);
    memmove((void *)(v17 + 72), (const void *)Address[0], v12);
  }
  if ( iOperand[0] )
  {
    v18 = iOperand[0];
    ProbeForRead(v29[1], iOperand[0], 1u);
    memmove((void *)(v17 + v12 + 72LL), (const void *)v29[1], v18);
  }
  PushW32ThreadLock(v17, v32, (__int64)Win32FreePool);
  xxxClientCopyDDEIn2(v17);
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)CurrentThread);
  *(_QWORD *)(ThreadWin32Thread + 16) = v32[0];
  return 2LL;
}
