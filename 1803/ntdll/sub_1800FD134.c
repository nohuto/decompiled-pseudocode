/*
 * XREFs of sub_1800FD134 @ 0x1800FD134
 * Callers:
 *     RtlSetHeapInformation @ 0x18007B300 (RtlSetHeapInformation.c)
 * Callees:
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800ECAC0 @ 0x1800ECAC0 (sub_1800ECAC0.c)
 *     sub_1800FD1A4 @ 0x1800FD1A4 (sub_1800FD1A4.c)
 *     sub_1800FD1F4 @ 0x1800FD1F4 (sub_1800FD1F4.c)
 */

__int64 __fastcall sub_1800FD134(__int64 a1)
{
  void *v1; // rdi
  unsigned __int16 v2; // bx
  HANDLE Buffer[13]; // [rsp+20h] [rbp-68h] BYREF

  v1 = *(void **)(a1 + 8);
  v2 = *(_WORD *)(a1 + 2);
  if ( v1 == (void *)-1LL )
  {
    if ( (v2 & 1) != 0 )
      sub_1800FD1F4();
    else
      sub_1800FD1A4();
    return 0LL;
  }
  else
  {
    memset(Buffer, 0, 0x58uLL);
    Buffer[10] = (HANDLE)v2;
    LODWORD(Buffer[3]) = 0x10000000;
    return sub_1800ECAC0(v1, Buffer);
  }
}
