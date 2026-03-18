/*
 * XREFs of sub_140489FD8 @ 0x140489FD8
 * Callers:
 *     WbGetWarbirdEncryptionSegment @ 0x14048A364 (WbGetWarbirdEncryptionSegment.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     sub_14048A48C @ 0x14048A48C (sub_14048A48C.c)
 *     WbAlloc @ 0x14050F678 (WbAlloc.c)
 */

__int64 __fastcall sub_140489FD8(__int64 a1, _QWORD *a2)
{
  int v4; // esi

  v4 = WbAlloc(0x48uLL);
  if ( v4 >= 0 )
  {
    memset(0LL, 0, 0x48uLL);
    MEMORY[0] = 1LL;
    MEMORY[8] = 0LL;
    MEMORY[0x10] = 0LL;
    MEMORY[0x18] = *(_DWORD *)(a1 + 8);
    MEMORY[0x20] = *(_QWORD *)a1;
    *a2 = 0LL;
  }
  sub_14048A48C(0LL);
  return (unsigned int)v4;
}
