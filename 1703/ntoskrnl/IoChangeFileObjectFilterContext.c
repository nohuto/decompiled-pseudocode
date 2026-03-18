/*
 * XREFs of IoChangeFileObjectFilterContext @ 0x140050FE8
 * Callers:
 *     FsRtlPTeardownPerFileObjectContexts @ 0x14048C05C (FsRtlPTeardownPerFileObjectContexts.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x1400511D0 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoChangeFileObjectFilterContext(__int64 a1)
{
  signed __int64 v1; // r9
  signed __int64 v2; // r11
  char v3; // r10
  signed __int64 v4; // rax

  if ( !*(_QWORD *)(a1 + 208) )
    return 3221225485LL;
  IopGetFileObjectExtension(a1, 3LL);
  if ( v3 )
    v4 = _InterlockedCompareExchange64((volatile signed __int64 *)0x20, v1, 0LL);
  else
    v4 = _InterlockedCompareExchange64((volatile signed __int64 *)0x20, v2, v1) - v1;
  return v4 != 0 ? 0xC0000021 : 0;
}
