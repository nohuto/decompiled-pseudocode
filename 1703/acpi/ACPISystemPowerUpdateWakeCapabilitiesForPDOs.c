/*
 * XREFs of ACPISystemPowerUpdateWakeCapabilitiesForPDOs @ 0x1C0009204
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilities @ 0x1C008E1BC (ACPISystemPowerUpdateWakeCapabilities.c)
 * Callees:
 *     ACPISystemPowerDetermineSupportedDeviceWakeState @ 0x1C0006C1C (ACPISystemPowerDetermineSupportedDeviceWakeState.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     ACPISystemPowerGetDeviceWake @ 0x1C008C3DC (ACPISystemPowerGetDeviceWake.c)
 *     AcpiGetIdleWakeInfo @ 0x1C008C830 (AcpiGetIdleWakeInfo.c)
 */

__int64 __fastcall ACPISystemPowerUpdateWakeCapabilitiesForPDOs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        int *a8)
{
  char v9; // r15
  int v10; // esi
  int v11; // ecx
  unsigned int v12; // ebx
  int v13; // eax
  int v15; // r14d
  KIRQL v16; // r9
  int v17; // ecx
  int IdleWakeInfo; // eax
  __int64 v19; // rax
  unsigned int v20; // [rsp+20h] [rbp-68h] BYREF
  __int64 v21; // [rsp+28h] [rbp-60h]
  unsigned __int128 v22; // [rsp+30h] [rbp-58h]
  __m128i si128; // [rsp+40h] [rbp-48h]
  int v24; // [rsp+50h] [rbp-38h]
  int v25; // [rsp+54h] [rbp-34h]

  v9 = 0;
  v10 = 0;
  v22 = __PAIR128__(a7, a6);
  v11 = 0;
  v12 = 0;
  v13 = *(_DWORD *)(a1 + 8);
  v21 = a4;
  if ( (*(_QWORD *)&v13 & 0x10000LL) == 0 )
    goto LABEL_2;
  KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v12 = *(_DWORD *)(a1 + 488);
  v15 = ACPISystemPowerDetermineSupportedDeviceWakeState(a1);
  KeReleaseSpinLock(&AcpiPowerLock, v16);
  v17 = AcpiSupportedSystemStates;
  if ( !v12 )
  {
    v19 = *(_QWORD *)(a1 + 952);
    if ( (v19 & 0x400000000LL) != 0 )
    {
      if ( (AcpiSupportedSystemStates & 0x20) != 0 )
        v12 = 5;
      else
        v12 = (AcpiSupportedSystemStates & 0x10) != 0 ? 4 : 1;
    }
    else
    {
      v12 = (v19 & 0x100000000LL) != 0;
    }
  }
  if ( !_bittest(&v17, v12) )
  {
    v11 = 0;
    v12 = 0;
    goto LABEL_2;
  }
  if ( v15 )
  {
    v9 = 1;
    *a5 = 1 << v15;
    v10 = v15;
  }
  IdleWakeInfo = AcpiGetIdleWakeInfo(a1, v12, &v20);
  if ( IdleWakeInfo == -1073741275 )
    IdleWakeInfo = ACPISystemPowerGetDeviceWake(a1, &v20);
  if ( IdleWakeInfo >= 0 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v24 = 4;
    v25 = 4;
    if ( v20 > 5 )
      v10 = 0;
    else
      v10 = si128.m128i_i32[v20];
    v9 = 1;
  }
  v11 = v10;
  if ( v9 )
  {
LABEL_31:
    if ( v11 )
      goto LABEL_19;
LABEL_2:
    *a5 = 0;
    goto LABEL_3;
  }
  v11 = *(_DWORD *)(v21 + 4LL * (int)v12);
  if ( !v11 )
  {
    v11 = 4;
    goto LABEL_31;
  }
LABEL_19:
  *a5 = 1 << v11;
LABEL_3:
  if ( (_QWORD)v22 )
    *(_DWORD *)v22 = v12;
  if ( *((_QWORD *)&v22 + 1) )
    **((_DWORD **)&v22 + 1) = v11;
  if ( a8 )
    *a8 = v10;
  return 0LL;
}
