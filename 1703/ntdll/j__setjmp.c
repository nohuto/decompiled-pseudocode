/*
 * XREFs of j__setjmp @ 0x1800AACD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl j__setjmp(jmp_buf Buf)
{
  return setjmp(Buf);
}
