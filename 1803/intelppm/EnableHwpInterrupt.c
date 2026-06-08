/*
 * XREFs of EnableHwpInterrupt @ 0x1C0006B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 EnableHwpInterrupt()
{
  int v0; // eax
  unsigned __int64 result; // rax
  unsigned __int64 v2; // [rsp+8h] [rbp+8h]

  v2 = __readmsr(0x773u);
  v0 = v2 | 1;
  if ( BYTE5(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
    v0 = v2 | 5;
  LODWORD(v2) = v0 & 0xFFFFFFFD;
  result = v2;
  __writemsr(0x773u, v2);
  return result;
}
