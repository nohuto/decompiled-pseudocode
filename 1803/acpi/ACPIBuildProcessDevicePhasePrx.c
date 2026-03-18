/*
 * XREFs of ACPIBuildProcessDevicePhasePrx @ 0x1C000E1F0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0009C70 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C000A5D4 (ACPIBuildDevicePowerNodes.c)
 *     WPP_RECORDER_SF_dLqss @ 0x1C0012A54 (WPP_RECORDER_SF_dLqss.c)
 *     ACPIWriteEventLogEntry @ 0x1C0023138 (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePrx(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // r14
  ULONG_PTR v5; // rdi
  __int64 v6; // rbp
  unsigned int v8; // r12d
  __int64 v9; // r13
  ULONG_PTR v10; // rdx
  void *v11; // rdx
  __int64 v12; // rcx

  v4 = a1 + 80;
  v5 = *(_QWORD *)(a1 + 40);
  v6 = (unsigned int)(*(_DWORD *)(a1 + 28) - 19) >> 1;
  v8 = 0;
  v9 = (unsigned int)(v6 + 1);
  *(_DWORD *)(a1 + 32) = 2 * v6 + 20;
  if ( *(_QWORD *)(v5 + 8 * v9 + 408) || *(_QWORD *)(v5 + 8 * v9 + 360) )
  {
    if ( !*(_QWORD *)(a1 + 56) )
      goto LABEL_9;
    goto LABEL_8;
  }
  *(_QWORD *)(v5 + 8 * v9 + 408) = AMLIGetNamedChild(*(_QWORD **)(v5 + 712), *(_DWORD *)&aPs0Ps1Ps2[4 * v6]);
  v10 = *(_QWORD *)(a1 + 56);
  if ( v10 )
  {
    if ( *(_WORD *)(v4 + 2) != 4 )
    {
      ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
      goto LABEL_9;
    }
    v8 = ACPIBuildDevicePowerNodes(v5, v10, v4, v9);
LABEL_8:
    dword_1C00677B8 = 0;
    pszDest = 0;
    FreeDataBuffs(v4, 1u);
  }
LABEL_9:
  v11 = &unk_1C005B1F0;
  if ( v5 )
  {
    v12 = *(_QWORD *)(v5 + 8);
    a3 = 0;
    if ( (v12 & 0x200000000000LL) != 0 )
    {
      a3 = 0;
      if ( (v12 & 0x400000000000LL) != 0 )
        v11 = *(void **)(v5 + 568);
    }
  }
  WPP_RECORDER_SF_dLqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v11, a3, a4);
  ACPIBuildCompleteMustSucceed(0LL, v8, 0LL, a1);
  return v8;
}
