/*
 * XREFs of ACPISystemPowerQueryDeviceCapabilities @ 0x1C008E730
 * Callers:
 *     ACPIInternalDeviceQueryCapabilities @ 0x1C008E200 (ACPIInternalDeviceQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C008EB70 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C009B220 (ACPIDockIrpQueryCapabilities.c)
 * Callees:
 *     ACPIInternalClearFlags @ 0x1C00020E4 (ACPIInternalClearFlags.c)
 *     ACPIInternalSetFlags @ 0x1C0002104 (ACPIInternalSetFlags.c)
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x1C0008EB0 (ACPISystemPowerUpdateDeviceCapabilities.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     _ACPIInternalError @ 0x1C0047D50 (_ACPIInternalError.c)
 *     ACPIInternalGetDeviceCapabilities @ 0x1C008DD8C (ACPIInternalGetDeviceCapabilities.c)
 */

__int64 __fastcall ACPISystemPowerQueryDeviceCapabilities(_QWORD *BugCheckParameter2, __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rax
  int v6; // edx
  void *v7; // rcx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int DeviceCapabilities; // ebp
  __m128i *v16; // rdx
  const char *v17; // rcx
  const char *v18; // r8
  const char *v19; // rcx
  const char *v20; // r10
  _DWORD v21[16]; // [rsp+50h] [rbp-68h] BYREF

  memset(v21, 0, sizeof(v21));
  v4 = BugCheckParameter2 + 1;
  v5 = BugCheckParameter2[1];
  if ( (v5 & 0x400000000000000LL) != 0 )
    goto LABEL_2;
  if ( (v5 & 0x60) == 0x40 )
  {
    v16 = (__m128i *)a2;
  }
  else
  {
    DeviceCapabilities = ACPIInternalGetDeviceCapabilities(*(PDEVICE_OBJECT *)(BugCheckParameter2[93] + 720LL), v21);
    if ( DeviceCapabilities < 0 )
    {
      v17 = byte_1C0066CD0;
      v18 = byte_1C0066CD0;
      if ( (*v4 & 0x200000000000LL) != 0 )
      {
        v17 = (const char *)BugCheckParameter2[70];
        if ( (*v4 & 0x400000000000LL) != 0 )
          v18 = (const char *)BugCheckParameter2[71];
      }
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xFu,
        0x12u,
        (__int64)&WPP_8b8c03efb04f38a3ba95add672d747f9_Traceguids,
        DeviceCapabilities,
        (char)BugCheckParameter2,
        v17,
        v18);
      return (unsigned int)DeviceCapabilities;
    }
    v16 = (__m128i *)v21;
  }
  DeviceCapabilities = ACPISystemPowerUpdateDeviceCapabilities((ULONG_PTR)BugCheckParameter2, v16, a2);
  if ( DeviceCapabilities < 0 )
  {
    v19 = byte_1C0066CD0;
    v20 = byte_1C0066CD0;
    if ( (*v4 & 0x200000000000LL) != 0 )
    {
      v19 = (const char *)BugCheckParameter2[70];
      if ( (*v4 & 0x400000000000LL) != 0 )
        v20 = (const char *)BugCheckParameter2[71];
    }
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xFu,
      0x13u,
      (__int64)&WPP_8b8c03efb04f38a3ba95add672d747f9_Traceguids,
      DeviceCapabilities,
      (char)BugCheckParameter2,
      v19,
      v20);
    if ( (*(_BYTE *)v4 & 0x20) != 0 )
      ACPIInternalError(0xB043DuLL);
    return (unsigned int)DeviceCapabilities;
  }
  ACPIInternalSetFlags(BugCheckParameter2 + 1, 0x400000000000000uLL);
LABEL_2:
  v6 = *(_DWORD *)(a2 + 4);
  v7 = BugCheckParameter2 + 119;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)((char *)BugCheckParameter2 + 460);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)((char *)BugCheckParameter2 + 476);
  *(_DWORD *)(a2 + 40) = *((_DWORD *)BugCheckParameter2 + 121);
  *(_DWORD *)(a2 + 44) = *((_DWORD *)BugCheckParameter2 + 122);
  *(_DWORD *)(a2 + 48) = *((_DWORD *)BugCheckParameter2 + 123);
  v8 = *(_DWORD *)(a2 + 4) ^ (*((_DWORD *)BugCheckParameter2 + 138) ^ v6) & 1;
  *(_DWORD *)(a2 + 4) = v8;
  v9 = ((unsigned __int8)v8 ^ (unsigned __int8)*((_DWORD *)BugCheckParameter2 + 138)) & 2 ^ v8;
  *(_DWORD *)(a2 + 4) = v9;
  v10 = ((unsigned __int16)v9 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)BugCheckParameter2 + 138) << 8)) & 0x400 ^ v9;
  *(_DWORD *)(a2 + 4) = v10;
  v11 = ((unsigned __int16)v10 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)BugCheckParameter2 + 138) << 8)) & 0x800 ^ v10;
  *(_DWORD *)(a2 + 4) = v11;
  v12 = ((unsigned __int16)v11 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)BugCheckParameter2 + 138) << 8)) & 0x1000 ^ v11;
  *(_DWORD *)(a2 + 4) = v12;
  v13 = ((unsigned __int16)v12 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)BugCheckParameter2 + 138) << 8)) & 0x2000 ^ v12;
  *(_DWORD *)(a2 + 4) = v13;
  if ( (BugCheckParameter2[119] & 0x100000000LL) != 0 )
  {
    if ( (v13 & 0x80000) != 0 )
      ACPIInternalClearFlags(v7, 0x100000LL);
    else
      ACPIInternalSetFlags(v7, 0x100000uLL);
  }
  return 0LL;
}
