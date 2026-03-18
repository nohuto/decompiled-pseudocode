/*
 * XREFs of KiDisconnectInterruptCommon @ 0x14014BCCC
 * Callers:
 *     KeDisconnectInterrupt @ 0x14014B958 (KeDisconnectInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x140200B94 (KiDisconnectSecondaryInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140026160 (KeRevertToUserGroupAffinityThread.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     KiDisconnectInterruptInternal @ 0x14014BDFC (KiDisconnectInterruptInternal.c)
 *     KiAcquireInterruptConnectLock @ 0x14014C400 (KiAcquireInterruptConnectLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KiDisconnectSecondaryInterruptInternal @ 0x140200C74 (KiDisconnectSecondaryInterruptInternal.c)
 *     KiSignalWaitDisconnectLock @ 0x1402052C0 (KiSignalWaitDisconnectLock.c)
 */

__int64 __fastcall KiDisconnectInterruptCommon(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // edi
  char v8; // r12
  KSPIN_LOCK *v9; // r14
  unsigned __int8 CurrentIrql; // si
  __int64 v11; // rdx
  unsigned __int8 v13[8]; // [rsp+20h] [rbp-60h] BYREF
  __int16 v14; // [rsp+28h] [rbp-58h] BYREF
  char v15; // [rsp+2Ah] [rbp-56h]
  int v16; // [rsp+2Ch] [rbp-54h]
  _QWORD v17[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v19; // [rsp+50h] [rbp-30h]
  int v20; // [rsp+58h] [rbp-28h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+60h] [rbp-20h] BYREF

  v18[1] = a3;
  v18[0] = 0LL;
  v19 = 0LL;
  v7 = -1073741585;
  v8 = 0;
  if ( *(struct _KTHREAD **)(a2 + 152) != KeGetCurrentThread() )
  {
    v14 = 1;
    v17[1] = v17;
    v17[0] = v17;
    v18[0] = &v14;
    v15 = 6;
    v16 = 0;
  }
  if ( a1 )
  {
    v9 = (KSPIN_LOCK *)(KiGlobalSecondaryIDT + 48LL * (unsigned int)(*(_DWORD *)(a2 + 88) - 256));
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    v13[0] = CurrentIrql;
    KxAcquireSpinLock(v9);
  }
  else
  {
    v9 = 0LL;
    KiAcquireInterruptConnectLock(*(unsigned int *)(a2 + 96), v13, &PreviousAffinity, a4);
    CurrentIrql = v13[0];
  }
  if ( *(_BYTE *)(a2 + 95) && (*(_DWORD *)(a2 + 104) & 2) == 0 )
  {
    if ( *(_WORD *)(a2 + 102) )
    {
      v20 = 2;
      _InterlockedOr((volatile signed __int32 *)(a2 + 104), 2u);
      CurrentIrql = v13[0];
      *(_QWORD *)(a2 + 144) = v18;
      v8 = 1;
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
    __writecr8(CurrentIrql);
    goto LABEL_11;
  }
LABEL_10:
  __writecr8(CurrentIrql);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
LABEL_11:
  if ( v18[0] && v8 )
  {
    LOBYTE(v11) = 1;
    KiSignalWaitDisconnectLock(v18[0], v11);
    return (unsigned int)v19;
  }
  return v7;
}
