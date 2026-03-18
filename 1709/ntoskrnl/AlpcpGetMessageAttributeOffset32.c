/*
 * XREFs of AlpcpGetMessageAttributeOffset32 @ 0x140582EF4
 * Callers:
 *     AlpcpExposeAttributes @ 0x14049F2C0 (AlpcpExposeAttributes.c)
 *     AlpcpCaptureAttributes @ 0x1404A1A00 (AlpcpCaptureAttributes.c)
 *     AlpcpExposeCapturedContextAttribute @ 0x140570190 (AlpcpExposeCapturedContextAttribute.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpGetMessageAttributeOffset32(int a1, int a2)
{
  int v2; // r8d
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
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
  v6 = v5 + 24;
  if ( (v2 & 0x8000000) == 0 )
    v6 = v5;
  result = v6 + 8;
  if ( (v2 & 0x2000000) == 0 )
    return v6;
  return result;
}
