/*
 * XREFs of SmKmFileInfoCleanup @ 0x140701F04
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14001F550 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmFileInfoDuplicate @ 0x140701FA8 (SmKmFileInfoDuplicate.c)
 *     SmKmStoreFileCreate @ 0x140702BF0 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x140703078 (SmKmStoreFileCreateForIoType.c)
 *     SmcCacheCleanup @ 0x140703F48 (SmcCacheCleanup.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     IoSetThreadHardErrorMode @ 0x140085310 (IoSetThreadHardErrorMode.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     IoFreeIrp @ 0x1400F1190 (IoFreeIrp.c)
 *     IoReuseIrp @ 0x14012C360 (IoReuseIrp.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14013600C (PnpUnregisterPlugPlayNotification.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     SmKmSendUsageNotification @ 0x140702B2C (SmKmSendUsageNotification.c)
 */

BOOLEAN __fastcall SmKmFileInfoCleanup(__int64 a1)
{
  BOOLEAN v2; // al
  __int64 v3; // rcx
  BOOLEAN v4; // di
  void *v5; // rcx
  IRP *v6; // rcx
  void *v7; // rcx
  struct _PRIVILEGE_SET *v8; // rcx

  v2 = IoSetThreadHardErrorMode(0);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = v2;
  if ( v3 )
    PnpUnregisterPlugPlayNotification(v3, 0);
  v5 = *(void **)(a1 + 16);
  if ( v5 )
    ObfDereferenceObject(v5);
  v6 = *(IRP **)(a1 + 40);
  if ( v6 )
  {
    IoReuseIrp(v6, 0);
    SmKmSendUsageNotification(*(PIRP *)(a1 + 40), *(PFILE_OBJECT *)(a1 + 8));
    IoFreeIrp(*(PIRP *)(a1 + 40));
  }
  v7 = *(void **)(a1 + 8);
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( *(_QWORD *)a1 )
    ZwClose(*(HANDLE *)a1);
  v8 = *(struct _PRIVILEGE_SET **)(a1 + 48);
  if ( v8 )
    MiDeleteSubsection(v8);
  return IoSetThreadHardErrorMode(v4);
}
