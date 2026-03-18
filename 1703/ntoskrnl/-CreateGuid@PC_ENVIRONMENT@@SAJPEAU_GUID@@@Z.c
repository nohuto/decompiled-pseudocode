/*
 * XREFs of ?CreateGuid@PC_ENVIRONMENT@@SAJPEAU_GUID@@@Z @ 0x140687038
 * Callers:
 *     ?WritePartitionTable@PC_MBR@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x140268A20 (-WritePartitionTable@PC_MBR@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z @ 0x1402694B0 (-WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall PC_ENVIRONMENT::CreateGuid(UUID *Uuid)
{
  return ExUuidCreate(Uuid);
}
