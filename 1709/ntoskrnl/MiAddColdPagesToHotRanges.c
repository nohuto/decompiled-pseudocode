/*
 * XREFs of MiAddColdPagesToHotRanges @ 0x14022A2C8
 * Callers:
 *     MiInsertLargePageInFreeOrZeroList @ 0x14004DAD0 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiGet64KPage @ 0x1400C4A90 (MiGet64KPage.c)
 * Callees:
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 *     HvlNotifyPageHeat @ 0x140294980 (HvlNotifyPageHeat.c)
 */

__int64 __fastcall MiAddColdPagesToHotRanges(unsigned int *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  __int64 result; // rax
  __int64 *v9; // r14
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rcx
  __int64 v12; // r10
  __int64 v13; // r9
  __int64 v14; // rcx

  v5 = ((unsigned __int64)a1 + 15) & 0xFFFFFFFFFFFFFFF8uLL;
  v6 = a3;
  result = 48 * a3 + 16;
  if ( a3 < a4 )
  {
    v9 = (__int64 *)(48 * a3 - 0x57FFFFFFFF0LL);
    v10 = a3 << 12;
    do
    {
      result = MiGetPteTimeStamp(*v9, a2, a3);
      if ( result == 4294967293LL )
      {
        a2 = a1[1];
        if ( !(_DWORD)a2
          || (result = (unsigned int)(a2 - 1), v11 = *(_QWORD *)(v5 + 8 * result), v12 = result, (v11 & 0xC00) != 0)
          || (result = *(_QWORD *)(v5 + 8 * result) & 0x3FFLL, result == 1023) )
        {
LABEL_11:
          *(_QWORD *)(v5 + 8 * a2) = v10;
          if ( ++a1[1] == 16 )
          {
            result = HvlNotifyPageHeat(*a1, 16LL, v5);
            a1[1] = 0;
          }
          goto LABEL_13;
        }
        v13 = result + 1;
        a3 = v11 >> 12;
        if ( v6 == (v11 >> 12) + result + 1 )
        {
          result = v11 ^ (v13 ^ v11) & 0x3FF;
          *(_QWORD *)(v5 + 8 * v12) = result;
        }
        else
        {
          result = a3 - 1;
          if ( v6 != a3 - 1 )
            goto LABEL_11;
          *(_QWORD *)(v5 + 8 * v12) = v10;
          v14 = a1[1] - 1;
          result = (*(_DWORD *)(v5 + 8 * v14) ^ (unsigned int)v13) & 0x3FFLL;
          *(_QWORD *)(v5 + 8 * v14) ^= result;
        }
      }
LABEL_13:
      ++v6;
      v10 += 4096LL;
      v9 += 6;
    }
    while ( v6 < a4 );
  }
  return result;
}
