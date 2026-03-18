/*
 * XREFs of SfnINPGESTURENOTIFYSTRUCT @ 0x1C01FC900
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C003A288 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C003AC14 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall SfnINPGESTURENOTIFYSTRUCT(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        char *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v10; // rsi
  unsigned __int8 *result; // rax
  unsigned __int8 *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 *v22; // rcx
  __int64 v23; // rdi
  _DWORD v24[6]; // [rsp+30h] [rbp-338h] BYREF
  unsigned __int8 *v25; // [rsp+48h] [rbp-320h]
  unsigned __int64 v26; // [rsp+58h] [rbp-310h] BYREF
  __int64 v27; // [rsp+60h] [rbp-308h]
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-300h] BYREF
  __int128 v29; // [rsp+70h] [rbp-2F8h]
  __int64 v30; // [rsp+80h] [rbp-2E8h]
  _QWORD v31[3]; // [rsp+A0h] [rbp-2C8h] BYREF
  _QWORD v32[3]; // [rsp+B8h] [rbp-2B0h] BYREF
  unsigned __int8 v33[96]; // [rsp+D0h] [rbp-298h] BYREF
  unsigned __int8 v34[512]; // [rsp+130h] [rbp-238h] BYREF

  v27 = 0LL;
  if ( a1 )
    v10 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v10 = 0LL;
  result = AllocCallbackMessage(88, 1u, *(unsigned int *)a4, v34, 1, 0x200uLL);
  v12 = result;
  v25 = result;
  if ( result )
  {
    if ( result != v33 && result != v34 )
      PushW32ThreadLock((__int64)result, v32, (__int64)Win32FreePool);
    *((_QWORD *)v12 + 5) = v10;
    *((_DWORD *)v12 + 12) = a2;
    *((_QWORD *)v12 + 7) = a3;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v12, a4, *(_DWORD *)a4, (void **)v12 + 8) < 0 )
      goto LABEL_26;
    *((_QWORD *)v12 + 9) = a5;
    *((_QWORD *)v12 + 10) = a6;
    v31[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v31;
    v31[1] = a1;
    if ( a1 )
      ++*((_DWORD *)a1 + 2);
    v15 = *(_QWORD *)(gptiCurrent + 432LL);
    v29 = *(_OWORD *)(v15 + 64);
    v30 = *(_QWORD *)(v15 + 80);
    *(_QWORD *)(v15 + 72) = v10;
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
    EtwTraceBeginCallback(114LL);
    *((_QWORD *)v12 + 2) = 0LL;
    v18 = KeUserModeCallback(114LL, v12, *(unsigned int *)v12, &v26, v24);
    EtwTraceEndCallback(114LL);
    EnterCrit(0LL, 1LL);
    ThreadUnlock1(v20, v19);
    v21 = *(_QWORD *)(gptiCurrent + 432LL);
    *(_OWORD *)(v21 + 64) = v29;
    *(_QWORD *)(v21 + 80) = v30;
    if ( v18 < 0 )
      goto LABEL_26;
    if ( v24[0] == 24 )
    {
      v22 = (__int64 *)v26;
      if ( v26 + 8 < v26 || v26 + 8 > W32UserProbeAddress )
        v22 = (__int64 *)W32UserProbeAddress;
      v23 = *v22;
      v27 = *v22;
    }
    else
    {
LABEL_26:
      v23 = 0LL;
    }
    if ( v12 != v33 && v12 != v34 )
    {
      if ( *((_QWORD *)v12 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v12 + 4, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v32);
    }
    return (unsigned __int8 *)v23;
  }
  return result;
}
