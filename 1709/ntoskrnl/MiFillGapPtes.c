/*
 * XREFs of MiFillGapPtes @ 0x14014BE54
 * Callers:
 *     MiFillGapAddresses @ 0x14014BDC0 (MiFillGapAddresses.c)
 *     MiFillGapPtes @ 0x14014BE54 (MiFillGapPtes.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiFillGapPtes @ 0x14014BE54 (MiFillGapPtes.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiFillGapPtes(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned int a5)
{
  unsigned __int64 v6; // rbx
  __int64 v8; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // r8d
  unsigned __int64 v13; // rcx
  int v14; // [rsp+50h] [rbp+18h]

  v14 = a3;
  v6 = a1;
  v8 = a5;
  if ( a1 < *(_QWORD *)(a3 + 16LL * a5) )
    v6 = *(_QWORD *)(a3 + 16LL * a5);
  result = *(_QWORD *)(a3 + 16LL * a5 + 8);
  if ( a2 > result )
    a2 = *(_QWORD *)(a3 + 16LL * a5 + 8);
  if ( v6 <= a2 )
  {
    v10 = 0xFFFFF6FB7DBED7F8uLL;
    do
    {
      result = *(_QWORD *)v6;
      if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= v10 )
      {
        result = MiReadPteShadow(v6, *(_QWORD *)v6);
        LODWORD(a3) = v14;
        v8 = a5;
      }
      if ( (result & 1) != 0 )
      {
        if ( !a5 || (result & 0x80u) != 0LL )
          goto LABEL_21;
        result = MiFillGapPtes(
                   (__int64)(v6 << 25) >> 16,
                   (unsigned int)((__int64)(v6 << 25) >> 16) + 4088,
                   a3,
                   (_DWORD)a4,
                   a5 - 1);
      }
      else
      {
        if ( a5 )
        {
          v11 = a4[v8];
          v12 = -1476395004;
          v13 = 0LL;
        }
        else
        {
          v11 = *a4;
          v12 = 536870913;
          v13 = v6;
        }
        result = MiMakeValidPte(v13, v11, v12);
        *(_QWORD *)v6 = result;
        v10 = 0xFFFFF6FB7DBED7F8uLL;
        if ( v6 < 0xFFFFF6FB7DBED000uLL || v6 > 0xFFFFF6FB7DBED7F8uLL )
          goto LABEL_21;
        result = MiWritePteShadow(v6, result);
      }
      v10 = 0xFFFFF6FB7DBED7F8uLL;
LABEL_21:
      LODWORD(a3) = v14;
      v6 += 8LL;
      v8 = a5;
    }
    while ( v6 <= a2 );
  }
  return result;
}
