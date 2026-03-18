/*
 * XREFs of ACPIBuildProcessDevicePhasePr3 @ 0x1C000EAF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C000E580 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0012240 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     FreeDataBuffs @ 0x1C0015CB0 (FreeDataBuffs.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C0028DBC (ACPIBuildDevicePowerNodes.c)
 *     ACPIBuildDelayedDependencyRequest @ 0x1C0029FB4 (ACPIBuildDelayedDependencyRequest.c)
 *     ACPIWriteEventLogEntry @ 0x1C004D1FC (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePr3(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR v2; // rdi
  __int64 v3; // rsi
  unsigned int v4; // ebp
  __int64 *v6; // rax
  ULONG_PTR v7; // rcx
  __int64 v8; // rcx
  const char *v9; // rax
  const char *v10; // r8
  __int64 v12; // rcx
  unsigned int v13; // eax

  v2 = *(_QWORD *)(a1 + 40);
  v3 = a1 + 80;
  v4 = 0;
  if ( *(_QWORD *)(v2 + 440) || *(_QWORD *)(v2 + 392) )
  {
    if ( !*(_QWORD *)(a1 + 56) )
      goto LABEL_6;
    dword_1C00776F8 = 0;
    pszDest = 0;
LABEL_27:
    FreeDataBuffs(v3, 1LL);
    goto LABEL_6;
  }
  v6 = AMLIGetNamedChild(*(__int64 **)(v2 + 712), 861098079);
  *(_QWORD *)(v2 + 440) = v6;
  if ( !v6 )
    *(_QWORD *)(v2 + 440) = *(_QWORD *)(v2 + 432);
  a2 = *(_QWORD *)(a1 + 56);
  if ( a2 )
  {
    if ( *(_WORD *)(v3 + 2) != 4 )
    {
      ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
      goto LABEL_6;
    }
    v13 = ACPIBuildDevicePowerNodes(v2, a2);
    dword_1C00776F8 = 0;
    v4 = v13;
    pszDest = 0;
    goto LABEL_27;
  }
LABEL_6:
  if ( (*(_DWORD *)(a1 + 20) & 0x20) != 0 )
  {
    *(_DWORD *)(a1 + 28) = 5;
    return ACPIBuildDelayedDependencyRequest(a1, &AcpiBuildDeviceList);
  }
  if ( (*(_DWORD *)(v2 + 952) & 0x400040) == 0 )
  {
    LODWORD(a2) = 0;
    v7 = v2 + 360;
    while ( !*(_QWORD *)v7 || !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 8LL) + 96LL) )
    {
      a2 = (unsigned int)(a2 + 1);
      v7 += 8LL;
      if ( (unsigned int)a2 > 4 )
        goto LABEL_11;
    }
    _InterlockedOr64((volatile signed __int64 *)(v2 + 952), 0x400000uLL);
    *(_DWORD *)(a1 + 20) |= 0x20u;
    return ACPIBuildDelayedDependencyRequest(a1, &AcpiBuildDeviceList);
  }
LABEL_11:
  if ( (*(_BYTE *)(v2 + 8) & 2) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 56);
    if ( v12 )
      AMLIDereferenceHandleEx(v12, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_DWORD *)(a1 + 32) = 31;
  }
  else
  {
    *(_DWORD *)(a1 + 32) = 30;
  }
  v8 = *(_QWORD *)(v2 + 8);
  v9 = (const char *)&unk_1C0066CD0;
  v10 = (const char *)&unk_1C0066CD0;
  if ( (v8 & 0x200000000000LL) != 0 )
  {
    v9 = *(const char **)(v2 + 560);
    if ( (v8 & 0x400000000000LL) != 0 )
      v10 = *(const char **)(v2 + 568);
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x2Au,
    (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
    v4,
    v2,
    v9,
    v10);
  ACPIBuildCompleteMustSucceed(0LL);
  return v4;
}
