/*
 * XREFs of EnableHwpInterrupt @ 0x1C00014B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 EnableHwpInterrupt()
{
  unsigned __int64 v0; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v2; // [rsp+8h] [rbp+8h]

  v0 = __readmsr(0x773u);
  HIDWORD(v2) = HIDWORD(v0);
  LODWORD(v2) = v0 & 0xFFFFFFFC | 1;
  result = v2;
  __writemsr(0x773u, v2);
  return result;
}
