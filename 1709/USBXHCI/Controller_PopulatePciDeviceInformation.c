/*
 * XREFs of Controller_PopulatePciDeviceInformation @ 0x1C005801C
 * Callers:
 *     Controller_RetrievePciData @ 0x1C0058670 (Controller_RetrievePciData.c)
 *     Controller_RetrieveUrsData @ 0x1C00588A8 (Controller_RetrieveUrsData.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0005320 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000E154 (WPP_RECORDER_SF_ddL.c)
 *     Controller_PopulateVIAFirmwareVersion @ 0x1C005826C (Controller_PopulateVIAFirmwareVersion.c)
 */

__int64 __fastcall Controller_PopulatePciDeviceInformation(
        __int64 a1,
        int a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        _QWORD *a5,
        unsigned __int16 *a6,
        __int64 a7,
        __int64 a8)
{
  int v10; // r14d
  int v11; // r15d
  __int64 result; // rax
  __int64 v14; // [rsp+28h] [rbp-30h]
  int v15; // [rsp+30h] [rbp-28h]
  __int64 v16; // [rsp+30h] [rbp-28h]
  int v17; // [rsp+38h] [rbp-20h]
  __int64 v18; // [rsp+38h] [rbp-20h]

  v10 = a4;
  v17 = a4;
  v11 = a3;
  v15 = a3;
  WPP_RECORDER_SF_ddd(a1, 4u, 4u, 0x7Fu, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, a2, v15, v17);
  LODWORD(v18) = *((unsigned __int8 *)a6 + 8);
  LODWORD(v16) = a6[1];
  LODWORD(v14) = *a6;
  WPP_RECORDER_SF_ddL(a1, 4u, 4u, 0x80u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v14, v16, v18);
  if ( *a6 == 4358 )
    Controller_PopulateVIAFirmwareVersion(a1, a5, a6, a8);
  *(_DWORD *)a7 = *a6;
  *(_DWORD *)(a7 + 4) = a6[1];
  *(_WORD *)(a7 + 8) = *((unsigned __int8 *)a6 + 8);
  *(_WORD *)(a7 + 24) = a6[22];
  *(_WORD *)(a7 + 26) = a6[23];
  *(_QWORD *)(a7 + 32) = a5[1];
  *(_QWORD *)(a7 + 40) = a5[6];
  result = a5[7];
  *(_QWORD *)(a7 + 48) = result;
  *(_DWORD *)(a7 + 12) = a2;
  *(_DWORD *)(a7 + 16) = v11;
  *(_DWORD *)(a7 + 20) = v10;
  return result;
}
