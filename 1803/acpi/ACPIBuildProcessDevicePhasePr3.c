/*
 * XREFs of ACPIBuildProcessDevicePhasePr3 @ 0x1C000D820
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0009C70 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIBuildDelayedDependencyRequest @ 0x1C0009CE0 (ACPIBuildDelayedDependencyRequest.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C000A5D4 (ACPIBuildDevicePowerNodes.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIWriteEventLogEntry @ 0x1C0023138 (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePr3(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 v2; // rsi
  unsigned int v3; // ebp
  __int64 *v5; // rax
  ULONG_PTR v6; // rdx
  unsigned int v7; // eax
  unsigned int v9; // edx
  ULONG_PTR v10; // rcx
  volatile signed __int32 *v11; // rcx
  int v12; // eax
  int v13; // edx
  __int64 v14; // rcx
  void *v15; // rax
  void *v16; // r8

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1 + 80;
  v3 = 0;
  if ( *(_QWORD *)(v1 + 440) || *(_QWORD *)(v1 + 392) )
  {
    if ( !*(_QWORD *)(a1 + 56) )
      goto LABEL_12;
    dword_1C00677B8 = 0;
    pszDest = 0;
    goto LABEL_11;
  }
  v5 = AMLIGetNamedChild(*(_QWORD **)(v1 + 712), 861098079);
  *(_QWORD *)(v1 + 440) = v5;
  if ( !v5 )
    *(_QWORD *)(v1 + 440) = *(_QWORD *)(v1 + 432);
  v6 = *(_QWORD *)(a1 + 56);
  if ( v6 )
  {
    if ( *(_WORD *)(v2 + 2) != 4 )
    {
      ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
      goto LABEL_12;
    }
    v7 = ACPIBuildDevicePowerNodes(v1, v6, v2, 4);
    dword_1C00677B8 = 0;
    v3 = v7;
    pszDest = 0;
LABEL_11:
    FreeDataBuffs(v2, 1u);
  }
LABEL_12:
  if ( (*(_DWORD *)(a1 + 20) & 0x20) != 0 )
  {
    *(_DWORD *)(a1 + 28) = 5;
    return ACPIBuildDelayedDependencyRequest(a1, (__int64)&AcpiBuildDeviceList);
  }
  if ( (*(_DWORD *)(v1 + 952) & 0x400040) == 0 )
  {
    v9 = 0;
    v10 = v1 + 360;
    while ( !*(_QWORD *)v10 || !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 8LL) + 96LL) )
    {
      ++v9;
      v10 += 8LL;
      if ( v9 > 4 )
        goto LABEL_20;
    }
    _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x400000uLL);
    *(_DWORD *)(a1 + 20) |= 0x20u;
    return ACPIBuildDelayedDependencyRequest(a1, (__int64)&AcpiBuildDeviceList);
  }
LABEL_20:
  if ( (*(_BYTE *)(v1 + 8) & 2) != 0 )
  {
    v11 = *(volatile signed __int32 **)(a1 + 56);
    if ( v11 )
      AMLIDereferenceHandleEx(v11);
    *(_QWORD *)(a1 + 56) = 0LL;
    v12 = 31;
  }
  else
  {
    v12 = 30;
  }
  *(_DWORD *)(a1 + 32) = v12;
  v13 = 0;
  v14 = *(_QWORD *)(v1 + 8);
  v15 = &unk_1C005B1F0;
  v16 = &unk_1C005B1F0;
  if ( (v14 & 0x200000000000LL) != 0 )
  {
    v15 = *(void **)(v1 + 560);
    if ( (v14 & 0x400000000000LL) != 0 )
      v16 = *(void **)(v1 + 568);
  }
  LOBYTE(v13) = 4;
  WPP_RECORDER_SF_Dqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v13,
    6,
    42,
    (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
    v3,
    v1,
    (__int64)v15,
    (__int64)v16);
  ACPIBuildCompleteMustSucceed(0LL, v3, 0LL, a1);
  return v3;
}
