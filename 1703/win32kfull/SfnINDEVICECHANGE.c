/*
 * XREFs of SfnINDEVICECHANGE @ 0x1C0039F30
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

__int64 __fastcall SfnINDEVICECHANGE(
        __int64 *a1,
        int a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v10; // r14
  unsigned int v11; // r15d
  unsigned __int8 *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int8 *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rdi
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-338h] BYREF
  _DWORD v27[6]; // [rsp+38h] [rbp-330h] BYREF
  unsigned __int8 *v28; // [rsp+50h] [rbp-318h]
  unsigned __int64 v29; // [rsp+60h] [rbp-308h] BYREF
  __int64 v30; // [rsp+68h] [rbp-300h]
  __int128 v31; // [rsp+70h] [rbp-2F8h]
  __int64 v32; // [rsp+80h] [rbp-2E8h]
  _QWORD v33[3]; // [rsp+A0h] [rbp-2C8h] BYREF
  _QWORD v34[3]; // [rsp+B8h] [rbp-2B0h] BYREF
  unsigned __int8 v35[96]; // [rsp+D0h] [rbp-298h] BYREF
  unsigned __int8 v36[512]; // [rsp+130h] [rbp-238h] BYREF
  int v37; // [rsp+3A0h] [rbp+38h]

  LODWORD(RegionSize) = a2;
  v37 = a7 & 1;
  v30 = 0LL;
  if ( a1 )
    v10 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v10 = 0LL;
  v11 = 0;
  if ( (a3 & 0x8000) != 0 && a4 && a4 >= MmSystemRangeStart )
    v11 = *a4;
  v12 = (unsigned __int8 *)AllocCallbackMessage(0x60u, 1u, v11, v36, 1, 0x200uLL);
  v15 = v12;
  v28 = v12;
  if ( !v12 )
    return 0LL;
  if ( v12 != v35 && v12 != v36 )
    PushW32ThreadLock((__int64)v12, v34, (__int64)Win32FreePool);
  *((_QWORD *)v15 + 5) = v10;
  *((_DWORD *)v15 + 12) = RegionSize;
  *((_QWORD *)v15 + 7) = a3;
  if ( v11 )
  {
    if ( CaptureCallbackData((struct _CAPTUREBUF *)v15, a4, *a4, (void **)v15 + 10) < 0 )
      goto LABEL_36;
  }
  else
  {
    *((_QWORD *)v15 + 10) = a4;
  }
  *((_DWORD *)v15 + 22) = v37;
  *((_QWORD *)v15 + 8) = a5;
  *((_QWORD *)v15 + 9) = a6;
  v33[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v33;
  v33[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v16 = *(_QWORD *)(gptiCurrent + 432LL);
  v31 = *(_OWORD *)(v16 + 64);
  v32 = *(_QWORD *)(v16 + 80);
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
  EtwTraceBeginCallback(28LL);
  *((_QWORD *)v15 + 2) = 0LL;
  v19 = KeUserModeCallback(28LL, v15, *(unsigned int *)v15, &v29, v27);
  EtwTraceEndCallback(28LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v21, v20);
  v22 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v22 + 64) = v31;
  *(_QWORD *)(v22 + 80) = v32;
  if ( v19 >= 0 && v27[0] == 24 )
  {
    v23 = (__int64 *)v29;
    if ( v29 + 8 < v29 || v29 + 8 > W32UserProbeAddress )
      v23 = (__int64 *)W32UserProbeAddress;
    v24 = *v23;
    v30 = *v23;
    goto LABEL_25;
  }
LABEL_36:
  v24 = 0LL;
LABEL_25:
  if ( v15 != v35 && v15 != v36 )
  {
    if ( *((_QWORD *)v15 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v15 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v34);
  }
  return v24;
}
