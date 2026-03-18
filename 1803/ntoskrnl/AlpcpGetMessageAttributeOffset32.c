/*
 * XREFs of AlpcpGetMessageAttributeOffset32 @ 0x1404C9800
 * Callers:
 *     AlpcpExposeAttributes @ 0x1404CA290 (AlpcpExposeAttributes.c)
 *     AlpcpCaptureAttributes @ 0x1404CDA80 (AlpcpCaptureAttributes.c)
 *     AlpcpExposeCapturedContextAttribute @ 0x140577628 (AlpcpExposeCapturedContextAttribute.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpGetMessageAttributeOffset32(int a1, int a2)
{
  int v2; // r8d
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax

  v2 = ~(2 * a2 - 1) & a1;
  v3 = ((v2 >> 31) & 0xC) + 24LL;
  if ( (v2 & 0x40000000) == 0 )
    v3 = ((v2 >> 31) & 0xC) + 8LL;
  v4 = v3 + 20;
  if ( (v2 & 0x20000000) == 0 )
    v4 = v3;
  v5 = v4 + 16;
  if ( (v2 & 0x10000000) == 0 )
    v5 = v4;
  result = v5 + 24;
  if ( (v2 & 0x8000000) == 0 )
    result = v5;
  if ( (v2 & 0x2000000) != 0 )
    result += 8LL;
  return result;
}
