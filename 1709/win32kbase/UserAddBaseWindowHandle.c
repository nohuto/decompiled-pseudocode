/*
 * XREFs of UserAddBaseWindowHandle @ 0x1C00EBD30
 * Callers:
 *     NtMITMinuserWindowCreated @ 0x1C00E6A70 (NtMITMinuserWindowCreated.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000E1E8 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E724 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMAllocObject @ 0x1C003E6C0 (HMAllocObject.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     HMFindEntry @ 0x1C00E4D90 (HMFindEntry.c)
 */

__int64 __fastcall UserAddBaseWindowHandle(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 ThreadWin32Thread; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  _QWORD *v8; // rax
  unsigned __int16 v9; // r9
  unsigned __int8 v10; // dl
  _QWORD v12[4]; // [rsp+40h] [rbp-38h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xAu,
      (__int64)&WPP_75b573961131395cc80d6b2ba9b39bbc_Traceguids);
  v2 = 0;
  RIMLockExclusive((__int64)&gWndLock);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (*(_DWORD *)(ThreadWin32Thread + 1184) & 0x1000000) != 0 )
  {
    RIMLockExclusive((__int64)&gHmLock);
    v12[0] = a1;
    v12[2] = 0LL;
    v12[1] = PsGetCurrentProcessWin32Process(v5, v4, v6);
    if ( HMFindEntry((__int64)v12, (unsigned int (__fastcall *)(__int64, char *))lookForMatchingMinuserHwnd) )
    {
      v2 = 1;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_11;
      v9 = 12;
      v10 = 5;
    }
    else
    {
      v7 = HMAllocObject(ThreadWin32Thread, 0LL, 0x17u, 0x80u);
      if ( v7 )
      {
        *(_DWORD *)(v7 + 124) &= ~2u;
        v2 = 1;
        *(_QWORD *)(v7 + 56) = a1;
        v8 = (_QWORD *)(v7 + 96);
        v8[1] = v8;
        *v8 = v8;
LABEL_11:
        qword_1C0193700 = 0LL;
        ExReleasePushLockExclusiveEx(&gHmLock, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_14;
      }
      v9 = 11;
      v10 = 2;
    }
    WPP_RECORDER_SF_qq(
      gBaseLog,
      v10,
      0xFu,
      v9,
      (__int64)&WPP_75b573961131395cc80d6b2ba9b39bbc_Traceguids,
      ThreadWin32Thread,
      a1);
    goto LABEL_11;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      gBaseLog,
      5u,
      0xFu,
      0xDu,
      (__int64)&WPP_75b573961131395cc80d6b2ba9b39bbc_Traceguids,
      ThreadWin32Thread);
LABEL_14:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xEu,
      (__int64)&WPP_75b573961131395cc80d6b2ba9b39bbc_Traceguids);
  qword_1C01936F0 = 0LL;
  ExReleasePushLockExclusiveEx(&gWndLock, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
