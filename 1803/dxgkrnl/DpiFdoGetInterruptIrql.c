/*
 * XREFs of DpiFdoGetInterruptIrql @ 0x1C01F4CDC
 * Callers:
 *     DpiFdoConnectInterrupt @ 0x1C01F2108 (DpiFdoConnectInterrupt.c)
 *     DpiLdaGetInterruptIrqlForChain @ 0x1C0209228 (DpiLdaGetInterruptIrqlForChain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiFdoGetInterruptIrql(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 v2; // al
  unsigned int v3; // r8d
  unsigned int v4; // r9d
  unsigned __int8 *v5; // rcx
  __int64 v6; // r10

  v2 = 0;
  v3 = -1073741275;
  if ( a1 )
  {
    v4 = *(_DWORD *)(a1 + 16);
    if ( v4 )
    {
      v5 = (unsigned __int8 *)(a1 + 24);
      v6 = v4;
      do
      {
        if ( *(v5 - 4) == 2 && v2 < *v5 )
        {
          v2 = *v5;
          v3 = 0;
        }
        v5 += 20;
        --v6;
      }
      while ( v6 );
    }
    *a2 = v2;
  }
  return v3;
}
