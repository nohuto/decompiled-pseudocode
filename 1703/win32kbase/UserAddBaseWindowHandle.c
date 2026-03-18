/*
 * XREFs of UserAddBaseWindowHandle @ 0x1C00E66C0
 * Callers:
 *     NtMITMinuserWindowCreated @ 0x1C00DFC30 (NtMITMinuserWindowCreated.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     HMAllocObject @ 0x1C0040370 (HMAllocObject.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qq @ 0x1C004D114 (WPP_RECORDER_SF_qq.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C005564C (WPP_RECORDER_SF_q.c)
 *     HMFindEntry @ 0x1C00DE7D0 (HMFindEntry.c)
 */

__int64 __fastcall UserAddBaseWindowHandle(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rax
  unsigned __int16 v8; // r9
  unsigned __int8 v9; // dl
  _QWORD v11[4]; // [rsp+40h] [rbp-38h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      15,
      10,
      (__int64)&WPP_6016fdec47aa36ecab065e3e6b7e532f_Traceguids);
  v2 = 0;
  RIMLockExclusive((__int64)&gWndLock);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v4 = ThreadWin32Thread;
  if ( (*(_DWORD *)(ThreadWin32Thread + 1096) & 0x1000000) != 0 )
  {
    RIMLockExclusive((__int64)&gHmLock);
    v11[0] = a1;
    v11[2] = 0LL;
    v11[1] = PsGetCurrentProcessWin32Process(v5);
    if ( HMFindEntry((__int64)v11, (unsigned int (__fastcall *)(__int64, char *))lookForMatchingMinuserHwnd) )
    {
      v2 = 1;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_11;
      v8 = 12;
      v9 = 5;
    }
    else
    {
      v6 = HMAllocObject(v4, 0LL, 0x17u, 0x80u);
      if ( v6 )
      {
        *(_DWORD *)(v6 + 124) &= ~2u;
        v2 = 1;
        *(_QWORD *)(v6 + 56) = a1;
        v7 = (_QWORD *)(v6 + 96);
        v7[1] = v7;
        *v7 = v7;
LABEL_11:
        qword_1C018E840 = 0LL;
        ExReleasePushLockExclusiveEx(&gHmLock, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_14;
      }
      v8 = 11;
      v9 = 2;
    }
    WPP_RECORDER_SF_qq(gBaseLog, v9, 0xFu, v8, (__int64)&WPP_6016fdec47aa36ecab065e3e6b7e532f_Traceguids, v4, a1);
    goto LABEL_11;
  }
  if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    goto LABEL_16;
  WPP_RECORDER_SF_q(
    gBaseLog,
    5u,
    0xFu,
    0xDu,
    (__int64)&WPP_6016fdec47aa36ecab065e3e6b7e532f_Traceguids,
    ThreadWin32Thread);
LABEL_14:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      15,
      14,
      (__int64)&WPP_6016fdec47aa36ecab065e3e6b7e532f_Traceguids);
LABEL_16:
  qword_1C018E830 = 0LL;
  ExReleasePushLockExclusiveEx(&gWndLock, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
