/*
 * XREFs of scl_IncrementChildElement @ 0x1C02BE788
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C02C7254 (fsg_ExecuteGlyph.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall scl_IncrementChildElement(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r11
  _QWORD *v8; // rdx
  __int64 v9; // rcx

  result = *(unsigned __int16 *)(a2 + 80);
  if ( (_WORD)result )
  {
    v5 = 6LL;
    v6 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a2 + 64) + 2LL * ((__int16)result - 1)) + 1);
    v7 = a2 - a1;
    v8 = (_QWORD *)a1;
    do
    {
      *v8 = *(_QWORD *)((char *)v8 + v7) + 4 * v6;
      ++v8;
      --v5;
    }
    while ( v5 );
    *(_QWORD *)(a1 + 48) = v6 + *(_QWORD *)(a2 + 48);
    *(_QWORD *)(a1 + 72) = v6 + *(_QWORD *)(a2 + 72);
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 88) + *(__int16 *)(a2 + 80);
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 104) + 12 * v6;
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56) + 2LL * *(__int16 *)(a2 + 80);
    v9 = *(__int16 *)(a2 + 80);
    result = *(_QWORD *)(a2 + 64);
    *(_WORD *)(a1 + 80) = 0;
    *(_QWORD *)(a1 + 64) = result + 2 * v9;
  }
  else
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
    *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
    *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  }
  return result;
}
