/*
 * XREFs of KiEnumerateNextProcessorNumber @ 0x140045A70
 * Callers:
 *     PpmParkSteerInterrupts @ 0x140045AD0 (PpmParkSteerInterrupts.c)
 *     KeGenericProcessorCallback @ 0x1401117A4 (KeGenericProcessorCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiEnumerateNextProcessorNumber(__int64 a1, unsigned __int16 **a2)
{
  unsigned __int16 *v2; // r8
  unsigned int v4; // r9d
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r8
  __int64 result; // rax
  __int64 v8; // rax
  unsigned __int16 *v9; // rcx

  v2 = *a2;
  if ( *a2 )
    v4 = *v2;
  else
    v4 = *((unsigned __int16 *)a2 + 8) + 1;
  if ( a2[1] )
  {
LABEL_4:
    v5 = (unsigned __int64)a2[1];
    _BitScanForward64(&v6, v5);
    *(_BYTE *)(a1 + 2) = v6;
    *(_WORD *)a1 = *((_WORD *)a2 + 8);
    result = 0LL;
    a2[1] = (unsigned __int16 *)(v5 & ~(1LL << v6));
  }
  else
  {
    while ( 1 )
    {
      v8 = (unsigned __int16)++*((_WORD *)a2 + 8);
      if ( (unsigned int)v8 >= v4 )
        return 3221226021LL;
      v9 = *(unsigned __int16 **)&v2[4 * v8 + 4];
      a2[1] = v9;
      if ( v9 )
        goto LABEL_4;
    }
  }
  return result;
}
