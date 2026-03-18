/*
 * XREFs of ExBlockOnAddressPushLock @ 0x14006BD30
 * Callers:
 *     CmpWaitForLateUnloadWorker @ 0x14006BCD0 (CmpWaitForLateUnloadWorker.c)
 *     CmpRollbackLightWeightTransaction @ 0x14042D390 (CmpRollbackLightWeightTransaction.c)
 *     CmpTransSearchAddTrans @ 0x14042D944 (CmpTransSearchAddTrans.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404B0F24 (ExpBlockOnLockedHandleEntry.c)
 *     MiLockImageSection @ 0x1404B2ED0 (MiLockImageSection.c)
 *     CmLoadAppKey @ 0x1404D59A0 (CmLoadAppKey.c)
 *     PopBatteryUpdateCurrentState @ 0x14057D4B4 (PopBatteryUpdateCurrentState.c)
 *     CmUnRegisterCallback @ 0x140660520 (CmUnRegisterCallback.c)
 *     CmShutdownSystem @ 0x14066270C (CmShutdownSystem.c)
 *     ObDrainDeferredObjectDeletion @ 0x1406C0D70 (ObDrainDeferredObjectDeletion.c)
 *     EtwpKsrCallback @ 0x140713990 (EtwpKsrCallback.c)
 * Callees:
 *     ExBlockPushLock @ 0x14006BDE0 (ExBlockPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x14006BE00 (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x14007EB48 (ExpUnblockPushLock.c)
 */

__int64 __fastcall ExBlockOnAddressPushLock(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned __int64 a4, __int64 a5)
{
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  bool v12; // zf
  _BYTE v14[64]; // [rsp+20h] [rbp-48h] BYREF

  ExBlockPushLock(a1, v14);
  if ( a4 > 8 )
    goto LABEL_7;
  v9 = a4 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 2;
      if ( v11 )
      {
        if ( v11 != 4 )
          goto LABEL_7;
        v12 = *a2 == *a3;
      }
      else
      {
        v12 = *(_DWORD *)a2 == *(_DWORD *)a3;
      }
    }
    else
    {
      v12 = *(_WORD *)a2 == *(_WORD *)a3;
    }
    if ( !v12 )
    {
LABEL_7:
      ExpUnblockPushLock(a1, v14, 0LL);
      return 0LL;
    }
  }
  else if ( *(_BYTE *)a2 != *(_BYTE *)a3 )
  {
    goto LABEL_7;
  }
  return ExTimedWaitForUnblockPushLock(a1, v14, a5);
}
