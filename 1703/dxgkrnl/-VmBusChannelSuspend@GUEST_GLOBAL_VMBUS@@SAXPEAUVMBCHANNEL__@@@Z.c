/*
 * XREFs of ?VmBusChannelSuspend@GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C002B8A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GUEST_GLOBAL_VMBUS::VmBusChannelSuspend(struct VMBCHANNEL__ *a1)
{
  *(_BYTE *)(VmbChannelGetPointer(a1) + 8) = 0;
}
