/*
 * XREFs of SfnINCNTOUTSTRINGNULL @ 0x1C01FA170
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C003A288 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00C4FC8 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00C511C (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00C568C (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall SfnINCNTOUTSTRINGNULL(
        __int64 *a1,
        int a2,
        __int64 a3,
        ULONG_PTR a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r13d
  unsigned __int8 *v11; // rbx
  __int64 v12; // r14
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned __int64 v15; // rdi
  unsigned __int8 *result; // rax
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // edi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 *v27; // rdi
  __int64 v28; // rdi
  __m128i *v29; // rcx
  __int64 v30; // xmm1_8
  PWCH *v31; // rsi
  int v32[5]; // [rsp+3Ch] [rbp-36Ch] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-358h] BYREF
  unsigned __int64 v34; // [rsp+58h] [rbp-350h] BYREF
  __int64 v35; // [rsp+60h] [rbp-348h]
  unsigned int v36[4]; // [rsp+68h] [rbp-340h]
  __int128 v37; // [rsp+78h] [rbp-330h]
  __int64 v38; // [rsp+88h] [rbp-320h]
  __m128i v39; // [rsp+90h] [rbp-318h] BYREF
  __int64 v40; // [rsp+A0h] [rbp-308h]
  _QWORD v41[3]; // [rsp+C8h] [rbp-2E0h] BYREF
  _QWORD v42[4]; // [rsp+E0h] [rbp-2C8h] BYREF
  unsigned __int8 v43[96]; // [rsp+100h] [rbp-2A8h] BYREF
  unsigned __int8 v44[512]; // [rsp+160h] [rbp-248h] BYREF

  RegionSize = a4;
  *(_QWORD *)v36 = a3;
  v10 = a7 & 1;
  v11 = v43;
  v35 = 0LL;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  v13 = *(_DWORD *)(a4 + 4) & 0x7FFFFFFF;
  v14 = v13 + 2;
  v15 = 0xFFFFFFFFLL;
  if ( v13 + 2 >= v13 )
    v15 = v14;
  if ( v14 < v13 )
    goto LABEL_41;
  if ( *(_DWORD *)(a4 + 4) >= 0x80000000 && (a7 & 1) == 0 )
  {
    v15 *= 2LL;
    if ( v15 > 0xFFFFFFFF )
      goto LABEL_41;
  }
  result = AllocCallbackMessage(96, 1u, (unsigned int)v15, v44, 0, 0x200uLL);
  v11 = result;
  if ( !result )
    return result;
  if ( result != v43 && result != v44 )
    PushW32ThreadLock((__int64)result, v42, (__int64)Win32FreePool);
  v17 = *(_QWORD *)v36;
  if ( *(_QWORD *)v36 < 2uLL )
    goto LABEL_41;
  *((_QWORD *)v11 + 5) = v12;
  *((_DWORD *)v11 + 12) = a2;
  *((_QWORD *)v11 + 7) = v17;
  *((_QWORD *)v11 + 8) = a5;
  *((_QWORD *)v11 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v11, v15, (void **)v11 + 10) < 0 )
    goto LABEL_41;
  *((_DWORD *)v11 + 22) = v15;
  v41[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v41;
  v41[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v20 = *(_QWORD *)(gptiCurrent + 432LL);
  v37 = *(_OWORD *)(v20 + 64);
  v38 = *(_QWORD *)(v20 + 80);
  *(_QWORD *)(v20 + 72) = v12;
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
  UserSessionSwitchLeaveCrit(v22, gdwInAtomicOperation, v18, v19);
  EtwTraceBeginCallback(8LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v23 = KeUserModeCallback(8LL, v11, *(unsigned int *)v11, &v34, v32);
  EtwTraceEndCallback(8LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v25, v24);
  v26 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v26 + 64) = v37;
  *(_QWORD *)(v26 + 80) = v38;
  if ( v23 < 0 )
    goto LABEL_41;
  if ( v32[0] == 24 )
  {
    v27 = (__int64 *)v34;
    if ( v34 + 8 < v34 || v34 + 8 > W32UserProbeAddress )
      v27 = (__int64 *)W32UserProbeAddress;
    v28 = *v27;
    v35 = v28;
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      v29 = (__m128i *)v34;
      if ( v34 + 24 < v34 || v34 + 24 > W32UserProbeAddress )
        v29 = (__m128i *)W32UserProbeAddress;
      v30 = v29[1].m128i_i64[0];
      v39 = *v29;
      v40 = v30;
      if ( _mm_cvtsi128_si32(_mm_srli_si128(v39, 8)) )
      {
        v31 = (PWCH *)RegionSize;
        v28 = (unsigned int)CalcOutputStringSize((volatile void **)&v39, v28, *(_DWORD *)(RegionSize + 4) >> 31, v10);
        v35 = v28;
        CopyOutputString((volatile void **)&v39, v31, v36[0], v10);
      }
    }
  }
  else
  {
LABEL_41:
    v28 = 0LL;
  }
  if ( v11 != v43 && v11 != v44 )
  {
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v11 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v42);
  }
  return (unsigned __int8 *)v28;
}
