/*
 * XREFs of ndisMValidatePMWakePacket @ 0x1C004A570
 * Callers:
 *     ndisMValidatePMWakeReason @ 0x1C004A77C (ndisMValidatePMWakeReason.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     McTemplateK0jqb @ 0x1C0049528 (McTemplateK0jqb.c)
 *     ndisMEvaluateMagicPacketWake @ 0x1C0049FD8 (ndisMEvaluateMagicPacketWake.c)
 *     ndisMUpdateNameOnPMWakePacket @ 0x1C004A42C (ndisMUpdateNameOnPMWakePacket.c)
 */

bool __fastcall ndisMValidatePMWakePacket(const GUID *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v4; // edx
  unsigned __int64 v6; // rbx
  unsigned __int16 v7; // ax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int16 v12; // cx
  int v13; // [rsp+20h] [rbp-18h]

  v2 = *(_QWORD *)(a2 + 48);
  v4 = *(_DWORD *)(v2 + 16);
  if ( !v4 )
    return !*(_DWORD *)(v2 + 12);
  if ( v4 < 0x9C )
    return 0;
  v6 = v2 + *(unsigned int *)(v2 + 12);
  if ( *(_BYTE *)v6 != 0x80 || *(_BYTE *)(v6 + 1) != 1 || (v7 = *(_WORD *)(v6 + 2), v7 < 0x9Cu) || v7 > v4 )
  {
    if ( (unsigned __int8)byte_1C0099615 < 2u )
      return 0;
    v12 = 138;
LABEL_22:
    WPP_SF_q(v12, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, (__int64)a1);
    return 0;
  }
  if ( !*(_DWORD *)(v6 + 4) )
  {
    v8 = *(unsigned int *)(v6 + 152);
    if ( (v8 & 7) == 0 )
    {
      if ( (unsigned int)v8 <= v4 && v6 + v8 >= v6 )
      {
        v9 = *(_DWORD *)(v6 + 148);
        if ( (int)v8 + v9 >= (unsigned int)v8 && (int)v8 + v9 <= v4 )
        {
          ndisMUpdateNameOnPMWakePacket((__int64)a1, v6);
          ndisMEvaluateMagicPacketWake((__int64)a1);
          if ( *(_DWORD *)(v6 + 148) >= 0x80u && (dword_1C009AF04 & 0x2000) != 0 )
            McTemplateK0jqb(v11, v10, a1 + 252, (__int64)&a1[252], v13, v6 + *(unsigned int *)(v6 + 152));
          return 1;
        }
      }
      if ( (unsigned __int8)byte_1C0099615 >= 2u )
      {
        v12 = 139;
        goto LABEL_22;
      }
    }
  }
  return 0;
}
