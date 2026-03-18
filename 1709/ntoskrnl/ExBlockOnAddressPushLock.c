/*
 * XREFs of ExBlockOnAddressPushLock @ 0x1400BD710
 * Callers:
 *     CmpWaitForLateUnloadWorker @ 0x14011FC44 (CmpWaitForLateUnloadWorker.c)
 *     CmLoadAppKey @ 0x1404E13B4 (CmLoadAppKey.c)
 *     MiLockImageSection @ 0x1405073A0 (MiLockImageSection.c)
 *     CmpRollbackLightWeightTransaction @ 0x1405688D0 (CmpRollbackLightWeightTransaction.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14059D508 (ExpBlockOnLockedHandleEntry.c)
 *     CmpTransSearchAddTrans @ 0x1405D6E48 (CmpTransSearchAddTrans.c)
 *     CmUnRegisterCallback @ 0x140689490 (CmUnRegisterCallback.c)
 *     CmShutdownSystem @ 0x14068BC1C (CmShutdownSystem.c)
 *     ObDrainDeferredObjectDeletion @ 0x1406EF890 (ObDrainDeferredObjectDeletion.c)
 *     PopBatteryUpdateCurrentState @ 0x1406FEBF8 (PopBatteryUpdateCurrentState.c)
 *     EtwpKsrCallback @ 0x140752AF0 (EtwpKsrCallback.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x1400BBEE8 (ExpUnblockPushLock.c)
 *     ExBlockPushLock @ 0x1400BD7C0 (ExBlockPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1400BD7E0 (ExTimedWaitForUnblockPushLock.c)
 */

__int64 __fastcall ExBlockOnAddressPushLock(
        volatile __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned __int64 a4,
        __int64 a5)
{
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  bool v12; // zf
  _BYTE v14[64]; // [rsp+20h] [rbp-48h] BYREF

  ExBlockPushLock(a1, v14);
  if ( a4 > 8 )
    goto LABEL_8;
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
          goto LABEL_8;
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
    if ( v12 )
      return ExTimedWaitForUnblockPushLock(a1, v14, a5);
  }
  else if ( *(_BYTE *)a2 == *(_BYTE *)a3 )
  {
    return ExTimedWaitForUnblockPushLock(a1, v14, a5);
  }
LABEL_8:
  ExpUnblockPushLock(a1, v14, 0);
  return 0LL;
}
