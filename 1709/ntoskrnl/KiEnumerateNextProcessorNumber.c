/*
 * XREFs of KiEnumerateNextProcessorNumber @ 0x14008FD70
 * Callers:
 *     KiIntSteerCalculateDistribution @ 0x140002B90 (KiIntSteerCalculateDistribution.c)
 *     PopQueueTargetDpc @ 0x14008ECA4 (PopQueueTargetDpc.c)
 *     PpmParkDistributeUtility @ 0x14008F9F0 (PpmParkDistributeUtility.c)
 *     KeGenericProcessorCallback @ 0x1400A8F40 (KeGenericProcessorCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiEnumerateNextProcessorNumber(__int64 a1, unsigned __int16 **a2)
{
  unsigned __int16 *v2; // r8
  unsigned int v4; // r9d
  __int64 v5; // rax
  __int64 result; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r8
  unsigned __int16 *v9; // rcx

  v2 = *a2;
  if ( *a2 )
    v4 = *v2;
  else
    v4 = *((unsigned __int16 *)a2 + 8) + 1;
  if ( a2[1] )
  {
LABEL_7:
    v7 = (unsigned __int64)a2[1];
    _BitScanForward64(&v8, v7);
    *(_BYTE *)(a1 + 2) = v8;
    *(_WORD *)a1 = *((_WORD *)a2 + 8);
    result = 0LL;
    a2[1] = (unsigned __int16 *)(v7 & ~(1LL << v8));
  }
  else
  {
    while ( 1 )
    {
      v5 = (unsigned __int16)++*((_WORD *)a2 + 8);
      if ( (unsigned int)v5 >= v4 )
        return 3221226021LL;
      v9 = *(unsigned __int16 **)&v2[4 * v5 + 4];
      a2[1] = v9;
      if ( v9 )
        goto LABEL_7;
    }
  }
  return result;
}
