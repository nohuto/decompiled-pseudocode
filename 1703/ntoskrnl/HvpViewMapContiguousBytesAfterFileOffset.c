/*
 * XREFs of HvpViewMapContiguousBytesAfterFileOffset @ 0x140676094
 * Callers:
 *     HvViewMapCopyFromFileOffset @ 0x1401E0DE4 (HvViewMapCopyFromFileOffset.c)
 *     HvpViewMapPinForFileOffset @ 0x1401E10D0 (HvpViewMapPinForFileOffset.c)
 *     HvpViewMapUnpinForFileOffset @ 0x1401E12D0 (HvpViewMapUnpinForFileOffset.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpViewMapContiguousBytesAfterFileOffset(__int64 a1, unsigned int a2)
{
  return *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * (HIBYTE(a2) & 0x7F)) + 32LL * ((a2 >> 18) & 0x3F) + 24)
       - (a2 & 0x3FFFF);
}
