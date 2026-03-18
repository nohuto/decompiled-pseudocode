/*
 * XREFs of RIMHandleTTMDeviceArrival @ 0x1C0092B80
 * Callers:
 *     rimDoRimDevChange @ 0x1C0051F54 (rimDoRimDevChange.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C0050284 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_dqqdS @ 0x1C0092CB0 (WPP_RECORDER_SF_dqqdS.c)
 *     DbgPrintRIMAlways @ 0x1C00FF030 (DbgPrintRIMAlways.c)
 *     WPP_RECORDER_SF_qdSD @ 0x1C010D888 (WPP_RECORDER_SF_qdSD.c)
 */

__int64 __fastcall RIMHandleTTMDeviceArrival(__int64 a1)
{
  unsigned int v1; // esi
  NTSTATUS v3; // edi
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  unsigned __int8 v8; // al
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // [rsp+28h] [rbp-30h]
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int64 v14; // [rsp+30h] [rbp-28h]

  v1 = 0;
  if ( !gbUseTTM || *(_BYTE *)(a1 + 48) == 3 )
  {
    v3 = 0;
  }
  else
  {
    v3 = ObReferenceObjectByPointer(*(PVOID *)(a1 + 32), 3u, ExRawInputManagerObjectType, 0);
    if ( v3 >= 0 )
    {
      v8 = *(_BYTE *)(a1 + 48);
      if ( v8 != 3 )
      {
        v1 = RimDeviceTypeToRimInputType(a1, v8);
        if ( (*(_DWORD *)(a1 + 184) & 0x1000) != 0 )
          v1 |= 0x80000000;
      }
      v14 = a1;
      WPP_RECORDER_SF_dqqdS(WPP_GLOBAL_Control->DeviceExtension, v5, v6, v7);
      v3 = TtmNotifyDeviceArrival(2LL, a1, &gTTMDevCallbacks, v1);
      if ( v3 < 0 )
      {
        gbUseTTM = 0;
        if ( gbTtmEnabled )
        {
          WPP_RECORDER_SF_qdSD(
            WPP_GLOBAL_Control->DeviceExtension,
            v9,
            v10,
            v11,
            a1 + 208,
            a1,
            *(_BYTE *)(a1 + 48),
            *(_QWORD *)(a1 + 216),
            v3);
          DbgPrintRIMAlways("rimttm:TtmNotifyDeviceArrival FAILED for pRimDev=%p type=%d ustrName=%ws! Status=%08x\n");
          LODWORD(v13) = gbUseTTM;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x11u,
            0xCu,
            (__int64)&WPP_bde2c2312b7534929182a13e08e71911_Traceguids,
            v13);
        }
        ObfDereferenceObject(*(PVOID *)(a1 + 32));
      }
    }
  }
  LODWORD(v12) = v3;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0xDu,
    (__int64)&WPP_bde2c2312b7534929182a13e08e71911_Traceguids,
    v12,
    v14);
  return (unsigned int)v3;
}
