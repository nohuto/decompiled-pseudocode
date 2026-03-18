/*
 * XREFs of MiLocatePagefileSubsection @ 0x140099578
 * Callers:
 *     MiAdvanceVadView @ 0x1400173F0 (MiAdvanceVadView.c)
 *     MiOffsetToProtos @ 0x14009DAD0 (MiOffsetToProtos.c)
 *     MiQueryAddressState @ 0x1400D1AC0 (MiQueryAddressState.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1401039D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MmCommitSessionMappedView @ 0x14044D1A0 (MmCommitSessionMappedView.c)
 *     MiMapViewOfDataSection @ 0x140512AC0 (MiMapViewOfDataSection.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140514AB0 (MiUpdateCfgSystemWideBitmapWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiLocatePagefileSubsection(unsigned __int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // r11
  unsigned __int64 v5; // rbx
  bool v6; // cf
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned int *v11; // r9

  v3 = *a2;
  v5 = *(unsigned int *)(*(_QWORD *)a1 + 96LL);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0x1000) != 0 )
  {
    v6 = *(_DWORD *)(a1 + 48) < 0x40000000u;
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 48) < 0x40000000u;
    if ( *(_DWORD *)(a1 + 48) < 0x40000000u )
      return a1 & -(__int64)(v3 < *(unsigned int *)(a1 + 44));
  }
  v8 = (-(__int64)v6 & 0xFFFFFFFFFFFE0000uLL) + 0x40000;
  v9 = v3 % v8;
  v10 = (unsigned int)(v3 / v8);
  if ( v3 % v8 )
    ++v10;
  if ( v10 > v5 )
    return 0LL;
  v11 = (unsigned int *)(80 * (v3 / v8) + a1);
  if ( v9 >= v11[11] )
    return 0LL;
  *a2 = v9;
  return (__int64)v11;
}
