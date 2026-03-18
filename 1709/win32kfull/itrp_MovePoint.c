/*
 * XREFs of itrp_MovePoint @ 0x1C02D0A54
 * Callers:
 *     InvokeMovePoint @ 0x1C02C939C (InvokeMovePoint.c)
 * Callees:
 *     CompDiv @ 0x1C02B6F58 (CompDiv.c)
 */

__int64 __fastcall itrp_MovePoint(_QWORD *a1, int a2, int a3)
{
  __int16 v3; // di
  __int64 result; // rax
  __int16 v6; // si
  __int64 v7; // rbp
  __int64 v8; // r14

  v3 = word_1C0327CB8;
  result = (unsigned __int16)dword_1C0327C6C;
  v6 = HIWORD(dword_1C0327C6C);
  v7 = a3;
  v8 = a2;
  if ( word_1C0327CB8 == 0x4000 )
  {
    if ( (_WORD)dword_1C0327C6C )
    {
      *(_DWORD *)(*a1 + 4LL * a2) += ((unsigned __int64)(a3 * (__int64)(__int16)dword_1C0327C6C) >> 32 << 18)
                                   + ((((unsigned int)(a3 * (__int16)dword_1C0327C6C) >> 13) + 1) >> 1);
      result = a1[9];
      *(_BYTE *)(result + a2) |= 1u;
    }
    if ( v6 )
    {
      *(_DWORD *)(a1[1] + 4LL * a2) += ((unsigned __int64)(a3 * (__int64)v6) >> 32 << 18)
                                     + ((((unsigned int)(a3 * v6) >> 13) + 1) >> 1);
      result = a1[9];
      *(_BYTE *)(result + a2) |= 2u;
    }
  }
  else
  {
    if ( (_WORD)dword_1C0327C6C )
    {
      if ( word_1C0327CB8 == (_WORD)dword_1C0327C6C )
        *(_DWORD *)(*a1 + 4LL * a2) += a3;
      else
        *(_DWORD *)(*a1 + 4LL * a2) += CompDiv(word_1C0327CB8, a3 * (__int64)(__int16)dword_1C0327C6C);
      result = a1[9];
      *(_BYTE *)(result + v8) |= 1u;
    }
    if ( v6 )
    {
      if ( v3 == v6 )
        *(_DWORD *)(a1[1] + 4 * v8) += v7;
      else
        *(_DWORD *)(a1[1] + 4 * v8) += CompDiv(v3, v7 * v6);
      result = a1[9];
      *(_BYTE *)(result + v8) |= 2u;
    }
  }
  return result;
}
