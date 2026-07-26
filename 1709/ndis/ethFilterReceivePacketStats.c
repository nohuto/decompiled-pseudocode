/*
 * XREFs of ethFilterReceivePacketStats @ 0x1C0064160
 * Callers:
 *     EthFilterDprIndicateReceive @ 0x1C0062F20 (EthFilterDprIndicateReceive.c)
 *     ethFilterDprIndicateReceivePacket @ 0x1C0063580 (ethFilterDprIndicateReceivePacket.c)
 * Callees:
 *     <none>
 */

void __fastcall ethFilterReceivePacketStats(__int64 a1, _BYTE *a2, unsigned int a3)
{
  _QWORD *v3; // rax

  if ( *(_BYTE *)(a1 + 32) < 6u && !*(_BYTE *)(a1 + 1993) )
  {
    v3 = (_QWORD *)(*(_QWORD *)(a1 + 3160) + 112LL * KeGetPcr()->Prcb.Number);
    *v3 += a3;
    if ( !*(_DWORD *)(a1 + 464) )
    {
      if ( *a2 == 0xFF && a2[1] == 0xFF && a2[2] == 0xFF && a2[3] == 0xFF && a2[4] == 0xFF && a2[5] == 0xFF )
      {
        ++v3[6];
        v3[2] += a3;
      }
      else if ( (*a2 & 1) != 0 )
      {
        ++v3[5];
        v3[3] += a3;
      }
      else
      {
        ++v3[4];
        v3[1] += a3;
      }
    }
  }
}
