/*
 * XREFs of SmKmFileInfoCleanup @ 0x14079D204
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140099EC4 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmFileInfoDuplicate @ 0x14079D2A8 (SmKmFileInfoDuplicate.c)
 *     SmKmStoreFileCreate @ 0x14079DEF8 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x14079E384 (SmKmStoreFileCreateForIoType.c)
 *     SmcCacheCleanup @ 0x14079F24C (SmcCacheCleanup.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     IoSetThreadHardErrorMode @ 0x14006CE40 (IoSetThreadHardErrorMode.c)
 *     IoReuseIrp @ 0x1400A60A0 (IoReuseIrp.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     IoFreeIrp @ 0x140106E30 (IoFreeIrp.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14014C068 (PnpUnregisterPlugPlayNotification.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     SmKmSendUsageNotification @ 0x14079DE34 (SmKmSendUsageNotification.c)
 */

BOOLEAN __fastcall SmKmFileInfoCleanup(__int64 a1)
{
  BOOLEAN v2; // al
  void *v3; // rcx
  BOOLEAN v4; // di
  void *v5; // rcx
  IRP *v6; // rcx
  void *v7; // rcx
  struct _PRIVILEGE_SET *v8; // rcx

  v2 = IoSetThreadHardErrorMode(0);
  v3 = *(void **)(a1 + 32);
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
    CmSiFreeMemory(v8);
  return IoSetThreadHardErrorMode(v4);
}
