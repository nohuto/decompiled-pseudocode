/*
 * XREFs of ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x18007E104
 * Callers:
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18005BB24 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800666B0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?SendResponse@CaptureBitsResponse@@UEAAJJ@Z @ 0x1800AFCD0 (-SendResponse@CaptureBitsResponse@@UEAAJJ@Z.c)
 *     ?SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z @ 0x1800B07FC (-SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z.c)
 *     ?FlushChannels@CComposition@@QEAAXXZ @ 0x180131A38 (-FlushChannels@CComposition@@QEAAXXZ.c)
 *     ?SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z @ 0x18014A890 (-SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PostMessageToClient@CConnection@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1800655D8 (-PostMessageToClient@CConnection@@QEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?AllocateNotification@CTransportCmdPacker@@SAJW4Enum@MilRdpControl@@W42MilMessageClass@@IPEAPEAUUCE_RDP_HEADER@@PEAPEAUMIL_MESSAGE@@PEAPEAX@Z @ 0x18007E194 (-AllocateNotification@CTransportCmdPacker@@SAJW4Enum@MilRdpControl@@W42MilMessageClass@@IPEAPEAU.c)
 */

__int64 __fastcall CChannelContext::PostMessageToChannel(CConnection **this, const struct MIL_MESSAGE *a2, __int64 a3)
{
  int v5; // eax
  _DWORD *v6; // rdi
  unsigned int v7; // ebx
  _OWORD *v8; // rcx
  const struct UCE_RDP_HEADER *v9; // rdx
  int v10; // eax
  void *lpMem; // [rsp+58h] [rbp+10h] BYREF
  _OWORD *v13; // [rsp+60h] [rbp+18h] BYREF

  lpMem = 0LL;
  v13 = 0LL;
  v5 = CTransportCmdPacker::AllocateNotification(this, *(unsigned int *)a2, a3, &lpMem, &v13);
  v6 = lpMem;
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x9Bu);
  }
  else
  {
    v8 = v13;
    v9 = (const struct UCE_RDP_HEADER *)lpMem;
    *v13 = *(_OWORD *)a2;
    *((_QWORD *)v8 + 2) = *((_QWORD *)a2 + 2);
    *((_DWORD *)v8 + 6) = *((_DWORD *)a2 + 6);
    v6[4] = *((_DWORD *)this + 4);
    v10 = CConnection::PostMessageToClient(this[5], v9);
    v7 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xA3u);
  }
  WPF::ProcessHeapImpl::Free(v6);
  return v7;
}
