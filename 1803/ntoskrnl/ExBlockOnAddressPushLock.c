/*
 * XREFs of ExBlockOnAddressPushLock @ 0x1400A1CF0
 * Callers:
 *     CmpWaitForLateUnloadWorker @ 0x1400A1C88 (CmpWaitForLateUnloadWorker.c)
 *     RtlpCSparseBitmapWaitOnAddress @ 0x14029F1BC (RtlpCSparseBitmapWaitOnAddress.c)
 *     CmLoadAppKey @ 0x14049C2A8 (CmLoadAppKey.c)
 *     CmpRollbackLightWeightTransaction @ 0x14054BB90 (CmpRollbackLightWeightTransaction.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14054D4C4 (ExpBlockOnLockedHandleEntry.c)
 *     MiLockImageSection @ 0x1405BB208 (MiLockImageSection.c)
 *     CmpTransSearchAddTrans @ 0x1405E145C (CmpTransSearchAddTrans.c)
 *     PopBatteryUpdateCurrentState @ 0x140611B78 (PopBatteryUpdateCurrentState.c)
 *     CmUnRegisterCallback @ 0x1406ED880 (CmUnRegisterCallback.c)
 *     CmShutdownSystem @ 0x1406EFFE4 (CmShutdownSystem.c)
 *     ObDrainDeferredObjectDeletion @ 0x140758D0C (ObDrainDeferredObjectDeletion.c)
 *     EtwpKsrCallback @ 0x1407B9880 (EtwpKsrCallback.c)
 * Callees:
 *     ExBlockPushLock @ 0x1400A1DA0 (ExBlockPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1400A1DC0 (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x1400A20F4 (ExpUnblockPushLock.c)
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
    goto LABEL_10;
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
          goto LABEL_10;
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
  }
  else
  {
    v12 = *(_BYTE *)a2 == *(_BYTE *)a3;
  }
  if ( v12 )
    return ExTimedWaitForUnblockPushLock(a1, v14, a5);
LABEL_10:
  ExpUnblockPushLock(a1, v14, 0LL);
  return 0LL;
}
