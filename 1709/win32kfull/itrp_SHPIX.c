/*
 * XREFs of itrp_SHPIX @ 0x1C02D3390
 * Callers:
 *     <none>
 * Callees:
 *     itrp_SHP_Common @ 0x1C02D3484 (itrp_SHP_Common.c)
 */

__int64 __fastcall itrp_SHPIX(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  int v3; // edx
  int v4; // r9d
  __int64 result; // rax

  if ( (qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327C90 + 424)) == *(_QWORD *)(qword_1C0327C90 + 432)
    && (v1 = qword_1C0327C78,
        dword_1C0327CB0 + 2LL <= (unsigned __int64)((qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2)) )
  {
    qword_1C0327C78 -= 4LL;
    v2 = *(int *)(v1 - 4);
    v3 = 0;
    if ( (_WORD)dword_1C0327C6C )
      v4 = ((unsigned __int64)(v2 * (__int16)dword_1C0327C6C) >> 32 << 18)
         + ((((unsigned int)(v2 * (__int16)dword_1C0327C6C) >> 13) + 1) >> 1);
    else
      v4 = 0;
    if ( HIWORD(dword_1C0327C6C) )
      v3 = ((unsigned __int64)(v2 * SHIWORD(dword_1C0327C6C)) >> 32 << 18)
         + ((((unsigned int)(v2 * SHIWORD(dword_1C0327C6C)) >> 13) + 1) >> 1);
    LOBYTE(v2) = 1;
    return itrp_SHP_Common(a1, -1, v2, v4, v3);
  }
  else
  {
    result = qword_1C0327CE8;
    dword_1C0327CE0 = 4368;
  }
  return result;
}
