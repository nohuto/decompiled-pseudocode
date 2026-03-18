/*
 * XREFs of HUBREG_UpdateUxdSettings @ 0x1C0071A60
 * Callers:
 *     HUBFDO_IoctlCyclePort @ 0x1C006973C (HUBFDO_IoctlCyclePort.c)
 *     HUBPDO_AssignPDOIds @ 0x1C006B4FC (HUBPDO_AssignPDOIds.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00391C0 (memset.c)
 *     HUBREG_QueryGlobalUxdSettings @ 0x1C0071220 (HUBREG_QueryGlobalUxdSettings.c)
 *     HUBREG_QueryUxdPortKey @ 0x1C0071564 (HUBREG_QueryUxdPortKey.c)
 *     HUBREG_QueryUxdDeviceKey @ 0x1C007179C (HUBREG_QueryUxdDeviceKey.c)
 */

__int64 __fastcall HUBREG_UpdateUxdSettings(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  WDFDRIVER__ *Driver; // rdx
  __int128 v9; // xmm0
  __int64 (__fastcall *v10)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *); // rax
  __int128 v11; // xmm1
  __int64 v12; // rsi
  int v13; // eax
  __int128 v14; // xmm1
  int v15; // eax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  _OWORD Source1[5]; // [rsp+20h] [rbp-79h] BYREF
  _OWORD Source2[5]; // [rsp+70h] [rbp-29h] BYREF

  memset(Source1, 0, 0x44uLL);
  memset(Source2, 0, 0x44uLL);
  if ( a3 )
    *a3 = 0;
  _InterlockedAnd((volatile signed __int32 *)(a2 + 1632), 0xFFFFFFFE);
  v6 = *(_OWORD *)(a2 + 1664);
  v7 = *(_OWORD *)(a2 + 1680);
  LODWORD(Source2[4]) = *(_DWORD *)(a2 + 1728);
  Driver = WdfDriverGlobals->Driver;
  Source2[0] = v6;
  v9 = *(_OWORD *)(a2 + 1696);
  v10 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616);
  Source2[1] = v7;
  v11 = *(_OWORD *)(a2 + 1712);
  Source2[2] = v9;
  Source2[3] = v11;
  v12 = v10(WdfDriverGlobals, Driver, off_1C005B110);
  if ( (int)HUBREG_QueryGlobalUxdSettings(v12) >= 0 )
  {
    v13 = *(_DWORD *)(v12 + 4);
    if ( (v13 & 0x800) != 0 && (v13 & 0x10) == 0 )
    {
      if ( (int)HUBREG_QueryUxdPortKey(a1, *(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 200LL), Source1) >= 0
        || (memset(Source1, 0, 0x44uLL), (int)HUBREG_QueryUxdDeviceKey(a2, (__int64)Source1) >= 0) )
      {
        _InterlockedOr((volatile signed __int32 *)(a2 + 1632), 1u);
        _InterlockedOr((volatile signed __int32 *)(a2 + 1640), 4u);
      }
      v14 = Source1[1];
      v15 = Source1[4];
      *(_OWORD *)(a2 + 1664) = Source1[0];
      v16 = Source1[2];
      *(_OWORD *)(a2 + 1680) = v14;
      v17 = Source1[3];
      *(_OWORD *)(a2 + 1696) = v16;
      *(_OWORD *)(a2 + 1712) = v17;
      *(_DWORD *)(a2 + 1728) = v15;
      if ( a3 && RtlCompareMemory(Source1, Source2, 0x44uLL) != 68 && (*(_DWORD *)(a2 + 1632) & 2) == 0 )
        *a3 = 1;
    }
  }
  return 0LL;
}
