/*
 * XREFs of ACPIBuildDeviceExtension @ 0x1C000A374
 * Callers:
 *     ACPIBuildDockExtension @ 0x1C000AEF4 (ACPIBuildDockExtension.c)
 *     ACPIBuildFixedButtonExtension @ 0x1C000B3CC (ACPIBuildFixedButtonExtension.c)
 *     ACPIBuildProcessorExtension @ 0x1C0010C6C (ACPIBuildProcessorExtension.c)
 *     ACPIBuildThermalZoneExtension @ 0x1C001192C (ACPIBuildThermalZoneExtension.c)
 *     OSNotifyCreateDevice @ 0x1C002E708 (OSNotifyCreateDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C0003CBC (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x1C0004540 (memset.c)
 */

__int64 __fastcall ACPIBuildDeviceExtension(volatile signed __int32 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rcx
  char *v8; // rax
  int v9; // edx
  char *v10; // rbx
  _QWORD *v11; // rdx
  _QWORD *v12; // rax

  if ( a1 && (v6 = *(_QWORD *)(*(_QWORD *)a1 + 104LL)) != 0 )
  {
    if ( *(_QWORD *)(v6 + 744) != a2 )
      return 3221225486LL;
    *a3 = 0LL;
  }
  else
  {
    v8 = (char *)ExAllocateFromNPagedLookasideList(&DeviceExtensionLookAsideList);
    v10 = v8;
    if ( !v8 )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v9,
        22,
        10,
        (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
        (char)a1);
      return 3221225626LL;
    }
    memset(v8, 0, 0x3C0uLL);
    *((_QWORD *)v10 + 89) = a1;
    ++*((_DWORD *)v10 + 171);
    ++*((_DWORD *)v10 + 170);
    if ( a1 )
    {
      dword_1C00677B8 = 0;
      pszDest = 0;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedAdd(a1 + 2, 1u);
    }
    *((_QWORD *)v10 + 3) = 0LL;
    *((_DWORD *)v10 + 80) = 0;
    *((_DWORD *)v10 + 4) = 1599293264;
    *((_QWORD *)v10 + 1) = 10LL;
    *((_DWORD *)v10 + 115) = 0;
    *((_DWORD *)v10 + 122) = 0;
    *((_DWORD *)v10 + 123) = 0;
    *((_DWORD *)v10 + 120) = 4;
    *((_DWORD *)v10 + 121) = 4;
    *((_DWORD *)v10 + 116) = 1;
    *((_DWORD *)v10 + 117) = 1;
    *((_DWORD *)v10 + 118) = 1;
    *((_DWORD *)v10 + 119) = 1;
    *((_DWORD *)v10 + 125) = 1;
    *((_QWORD *)v10 + 95) = v10 + 752;
    *((_QWORD *)v10 + 94) = v10 + 752;
    *((_QWORD *)v10 + 99) = v10 + 784;
    *((_QWORD *)v10 + 98) = v10 + 784;
    *((_QWORD *)v10 + 101) = v10 + 800;
    *((_QWORD *)v10 + 100) = v10 + 800;
    *((_QWORD *)v10 + 65) = v10 + 512;
    *((_QWORD *)v10 + 64) = v10 + 512;
    *((_QWORD *)v10 + 68) = v10 + 536;
    *((_QWORD *)v10 + 67) = v10 + 536;
    *((_QWORD *)v10 + 103) = v10 + 816;
    *((_QWORD *)v10 + 102) = v10 + 816;
    *a3 = v10;
    KeInitializeEvent((PRKEVENT)(v10 + 856), SynchronizationEvent, 1u);
    *((_QWORD *)v10 + 110) = 0LL;
    v10[888] = 0;
    *((_QWORD *)v10 + 93) = a2;
    if ( a2 )
    {
      _InterlockedAdd((volatile signed __int32 *)(a2 + 684), 1u);
      v11 = *(_QWORD **)(a2 + 760);
      v12 = v10 + 768;
      if ( *v11 != a2 + 752 )
        __fastfail(3u);
      *v12 = a2 + 752;
      *((_QWORD *)v10 + 97) = v11;
      *v11 = v12;
      *(_QWORD *)(a2 + 760) = v12;
      _InterlockedOr64((volatile signed __int64 *)(a2 + 8), 0x40000000000uLL);
    }
    if ( a1 )
      *(_QWORD *)(*(_QWORD *)a1 + 104LL) = v10;
    *((_DWORD *)v10 + 164) = -1;
    *((_QWORD *)v10 + 84) = v10 + 664;
    *((_QWORD *)v10 + 83) = v10 + 664;
    *(_QWORD *)v10 = &gAcpiTriageInfo;
  }
  return 0LL;
}
