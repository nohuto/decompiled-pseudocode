/*
 * XREFs of AlpcpGetMessageAttributeOffset @ 0x140437AB8
 * Callers:
 *     AlpcpCaptureAttributes @ 0x140525C00 (AlpcpCaptureAttributes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpGetMessageAttributeOffset(int a1, int a2)
{
  int v2; // r8d
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 result; // rax

  v2 = ~(2 * a2 - 1) & a1;
  v3 = 32LL;
  if ( v2 >= 0 )
    v3 = 8LL;
  v4 = v3 + 32;
  if ( (v2 & 0x40000000) == 0 )
    v4 = v3;
  v5 = v4 + 32;
  if ( (v2 & 0x20000000) == 0 )
    v5 = v4;
  v6 = v5 + 24;
  if ( (v2 & 0x10000000) == 0 )
    v6 = v5;
  v7 = v6 + 24;
  if ( (v2 & 0x8000000) == 0 )
    v7 = v6;
  result = v7 + 8;
  if ( (v2 & 0x2000000) == 0 )
    return v7;
  return result;
}
