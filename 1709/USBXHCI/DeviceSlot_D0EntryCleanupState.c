/*
 * XREFs of DeviceSlot_D0EntryCleanupState @ 0x1C00163BC
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005680 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0005F70 (WPP_RECORDER_SF_qd.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     DeviceSlot_DisableAllDeviceSlots @ 0x1C0016450 (DeviceSlot_DisableAllDeviceSlots.c)
 *     XilDeviceSlot_InitializeSecureScratchpadBuffers @ 0x1C0016AAC (XilDeviceSlot_InitializeSecureScratchpadBuffers.c)
 */

__int64 __fastcall DeviceSlot_D0EntryCleanupState(__int64 a1, int a2)
{
  __int64 *i; // rbx

  WPP_RECORDER_SF_qd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    4u,
    0xAu,
    0xEu,
    (__int64)&WPP_66090ce59e283cef293d375cad1686b0_Traceguids,
    a1,
    a2);
  if ( *(_BYTE *)(a1 + 80) )
  {
    XilDeviceSlot_InitializeSecureScratchpadBuffers(a1 + 16);
  }
  else
  {
    for ( i = *(__int64 **)(a1 + 56); i != (__int64 *)(a1 + 56); i = (__int64 *)*i )
      memset((void *)i[2], 0, *((unsigned int *)i + 10));
  }
  return DeviceSlot_DisableAllDeviceSlots(a1);
}
