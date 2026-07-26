/*
 * XREFs of ndisMSetTimestampOnNblChainTx @ 0x1C004DE98
 * Callers:
 *     ndisMSendNBLToMiniportInternal @ 0x1C0005A50 (ndisMSendNBLToMiniportInternal.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER __fastcall ndisMSetTimestampOnNblChainTx(LARGE_INTEGER *a1, char a2)
{
  LARGE_INTEGER result; // rax
  char v3; // r8

  result.QuadPart = 0LL;
  v3 = 0;
  if ( !a2 )
  {
    result = KeQueryPerformanceCounter(0LL);
    v3 = 1;
  }
  while ( a1 )
  {
    if ( a2 )
    {
      if ( (a1[16].LowPart & 0x10000) == 0 )
        goto LABEL_8;
      if ( !v3 )
      {
        result = KeQueryPerformanceCounter(0LL);
        v3 = 1;
      }
    }
    a1[44] = result;
LABEL_8:
    a1 = (LARGE_INTEGER *)a1->QuadPart;
  }
  return result;
}
