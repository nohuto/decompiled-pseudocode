/*
 * XREFs of PspQueueApcSpecialApc @ 0x140453160
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140004560 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ??1SC_DISK@@UEAA@XZ @ 0x140146AE4 (--1SC_DISK@@UEAA@XZ.c)
 *     ?Initialize@SC_DEVICE@@UEAAJXZ @ 0x140146D00 (-Initialize@SC_DEVICE@@UEAAJXZ.c)
 *     ??1SC_DEVICE@@UEAA@XZ @ 0x140146D7C (--1SC_DEVICE@@UEAA@XZ.c)
 *     IoRegisterPriorityCallback @ 0x140149860 (IoRegisterPriorityCallback.c)
 *     IoUnregisterPriorityCallback @ 0x1401F9E10 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x140203720 (KeDeregisterBoundCallback.c)
 *     KeRegisterBoundCallback @ 0x140203980 (KeRegisterBoundCallback.c)
 *     SmPerformStoreSwapOperation @ 0x140275E70 (SmPerformStoreSwapOperation.c)
 *     ??3SC_ENV_ALLOCATOR@@SAXPEAX@Z @ 0x1402926AC (--3SC_ENV_ALLOCATOR@@SAXPEAX@Z.c)
 *     ??_GSC_DISK@@UEAAPEAXI@Z @ 0x1402926C0 (--_GSC_DISK@@UEAAPEAXI@Z.c)
 *     ?SaveStorageProperty@SC_DISK@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x1402929C0 (-SaveStorageProperty@SC_DISK@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z @ 0x140292CA8 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z.c)
 *     ?ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x140292E90 (-ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x140293150 (-SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 *     ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x140293238 (-VerifyPartitionTable@SC_GPT@@QEAAJE@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x140293524 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ?ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x140293C6C (-ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x140293F58 (-SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 *     ??_GSC_DEVICE@@UEAAPEAXI@Z @ 0x1402942D0 (--_GSC_DEVICE@@UEAAPEAXI@Z.c)
 *     ?SaveStorageProperty@SC_DEVICE@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x140294470 (-SaveStorageProperty@SC_DEVICE@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z.c)
 *     PsCreateVsmEnclave @ 0x14071B904 (PsCreateVsmEnclave.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall PspQueueApcSpecialApc(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
