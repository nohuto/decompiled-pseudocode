/*
 * XREFs of ACPISystemPowerQueryDeviceCapabilities @ 0x1C0088B20
 * Callers:
 *     ACPIDockIrpQueryCapabilities @ 0x1C0073030 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C00758E0 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIInternalDeviceQueryCapabilities @ 0x1C007C980 (ACPIInternalDeviceQueryCapabilities.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     _ACPIInternalError @ 0x1C0017A64 (_ACPIInternalError.c)
 *     ACPIInternalClearFlags @ 0x1C0029B08 (ACPIInternalClearFlags.c)
 *     ACPIInternalSetFlags @ 0x1C002A604 (ACPIInternalSetFlags.c)
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x1C003A1F0 (ACPISystemPowerUpdateDeviceCapabilities.c)
 *     ACPIInternalGetDeviceCapabilities @ 0x1C007D7F0 (ACPIInternalGetDeviceCapabilities.c)
 */

__int64 __fastcall ACPISystemPowerQueryDeviceCapabilities(_QWORD *BugCheckParameter2, __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rax
  __m128i *v6; // rdx
  int DeviceCapabilities; // ebp
  const char *v8; // rcx
  const char *v9; // r8
  const char *v11; // rcx
  const char *v12; // r10
  int v13; // edx
  void *v14; // rcx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  _DWORD v21[16]; // [rsp+50h] [rbp-68h] BYREF

  memset(v21, 0, sizeof(v21));
  v4 = BugCheckParameter2 + 1;
  v5 = BugCheckParameter2[1];
  if ( (v5 & 0x400000000000000LL) == 0 )
  {
    if ( (v5 & 0x60) == 0x40 )
    {
      v6 = (__m128i *)a2;
    }
    else
    {
      DeviceCapabilities = ACPIInternalGetDeviceCapabilities(*(PDEVICE_OBJECT *)(BugCheckParameter2[93] + 720LL), v21);
      if ( DeviceCapabilities < 0 )
      {
        v8 = byte_1C005B1F0;
        v9 = byte_1C005B1F0;
        if ( (*v4 & 0x200000000000LL) != 0 )
        {
          v8 = (const char *)BugCheckParameter2[70];
          if ( (*v4 & 0x400000000000LL) != 0 )
            v9 = (const char *)BugCheckParameter2[71];
        }
        WPP_RECORDER_SF_Dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xFu,
          0x12u,
          (__int64)&WPP_a6d1c3eb229d327e9216ca93c2afdfed_Traceguids,
          DeviceCapabilities,
          (char)BugCheckParameter2,
          v8,
          v9);
        return (unsigned int)DeviceCapabilities;
      }
      v6 = (__m128i *)v21;
    }
    DeviceCapabilities = ACPISystemPowerUpdateDeviceCapabilities((ULONG_PTR)BugCheckParameter2, v6, a2);
    if ( DeviceCapabilities < 0 )
    {
      v11 = byte_1C005B1F0;
      v12 = byte_1C005B1F0;
      if ( (*v4 & 0x200000000000LL) != 0 )
      {
        v11 = (const char *)BugCheckParameter2[70];
        if ( (*v4 & 0x400000000000LL) != 0 )
          v12 = (const char *)BugCheckParameter2[71];
      }
      WPP_RECORDER_SF_Dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xFu,
        0x13u,
        (__int64)&WPP_a6d1c3eb229d327e9216ca93c2afdfed_Traceguids,
        DeviceCapabilities,
        (char)BugCheckParameter2,
        v11,
        v12);
      if ( (*(_BYTE *)v4 & 0x20) != 0 )
        ACPIInternalError(0xB043DuLL);
      return (unsigned int)DeviceCapabilities;
    }
    ACPIInternalSetFlags(BugCheckParameter2 + 1, 0x400000000000000uLL);
  }
  v13 = *(_DWORD *)(a2 + 4);
  v14 = BugCheckParameter2 + 119;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)((char *)BugCheckParameter2 + 460);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)((char *)BugCheckParameter2 + 476);
  *(_DWORD *)(a2 + 40) = *((_DWORD *)BugCheckParameter2 + 121);
  *(_DWORD *)(a2 + 44) = *((_DWORD *)BugCheckParameter2 + 122);
  *(_DWORD *)(a2 + 48) = *((_DWORD *)BugCheckParameter2 + 123);
  v15 = *(_DWORD *)(a2 + 4) ^ (*((_DWORD *)BugCheckParameter2 + 138) ^ v13) & 1;
  *(_DWORD *)(a2 + 4) = v15;
  v16 = ((unsigned __int8)v15 ^ (unsigned __int8)*((_DWORD *)BugCheckParameter2 + 138)) & 2 ^ v15;
  *(_DWORD *)(a2 + 4) = v16;
  v17 = ((unsigned __int16)v16 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)BugCheckParameter2 + 138) << 8)) & 0x400 ^ v16;
  *(_DWORD *)(a2 + 4) = v17;
  v18 = ((unsigned __int16)v17 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)BugCheckParameter2 + 138) << 8)) & 0x800 ^ v17;
  *(_DWORD *)(a2 + 4) = v18;
  v19 = ((unsigned __int16)v18 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)BugCheckParameter2 + 138) << 8)) & 0x1000 ^ v18;
  *(_DWORD *)(a2 + 4) = v19;
  v20 = ((unsigned __int16)v19 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)BugCheckParameter2 + 138) << 8)) & 0x2000 ^ v19;
  *(_DWORD *)(a2 + 4) = v20;
  if ( (BugCheckParameter2[119] & 0x100000000LL) != 0 )
  {
    if ( (v20 & 0x80000) != 0 )
      ACPIInternalClearFlags(v14, 0x100000LL);
    else
      ACPIInternalSetFlags(v14, 0x100000uLL);
  }
  return 0LL;
}
