/*
 * XREFs of ACPIBuildDeviceExtension @ 0x1C0012FC4
 * Callers:
 *     ACPIBuildFixedButtonExtension @ 0x1C00062A0 (ACPIBuildFixedButtonExtension.c)
 *     ACPIBuildThermalZoneExtension @ 0x1C0006658 (ACPIBuildThermalZoneExtension.c)
 *     ACPIBuildProcessorExtension @ 0x1C0006990 (ACPIBuildProcessorExtension.c)
 *     OSNotifyCreateDevice @ 0x1C0012860 (OSNotifyCreateDevice.c)
 *     ACPIBuildDockExtension @ 0x1C00433E4 (ACPIBuildDockExtension.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001AA8 (WPP_RECORDER_SF_D.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C00131D8 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 __fastcall ACPIBuildDeviceExtension(volatile signed __int32 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rcx
  char *v7; // rax
  int v8; // edx
  char *v9; // rbx
  _QWORD *v10; // rdx
  _QWORD *v11; // rax

  if ( a1 && (v6 = *(_QWORD *)(*(_QWORD *)a1 + 104LL)) != 0 )
  {
    if ( *(_QWORD *)(v6 + 744) == a2 )
    {
      *a3 = 0LL;
      return 0LL;
    }
    return 3221225486LL;
  }
  else
  {
    v7 = (char *)ExAllocateFromNPagedLookasideList(&DeviceExtensionLookAsideList);
    v9 = v7;
    if ( v7 )
    {
      memset(v7, 0, 0x3C0uLL);
      *((_QWORD *)v9 + 89) = a1;
      ++*((_DWORD *)v9 + 171);
      ++*((_DWORD *)v9 + 170);
      if ( a1 )
      {
        dword_1C00776F8 = 0;
        pszDest = 0;
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedAdd(a1 + 2, 1u);
      }
      *((_QWORD *)v9 + 3) = 0LL;
      *((_DWORD *)v9 + 80) = 0;
      *((_DWORD *)v9 + 4) = 1599293264;
      *((_QWORD *)v9 + 1) = 10LL;
      *((_DWORD *)v9 + 115) = 0;
      *((_DWORD *)v9 + 122) = 0;
      *((_DWORD *)v9 + 123) = 0;
      *((_DWORD *)v9 + 120) = 4;
      *((_DWORD *)v9 + 121) = 4;
      *((_DWORD *)v9 + 116) = 1;
      *((_DWORD *)v9 + 117) = 1;
      *((_DWORD *)v9 + 118) = 1;
      *((_DWORD *)v9 + 119) = 1;
      *((_DWORD *)v9 + 125) = 1;
      *((_QWORD *)v9 + 95) = v9 + 752;
      *((_QWORD *)v9 + 94) = v9 + 752;
      *((_QWORD *)v9 + 99) = v9 + 784;
      *((_QWORD *)v9 + 98) = v9 + 784;
      *((_QWORD *)v9 + 101) = v9 + 800;
      *((_QWORD *)v9 + 100) = v9 + 800;
      *((_QWORD *)v9 + 65) = v9 + 512;
      *((_QWORD *)v9 + 64) = v9 + 512;
      *((_QWORD *)v9 + 68) = v9 + 536;
      *((_QWORD *)v9 + 67) = v9 + 536;
      *((_QWORD *)v9 + 103) = v9 + 816;
      *((_QWORD *)v9 + 102) = v9 + 816;
      *a3 = v9;
      KeInitializeEvent((PRKEVENT)(v9 + 856), SynchronizationEvent, 1u);
      *((_QWORD *)v9 + 110) = 0LL;
      v9[888] = 0;
      *((_QWORD *)v9 + 93) = a2;
      if ( a2 )
      {
        _InterlockedAdd((volatile signed __int32 *)(a2 + 684), 1u);
        v10 = *(_QWORD **)(a2 + 760);
        v11 = v9 + 768;
        if ( *v10 != a2 + 752 )
          __fastfail(3u);
        *v11 = a2 + 752;
        *((_QWORD *)v9 + 97) = v10;
        *v10 = v11;
        *(_QWORD *)(a2 + 760) = v11;
        _InterlockedOr64((volatile signed __int64 *)(a2 + 8), 0x40000000000uLL);
      }
      if ( a1 )
        *(_QWORD *)(*(_QWORD *)a1 + 104LL) = v9;
      *((_DWORD *)v9 + 164) = -1;
      *((_QWORD *)v9 + 84) = v9 + 664;
      *((_QWORD *)v9 + 83) = v9 + 664;
      *(_QWORD *)v9 = &gAcpiTriageInfo;
      return 0LL;
    }
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      22,
      10,
      (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
      (char)a1);
    return 3221225626LL;
  }
}
