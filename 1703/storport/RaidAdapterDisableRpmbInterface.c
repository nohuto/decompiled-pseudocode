/*
 * XREFs of RaidAdapterDisableRpmbInterface @ 0x1C002C2FC
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C006421C (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C00644E4 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RaidAdapterDisableRpmbInterface(__int64 a1)
{
  NTSTATUS result; // eax

  if ( *(_QWORD *)(a1 + 5632) )
    return IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 5624), 0);
  return result;
}
