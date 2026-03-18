/*
 * XREFs of ?SendVmBusMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAXI0PEAI@Z @ 0x1C017B4A8
 * Callers:
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C017AE78 (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CheckDebugBreak@DXGGLOBAL@@QEAAXXZ @ 0x1C002D5A0 (-CheckDebugBreak@DXGGLOBAL@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_VMBUS_CHANNEL_BASE::SendVmBusMessage(
        DXG_VMBUS_CHANNEL_BASE *this,
        void *a2,
        __int64 a3,
        void *a4,
        unsigned int *a5)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  DXGGLOBAL *Global; // rax

  if ( !*((_BYTE *)this + 40) )
    return 3221225485LL;
  v6 = VmbChannelSendSynchronousRequest(*(_QWORD *)this, a2, a3, 0LL, 1, a4, a5, 0LL);
  Global = DXGGLOBAL::GetGlobal(v7);
  DXGGLOBAL::CheckDebugBreak(Global);
  return v6;
}
