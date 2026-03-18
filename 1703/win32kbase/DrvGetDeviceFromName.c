/*
 * XREFs of DrvGetDeviceFromName @ 0x1C00620F0
 * Callers:
 *     DrvEnumDisplayDevices @ 0x1C0041380 (DrvEnumDisplayDevices.c)
 *     DrvChangeDisplaySettings @ 0x1C00563A0 (DrvChangeDisplaySettings.c)
 *     DrvEnumDisplaySettings @ 0x1C0061B40 (DrvEnumDisplaySettings.c)
 *     DrvGetHDEV @ 0x1C0062010 (DrvGetHDEV.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C0083428 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName @ 0x1C00F1690 (NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F5340 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GE.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00F6ED4 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 *     DrvSetPruneFlag @ 0x1C00FA440 (DrvSetPruneFlag.c)
 *     DrvSetVideoParameters @ 0x1C00FA574 (DrvSetVideoParameters.c)
 * Callees:
 *     <none>
 */

wchar_t *__fastcall DrvGetDeviceFromName(UNICODE_STRING *a1, int a2)
{
  PWSTR Buffer; // r8
  wchar_t *i; // rbx
  USHORT Length; // ax
  unsigned __int64 v5; // rcx
  UNICODE_STRING String1; // [rsp+28h] [rbp-30h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF

  Buffer = 0LL;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  if ( a2 == 1 )
  {
    Length = 0;
    String1.Length = 0;
    if ( a1 )
    {
      String1 = *a1;
      Buffer = String1.Buffer;
      Length = String1.Length;
    }
    if ( Length )
    {
      v5 = (unsigned __int64)Buffer + Length;
      if ( v5 > (unsigned __int64)W32UserProbeAddress || v5 < (unsigned __int64)Buffer )
        *(_BYTE *)W32UserProbeAddress = 0;
    }
  }
  else
  {
    String1 = *a1;
  }
  for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
  {
    RtlInitUnicodeString(&DestinationString, i + 32);
    if ( RtlEqualUnicodeString(&String1, &DestinationString, 1u) )
      break;
  }
  return i;
}
