/*
 * XREFs of IoChangeFileObjectFilterContext @ 0x140110F4C
 * Callers:
 *     FsRtlInsertPerFileObjectContext @ 0x140110E60 (FsRtlInsertPerFileObjectContext.c)
 *     IopDeleteFile @ 0x1404BB010 (IopDeleteFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoChangeFileObjectFilterContext(__int64 a1, signed __int64 a2, char a3)
{
  volatile signed __int64 *v3; // rax
  volatile signed __int64 *v4; // rcx
  signed __int64 v5; // rax

  v3 = *(volatile signed __int64 **)(a1 + 208);
  if ( !v3 )
    return 3221225485LL;
  v4 = 0LL;
  if ( v3 != IopRevocationExtension )
    v4 = v3;
  if ( a3 )
    v5 = _InterlockedCompareExchange64(v4 + 4, a2, 0LL);
  else
    v5 = _InterlockedCompareExchange64(v4 + 4, 0LL, a2) - a2;
  return v5 != 0 ? 0xC0000021 : 0;
}
