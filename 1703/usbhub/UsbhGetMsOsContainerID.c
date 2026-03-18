/*
 * XREFs of UsbhGetMsOsContainerID @ 0x1C003F4EC
 * Callers:
 *     UsbhSetupDevice @ 0x1C0021D38 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 *     UsbhGetMsOsFeatureDescriptor @ 0x1C003FA04 (UsbhGetMsOsFeatureDescriptor.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

__int64 __fastcall UsbhGetMsOsContainerID(int a1, __int64 a2)
{
  int v3; // esi
  _DWORD *v4; // rbx
  int v5; // r8d
  int v6; // r8d
  unsigned int MsOsFeatureDescriptor; // r14d
  const WCHAR *v8; // rdx
  unsigned int v10; // esi
  const WCHAR *v11; // rdx
  __int64 v12; // rax
  __int128 v13; // xmm0
  int v14; // [rsp+48h] [rbp-38h]
  int ValueData; // [rsp+50h] [rbp-30h] BYREF
  int v16[2]; // [rsp+58h] [rbp-28h] BYREF
  __int128 v17; // [rsp+60h] [rbp-20h]

  ValueData = 0;
  v3 = a2;
  v4 = PdoExt(a2);
  if ( (v4[356] & 0x8400) != 0x400 )
    return 0LL;
  *(_QWORD *)v16 = 0LL;
  v17 = 0uLL;
  MsOsFeatureDescriptor = UsbhGetMsOsFeatureDescriptor(v3, 0, v5, 6, (__int64)v16, 8, (__int64)&ValueData);
  if ( (MsOsFeatureDescriptor & 0xC0000000) == 0xC0000000 )
  {
    v8 = (const WCHAR *)*((_QWORD *)v4 + 142);
    if ( v8 )
    {
      ValueData = 1;
      RtlWriteRegistryValue(2u, v8, L"SkipContainerIdQuery", 3u, &ValueData, 4u);
      v4[356] |= 0x8000u;
    }
    return MsOsFeatureDescriptor;
  }
  if ( !ValueData )
    return 0LL;
  if ( ValueData != 8 || *(_QWORD *)v16 != 0x6010000000018LL )
  {
    LOBYTE(v14) = 0;
    UsbhException(a1, *((unsigned __int16 *)v4 + 710), 135, (int)v16, 24, 0, 0, usbfile_msos_c, 753, v14);
    return 3221225659LL;
  }
  v10 = UsbhGetMsOsFeatureDescriptor(v3, 0, v6, 6, (__int64)v16, 24, (__int64)&ValueData);
  if ( (v10 & 0xC0000000) != 0xC0000000 )
  {
    if ( ValueData != 24 )
    {
      LOBYTE(v14) = 0;
      UsbhException(a1, *((unsigned __int16 *)v4 + 710), 135, (int)v16, 24, 0, 0, usbfile_msos_c, 787, v14);
      return 3221225659LL;
    }
    v12 = v17 - *(_QWORD *)&GUID_NULL.Data1;
    if ( (_QWORD)v17 == *(_QWORD *)&GUID_NULL.Data1 )
      v12 = *((_QWORD *)&v17 + 1) - *(_QWORD *)GUID_NULL.Data4;
    if ( !v12 )
    {
      LOBYTE(v14) = 0;
      UsbhException(a1, *((unsigned __int16 *)v4 + 710), 135, (int)v16, 24, 0, 0, usbfile_msos_c, 796, v14);
      return 3221225659LL;
    }
    v13 = v17;
    *((_BYTE *)v4 + 2708) = 1;
    *(_OWORD *)(v4 + 673) = v13;
    return 0LL;
  }
  v11 = (const WCHAR *)*((_QWORD *)v4 + 142);
  if ( v11 )
  {
    ValueData = 1;
    RtlWriteRegistryValue(2u, v11, L"SkipContainerIdQuery", 3u, &ValueData, 4u);
    v4[356] |= 0x8000u;
    LOBYTE(v14) = 0;
    UsbhException(a1, *((unsigned __int16 *)v4 + 710), 135, (int)v16, 24, v10, 0, usbfile_msos_c, 780, v14);
  }
  return v10;
}
