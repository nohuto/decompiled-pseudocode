/*
 * XREFs of KiDisconnectInterruptCommon @ 0x1401689FC
 * Callers:
 *     KeDisconnectInterrupt @ 0x1401686D8 (KeDisconnectInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x140244C70 (KiDisconnectSecondaryInterrupt.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140005230 (KeRevertToUserGroupAffinityThread.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KiDisconnectInterruptInternal @ 0x140168B20 (KiDisconnectInterruptInternal.c)
 *     KiAcquireInterruptConnectLock @ 0x140169164 (KiAcquireInterruptConnectLock.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x140244A8C (KiAcquireSecondaryInterruptConnectLock.c)
 *     KiDisconnectSecondaryInterruptInternal @ 0x140244D40 (KiDisconnectSecondaryInterruptInternal.c)
 *     KiSignalWaitDisconnectLock @ 0x140249860 (KiSignalWaitDisconnectLock.c)
 */

__int64 __fastcall KiDisconnectInterruptCommon(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // esi
  char v8; // r15
  KSPIN_LOCK *v9; // rdi
  __int64 v10; // rdx
  _BYTE v12[8]; // [rsp+20h] [rbp-50h] BYREF
  __int16 v13; // [rsp+28h] [rbp-48h] BYREF
  char v14; // [rsp+2Ah] [rbp-46h]
  int v15; // [rsp+2Ch] [rbp-44h]
  _QWORD v16[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18; // [rsp+50h] [rbp-20h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+58h] [rbp-18h] BYREF

  v17[1] = a3;
  v17[0] = 0LL;
  v18 = 0LL;
  v7 = -1073741585;
  v8 = 0;
  if ( *(struct _KTHREAD **)(a2 + 152) != KeGetCurrentThread() )
  {
    v13 = 1;
    v16[1] = v16;
    v16[0] = v16;
    v17[0] = &v13;
    v14 = 6;
    v15 = 0;
  }
  if ( a1 )
  {
    v9 = (KSPIN_LOCK *)(KiGlobalSecondaryIDT + 48LL * (unsigned int)(*(_DWORD *)(a2 + 88) - 256));
    KiAcquireSecondaryInterruptConnectLock(v9, v12);
  }
  else
  {
    v9 = 0LL;
    KiAcquireInterruptConnectLock(*(unsigned int *)(a2 + 96), v12, &PreviousAffinity, a4);
  }
  if ( *(_BYTE *)(a2 + 95) && (*(_DWORD *)(a2 + 104) & 2) == 0 )
  {
    if ( *(_WORD *)(a2 + 102) )
    {
      _InterlockedOr((volatile signed __int32 *)(a2 + 104), 2u);
      v8 = 1;
      *(_QWORD *)(a2 + 144) = v17;
    }
    else
    {
      if ( !a1 )
      {
        v7 = KiDisconnectInterruptInternal(a2, a3);
        goto LABEL_10;
      }
      v7 = KiDisconnectSecondaryInterruptInternal(a2);
    }
  }
  if ( a1 )
  {
    KxReleaseSpinLock(v9);
    __writecr8(v12[0]);
    goto LABEL_11;
  }
LABEL_10:
  __writecr8(v12[0]);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
LABEL_11:
  if ( v17[0] && v8 )
  {
    LOBYTE(v10) = 1;
    KiSignalWaitDisconnectLock(v17[0], v10);
    return (unsigned int)v18;
  }
  return v7;
}
