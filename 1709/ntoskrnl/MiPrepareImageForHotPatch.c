/*
 * XREFs of MiPrepareImageForHotPatch @ 0x1406E1E84
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1406E15C8 (MiApplyDriverHotPatch.c)
 * Callees:
 *     MiLockHotPatchPages @ 0x140219014 (MiLockHotPatchPages.c)
 *     MiAllocateHotPatchPageBitMap @ 0x1406E1538 (MiAllocateHotPatchPageBitMap.c)
 */

__int64 __fastcall MiPrepareImageForHotPatch(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 result; // rax
  signed int *i; // rbx
  __int64 v8; // rbx
  __int64 *v9; // rcx
  __int64 *v10; // rcx
  signed int v11; // edi

  result = MiAllocateHotPatchPageBitMap(a1);
  if ( (int)result >= 0 )
  {
    for ( i = (signed int *)(a3 + *(unsigned int *)(a1[1] + 24)); ; i = (signed int *)(v8 + 8LL * (v11 & 0xFFF)) )
    {
      v11 = *i;
      if ( !*i )
        break;
      v8 = (__int64)(i + 1);
      v9 = a1;
      if ( v11 < 0 )
        v9 = a2;
      result = MiLockHotPatchPages(v9, v8, v11 & 0xFFF, v11);
      if ( (int)result < 0 )
        return result;
      if ( (v11 & 0xFC000) == 0x5C000 )
      {
        v10 = a2;
        if ( v11 < 0 )
          v10 = a1;
        result = MiLockHotPatchPages(v10, v8, v11 & 0xFFF, v11);
        if ( (int)result < 0 )
          return result;
      }
    }
    return 0LL;
  }
  return result;
}
