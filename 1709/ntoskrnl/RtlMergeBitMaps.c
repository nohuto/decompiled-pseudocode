/*
 * XREFs of RtlMergeBitMaps @ 0x140116B14
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x140130A30 (HvSynchronizeAndDropTemporaryBins.c)
 *     CmpFlushHive @ 0x1404DD950 (CmpFlushHive.c)
 *     MiSelectRelocationStartHint @ 0x140504844 (MiSelectRelocationStartHint.c)
 *     HvStoreModifiedData @ 0x1405138AC (HvStoreModifiedData.c)
 *     HvUpdateUnreconciledVector @ 0x14056FAF4 (HvUpdateUnreconciledVector.c)
 *     HvFoldBackUnreconciledData @ 0x140696D80 (HvFoldBackUnreconciledData.c)
 *     HvpRecoverData @ 0x1406A1A10 (HvpRecoverData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlMergeBitMaps(unsigned int *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // r10d
  __int64 v4; // r11

  result = *a1;
  v3 = *(_DWORD *)a2;
  if ( (unsigned int)result < *(_DWORD *)a2 )
    v3 = *a1;
  v4 = 0LL;
  while ( v3 )
  {
    result = *(_QWORD *)(a2 + 8);
    if ( v3 < 0x20 )
    {
      *(_DWORD *)(*((_QWORD *)a1 + 1) + 4 * v4) |= *(_DWORD *)(result + 4 * v4) & ((1 << v3) - 1);
      v3 = 0;
    }
    else
    {
      v3 -= 32;
      *(_DWORD *)(*((_QWORD *)a1 + 1) + 4 * v4) |= *(_DWORD *)(result + 4 * v4);
      v4 = (unsigned int)(v4 + 1);
    }
  }
  return result;
}
