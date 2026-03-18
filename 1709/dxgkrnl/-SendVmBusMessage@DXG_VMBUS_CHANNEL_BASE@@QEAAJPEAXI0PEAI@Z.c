/*
 * XREFs of ?SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z @ 0x1C0190060
 * Callers:
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C018FC00 (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXG_VMBUS_CHANNEL_BASE::SendVmBusMessage(
        DXG_VMBUS_CHANNEL_BASE *this,
        void *a2,
        __int64 a3,
        void *a4,
        unsigned int *a5)
{
  if ( *((_BYTE *)this + 8) )
    return VmbChannelSendSynchronousRequest(*(_QWORD *)this, a2, a3, 0LL, 1, a4, a5, 0LL);
  else
    return 3221225485LL;
}
