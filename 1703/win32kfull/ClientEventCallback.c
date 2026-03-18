/*
 * XREFs of ClientEventCallback @ 0x1C00073BC
 * Callers:
 *     xxxEventWndProc @ 0x1C00C39F0 (xxxEventWndProc.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C003A288 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C003AC14 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall ClientEventCallback(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v4; // ebx
  unsigned __int8 *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  __int64 *v10; // rcx
  __int64 v11; // rbx
  int v13; // [rsp+30h] [rbp-298h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-290h] BYREF
  _QWORD v15[3]; // [rsp+40h] [rbp-288h] BYREF
  _BYTE v16[24]; // [rsp+58h] [rbp-270h] BYREF
  _BYTE v17[64]; // [rsp+70h] [rbp-258h] BYREF
  unsigned __int8 v18[512]; // [rsp+B0h] [rbp-218h] BYREF

  v4 = a2[3] + 8;
  v5 = (unsigned __int8 *)AllocCallbackMessage(0x38u, 1u, v4, v18, 1, 0x200uLL);
  RegionSize = (ULONG_PTR)v5;
  if ( !v5 )
    return 0LL;
  if ( v5 != v17 && v5 != v18 )
    PushW32ThreadLock(v5, v16, Win32FreePool);
  *((_QWORD *)v5 + 5) = a1;
  if ( CaptureCallbackData((struct _CAPTUREBUF *)v5, a2, v4, (void **)v5 + 6) < 0 )
    goto LABEL_17;
  if ( gdwInAtomicOperation )
  {
    v6 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v6, gdwInAtomicOperation, v7, v8);
  EtwTraceBeginCallback(65LL);
  *((_QWORD *)v5 + 2) = 0LL;
  v9 = KeUserModeCallback(65LL, v5, *(unsigned int *)v5, v15, &v13);
  EtwTraceEndCallback(65LL);
  EnterCrit(0LL, 1LL);
  if ( v9 >= 0 && v13 == 24 )
  {
    v10 = (__int64 *)v15[0];
    if ( (unsigned __int64)(v15[0] + 8LL) < v15[0] || (unsigned __int64)(v15[0] + 8LL) > W32UserProbeAddress )
      v10 = (__int64 *)W32UserProbeAddress;
    v11 = *v10;
    v15[1] = *v10;
  }
  else
  {
LABEL_17:
    LODWORD(v11) = 0;
  }
  if ( v5 != v17 && v5 != v18 )
  {
    if ( *((_QWORD *)v5 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v5 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(v16);
  }
  return (unsigned int)v11;
}
