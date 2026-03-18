/*
 * XREFs of ACPISystemPowerUpdateWakeCapabilitiesForPDOs @ 0x1C0020DA8
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilities @ 0x1C00901E0 (ACPISystemPowerUpdateWakeCapabilities.c)
 * Callees:
 *     ACPISystemPowerDetermineSupportedDeviceWakeState @ 0x1C0028454 (ACPISystemPowerDetermineSupportedDeviceWakeState.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     AcpiGetIdleWakeInfo @ 0x1C008CA30 (AcpiGetIdleWakeInfo.c)
 *     ACPISystemPowerGetDeviceWake @ 0x1C0094A00 (ACPISystemPowerGetDeviceWake.c)
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
  KIRQL v15; // al
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // r14d
  KIRQL v20; // r9
  int v21; // eax
  int IdleWakeInfo; // eax
  __int64 v23; // rax
  unsigned int v24; // [rsp+20h] [rbp-68h] BYREF
  __int64 v25; // [rsp+28h] [rbp-60h]
  unsigned __int128 v26; // [rsp+30h] [rbp-58h]
  __m128i si128; // [rsp+40h] [rbp-48h]
  int v28; // [rsp+50h] [rbp-38h]
  int v29; // [rsp+54h] [rbp-34h]

  v9 = 0;
  v10 = 0;
  v26 = __PAIR128__(a7, a6);
  v11 = 0;
  v12 = 0;
  v13 = *(_DWORD *)(a1 + 8);
  v25 = a4;
  if ( (*(_QWORD *)&v13 & 0x10000LL) == 0 )
    goto LABEL_2;
  v15 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v12 = *(_DWORD *)(a1 + 488);
  LOBYTE(v16) = v15;
  v19 = ACPISystemPowerDetermineSupportedDeviceWakeState(a1, v17, v18, v16);
  KeReleaseSpinLock(&AcpiPowerLock, v20);
  if ( !v12 )
  {
    v23 = *(_QWORD *)(a1 + 952);
    if ( (v23 & 0x400000000LL) != 0 )
    {
      if ( (AcpiSupportedSystemStates & 0x20) != 0 )
        v12 = 5;
      else
        v12 = (AcpiSupportedSystemStates & 0x10) != 0 ? 4 : 1;
    }
    else
    {
      v12 = (v23 & 0x100000000LL) != 0;
    }
  }
  v21 = AcpiSupportedSystemStates;
  if ( !_bittest(&v21, v12) )
  {
    v11 = 0;
    v12 = 0;
    goto LABEL_2;
  }
  if ( v19 )
  {
    v9 = 1;
    *a5 = 1 << v19;
    v10 = v19;
  }
  IdleWakeInfo = AcpiGetIdleWakeInfo(a1, v12, &v24);
  if ( IdleWakeInfo == -1073741275 )
    IdleWakeInfo = ACPISystemPowerGetDeviceWake(a1, &v24);
  if ( IdleWakeInfo >= 0 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v28 = 4;
    v29 = 4;
    if ( v24 > 5 )
      v10 = 0;
    else
      v10 = si128.m128i_i32[v24];
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
  v11 = *(_DWORD *)(v25 + 4LL * (int)v12);
  if ( !v11 )
  {
    v11 = 4;
    goto LABEL_31;
  }
LABEL_19:
  *a5 = 1 << v11;
LABEL_3:
  if ( (_QWORD)v26 )
    *(_DWORD *)v26 = v12;
  if ( *((_QWORD *)&v26 + 1) )
    **((_DWORD **)&v26 + 1) = v11;
  if ( a8 )
    *a8 = v10;
  return 0LL;
}
