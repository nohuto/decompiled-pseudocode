/*
 * XREFs of ACPIBuildProcessDevicePhaseEjd @ 0x1C001ED80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qss @ 0x1C0003CBC (WPP_RECORDER_SF_qss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     FreeDataBuffs @ 0x1C000CD00 (FreeDataBuffs.c)
 *     ACPIDockIsDockDevice @ 0x1C000CF70 (ACPIDockIsDockDevice.c)
 *     ACPIBuildCompleteCommon @ 0x1C001EE88 (ACPIBuildCompleteCommon.c)
 *     ACPIBuildDockExtension @ 0x1C0042DA4 (ACPIBuildDockExtension.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseEjd(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 v3; // rcx
  int v4; // esi
  __int64 v5; // rdx
  const char *v6; // rax
  const char *v7; // r8
  __int64 v8; // rdx
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  const char *v13; // rax
  const char *v14; // r8

  v1 = *(_QWORD *)(a1 + 40);
  v3 = a1 + 80;
  if ( (*(_BYTE *)(v1 + 8) & 2) != 0 )
    *(_DWORD *)(a1 + 32) = 16;
  else
    *(_DWORD *)(a1 + 32) = 26;
  if ( *(_QWORD *)(a1 + 56) )
  {
    dword_1C00797B8 = 0;
    pszDest = 0;
    FreeDataBuffs(v3, 1u);
    KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
    v10 = (_QWORD *)qword_1C0079308;
    v11 = (_QWORD *)(v1 + 800);
    if ( *(__int64 **)qword_1C0079308 != &AcpiUnresolvedEjectList )
      __fastfail(3u);
    *(_QWORD *)(v1 + 808) = qword_1C0079308;
    *v11 = &AcpiUnresolvedEjectList;
    *v10 = v11;
    qword_1C0079308 = v1 + 800;
    KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  }
  if ( ACPIDockIsDockDevice(*(__int64 **)(v1 + 712)) )
  {
    if ( !*((_BYTE *)AcpiInformation + 132) )
    {
      v12 = *(_QWORD *)(v1 + 8);
      v13 = (const char *)&unk_1C0067B08;
      v14 = (const char *)&unk_1C0067B08;
      if ( (v12 & 0x200000000000LL) != 0 )
      {
        v13 = *(const char **)(v1 + 560);
        if ( (v12 & 0x400000000000LL) != 0 )
          v14 = *(const char **)(v1 + 568);
      }
      WPP_RECORDER_SF_qss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0x26u,
        (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
        v1,
        v13,
        v14);
      KeBugCheckEx(0xA5u, 0xCuLL, v1, *(_QWORD *)(a1 + 56), 0LL);
    }
    KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
    v4 = ACPIBuildDockExtension(*(_QWORD *)(v1 + 712));
    KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  }
  else
  {
    v4 = 0;
  }
  v5 = *(_QWORD *)(v1 + 8);
  v6 = (const char *)&unk_1C0067B08;
  v7 = (const char *)&unk_1C0067B08;
  if ( (v5 & 0x200000000000LL) != 0 )
  {
    v6 = *(const char **)(v1 + 560);
    if ( (v5 & 0x400000000000LL) != 0 )
      v7 = *(const char **)(v1 + 568);
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x27u,
    (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
    v4,
    v1,
    v6,
    v7);
  v8 = *(unsigned int *)(a1 + 32);
  if ( v4 < 0 )
    *(_DWORD *)(a1 + 48) = v4;
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon(a1 + 24, v8);
  return (unsigned int)v4;
}
