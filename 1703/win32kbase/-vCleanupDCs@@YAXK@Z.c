/*
 * XREFs of ?vCleanupDCs@@YAXK@Z @ 0x1C002F598
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0068EFC (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     MultiUserCleanupDCs @ 0x1C0088B3C (MultiUserCleanupDCs.c)
 * Callees:
 *     HmgCheckDCForPrivateReferences @ 0x1C002B990 (HmgCheckDCForPrivateReferences.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0031560 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0031A40 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031E20 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C0032EC0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0033040 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C00331B0 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?bOwnedBy@ENTRYOBJ@@QEAAHK@Z @ 0x1C0033440 (-bOwnedBy@ENTRYOBJ@@QEAAHK@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0033500 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037AD0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0037B60 (GreAcquireHmgrSemaphore.c)
 *     bDeleteDCInternal @ 0x1C0042230 (bDeleteDCInternal.c)
 *     HmgSetLock @ 0x1C007E994 (HmgSetLock.c)
 */

void __fastcall vCleanupDCs(unsigned int a1)
{
  struct OBJECT *EntryObject; // rdi
  unsigned int NextEntryIndex; // ebx
  __int64 v4; // rdx
  GdiHandleManager *v5; // rcx
  __int64 v6; // r8
  HDC v7; // r15
  ENTRYOBJ *EntryFromObject; // rax
  ENTRYOBJ *v9; // r14
  __int64 v10; // rdx
  ENTRYOBJ *v11; // rcx
  __int64 v12; // r8
  char v13; // al
  struct OBJECT **v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  GdiHandleEntryDirectory **v18; // rsi
  unsigned int v19; // eax
  struct _ENTRY *Entry; // rax
  _QWORD v21[2]; // [rsp+50h] [rbp-10h] BYREF
  struct _ENTRY *v22; // [rsp+B0h] [rbp+50h] BYREF

  EntryObject = 0LL;
  NextEntryIndex = 0;
LABEL_14:
  GreAcquireHmgrSemaphore();
LABEL_25:
  v18 = (GdiHandleEntryDirectory **)gpHandleManager;
  while ( 1 )
  {
    do
    {
LABEL_3:
      NextEntryIndex = GdiHandleManager::GetNextEntryIndex(v5, NextEntryIndex, &v22);
      if ( !NextEntryIndex )
      {
        NextEntryIndex = 0;
        goto LABEL_5;
      }
    }
    while ( *((_BYTE *)v22 + 14) != 1 );
    EntryObject = GdiHandleManager::GetEntryObject((GdiHandleManager *)v18, NextEntryIndex);
LABEL_5:
    if ( !NextEntryIndex )
      break;
    v7 = *(HDC *)EntryObject;
    EntryFromObject = GdiHandleManager::GetEntryFromObject((GdiHandleManager *)v18, EntryObject);
    v9 = EntryFromObject;
    if ( EntryFromObject )
    {
      if ( (unsigned int)ENTRYOBJ::bOwnedBy(EntryFromObject, a1) )
      {
        GreReleaseHmgrSemaphore(v11, v10, v12);
        v13 = *((_BYTE *)v9 + 15);
        if ( (v13 & 0x20) != 0 )
        {
          *((_BYTE *)v9 + 15) = v13 & 0xDF;
          while ( *((_WORD *)EntryObject + 6) )
            KeDelayExecutionThread(0, 0, gpLockShortDelay);
        }
        HmgSetLock(v7);
        bDeleteDCInternal(v7, 1, 1, 0);
        goto LABEL_14;
      }
      if ( (unsigned int)ENTRYOBJ::bOwnedBy(v11, 0) )
      {
        v21[0] = 0LL;
        v14 = (struct OBJECT **)EntryObject;
        v21[1] = 0LL;
        while ( (unsigned int)HmgCheckDCForPrivateReferences(v14, a1) )
        {
          XDCOBJ::vLock((XDCOBJ *)v21, v7);
          if ( v21[0] )
          {
            DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 400LL, 8LL);
            XDCOBJ::bCleanDC((XDCOBJ *)v21, 0);
            if ( v21[0] )
            {
              XDCOBJ::RestoreAttributes((XDCOBJ *)v21);
              _InterlockedDecrement((volatile signed __int32 *)(v21[0] + 12LL));
              v21[0] = 0LL;
            }
            goto LABEL_25;
          }
          GreReleaseHmgrSemaphore(v16, v15, v17);
          KeDelayExecutionThread(0, 0, gpLockShortDelay);
          GreAcquireHmgrSemaphore();
          v18 = (GdiHandleEntryDirectory **)gpHandleManager;
          v19 = GdiHandleManager::DecodeIndex(
                  gpHandleManager,
                  (unsigned __int16)v7 | ((unsigned int)v7 >> 8) & 0xFF0000);
          Entry = GdiHandleEntryDirectory::GetEntry(v18[2], v19, 0);
          if ( !Entry || *((_BYTE *)Entry + 14) != 1 || !(unsigned int)ENTRYOBJ::bOwnedBy(Entry, 0) )
            goto LABEL_3;
          EntryObject = GdiHandleManager::GetEntryObject(
                          (GdiHandleManager *)v18,
                          (unsigned __int16)v7 | ((unsigned int)v7 >> 8) & 0xFF0000);
          v14 = (struct OBJECT **)EntryObject;
        }
      }
    }
  }
  GreReleaseHmgrSemaphore(v5, v4, v6);
}
