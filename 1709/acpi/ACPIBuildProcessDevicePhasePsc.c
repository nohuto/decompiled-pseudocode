/*
 * XREFs of ACPIBuildProcessDevicePhasePsc @ 0x1C001EF00
 * Callers:
 *     <none>
 * Callees:
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     FreeDataBuffs @ 0x1C000CD00 (FreeDataBuffs.c)
 *     ACPIBuildCompleteCommon @ 0x1C001EE88 (ACPIBuildCompleteCommon.c)
 *     ACPIDeviceInternalDelayedDeviceRequest @ 0x1C001F0D4 (ACPIDeviceInternalDelayedDeviceRequest.c)
 *     WPP_RECORDER_SF_DDqss @ 0x1C002A428 (WPP_RECORDER_SF_DDqss.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePsc(__int64 a1)
{
  ULONG_PTR v1; // rbx
  int v2; // edi
  int *v3; // r12
  const char *v4; // r15
  __int64 v5; // r13
  int v6; // r14d
  __int64 **v7; // rcx
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rax
  unsigned int v11; // edi
  ULONG_PTR v12; // r9
  int v13; // edi
  __int64 v14; // rcx
  const char *v15; // rax
  signed __int32 v16; // edx
  __int64 v18; // rax
  void *v19; // r8
  void *v20; // rdx
  unsigned __int16 v21; // ax
  unsigned __int64 v22; // rax

  v1 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 32;
  *(_QWORD *)(v1 + 440) = AMLIGetNamedChild(*(__int64 **)(v1 + 712), 861098079);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v2 = 2;
  v3 = (int *)(v1 + 468);
  v4 = (const char *)&unk_1C0067B08;
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
        goto LABEL_5;
    }
    v18 = *(_QWORD *)(v1 + 8);
    v19 = &unk_1C0067B08;
    v20 = &unk_1C0067B08;
    if ( (v18 & 0x200000000000LL) != 0 )
    {
      v19 = *(void **)(v1 + 560);
      if ( (v18 & 0x400000000000LL) != 0 )
        v20 = *(void **)(v1 + 568);
    }
    WPP_RECORDER_SF_DDqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v20,
      6,
      45,
      (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
      v6 - 1,
      v2 - 1,
      v1,
      (__int64)v19,
      (__int64)v20);
    *v3 = v6;
LABEL_5:
    ++v2;
    ++v3;
    --v5;
  }
  while ( v5 );
  *(_DWORD *)(v1 + 492) = *(_DWORD *)(v1 + 4LL * *(int *)(v1 + 488) + 460);
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  v10 = *(_QWORD *)(v1 + 8);
  v11 = 1;
  if ( (v10 & 0x80000000) != 0 )
  {
    v11 = 4;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 56);
    if ( v12 && *(int *)(a1 + 48) >= 0 )
    {
      if ( (v10 & 0x80000) != 0 )
      {
        dword_1C00797B8 = 0;
        pszDest = 0;
        FreeDataBuffs(a1 + 80, 1u);
        *(_DWORD *)(v1 + 336) = 1;
      }
      else
      {
        v21 = *(_WORD *)(a1 + 82);
        if ( v21 != 1 )
          KeBugCheckEx(0xA5u, 8uLL, v1, v12, v21);
        v22 = *(_QWORD *)(a1 + 96);
        if ( v22 < 4 )
          v11 = DevicePowerStateTranslation[v22];
        else
          v11 = 0;
        dword_1C00797B8 = 0;
        pszDest = 0;
        FreeDataBuffs(a1 + 80, 1u);
      }
    }
  }
  v13 = ACPIDeviceInternalDelayedDeviceRequest(v1, v11);
  v14 = *(_QWORD *)(v1 + 8);
  v15 = (const char *)&unk_1C0067B08;
  if ( (v14 & 0x200000000000LL) != 0 )
  {
    v4 = *(const char **)(v1 + 560);
    if ( (v14 & 0x400000000000LL) != 0 )
      v15 = *(const char **)(v1 + 568);
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x2Eu,
    (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
    v13,
    v1,
    v4,
    v15);
  v16 = *(_DWORD *)(a1 + 32);
  if ( v13 < 0 )
    *(_DWORD *)(a1 + 48) = v13;
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), v16);
  return (unsigned int)v13;
}
