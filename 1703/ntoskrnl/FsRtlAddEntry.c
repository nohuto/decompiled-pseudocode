/*
 * XREFs of FsRtlAddEntry @ 0x1400161A0
 * Callers:
 *     FsRtlRemoveBaseMcbEntry @ 0x140015800 (FsRtlRemoveBaseMcbEntry.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x140015C70 (FsRtlAddBaseMcbEntryEx.c)
 *     FsRtlSplitBaseMcb @ 0x1401E3180 (FsRtlSplitBaseMcb.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

char __fastcall FsRtlAddEntry(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // r15
  unsigned int v5; // ecx
  unsigned int v7; // ecx
  unsigned int v9; // edi
  unsigned __int64 v10; // rax
  PVOID PoolWithTag; // rax
  PVOID v12; // rsi

  v4 = a2;
  v5 = *(_DWORD *)a1;
  if ( a3 + *(_DWORD *)(a1 + 4) <= v5 )
  {
LABEL_2:
    v7 = *(_DWORD *)(a1 + 4);
    if ( (unsigned int)v4 < v7 )
      memmove(
        (void *)(*(_QWORD *)(a1 + 16) + 8LL * (unsigned int)(v4 + a3)),
        (const void *)(*(_QWORD *)(a1 + 16) + 8 * v4),
        8LL * (v7 - (unsigned int)v4));
    *(_DWORD *)(a1 + 4) += a3;
    return 1;
  }
  v9 = 2 * v5;
  if ( v5 >= 0x800 )
    v9 = v5 + 2048;
  v10 = 8LL * v9;
  if ( v10 <= 0xFFFFFFFF )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)*(unsigned __int16 *)(a1 + 8), (unsigned int)v10, 0x74725346u);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, *(const void **)(a1 + 16), 8LL * *(unsigned int *)(a1 + 4));
      if ( *(_WORD *)(a1 + 8) == 1 && *(_DWORD *)a1 == 15 )
        ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&FsRtlFirstMappingLookasideList, *(PVOID *)(a1 + 16));
      else
        ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
      *(_QWORD *)(a1 + 16) = v12;
      *(_DWORD *)a1 = v9;
      goto LABEL_2;
    }
  }
  if ( (*(_BYTE *)(a1 + 10) & 1) != 0 )
    RtlRaiseStatus(-1073741670);
  return 0;
}
