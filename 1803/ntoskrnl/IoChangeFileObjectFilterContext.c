/*
 * XREFs of IoChangeFileObjectFilterContext @ 0x1400695C0
 * Callers:
 *     FsRtlInsertPerFileObjectContext @ 0x1400687F0 (FsRtlInsertPerFileObjectContext.c)
 *     FsRtlPTeardownPerFileObjectContexts @ 0x1404E394C (FsRtlPTeardownPerFileObjectContexts.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x140069628 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoChangeFileObjectFilterContext(__int64 a1)
{
  signed __int64 v1; // r10
  char v2; // r11
  signed __int64 v3; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  if ( !*(_QWORD *)(a1 + 208) )
    return 3221225485LL;
  IopGetFileObjectExtension(a1, 3LL, &v5);
  if ( v2 )
    v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 32), v1, 0LL);
  else
    v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 32), 0LL, v1) - v1;
  return v3 != 0 ? 0xC0000021 : 0;
}
