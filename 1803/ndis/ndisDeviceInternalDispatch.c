/*
 * XREFs of ndisDeviceInternalDispatch @ 0x1C00658FC
 * Callers:
 *     NdisWdfDeviceInternalControlIrpHandler @ 0x1C0062340 (NdisWdfDeviceInternalControlIrpHandler.c)
 *     ndisDeviceInternalIrpDispatch @ 0x1C00659E0 (ndisDeviceInternalIrpDispatch.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     ndisDereferencePackage @ 0x1C00ADAEC (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 *     ndisDummyHandler @ 0x1C00E81CC (ndisDummyHandler.c)
 */

__int64 __fastcall ndisDeviceInternalDispatch(__int64 a1, char *a2, _IRP *a3)
{
  unsigned int v3; // edi
  _DEVICE_OBJECT *v5; // rsi
  char v8; // r15

  v3 = 0;
  v5 = 0LL;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x37u, &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids, a1, a3);
  ndisReferencePackage(&ndisPkgs);
  v8 = *a2;
  if ( *a2 == 17 )
    v5 = (_DEVICE_OBJECT *)*((_QWORD *)a2 + 483);
  else
    v3 = ndisDummyHandler(a1, a2, a3);
  if ( v8 == 17 && v5 )
  {
    ++a3->CurrentLocation;
    ++a3->Tail.Overlay.CurrentStackLocation;
    v3 = IofCallDriver(v5, a3);
  }
  ndisDereferencePackage(&ndisPkgs);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x38u, &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids, a1, a3);
  return v3;
}
