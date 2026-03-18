/*
 * XREFs of SfnINSTRING @ 0x1C00EB080
 * Callers:
 *     ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C00EAFA8 (-_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C003A288 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C003AC14 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00C3EE0 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00C55EC (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

unsigned __int8 *__fastcall SfnINSTRING(
        __int64 *a1,
        unsigned int a2,
        ULONG_PTR a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int8 *v9; // rbx
  __int64 v10; // r12
  unsigned __int64 v11; // rdx
  unsigned int v12; // r15d
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rdi
  unsigned __int8 *result; // rax
  unsigned int v26; // eax
  void **v27; // r9
  unsigned int v28; // r8d
  CHAR *v29; // rdx
  int v30; // eax
  unsigned int v31; // r8d
  _DWORD v33[5]; // [rsp+44h] [rbp-334h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+58h] [rbp-320h] BYREF
  unsigned __int64 v35; // [rsp+68h] [rbp-310h] BYREF
  __int64 v36; // [rsp+70h] [rbp-308h]
  __int128 v37; // [rsp+78h] [rbp-300h]
  __int64 v38; // [rsp+88h] [rbp-2F0h]
  _QWORD v39[3]; // [rsp+A8h] [rbp-2D0h] BYREF
  _QWORD v40[4]; // [rsp+C0h] [rbp-2B8h] BYREF
  _DWORD v41[24]; // [rsp+E0h] [rbp-298h] BYREF
  unsigned __int8 v42[512]; // [rsp+140h] [rbp-238h] BYREF

  RegionSize[0] = a3;
  v9 = (unsigned __int8 *)v41;
  v36 = 0LL;
  if ( a1 )
    v10 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v10 = 0LL;
  if ( a4 && (*((_QWORD *)a4 + 1) >= (unsigned __int64)MmSystemRangeStart || a4[1] >> 31 != (a7 & 1)) )
  {
    v12 = 1;
    v26 = *a4 + 2;
    if ( v26 < *a4 )
      goto LABEL_31;
    LODWORD(v11) = *a4 + 2;
    if ( a4[1] >= 0x80000000 && (a7 & 1) == 0 )
    {
      v11 = 2LL * v26;
      if ( v11 > 0xFFFFFFFF )
        goto LABEL_31;
    }
  }
  else
  {
    LODWORD(v11) = 0;
    v12 = 0;
  }
  if ( v12 )
  {
    result = AllocCallbackMessage(88, v12, (unsigned int)v11, v42, 1, 0x200uLL);
    v9 = result;
    if ( !result )
      return result;
  }
  else
  {
    v9 = (unsigned __int8 *)v41;
    memset(v41, 0, 0x58uLL);
    v41[0] = 88;
  }
  if ( v9 != (unsigned __int8 *)v41 && v9 != v42 )
    PushW32ThreadLock((__int64)v9, v40, (__int64)Win32FreePool);
  *((_QWORD *)v9 + 5) = v10;
  *((_DWORD *)v9 + 12) = a2;
  *((_QWORD *)v9 + 7) = RegionSize[0];
  if ( v12 )
  {
    v27 = (void **)(v9 + 80);
    v28 = *a4;
    v29 = (CHAR *)*((_QWORD *)a4 + 1);
    if ( a4[1] >= 0x80000000 )
    {
      if ( (a7 & 1) == 0 )
      {
        v30 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v9, v29, 2 * v28 + 2, v27);
LABEL_50:
        if ( v30 < 0 )
          goto LABEL_31;
        goto LABEL_14;
      }
      v31 = v28 + 1;
    }
    else
    {
      if ( (a7 & 1) != 0 )
      {
        v30 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v9, (PCWCH)v29, (v28 >> 1) + 1, v27);
        goto LABEL_50;
      }
      v31 = v28 + 2;
    }
    v30 = CaptureCallbackData((struct _CAPTUREBUF *)v9, v29, v31, v27);
    goto LABEL_50;
  }
  if ( a4 )
    v15 = *((_QWORD *)a4 + 1);
  else
    v15 = 0LL;
  *((_QWORD *)v9 + 10) = v15;
LABEL_14:
  *((_QWORD *)v9 + 8) = a5;
  *((_QWORD *)v9 + 9) = a6;
  v39[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v39;
  v39[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v16 = *(_QWORD *)(gptiCurrent + 432LL);
  v37 = *(_OWORD *)(v16 + 64);
  v38 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v16 + 72) = v10;
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
  UserSessionSwitchLeaveCrit(v18, gdwInAtomicOperation, v13, v14);
  EtwTraceBeginCallback(26LL);
  *((_QWORD *)v9 + 2) = 0LL;
  v19 = KeUserModeCallback(26LL, v9, *(unsigned int *)v9, &v35, v33);
  EtwTraceEndCallback(26LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v21, v20);
  v22 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v22 + 64) = v37;
  *(_QWORD *)(v22 + 80) = v38;
  if ( v19 >= 0 && v33[0] == 24 )
  {
    v23 = (__int64 *)v35;
    if ( v35 + 8 < v35 || v35 + 8 > W32UserProbeAddress )
      v23 = (__int64 *)W32UserProbeAddress;
    v24 = *v23;
    v36 = *v23;
    goto LABEL_29;
  }
LABEL_31:
  v24 = 0LL;
LABEL_29:
  if ( v9 != (unsigned __int8 *)v41 && v9 != v42 )
  {
    if ( *((_QWORD *)v9 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v9 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v40);
  }
  return (unsigned __int8 *)v24;
}
