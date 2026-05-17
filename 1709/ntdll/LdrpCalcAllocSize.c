/*
 * XREFs of LdrpCalcAllocSize @ 0x18001C10C
 * Callers:
 *     RtlGetFileMUIPath @ 0x18001B6F0 (RtlGetFileMUIPath.c)
 *     RtlpCreateTraverseNodes @ 0x18001BFDC (RtlpCreateTraverseNodes.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x1800EBE60 (RtlpAddLanguagesToMultiSZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpCalcAllocSize(unsigned int a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  int v4; // ecx

  v2 = a2 * a1;
  result = 0LL;
  if ( is_mul_ok(a2, a1) )
  {
    v4 = 0;
  }
  else
  {
    v2 = -1LL;
    v4 = -1073741675;
  }
  if ( v4 >= 0 )
    return v2;
  return result;
}
