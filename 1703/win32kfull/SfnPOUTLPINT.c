/*
 * XREFs of SfnPOUTLPINT @ 0x1C01FE0E0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C003A288 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C003AC14 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00C568C (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

unsigned __int8 *__fastcall SfnPOUTLPINT(
        __int64 *a1,
        int a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned __int8 *v11; // rbx
  __int64 v12; // r14
  unsigned __int64 v13; // rsi
  unsigned __int8 *result; // rax
  void *v15; // r13
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 *v25; // rcx
  __int64 v26; // rdi
  unsigned __int64 v27; // rcx
  _DWORD v28[8]; // [rsp+38h] [rbp-390h] BYREF
  SIZE_T Length; // [rsp+58h] [rbp-370h] BYREF
  void *v30; // [rsp+60h] [rbp-368h]
  unsigned __int64 v31; // [rsp+68h] [rbp-360h] BYREF
  int v32; // [rsp+70h] [rbp-358h]
  __int64 v33; // [rsp+80h] [rbp-348h]
  __int128 v34; // [rsp+88h] [rbp-340h]
  __int64 v35; // [rsp+98h] [rbp-330h]
  __int128 v36; // [rsp+A0h] [rbp-328h]
  volatile void *Address; // [rsp+B0h] [rbp-318h]
  _QWORD v38[3]; // [rsp+D8h] [rbp-2F0h] BYREF
  __int128 v39; // [rsp+F0h] [rbp-2D8h]
  volatile void *v40; // [rsp+100h] [rbp-2C8h]
  _QWORD v41[3]; // [rsp+108h] [rbp-2C0h] BYREF
  unsigned __int8 v42[96]; // [rsp+120h] [rbp-2A8h] BYREF
  unsigned __int8 v43[512]; // [rsp+180h] [rbp-248h] BYREF

  v30 = a4;
  v11 = v42;
  v33 = 0LL;
  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  v13 = 4LL * (unsigned int)a3;
  if ( v13 > 0xFFFFFFFF )
    goto LABEL_38;
  v32 = 4 * a3;
  Length = (unsigned int)v13;
  result = AllocCallbackMessage(96, 1u, (unsigned int)v13, v43, 0, 0x200uLL);
  v11 = result;
  if ( !result )
    return result;
  if ( result != v42 && result != v43 )
    PushW32ThreadLock((__int64)result, v41, (__int64)Win32FreePool);
  *((_QWORD *)v11 + 5) = v12;
  *((_DWORD *)v11 + 12) = a2;
  *((_QWORD *)v11 + 7) = a3;
  *((_QWORD *)v11 + 8) = a5;
  *((_QWORD *)v11 + 9) = a6;
  if ( (a7 & 2) != 0 )
  {
    *((_DWORD *)v11 + 22) = v13;
    v15 = v30;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v11, (char *)v30, v13, (void **)v11 + 10) < 0 )
      goto LABEL_38;
  }
  else
  {
    if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v11, v13, (void **)v11 + 10) < 0 )
      goto LABEL_38;
    *((_DWORD *)v11 + 22) = v13;
    v15 = v30;
  }
  v38[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v38;
  v38[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v18 = *(_QWORD *)(gptiCurrent + 432LL);
  v34 = *(_OWORD *)(v18 + 64);
  v35 = *(_QWORD *)(v18 + 80);
  *(_QWORD *)(v18 + 72) = v12;
  if ( a1 )
    v19 = *a1;
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v19;
  if ( a1 )
    v20 = a1[35];
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v20;
  if ( gdwInAtomicOperation )
  {
    v20 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v20, gdwInAtomicOperation, v16, v17);
  EtwTraceBeginCallback(37LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v21 = KeUserModeCallback(37LL, v11, *(unsigned int *)v11, &v31, v28);
  EtwTraceEndCallback(37LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v23, v22);
  v24 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v24 + 64) = v34;
  *(_QWORD *)(v24 + 80) = v35;
  if ( v21 >= 0 && v28[0] == 24 )
  {
    v25 = (__int64 *)v31;
    if ( v31 + 8 < v31 || v31 + 8 > W32UserProbeAddress )
      v25 = (__int64 *)W32UserProbeAddress;
    v26 = *v25;
    v33 = *v25;
    if ( (_DWORD)v13 && (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      v27 = v31;
      if ( v31 + 24 < v31 || v31 + 24 > W32UserProbeAddress )
        v27 = W32UserProbeAddress;
      v36 = *(_OWORD *)v27;
      Address = *(volatile void **)(v27 + 16);
      v39 = v36;
      v40 = Address;
      ProbeForRead(Address, Length, 4u);
      memmove(v15, (const void *)Address, Length);
    }
    goto LABEL_39;
  }
LABEL_38:
  v26 = 0LL;
LABEL_39:
  if ( v11 != v42 && v11 != v43 )
  {
    if ( *((_QWORD *)v11 + 4) )
    {
      Length = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v11 + 4, &Length, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v41);
  }
  return (unsigned __int8 *)v26;
}
