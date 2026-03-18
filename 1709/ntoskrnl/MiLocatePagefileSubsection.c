/*
 * XREFs of MiLocatePagefileSubsection @ 0x1400B6DE0
 * Callers:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14002D0C0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiOffsetToProtos @ 0x14007AFB0 (MiOffsetToProtos.c)
 *     MiAdvanceVadView @ 0x140112B84 (MiAdvanceVadView.c)
 *     MiMapViewOfDataSection @ 0x1404CEDF0 (MiMapViewOfDataSection.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1404D3B60 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MmCommitSessionMappedView @ 0x1404F7720 (MmCommitSessionMappedView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiLocatePagefileSubsection(unsigned __int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // r11
  unsigned __int64 v5; // rbx
  bool v6; // cf
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r8
  unsigned int *v13; // r9

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
  v9 = v3 / v8;
  v10 = v3 % v8;
  v11 = (unsigned int)(v3 / v8);
  v12 = v11 + 1;
  if ( !v10 )
    v12 = v11;
  if ( v12 > v5 )
    return 0LL;
  v13 = (unsigned int *)(80 * v9 + a1);
  if ( v10 >= v13[11] )
    return 0LL;
  *a2 = v10;
  return (__int64)v13;
}
