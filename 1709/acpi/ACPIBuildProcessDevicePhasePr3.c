/*
 * XREFs of ACPIBuildProcessDevicePhasePr3 @ 0x1C0014680
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     FreeDataBuffs @ 0x1C000CD00 (FreeDataBuffs.c)
 *     ACPIBuildDelayedDependencyRequest @ 0x1C0012FA4 (ACPIBuildDelayedDependencyRequest.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0014D80 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C0014E10 (ACPIBuildDevicePowerNodes.c)
 *     ACPIWriteEventLogEntry @ 0x1C004CE6C (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePr3(__int64 a1)
{
  ULONG_PTR v1; // rdi
  __int64 v2; // rsi
  unsigned int v3; // ebp
  __int64 *v5; // rax
  ULONG_PTR v6; // rdx
  unsigned int v7; // edx
  ULONG_PTR v8; // rcx
  __int64 v9; // rcx
  const char *v10; // rax
  const char *v11; // r8
  __int64 v13; // rcx
  unsigned int v14; // eax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1 + 80;
  v3 = 0;
  if ( *(_QWORD *)(v1 + 440) || *(_QWORD *)(v1 + 392) )
  {
    if ( !*(_QWORD *)(a1 + 56) )
      goto LABEL_6;
    dword_1C00797B8 = 0;
    pszDest = 0;
LABEL_27:
    FreeDataBuffs(v2, 1u);
    goto LABEL_6;
  }
  v5 = AMLIGetNamedChild(*(__int64 **)(v1 + 712), 861098079);
  *(_QWORD *)(v1 + 440) = v5;
  if ( !v5 )
    *(_QWORD *)(v1 + 440) = *(_QWORD *)(v1 + 432);
  v6 = *(_QWORD *)(a1 + 56);
  if ( v6 )
  {
    if ( *(_WORD *)(v2 + 2) != 4 )
    {
      ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
      goto LABEL_6;
    }
    v14 = ACPIBuildDevicePowerNodes(v1, v6);
    dword_1C00797B8 = 0;
    v3 = v14;
    pszDest = 0;
    goto LABEL_27;
  }
LABEL_6:
  if ( (*(_DWORD *)(a1 + 20) & 0x20) != 0 )
  {
    *(_DWORD *)(a1 + 28) = 5;
    return ACPIBuildDelayedDependencyRequest(a1, (__int64)&AcpiBuildDeviceList);
  }
  if ( (*(_DWORD *)(v1 + 952) & 0x400040) == 0 )
  {
    v7 = 0;
    v8 = v1 + 360;
    while ( !*(_QWORD *)v8 || !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL) + 96LL) )
    {
      ++v7;
      v8 += 8LL;
      if ( v7 > 4 )
        goto LABEL_11;
    }
    _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x400000uLL);
    *(_DWORD *)(a1 + 20) |= 0x20u;
    return ACPIBuildDelayedDependencyRequest(a1, (__int64)&AcpiBuildDeviceList);
  }
LABEL_11:
  if ( (*(_BYTE *)(v1 + 8) & 2) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 56);
    if ( v13 )
      AMLIDereferenceHandleEx(v13);
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_DWORD *)(a1 + 32) = 31;
  }
  else
  {
    *(_DWORD *)(a1 + 32) = 30;
  }
  v9 = *(_QWORD *)(v1 + 8);
  v10 = (const char *)&unk_1C0067B08;
  v11 = (const char *)&unk_1C0067B08;
  if ( (v9 & 0x200000000000LL) != 0 )
  {
    v10 = *(const char **)(v1 + 560);
    if ( (v9 & 0x400000000000LL) != 0 )
      v11 = *(const char **)(v1 + 568);
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x2Au,
    (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
    v3,
    v1,
    v10,
    v11);
  ACPIBuildCompleteMustSucceed(0LL);
  return v3;
}
