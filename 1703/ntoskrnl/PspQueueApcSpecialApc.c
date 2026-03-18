/*
 * XREFs of PspQueueApcSpecialApc @ 0x14044FB60
 * Callers:
 *     SmPerformStoreSwapOperation @ 0x1400040B8 (SmPerformStoreSwapOperation.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14001F550 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     PcVerifyPartitionTable @ 0x1401536E4 (PcVerifyPartitionTable.c)
 *     IoRegisterPriorityCallback @ 0x140155AA0 (IoRegisterPriorityCallback.c)
 *     ?ReadPartitionTable@PC_MBR@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x140161C58 (-ReadPartitionTable@PC_MBR@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     PcReadPartitionTable @ 0x140161FCC (PcReadPartitionTable.c)
 *     IoUnregisterPriorityCallback @ 0x1401F4290 (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1401FD630 (KeDeregisterBoundCallback.c)
 *     KeRegisterBoundCallback @ 0x1401FD9C0 (KeRegisterBoundCallback.c)
 *     PcCreatePartitionTable @ 0x140268514 (PcCreatePartitionTable.c)
 *     PcSetPartition @ 0x1402685B0 (PcSetPartition.c)
 *     PcWritePartitionTable @ 0x14026865C (PcWritePartitionTable.c)
 *     ?SetPartition@PC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x140268934 (-SetPartition@PC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 *     ?ReadEntries@PC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z @ 0x140268CE4 (-ReadEntries@PC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z.c)
 *     ?ReadPartitionTable@PC_GPT@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x140268EC4 (-ReadPartitionTable@PC_GPT@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?SetPartition@PC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x140269138 (-SetPartition@PC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 *     ?VerifyPartitionTable@PC_GPT@@QEAAJE@Z @ 0x140269220 (-VerifyPartitionTable@PC_GPT@@QEAAJE@Z.c)
 *     ?WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z @ 0x1402694B0 (-WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PspQueueApcSpecialApc(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
