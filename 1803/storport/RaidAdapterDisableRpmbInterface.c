/*
 * XREFs of RaidAdapterDisableRpmbInterface @ 0x1C0025F78
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C00646C4 (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C006498C (RaidAdapterSurpriseRemovalIrp.c)
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
