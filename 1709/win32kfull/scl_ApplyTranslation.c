/*
 * XREFs of scl_ApplyTranslation @ 0x1C02B7D8C
 * Callers:
 *     fsg_GridFit @ 0x1C02C1940 (fsg_GridFit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall scl_ApplyTranslation(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  int v6; // r10d
  int v8; // r11d
  int v9; // r8d
  __int16 v11; // dx
  __int64 v12; // rcx
  unsigned int v13; // r10d
  __int64 result; // rax
  int v15; // r11d
  __int64 v16; // r9

  v6 = (*(_DWORD *)(a2 + 8) + 512) >> 10;
  v8 = (*(_DWORD *)(a2 + 20) + 512) >> 10;
  v9 = 0;
  if ( a5 )
  {
    v6 *= 6;
    if ( a6 )
      v8 *= 5;
  }
  v11 = *(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1));
  v12 = (unsigned __int16)(v11 + 1);
  v13 = v6 - *(_DWORD *)(*(_QWORD *)a1 + 4 * v12);
  result = *(_QWORD *)(a1 + 8);
  v15 = v8 - *(_DWORD *)(result + 4 * v12);
  if ( a3 && !a4 )
  {
    if ( a5 )
      v13 = (v13 + 2) & 0xFFFFFFFC;
    else
      v13 = (v13 + 32) & 0xFFFFFFC0;
  }
  if ( (v13 || v15) && v11 != -9 )
  {
    v16 = 0LL;
    do
    {
      ++v9;
      *(_DWORD *)(*(_QWORD *)a1 + v16) += v13;
      *(_DWORD *)(v16 + *(_QWORD *)(a1 + 8)) += v15;
      v16 += 4LL;
      result = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 9);
    }
    while ( v9 < (int)result );
  }
  return result;
}
