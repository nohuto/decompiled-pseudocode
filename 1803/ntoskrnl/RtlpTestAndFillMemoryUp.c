/*
 * XREFs of RtlpTestAndFillMemoryUp @ 0x1402902AC
 * Callers:
 *     RtlpGenericInverseCouplingWorker @ 0x14028FA18 (RtlpGenericInverseCouplingWorker.c)
 *     RtlpGenericMATSPlusWorker @ 0x14028FCDC (RtlpGenericMATSPlusWorker.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpTestAndFillMemoryUp(int a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // rax

  v3 = a3 + 1024;
  while ( 1 )
  {
    if ( a3 >= v3 )
      return 1;
    if ( *a3 != a1 )
      break;
    *a3++ = a2;
  }
  return 0;
}
