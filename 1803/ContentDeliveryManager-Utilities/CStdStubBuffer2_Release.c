/*
 * XREFs of CStdStubBuffer2_Release @ 0x180057C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall CStdStubBuffer2_Release(IRpcStubBuffer *This)
{
  return NdrCStdStubBuffer2_Release(This, (IPSFactoryBuffer *)&gPFactory);
}
