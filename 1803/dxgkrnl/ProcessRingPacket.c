/*
 * XREFs of ProcessRingPacket @ 0x1C01E5900
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessPacket@DXGVMBUSCHANNEL@@QEAAJIPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C01E5480 (-ProcessPacket@DXGVMBUSCHANNEL@@QEAAJIPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 */

__int64 __fastcall ProcessRingPacket(__int64 a1, struct VMBPACKETCOMPLETION__ *a2, unsigned int *a3, unsigned int a4)
{
  struct _EX_RUNDOWN_REF *Pointer; // rax
  __int64 result; // rax

  if ( a4 <= 8 )
    return VmbChannelPacketFail(a2);
  Pointer = (struct _EX_RUNDOWN_REF *)VmbChannelGetPointer(a1);
  if ( !Pointer )
    return VmbChannelPacketFail(a2);
  result = DXGVMBUSCHANNEL::ProcessPacket(Pointer, *a3, a2, a3, a4);
  if ( (int)result < 0 )
    return VmbChannelPacketFail(a2);
  return result;
}
