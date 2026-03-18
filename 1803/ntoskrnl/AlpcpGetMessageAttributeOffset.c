/*
 * XREFs of AlpcpGetMessageAttributeOffset @ 0x1404CECE4
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1404CDA80 (AlpcpCaptureAttributes.c)
 *     AlpcpExposeCapturedContextAttribute @ 0x140577628 (AlpcpExposeCapturedContextAttribute.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpGetMessageAttributeOffset(int a1, int a2)
{
  int v2; // r8d
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 result; // rax

  v2 = ~(2 * a2 - 1) & a1;
  v3 = ((v2 >> 31) & 0x18) + 40LL;
  if ( (v2 & 0x40000000) == 0 )
    v3 = ((v2 >> 31) & 0x18) + 8LL;
  v4 = v3 + 32;
  if ( (v2 & 0x20000000) == 0 )
    v4 = v3;
  v5 = v4 + 24;
  if ( (v2 & 0x10000000) == 0 )
    v5 = v4;
  v6 = v5 + 24;
  if ( (v2 & 0x8000000) == 0 )
    v6 = v5;
  result = v6 + 8;
  if ( (v2 & 0x2000000) == 0 )
    return v6;
  return result;
}
