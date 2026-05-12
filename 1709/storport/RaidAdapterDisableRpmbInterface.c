/*
 * XREFs of RaidAdapterDisableRpmbInterface @ 0x1C002D16C
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C0067760 (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0067A28 (RaidAdapterSurpriseRemovalIrp.c)
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
