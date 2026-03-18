/*
 * XREFs of PspQueueApcSpecialApc @ 0x14052A140
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140099EC4 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmPerformStoreSwapOperation @ 0x14009C150 (SmPerformStoreSwapOperation.c)
 *     ??1SC_DISK@@UEAA@XZ @ 0x14015D23C (--1SC_DISK@@UEAA@XZ.c)
 *     ?Initialize@SC_DEVICE@@UEAAJXZ @ 0x14015D570 (-Initialize@SC_DEVICE@@UEAAJXZ.c)
 *     ??1SC_DEVICE@@UEAA@XZ @ 0x14015D5EC (--1SC_DEVICE@@UEAA@XZ.c)
 *     IoRegisterPriorityCallback @ 0x140172050 (IoRegisterPriorityCallback.c)
 *     IoUnregisterPriorityCallback @ 0x140236F90 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x140240B00 (KeDeregisterBoundCallback.c)
 *     KeRegisterBoundCallback @ 0x140240E10 (KeRegisterBoundCallback.c)
 *     ??3SC_ENV_ALLOCATOR@@SAXPEAX@Z @ 0x1402C81EC (--3SC_ENV_ALLOCATOR@@SAXPEAX@Z.c)
 *     ??_GSC_DISK@@UEAAPEAXI@Z @ 0x1402C8200 (--_GSC_DISK@@UEAAPEAXI@Z.c)
 *     ?SaveStorageProperty@SC_DISK@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x1402C8500 (-SaveStorageProperty@SC_DISK@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z @ 0x1402C87E8 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z.c)
 *     ?ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1402C89CC (-ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x1402C8C8C (-SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 *     ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x1402C8D74 (-VerifyPartitionTable@SC_GPT@@QEAAJE@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x1402C9058 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ?ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1402C97A0 (-ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x1402C9A90 (-SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 *     ??_GSC_DEVICE@@UEAAPEAXI@Z @ 0x1402C9E20 (--_GSC_DEVICE@@UEAAPEAXI@Z.c)
 *     ?SaveStorageProperty@SC_DEVICE@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x1402C9FC0 (-SaveStorageProperty@SC_DEVICE@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z.c)
 *     PsCreateVsmEnclave @ 0x14077F3CC (PsCreateVsmEnclave.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall PspQueueApcSpecialApc(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
