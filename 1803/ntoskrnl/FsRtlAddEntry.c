/*
 * XREFs of FsRtlAddEntry @ 0x1400B0560
 * Callers:
 *     FsRtlRemoveBaseMcbEntry @ 0x1400AFBF0 (FsRtlRemoveBaseMcbEntry.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x1400B0010 (FsRtlAddBaseMcbEntryEx.c)
 *     FsRtlSplitBaseMcb @ 0x1402249E0 (FsRtlSplitBaseMcb.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

char __fastcall FsRtlAddEntry(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // r14
  unsigned int v5; // ecx
  unsigned int v7; // r9d
  char result; // al
  unsigned int v9; // edi
  unsigned __int64 v10; // rax
  PVOID PoolWithTag; // rax
  PVOID v12; // rsi

  v4 = a2;
  v5 = *(_DWORD *)(a1 + 4);
  v7 = *(_DWORD *)a1;
  if ( v5 + a3 <= *(_DWORD *)a1 )
  {
LABEL_2:
    if ( (unsigned int)v4 < v5 )
    {
      memmove(
        (void *)(*(_QWORD *)(a1 + 16) + 8LL * (unsigned int)(v4 + a3)),
        (const void *)(*(_QWORD *)(a1 + 16) + 8 * v4),
        8LL * (v5 - (unsigned int)v4));
      v5 = *(_DWORD *)(a1 + 4);
    }
    result = 1;
    *(_DWORD *)(a1 + 4) = a3 + v5;
    return result;
  }
  v9 = 2 * v7;
  if ( v7 >= 0x800 )
    v9 = v7 + 2048;
  v10 = 8LL * v9;
  if ( v10 <= 0xFFFFFFFF )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)*(unsigned __int16 *)(a1 + 8), (unsigned int)v10, 0x74725346u);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, *(const void **)(a1 + 16), 8LL * *(unsigned int *)(a1 + 4));
      if ( *(_WORD *)(a1 + 8) == 1 && *(_DWORD *)a1 == 15 )
        ExFreeToNPagedLookasideList(&FsRtlFirstMappingLookasideList, *(PVOID *)(a1 + 16));
      else
        ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
      v5 = *(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 16) = v12;
      *(_DWORD *)a1 = v9;
      goto LABEL_2;
    }
  }
  if ( (*(_BYTE *)(a1 + 10) & 1) != 0 )
    RtlRaiseStatus(-1073741670);
  return 0;
}
