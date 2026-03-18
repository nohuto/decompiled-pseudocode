/*
 * XREFs of ACPIBuildProcessDevicePhasePsc @ 0x1C000E360
 * Callers:
 *     <none>
 * Callees:
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     ACPIBuildCompleteCommon @ 0x1C0009C00 (ACPIBuildCompleteCommon.c)
 *     WPP_RECORDER_SF_DDqss @ 0x1C0012480 (WPP_RECORDER_SF_DDqss.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIDeviceInternalDelayedDeviceRequest @ 0x1C001A8AC (ACPIDeviceInternalDelayedDeviceRequest.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePsc(__int64 a1)
{
  ULONG_PTR v1; // rbx
  int v2; // edi
  int *v3; // r12
  void *v4; // r15
  __int64 v5; // r13
  int v6; // r14d
  __int64 **v7; // rcx
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rax
  void *v11; // r8
  void *v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // edi
  ULONG_PTR v15; // r9
  unsigned __int16 v16; // ax
  unsigned __int64 v17; // rax
  int v18; // edi
  __int64 v19; // rcx
  int v20; // edx
  void *v21; // rax
  signed __int32 v22; // edx

  v1 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 32;
  *(_QWORD *)(v1 + 440) = AMLIGetNamedChild(*(_QWORD **)(v1 + 712), 861098079);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v2 = 2;
  v3 = (int *)(v1 + 468);
  v4 = &unk_1C005B1F0;
  v5 = 4LL;
  do
  {
    v6 = 1;
    v7 = (__int64 **)(v1 + 368);
    v8 = 1LL;
    while ( 1 )
    {
      v9 = *v7;
      if ( *v7 )
      {
        do
        {
          if ( *((_DWORD *)v9 + 4) < v2 )
            break;
          v9 = (__int64 *)*v9;
        }
        while ( v9 );
        if ( !v9 )
          break;
      }
      ++v6;
      ++v8;
      ++v7;
      if ( v8 > 3 )
        goto LABEL_13;
    }
    v10 = *(_QWORD *)(v1 + 8);
    v11 = &unk_1C005B1F0;
    v12 = &unk_1C005B1F0;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v11 = *(void **)(v1 + 560);
      if ( (v10 & 0x400000000000LL) != 0 )
        v12 = *(void **)(v1 + 568);
    }
    WPP_RECORDER_SF_DDqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v12,
      6,
      45,
      (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
      v6 - 1,
      v2 - 1,
      v1,
      (__int64)v11,
      (__int64)v12);
    *v3 = v6;
LABEL_13:
    ++v2;
    ++v3;
    --v5;
  }
  while ( v5 );
  *(_DWORD *)(v1 + 492) = *(_DWORD *)(v1 + 4LL * *(int *)(v1 + 488) + 460);
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  v13 = *(_QWORD *)(v1 + 8);
  v14 = 1;
  if ( (v13 & 0x80000000) != 0 )
  {
    v14 = 4;
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 56);
    if ( v15 && *(int *)(a1 + 48) >= 0 )
    {
      if ( (v13 & 0x80000) != 0 )
      {
        dword_1C00677B8 = 0;
        pszDest = 0;
        FreeDataBuffs(a1 + 80, 1u);
        *(_DWORD *)(v1 + 336) = 1;
      }
      else
      {
        v16 = *(_WORD *)(a1 + 82);
        if ( v16 != 1 )
          KeBugCheckEx(0xA5u, 8uLL, v1, v15, v16);
        v17 = *(_QWORD *)(a1 + 96);
        if ( v17 < 4 )
          v14 = DevicePowerStateTranslation[v17];
        else
          v14 = 0;
        dword_1C00677B8 = 0;
        pszDest = 0;
        FreeDataBuffs(a1 + 80, 1u);
      }
    }
  }
  v18 = ACPIDeviceInternalDelayedDeviceRequest(v1, v14);
  v19 = *(_QWORD *)(v1 + 8);
  v20 = 0;
  v21 = &unk_1C005B1F0;
  if ( (v19 & 0x200000000000LL) != 0 )
  {
    v4 = *(void **)(v1 + 560);
    v20 = 0;
    if ( (v19 & 0x400000000000LL) != 0 )
      v21 = *(void **)(v1 + 568);
  }
  LOBYTE(v20) = 4;
  WPP_RECORDER_SF_Dqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v20,
    6,
    46,
    (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
    v18,
    v1,
    (__int64)v4,
    (__int64)v21);
  v22 = *(_DWORD *)(a1 + 32);
  if ( v18 < 0 )
    *(_DWORD *)(a1 + 48) = v18;
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), v22);
  return (unsigned int)v18;
}
