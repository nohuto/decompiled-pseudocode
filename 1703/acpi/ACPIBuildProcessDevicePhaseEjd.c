/*
 * XREFs of ACPIBuildProcessDevicePhaseEjd @ 0x1C000E8E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_qss @ 0x1C000F60C (WPP_RECORDER_SF_qss.c)
 *     ACPIBuildCompleteCommon @ 0x1C000FF78 (ACPIBuildCompleteCommon.c)
 *     FreeDataBuffs @ 0x1C0015CB0 (FreeDataBuffs.c)
 *     ACPIDockIsDockDevice @ 0x1C00172D0 (ACPIDockIsDockDevice.c)
 *     ACPIBuildDockExtension @ 0x1C00433E4 (ACPIBuildDockExtension.c)
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
  void *v13; // rax
  void *v14; // r8

  v1 = *(_QWORD *)(a1 + 40);
  v3 = a1 + 80;
  if ( (*(_BYTE *)(v1 + 8) & 2) != 0 )
    *(_DWORD *)(a1 + 32) = 16;
  else
    *(_DWORD *)(a1 + 32) = 26;
  if ( *(_QWORD *)(a1 + 56) )
  {
    dword_1C00776F8 = 0;
    pszDest = 0;
    FreeDataBuffs(v3, 1LL);
    KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
    v10 = (_QWORD *)qword_1C0077248;
    v11 = (_QWORD *)(v1 + 800);
    if ( *(__int64 **)qword_1C0077248 != &AcpiUnresolvedEjectList )
      __fastfail(3u);
    *(_QWORD *)(v1 + 808) = qword_1C0077248;
    *v11 = &AcpiUnresolvedEjectList;
    *v10 = v11;
    qword_1C0077248 = v1 + 800;
    KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  }
  if ( (unsigned __int8)ACPIDockIsDockDevice(*(_QWORD *)(v1 + 712)) )
  {
    if ( !*((_BYTE *)AcpiInformation + 132) )
    {
      v12 = *(_QWORD *)(v1 + 8);
      v13 = &unk_1C0066CD0;
      v14 = &unk_1C0066CD0;
      if ( (v12 & 0x200000000000LL) != 0 )
      {
        v13 = *(void **)(v1 + 560);
        if ( (v12 & 0x400000000000LL) != 0 )
          v14 = *(void **)(v1 + 568);
      }
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_qss(
        WPP_GLOBAL_Control->DeviceExtension,
        v12,
        6,
        38,
        (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
        v1,
        (__int64)v13,
        (__int64)v14);
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
  v6 = (const char *)&unk_1C0066CD0;
  v7 = (const char *)&unk_1C0066CD0;
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
    (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
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
