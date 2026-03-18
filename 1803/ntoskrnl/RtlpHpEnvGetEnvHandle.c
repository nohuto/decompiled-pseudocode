/*
 * XREFs of RtlpHpEnvGetEnvHandle @ 0x1402BD7C4
 * Callers:
 *     ExGetHeapFromVA @ 0x1402BD6B4 (ExGetHeapFromVA.c)
 * Callees:
 *     <none>
 */

__int128 *__fastcall RtlpHpEnvGetEnvHandle(__int128 *a1, int a2, int a3)
{
  __int128 *result; // rax
  __int128 v4; // xmm0

  if ( a3 == 2 )
  {
    result = a1;
    *a1 = *(_OWORD *)(*(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3424) + 12496LL);
  }
  else
  {
    result = a1;
    if ( a2 == 1 )
      v4 = xmmword_1403EFA20;
    else
      v4 = xmmword_1403EFA30;
    *a1 = v4;
  }
  return result;
}
