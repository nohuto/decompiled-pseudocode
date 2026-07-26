/*
 * XREFs of ?NetPacketClearVolatileFields@@YAXPEBU_NET_DATAPATH_DESCRIPTOR@@PEAU_NET_PACKET@@@Z @ 0x1C007D514
 * Callers:
 *     NetPacketReuseMany @ 0x1C007D640 (NetPacketReuseMany.c)
 *     NetPacketReuseOne @ 0x1C007D700 (NetPacketReuseOne.c)
 * Callees:
 *     <none>
 */

void __fastcall NetPacketClearVolatileFields(const struct _NET_DATAPATH_DESCRIPTOR *a1, struct _NET_PACKET *a2)
{
  unsigned int v2; // r8d
  UINT32 FragmentOffset; // eax
  PNET_RING_BUFFER v6; // r11
  int v7; // edx
  int v8; // r10d
  __int64 ElementStride; // rsi
  unsigned int v10; // r10d
  PNET_RING_BUFFER v11; // rdx
  UINT32 v12; // ecx
  unsigned __int64 v13; // rcx

  v2 = 0;
  *((_WORD *)&a2->Layout + 2) = 0;
  FragmentOffset = a2->FragmentOffset;
  if ( (a2->FragmentOffset & 0x80000000) != 0 )
  {
    v6 = a1[1].RingBuffer[0];
    v7 = FragmentOffset & 0x7FFFFFFF;
    v8 = 0;
    ElementStride = v6->ElementStride;
    if ( (v6->Buffer[ElementStride * (FragmentOffset & 0x7FFFFFFF & v6->ElementIndexMask)] & 1) == 0 )
    {
      do
      {
        ++v7;
        ++v8;
      }
      while ( (v6->Buffer[ElementStride * (v6->ElementIndexMask & v7)] & 1) == 0 );
    }
    v10 = v8 + 1;
    if ( v10 )
    {
      do
      {
        v11 = a1[1].RingBuffer[0];
        v12 = v2 + (a2->FragmentOffset & 0x7FFFFFFF);
        ++v2;
        v13 = v11->ElementStride * (unsigned __int64)(v11->ElementIndexMask & v12);
        *(_QWORD *)&v11->Buffer[v13 + 24] &= 0x3FFFFFFFFFFFFFFFuLL;
      }
      while ( v2 < v10 );
    }
  }
}
