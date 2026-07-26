/*
 * XREFs of ndisMUpdateNameOnPMWakePacket @ 0x1C004A42C
 * Callers:
 *     ndisMValidatePMWakePacket @ 0x1C004A570 (ndisMValidatePMWakePacket.c)
 * Callees:
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_SqZ @ 0x1C004987C (WPP_SF_SqZ.c)
 *     WPP_SF_dqZ @ 0x1C0049944 (WPP_SF_dqZ_ea_1C0049944.c)
 *     WPP_SF_qZ @ 0x1C00499F4 (WPP_SF_qZ.c)
 *     ndisMValidatePMWakePacketForMagicPacket @ 0x1C004A6A8 (ndisMValidatePMWakePacketForMagicPacket.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C007EA58 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall ndisMUpdateNameOnPMWakePacket(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *v6; // rdi

  *(_WORD *)(a2 + 12) = 0;
  if ( (unsigned __int8)ndisMValidatePMWakePacketForMagicPacket() )
  {
    if ( (unsigned __int8)byte_1C0099615 >= 4u )
      WPP_SF_qZ(0x80u, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, a1, *(const wchar_t **)(a1 + 3880));
    return;
  }
  v6 = *(__int64 **)(a1 + 968);
  if ( v6 )
  {
    while ( *((_DWORD *)v6 + 49) != *(_DWORD *)(a2 + 8) )
    {
      v6 = (__int64 *)*v6;
      if ( !v6 )
        goto LABEL_10;
    }
    *(_WORD *)(a2 + 12) = *((_WORD *)v6 + 32);
    memset((void *)(a2 + 14), 0, 0x80uLL);
    memcpy_s((void *)(a2 + 14), 0x7EuLL, (char *)v6 + 66, *((unsigned __int16 *)v6 + 32));
    v5 = *(_QWORD *)(a1 + 4488);
    if ( v5 )
      *(_DWORD *)(v5 + 1092) = *((_DWORD *)v6 + 10);
  }
LABEL_10:
  if ( *(_DWORD *)(a2 + 8) != 131073 )
  {
    if ( v6 )
      goto LABEL_14;
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  }
  if ( v6 )
  {
LABEL_14:
    if ( (unsigned __int8)byte_1C0099615 >= 4u )
      WPP_SF_SqZ(v5, v4, (const wchar_t *)(a2 + 14), a1, *(_QWORD *)(a1 + 3880));
    return;
  }
  if ( (unsigned __int8)byte_1C0099615 >= 3u )
    WPP_SF_dqZ(v5, v4, *(_DWORD *)(a2 + 8), a1, *(_QWORD *)(a1 + 3880));
}
