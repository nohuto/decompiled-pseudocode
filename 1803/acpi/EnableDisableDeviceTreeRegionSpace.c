/*
 * XREFs of EnableDisableDeviceTreeRegionSpace @ 0x1C0035BDC
 * Callers:
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C0035BDC (EnableDisableDeviceTreeRegionSpace.c)
 *     RegisterOperationRegionHandler @ 0x1C0080D54 (RegisterOperationRegionHandler.c)
 *     UnRegisterOperationRegionHandler @ 0x1C0080FE0 (UnRegisterOperationRegionHandler.c)
 * Callees:
 *     ACPIExtListEnumNext @ 0x1C0023590 (ACPIExtListEnumNext.c)
 *     ACPIExtListStartEnum @ 0x1C002367C (ACPIExtListStartEnum.c)
 *     ACPIExtListTestElement @ 0x1C00236D0 (ACPIExtListTestElement.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C0035B40 (EnableDisableDeviceRegionSpace.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C0035BDC (EnableDisableDeviceTreeRegionSpace.c)
 *     WPP_RECORDER_SF_sdqD @ 0x1C0036160 (WPP_RECORDER_SF_sdqD.c)
 */

__int64 __fastcall EnableDisableDeviceTreeRegionSpace(__int64 a1, unsigned int a2, char a3)
{
  int v6; // edx
  int v7; // r8d
  char *i; // rax
  char *v9; // rbx
  __int64 v10; // r8
  _QWORD v12[6]; // [rsp+50h] [rbp-48h] BYREF
  int v13; // [rsp+80h] [rbp-18h]

  if ( *(_DWORD *)(a1 + 320) == 3 )
  {
    if ( a2 < 0x1F )
      v6 = 1 << a2;
    else
      v6 = 0x80000000;
    if ( (v6 & *(_DWORD *)(a1 + 620)) != 0 && (int)EnableDisableDeviceRegionSpace(a1, a2, a3) < 0 )
      WPP_RECORDER_SF_sdqD(WPP_GLOBAL_Control->DeviceExtension, (unsigned int)"disable", v7, 14);
    v12[1] = 0LL;
    v12[0] = a1 + 752;
    v12[5] = 768LL;
    v12[2] = &AcpiDeviceTreeLock;
    v13 = 1;
    for ( i = ACPIExtListStartEnum((__int64)v12); ; i = ACPIExtListEnumNext((__int64)v12) )
    {
      v9 = i;
      if ( !ACPIExtListTestElement((__int64)v12, 1) )
        break;
      LOBYTE(v10) = a3;
      EnableDisableDeviceTreeRegionSpace(v9, a2, v10);
    }
  }
  return 0LL;
}
