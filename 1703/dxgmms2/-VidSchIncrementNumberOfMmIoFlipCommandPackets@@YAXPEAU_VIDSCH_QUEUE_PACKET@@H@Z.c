/*
 * XREFs of ?VidSchIncrementNumberOfMmIoFlipCommandPackets@@YAXPEAU_VIDSCH_QUEUE_PACKET@@H@Z @ 0x1C00110C4
 * Callers:
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C006B1A0 (VidSchiSubmitCommandPacketToQueue.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchIncrementNumberOfMmIoFlipCommandPackets(struct _VIDSCH_QUEUE_PACKET *a1, unsigned int a2)
{
  __int64 v3; // rbx
  unsigned int v4; // r10d
  bool i; // zf
  int v6; // eax
  char v7; // cl

  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 104LL) + 32LL);
  if ( (*((_DWORD *)a1 + 18) & 0x800000) != 0 )
    v4 = (unsigned __int8)*((_DWORD *)a1 + 174) | *((unsigned __int8 *)a1 + 697);
  else
    v4 = (1 << *(_DWORD *)(v3 + 128)) - 1;
  for ( i = !_BitScanForward((unsigned int *)&v6, v4); ; i = !_BitScanForward((unsigned int *)&v6, v4) )
  {
    v7 = -1;
    if ( !i )
      v7 = v6;
    if ( !v4 )
      break;
    _InterlockedExchangeAdd(
      (volatile signed __int32 *)(*(_QWORD *)(v3 + 8LL * *((unsigned int *)a1 + 38) + 2992) + 272LL * v7 + 160),
      a2);
    v4 &= ~(1 << v7);
  }
}
