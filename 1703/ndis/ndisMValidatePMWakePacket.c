/*
 * XREFs of ndisMValidatePMWakePacket @ 0x1C004B68C
 * Callers:
 *     ndisMValidatePMWakeReason @ 0x1C004B844 (ndisMValidatePMWakeReason.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ndisMEvaluateMagicPacketWake @ 0x1C004B168 (ndisMEvaluateMagicPacketWake.c)
 *     ndisMUpdateNameOnPMWakePacket @ 0x1C004B58C (ndisMUpdateNameOnPMWakePacket.c)
 */

char __fastcall ndisMValidatePMWakePacket(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v4; // edx
  unsigned __int64 v6; // rbx
  unsigned __int16 v7; // ax
  __int64 v8; // rcx
  int v9; // eax
  unsigned __int16 v10; // cx

  v2 = *(_QWORD *)(a2 + 48);
  v4 = *(_DWORD *)(v2 + 16);
  if ( !v4 && !*(_DWORD *)(v2 + 12) )
    return 1;
  if ( v4 >= 0x9C )
  {
    v6 = v2 + *(unsigned int *)(v2 + 12);
    if ( *(_BYTE *)v6 == 0x80 && *(_BYTE *)(v6 + 1) == 1 && (v7 = *(_WORD *)(v6 + 2), v7 >= 0x9Cu) && v7 <= v4 )
    {
      if ( !*(_DWORD *)(v6 + 4) )
      {
        v8 = *(unsigned int *)(v6 + 152);
        if ( (v8 & 7) == 0 )
        {
          if ( (unsigned int)v8 <= v4 && v6 + v8 >= v6 )
          {
            v9 = *(_DWORD *)(v6 + 148);
            if ( v9 + (int)v8 >= (unsigned int)v8 && v9 + (int)v8 <= v4 )
            {
              ndisMUpdateNameOnPMWakePacket(a1, v6);
              ndisMEvaluateMagicPacketWake(a1);
              return 1;
            }
          }
          if ( (unsigned __int8)byte_1C0092615 >= 2u )
          {
            v10 = 139;
LABEL_20:
            WPP_SF_q(v10, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, a1);
          }
        }
      }
    }
    else if ( (unsigned __int8)byte_1C0092615 >= 2u )
    {
      v10 = 138;
      goto LABEL_20;
    }
  }
  return 0;
}
