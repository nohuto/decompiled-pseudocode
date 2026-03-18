/*
 * XREFs of ACPIBuildProcessDevicePhaseEjd @ 0x1C000D1E0
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     ACPIDockIsDockDevice @ 0x1C00087E4 (ACPIDockIsDockDevice.c)
 *     ACPIBuildCompleteCommon @ 0x1C0009C00 (ACPIBuildCompleteCommon.c)
 *     ACPIBuildDockExtension @ 0x1C000AEF4 (ACPIBuildDockExtension.c)
 *     WPP_RECORDER_SF_qss @ 0x1C0012DE0 (WPP_RECORDER_SF_qss.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseEjd(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  int v6; // esi
  __int64 v7; // rdx
  void *v8; // rax
  void *v9; // r8
  __int64 v10; // rdx
  void *v11; // rax
  void *v12; // r8
  signed __int32 v13; // edx

  v1 = *(_QWORD *)(a1 + 40);
  v3 = a1 + 80;
  *(_DWORD *)(a1 + 32) = (*(_BYTE *)(v1 + 8) & 2) != 0 ? 16 : 26;
  if ( *(_QWORD *)(a1 + 56) )
  {
    dword_1C00677B8 = 0;
    pszDest = 0;
    FreeDataBuffs(v3, 1u);
    KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
    v4 = (_QWORD *)qword_1C0067368;
    v5 = (_QWORD *)(v1 + 800);
    if ( *(__int64 **)qword_1C0067368 != &AcpiUnresolvedEjectList )
      __fastfail(3u);
    *(_QWORD *)(v1 + 808) = qword_1C0067368;
    *v5 = &AcpiUnresolvedEjectList;
    *v4 = v5;
    qword_1C0067368 = v1 + 800;
    KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  }
  if ( ACPIDockIsDockDevice() )
  {
    if ( !*((_BYTE *)AcpiInformation + 132) )
    {
      v7 = *(_QWORD *)(v1 + 8);
      v8 = &unk_1C005B1F0;
      v9 = &unk_1C005B1F0;
      if ( (v7 & 0x200000000000LL) != 0 )
      {
        v8 = *(void **)(v1 + 560);
        if ( (v7 & 0x400000000000LL) != 0 )
          v9 = *(void **)(v1 + 568);
      }
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_qss(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        6,
        38,
        (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
        v1,
        (__int64)v8,
        (__int64)v9);
      KeBugCheckEx(0xA5u, 0xCuLL, v1, *(_QWORD *)(a1 + 56), 0LL);
    }
    KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
    v6 = ACPIBuildDockExtension(*(_QWORD *)(v1 + 712));
    KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  }
  else
  {
    v6 = 0;
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
  LOBYTE(v10) = 4;
  WPP_RECORDER_SF_Dqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v10,
    6,
    39,
    (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
    v6,
    v1,
    (__int64)v11,
    (__int64)v12);
  v13 = *(_DWORD *)(a1 + 32);
  if ( v6 < 0 )
    *(_DWORD *)(a1 + 48) = v6;
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), v13);
  return (unsigned int)v6;
}
