/*
 * XREFs of SfnCOPYGLOBALDATA @ 0x1C01F89D0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C003A288 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C003AC14 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall SfnCOPYGLOBALDATA(__int64 *a1, __int64 a2, __int64 a3, char *a4)
{
  unsigned int v5; // r15d
  __int64 v7; // rsi
  unsigned __int8 *result; // rax
  unsigned __int8 *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 *v19; // rcx
  __int64 v20; // rdi
  _DWORD v21[6]; // [rsp+30h] [rbp-328h] BYREF
  unsigned __int8 *v22; // [rsp+48h] [rbp-310h]
  unsigned __int64 v23; // [rsp+58h] [rbp-300h] BYREF
  __int64 v24; // [rsp+60h] [rbp-2F8h]
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-2F0h] BYREF
  __int128 v26; // [rsp+70h] [rbp-2E8h]
  __int64 v27; // [rsp+80h] [rbp-2D8h]
  _QWORD v28[3]; // [rsp+A0h] [rbp-2B8h] BYREF
  _QWORD v29[3]; // [rsp+B8h] [rbp-2A0h] BYREF
  unsigned __int8 v30[64]; // [rsp+D0h] [rbp-288h] BYREF
  unsigned __int8 v31[512]; // [rsp+110h] [rbp-248h] BYREF

  v5 = a3;
  v24 = 0LL;
  if ( a1 )
    v7 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v7 = 0LL;
  result = AllocCallbackMessage(56, 1u, a3, v31, 1, 0x200uLL);
  v9 = result;
  v22 = result;
  if ( result )
  {
    if ( result != v30 && result != v31 )
      PushW32ThreadLock((__int64)result, v29, (__int64)Win32FreePool);
    if ( !a4 )
      goto LABEL_27;
    *((_DWORD *)v9 + 10) = v5;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v9, a4, v5, (void **)v9 + 6) < 0 )
      goto LABEL_27;
    v28[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v28;
    v28[1] = a1;
    if ( a1 )
      ++*((_DWORD *)a1 + 2);
    v12 = *(_QWORD *)(gptiCurrent + 432LL);
    v26 = *(_OWORD *)(v12 + 64);
    v27 = *(_QWORD *)(v12 + 80);
    *(_QWORD *)(v12 + 72) = v7;
    if ( a1 )
      v13 = *a1;
    else
      v13 = 0LL;
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v13;
    if ( a1 )
      v14 = a1[35];
    else
      v14 = 0LL;
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v14;
    if ( gdwInAtomicOperation )
    {
      v14 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v14, gdwInAtomicOperation, v10, v11);
    EtwTraceBeginCallback(1LL);
    *((_QWORD *)v9 + 2) = 0LL;
    v15 = KeUserModeCallback(1LL, v9, *(unsigned int *)v9, &v23, v21);
    EtwTraceEndCallback(1LL);
    EnterCrit(0LL, 1LL);
    ThreadUnlock1(v17, v16);
    v18 = *(_QWORD *)(gptiCurrent + 432LL);
    *(_OWORD *)(v18 + 64) = v26;
    *(_QWORD *)(v18 + 80) = v27;
    if ( v15 < 0 )
      goto LABEL_27;
    if ( v21[0] == 24 )
    {
      v19 = (__int64 *)v23;
      if ( v23 + 8 < v23 || v23 + 8 > W32UserProbeAddress )
        v19 = (__int64 *)W32UserProbeAddress;
      v20 = *v19;
      v24 = *v19;
    }
    else
    {
LABEL_27:
      v20 = 0LL;
    }
    if ( v9 != v30 && v9 != v31 )
    {
      if ( *((_QWORD *)v9 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v9 + 4, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v29);
    }
    return (unsigned __int8 *)v20;
  }
  return result;
}
