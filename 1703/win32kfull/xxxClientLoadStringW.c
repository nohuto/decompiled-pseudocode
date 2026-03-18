/*
 * XREFs of xxxClientLoadStringW @ 0x1C00C4758
 * Callers:
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C00C4668 (-xxxLoadSomeStrings@@YAXXZ.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C003A288 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00C4FC8 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00C511C (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00C568C (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientLoadStringW(int a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // ebx
  unsigned __int8 *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  ULONG_PTR *v11; // rcx
  ULONG_PTR v12; // r10
  __int128 *v13; // rcx
  __int64 v14; // xmm1_8
  unsigned int v15; // ebx
  int v17; // [rsp+30h] [rbp-2D8h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-2D0h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-2C8h] BYREF
  _DWORD v20[2]; // [rsp+50h] [rbp-2B8h] BYREF
  __int64 v21; // [rsp+58h] [rbp-2B0h]
  __int128 v22; // [rsp+60h] [rbp-2A8h] BYREF
  __int64 v23; // [rsp+70h] [rbp-298h]
  _QWORD v24[3]; // [rsp+88h] [rbp-280h] BYREF
  unsigned __int8 v25[64]; // [rsp+A0h] [rbp-268h] BYREF
  unsigned __int8 v26[512]; // [rsp+E0h] [rbp-228h] BYREF

  v5 = 2 * a3;
  v21 = a2;
  v20[0] = 0;
  v20[1] = 2;
  v6 = AllocCallbackMessage(64, 1u, 2 * a3, v26, 0, 0x200uLL);
  v19[1] = v6;
  if ( !v6 )
    return 0LL;
  if ( v6 != v25 && v6 != v26 )
    PushW32ThreadLock((__int64)v6, v24, (__int64)Win32FreePool);
  *((_DWORD *)v6 + 10) = a1;
  *((_DWORD *)v6 + 11) = a3;
  if ( AllocateCallbackData((struct _CAPTUREBUF *)v6, v5, (void **)v6 + 6) < 0 )
    goto LABEL_20;
  *((_DWORD *)v6 + 14) = v5;
  if ( gdwInAtomicOperation )
  {
    v7 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v7, gdwInAtomicOperation, v8, v9);
  EtwTraceBeginCallback(98LL);
  *((_QWORD *)v6 + 2) = 0LL;
  v10 = KeUserModeCallback(98LL, v6, *(unsigned int *)v6, v19, &v17);
  EtwTraceEndCallback(98LL);
  EnterCrit(0LL, 1LL);
  if ( v10 >= 0 && v17 == 24 )
  {
    v11 = (ULONG_PTR *)v19[0];
    if ( (unsigned __int64)(v19[0] + 8LL) < v19[0] || (unsigned __int64)(v19[0] + 8LL) > W32UserProbeAddress )
      v11 = (ULONG_PTR *)W32UserProbeAddress;
    v12 = *v11;
    RegionSize = *v11;
    v13 = (__int128 *)v19[0];
    if ( (unsigned __int64)(v19[0] + 24LL) < v19[0] || (unsigned __int64)(v19[0] + 24LL) > W32UserProbeAddress )
      v13 = (__int128 *)W32UserProbeAddress;
    v14 = *((_QWORD *)v13 + 2);
    v22 = *v13;
    v23 = v14;
    v15 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v22, v12, 0, 0);
    RegionSize = v15;
    CopyOutputString((struct _CALLBACKSTATUS *)&v22, (struct _LARGE_STRING *)v20, a3, 0);
  }
  else
  {
LABEL_20:
    v15 = 0;
  }
  if ( v6 != v25 && v6 != v26 )
  {
    if ( *((_QWORD *)v6 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v6 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v24);
  }
  return v15;
}
