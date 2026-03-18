/*
 * XREFs of SfnCOPYDATA @ 0x1C00FAEC0
 * Callers:
 *     xxxSendShutdownData @ 0x1C013AE48 (xxxSendShutdownData.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C003A288 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C003AC14 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall SfnCOPYDATA(__int64 *a1, int a2, ULONG_PTR a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rsi
  unsigned int v9; // r12d
  unsigned __int8 *v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 *v20; // rcx
  __int64 v21; // rdi
  _DWORD v24[5]; // [rsp+3Ch] [rbp-33Ch] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+50h] [rbp-328h] BYREF
  unsigned __int64 v26; // [rsp+60h] [rbp-318h] BYREF
  __int64 v27; // [rsp+68h] [rbp-310h]
  __int128 v28; // [rsp+70h] [rbp-308h]
  __int64 v29; // [rsp+80h] [rbp-2F8h]
  _QWORD v30[3]; // [rsp+A0h] [rbp-2D8h] BYREF
  _QWORD v31[3]; // [rsp+B8h] [rbp-2C0h] BYREF
  _DWORD v32[28]; // [rsp+D0h] [rbp-2A8h] BYREF
  unsigned __int8 v33[512]; // [rsp+140h] [rbp-238h] BYREF

  RegionSize[0] = a3;
  v27 = 0LL;
  if ( a1 )
    v8 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v8 = 0LL;
  if ( a4 )
  {
    v9 = *(_DWORD *)(a4 + 8);
    v10 = AllocCallbackMessage(112, 1u, v9, v33, 1, 0x200uLL);
    if ( !v10 )
      return 0LL;
  }
  else
  {
    v9 = 0;
    v10 = (unsigned __int8 *)v32;
    memset(v32, 0, sizeof(v32));
    v32[0] = 112;
  }
  if ( v10 != (unsigned __int8 *)v32 && v10 != v33 )
    PushW32ThreadLock((__int64)v10, v31, (__int64)Win32FreePool);
  *((_QWORD *)v10 + 5) = v8;
  *((_DWORD *)v10 + 12) = a2;
  *((_QWORD *)v10 + 7) = RegionSize[0];
  if ( a4 )
  {
    *((_DWORD *)v10 + 16) = 1;
    *(_DWORD *)(a4 + 12) = 0;
    *(_OWORD *)(v10 + 72) = *(_OWORD *)a4;
    *((_QWORD *)v10 + 11) = *(_QWORD *)(a4 + 16);
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v10, *(char **)(a4 + 16), v9, (void **)v10 + 11) < 0 )
      goto LABEL_32;
  }
  else
  {
    *((_DWORD *)v10 + 16) = 0;
  }
  *((_QWORD *)v10 + 12) = a5;
  *((_QWORD *)v10 + 13) = a6;
  v30[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v30;
  v30[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v13 = *(_QWORD *)(gptiCurrent + 432LL);
  v28 = *(_OWORD *)(v13 + 64);
  v29 = *(_QWORD *)(v13 + 80);
  *(_QWORD *)(v13 + 72) = v8;
  if ( a1 )
    v14 = *a1;
  else
    v14 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v14;
  if ( a1 )
    v15 = a1[35];
  else
    v15 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v15;
  if ( gdwInAtomicOperation )
  {
    v15 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v15, gdwInAtomicOperation, v11, v12);
  EtwTraceBeginCallback(0LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v16 = KeUserModeCallback(0LL, v10, *(unsigned int *)v10, &v26, v24);
  EtwTraceEndCallback(0LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v18, v17);
  v19 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v19 + 64) = v28;
  *(_QWORD *)(v19 + 80) = v29;
  if ( v16 >= 0 && v24[0] == 24 )
  {
    v20 = (__int64 *)v26;
    if ( v26 + 8 < v26 || v26 + 8 > W32UserProbeAddress )
      v20 = (__int64 *)W32UserProbeAddress;
    v21 = *v20;
    v27 = *v20;
    goto LABEL_25;
  }
LABEL_32:
  v21 = 0LL;
LABEL_25:
  if ( v10 != (unsigned __int8 *)v32 && v10 != v33 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v31);
  }
  return v21;
}
