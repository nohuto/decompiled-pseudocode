/*
 * XREFs of xxxClientLoadMenu @ 0x1C00C37B4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     xxxLoadSysMenu @ 0x1C00C31F4 (xxxLoadSysMenu.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C020E620 (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C003A288 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C003AC14 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     HMValidateHandleNoRip @ 0x1C00C3ABC (HMValidateHandleNoRip.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall xxxClientLoadMenu(__int64 a1, char **a2)
{
  unsigned __int16 v4; // ax
  unsigned int v5; // edx
  __int64 v6; // r8
  unsigned __int8 *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int16 v11; // ax
  int v12; // ebx
  __int64 *v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rbx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-298h] BYREF
  int v18; // [rsp+38h] [rbp-290h] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp-288h] BYREF
  __int64 v20; // [rsp+48h] [rbp-280h]
  _QWORD v21[3]; // [rsp+58h] [rbp-270h] BYREF
  _DWORD v22[16]; // [rsp+70h] [rbp-258h] BYREF
  unsigned __int8 v23[512]; // [rsp+B0h] [rbp-218h] BYREF

  v4 = *((_WORD *)a2 + 1);
  if ( v4 )
  {
    v5 = 1;
    v6 = v4;
  }
  else
  {
    v5 = 0;
    v6 = 0LL;
  }
  if ( v5 )
  {
    v7 = AllocCallbackMessage(64, v5, v6, v23, 1, 0x200uLL);
    RegionSize = (ULONG_PTR)v7;
    if ( !v7 )
      return 0LL;
  }
  else
  {
    v7 = (unsigned __int8 *)v22;
    RegionSize = (ULONG_PTR)v22;
    memset(v22, 0, sizeof(v22));
    v22[0] = 64;
  }
  if ( v7 != (unsigned __int8 *)v22 && v7 != v23 )
    PushW32ThreadLock((__int64)v7, v21, (__int64)Win32FreePool);
  *((_QWORD *)v7 + 5) = a1;
  *((_WORD *)v7 + 24) = *(_WORD *)a2;
  v11 = *((_WORD *)a2 + 1);
  *((_WORD *)v7 + 25) = v11;
  if ( v11 )
  {
    if ( (int)CaptureCallbackData(
                (struct _CAPTUREBUF *)v7,
                a2[1],
                (unsigned int)*(unsigned __int16 *)a2 + 2,
                (void **)v7 + 7) < 0 )
      goto LABEL_26;
  }
  else
  {
    *((_QWORD *)v7 + 7) = a2[1];
  }
  if ( gdwInAtomicOperation )
  {
    v8 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v8, gdwInAtomicOperation, v9, v10);
  EtwTraceBeginCallback(76LL);
  *((_QWORD *)v7 + 2) = 0LL;
  v12 = KeUserModeCallback(76LL, v7, *(unsigned int *)v7, &v19, &v18);
  EtwTraceEndCallback(76LL);
  EnterCrit(0LL, 1LL);
  if ( v12 >= 0 && v18 == 24 )
  {
    v13 = (__int64 *)v19;
    v14 = v19 + 8;
    if ( v19 + 8 < v19 || v14 > W32UserProbeAddress )
      v13 = (__int64 *)W32UserProbeAddress;
    v20 = *v13;
    LOBYTE(v14) = 2;
    v15 = HMValidateHandleNoRip(v20, v14);
    goto LABEL_15;
  }
LABEL_26:
  v15 = 0LL;
LABEL_15:
  if ( v7 != (unsigned __int8 *)v22 && v7 != v23 )
  {
    if ( *((_QWORD *)v7 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v7 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v21);
  }
  return v15;
}
