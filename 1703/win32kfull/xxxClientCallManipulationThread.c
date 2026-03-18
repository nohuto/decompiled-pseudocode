/*
 * XREFs of xxxClientCallManipulationThread @ 0x1C01FF9F0
 * Callers:
 *     ClientCallManipulationThread @ 0x1C019FFC0 (ClientCallManipulationThread.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C803C (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z @ 0x1C020A28C (-xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C003A288 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?ReserveCaptureBytes@@YAJPEAU_CAPTUREBUF@@KPEAPEAX1@Z @ 0x1C00C5A84 (-ReserveCaptureBytes@@YAJPEAU_CAPTUREBUF@@KPEAPEAX1@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall xxxClientCallManipulationThread(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int8 *result; // rax
  unsigned __int8 *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  void **v12; // rcx
  void *v13; // rbx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-2A8h] BYREF
  int v15; // [rsp+38h] [rbp-2A0h] BYREF
  void *v16; // [rsp+40h] [rbp-298h] BYREF
  unsigned __int64 v17[3]; // [rsp+48h] [rbp-290h] BYREF
  _QWORD v18[3]; // [rsp+60h] [rbp-278h] BYREF
  unsigned __int8 v19[56]; // [rsp+78h] [rbp-260h] BYREF
  unsigned __int8 v20[512]; // [rsp+B0h] [rbp-228h] BYREF

  v16 = 0LL;
  result = AllocCallbackMessage(56, 1u, a3, v20, 1, 0x200uLL);
  v7 = result;
  RegionSize = (ULONG_PTR)result;
  if ( result )
  {
    if ( result != v19 && result != v20 )
      PushW32ThreadLock((__int64)result, v18, (__int64)Win32FreePool);
    *((_QWORD *)v7 + 5) = a1;
    if ( (int)ReserveCaptureBytes((struct _CAPTUREBUF *)v7, a3, (void **)v7 + 6, &v16) < 0 )
      goto LABEL_15;
    BuildManipulationInputInfo(v16, a3, a2);
    if ( gdwInAtomicOperation )
    {
      v8 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v8, gdwInAtomicOperation, v9, v10);
    EtwTraceBeginCallback(51LL);
    *((_QWORD *)v7 + 2) = 0LL;
    v11 = KeUserModeCallback(51LL, v7, *(unsigned int *)v7, v17, &v15);
    EtwTraceEndCallback(51LL);
    EnterCrit(0LL, 1LL);
    if ( v11 >= 0 && v15 == 24 )
    {
      v12 = (void **)v17[0];
      if ( v17[0] + 8 < v17[0] || v17[0] + 8 > W32UserProbeAddress )
        v12 = (void **)W32UserProbeAddress;
      v13 = *v12;
      v16 = *v12;
    }
    else
    {
LABEL_15:
      LODWORD(v13) = 0;
    }
    if ( v7 != v19 && v7 != v20 )
    {
      if ( *((_QWORD *)v7 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v7 + 4, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v18);
    }
    return (unsigned __int8 *)(unsigned int)v13;
  }
  return result;
}
