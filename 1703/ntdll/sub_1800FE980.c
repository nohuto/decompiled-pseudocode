/*
 * XREFs of sub_1800FE980 @ 0x1800FE980
 * Callers:
 *     RtlSetHeapInformation @ 0x18007EF50 (RtlSetHeapInformation.c)
 * Callees:
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800F096C @ 0x1800F096C (sub_1800F096C.c)
 *     sub_1800FE9E4 @ 0x1800FE9E4 (sub_1800FE9E4.c)
 *     sub_1800FEA34 @ 0x1800FEA34 (sub_1800FEA34.c)
 */

__int64 __fastcall sub_1800FE980(__int64 a1)
{
  void *v2; // rcx
  HANDLE Buffer[13]; // [rsp+20h] [rbp-68h] BYREF

  if ( *(_QWORD *)(a1 + 8) == -1LL )
  {
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      sub_1800FEA34();
    else
      sub_1800FE9E4();
    return 0LL;
  }
  else
  {
    memset(Buffer, 0, 0x58uLL);
    v2 = *(void **)(a1 + 8);
    Buffer[10] = (HANDLE)*(unsigned __int16 *)(a1 + 2);
    LODWORD(Buffer[3]) = 0x10000000;
    return sub_1800F096C(v2, Buffer);
  }
}
