/*
 * XREFs of KiDisconnectInterruptCommon @ 0x14012D8F4
 * Callers:
 *     KeDisconnectInterrupt @ 0x140129340 (KeDisconnectInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x140207050 (KiDisconnectSecondaryInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400AAD30 (KeRevertToUserGroupAffinityThread.c)
 *     KiAcquireInterruptConnectLock @ 0x1400B3240 (KiAcquireInterruptConnectLock.c)
 *     KiDisconnectInterruptInternal @ 0x14012DA20 (KiDisconnectInterruptInternal.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x140206E6C (KiAcquireSecondaryInterruptConnectLock.c)
 *     KiDisconnectSecondaryInterruptInternal @ 0x140207120 (KiDisconnectSecondaryInterruptInternal.c)
 *     KiSignalWaitDisconnectLock @ 0x14020B4C0 (KiSignalWaitDisconnectLock.c)
 */

__int64 __fastcall KiDisconnectInterruptCommon(int a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // esi
  char v7; // r15
  KSPIN_LOCK *v8; // rdi
  __int64 v9; // rdx
  _BYTE v11[8]; // [rsp+20h] [rbp-60h] BYREF
  __int16 v12; // [rsp+28h] [rbp-58h] BYREF
  char v13; // [rsp+2Ah] [rbp-56h]
  int v14; // [rsp+2Ch] [rbp-54h]
  _QWORD v15[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17; // [rsp+50h] [rbp-30h]
  int v18; // [rsp+58h] [rbp-28h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+60h] [rbp-20h] BYREF

  v16[1] = a3;
  v16[0] = 0LL;
  v17 = 0LL;
  v6 = -1073741585;
  v7 = 0;
  if ( *(struct _KTHREAD **)(a2 + 152) != KeGetCurrentThread() )
  {
    v12 = 1;
    v15[1] = v15;
    v15[0] = v15;
    v16[0] = &v12;
    v13 = 6;
    v14 = 0;
  }
  if ( a1 )
  {
    v8 = (KSPIN_LOCK *)(KiGlobalSecondaryIDT + 48LL * (unsigned int)(*(_DWORD *)(a2 + 88) - 256));
    KiAcquireSecondaryInterruptConnectLock(v8, v11);
  }
  else
  {
    v8 = 0LL;
    KiAcquireInterruptConnectLock(*(_DWORD *)(a2 + 96), v11, &PreviousAffinity);
  }
  if ( *(_BYTE *)(a2 + 95) && (*(_DWORD *)(a2 + 104) & 2) == 0 )
  {
    if ( *(_WORD *)(a2 + 102) )
    {
      v18 = 2;
      _InterlockedOr((volatile signed __int32 *)(a2 + 104), 2u);
      v7 = 1;
      *(_QWORD *)(a2 + 144) = v16;
    }
    else
    {
      if ( !a1 )
      {
        v6 = KiDisconnectInterruptInternal(a2, a3);
        goto LABEL_10;
      }
      v6 = KiDisconnectSecondaryInterruptInternal(a2);
    }
  }
  if ( a1 )
  {
    KxReleaseSpinLock(v8);
    __writecr8(v11[0]);
    goto LABEL_11;
  }
LABEL_10:
  __writecr8(v11[0]);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
LABEL_11:
  if ( v16[0] && v7 )
  {
    LOBYTE(v9) = 1;
    KiSignalWaitDisconnectLock(v16[0], v9);
    return (unsigned int)v17;
  }
  return v6;
}
