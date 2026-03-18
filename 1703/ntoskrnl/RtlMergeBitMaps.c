/*
 * XREFs of RtlMergeBitMaps @ 0x14006DC7C
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x14003B8EC (HvSynchronizeAndDropTemporaryBins.c)
 *     MiSelectRelocationStartHint @ 0x1404960A4 (MiSelectRelocationStartHint.c)
 *     HvUpdateUnreconciledVector @ 0x1404B64D8 (HvUpdateUnreconciledVector.c)
 *     HvStoreModifiedData @ 0x1404B7370 (HvStoreModifiedData.c)
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
 *     HvFoldBackUnreconciledData @ 0x14066C70C (HvFoldBackUnreconciledData.c)
 *     HvpRecoverData @ 0x1406774D4 (HvpRecoverData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlMergeBitMaps(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  unsigned int *v3; // r8
  __int64 v4; // r11
  unsigned int v5; // r10d

  result = *a2;
  v3 = a2;
  if ( *(_DWORD *)a1 < (unsigned int)result )
    v3 = (unsigned int *)a1;
  v4 = 0LL;
  v5 = *v3;
  while ( v5 )
  {
    result = *((_QWORD *)a2 + 1);
    if ( v5 < 0x20 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v4) |= *(_DWORD *)(result + 4 * v4) & ((1 << v5) - 1);
      v5 = 0;
    }
    else
    {
      v5 -= 32;
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v4) |= *(_DWORD *)(result + 4 * v4);
      v4 = (unsigned int)(v4 + 1);
    }
  }
  return result;
}
