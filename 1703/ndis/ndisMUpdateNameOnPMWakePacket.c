/*
 * XREFs of ndisMUpdateNameOnPMWakePacket @ 0x1C004B58C
 * Callers:
 *     ndisMValidatePMWakePacket @ 0x1C004B68C (ndisMValidatePMWakePacket.c)
 * Callees:
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_SqZ @ 0x1C004AA0C (WPP_SF_SqZ.c)
 *     WPP_SF_dqZ @ 0x1C004AAD0 (WPP_SF_dqZ_ea_1C004AAD0.c)
 *     WPP_SF_qZ @ 0x1C004AB78 (WPP_SF_qZ.c)
 *     ndisMValidatePMWakePacketForMagicPacket @ 0x1C004B768 (ndisMValidatePMWakePacketForMagicPacket.c)
 */

void __fastcall ndisMUpdateNameOnPMWakePacket(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *v6; // rdi
  void *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx

  *(_WORD *)(a2 + 12) = 0;
  if ( (unsigned __int8)ndisMValidatePMWakePacketForMagicPacket() )
  {
    if ( (unsigned __int8)byte_1C0092615 >= 4u )
      WPP_SF_qZ(0x80u, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, a1, *(const wchar_t **)(a1 + 3880));
  }
  else
  {
    v6 = *(__int64 **)(a1 + 968);
    if ( v6 )
    {
      while ( *((_DWORD *)v6 + 49) != *(_DWORD *)(a2 + 8) )
      {
        v6 = (__int64 *)*v6;
        if ( !v6 )
          goto LABEL_7;
      }
      *(_WORD *)(a2 + 12) = *((_WORD *)v6 + 32);
      v7 = (void *)(a2 + 14);
      memset(v7, 0, 0x80uLL);
      memcpy_s(v7, 0x7EuLL, (char *)v6 + 66, *((unsigned __int16 *)v6 + 32));
      if ( (unsigned __int8)byte_1C0092615 >= 4u )
        WPP_SF_SqZ(v9, v8, (const wchar_t *)v7, a1, *(_QWORD *)(a1 + 3880));
    }
    else
    {
LABEL_7:
      if ( (unsigned __int8)byte_1C0092615 >= 3u )
        WPP_SF_dqZ(v5, v4, *(_DWORD *)(a2 + 8), a1, *(_QWORD *)(a1 + 3880));
    }
  }
}
