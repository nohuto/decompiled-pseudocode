/*
 * XREFs of sub_1800F5D68 @ 0x1800F5D68
 * Callers:
 *     sub_180001F34 @ 0x180001F34 (sub_180001F34.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F5D68(__int64 a1, _WORD *a2, _QWORD *a3, unsigned int *a4, _BYTE *a5, _BYTE *a6)
{
  _WORD *v10; // rdx
  _WORD *v11; // r10
  __int64 result; // rax
  unsigned __int16 v13; // ax
  bool v14; // cc
  unsigned __int16 *v15; // r10
  unsigned int v16; // edx
  unsigned __int8 v17; // r9
  char v18; // al
  char v19; // r8
  char v20; // r8

  v10 = a2 - 1;
  v11 = v10;
  if ( (_WORD *)*a3 == v10 )
    return *a4;
  v13 = *v10 + 10240;
  v14 = v13 <= 0x7FFu;
  if ( v13 <= 0x7FFu )
  {
    if ( (_WORD *)*a3 == v10 - 1 )
      return *a4;
    v14 = v13 <= 0x7FFu;
  }
  if ( !v14 )
    v11 = a2;
  v15 = v11 - 1;
  v16 = *v15;
  if ( v16 - 55296 <= 0x7FF )
    v16 += (*(v15 - 1) - 55287) << 10;
  v17 = *(_BYTE *)(((__int64)(int)v16 >> 7) + *(_QWORD *)(a1 + 32));
  v18 = 0;
  if ( v17 )
  {
    v20 = *(_BYTE *)((v16 & 0x7F) + ((unsigned __int64)v17 << 7) + *(_QWORD *)(a1 + 40) - 128);
    v18 = v20 & 0x3F;
    v19 = v20 & 0xC0;
  }
  else
  {
    v19 = 0;
  }
  *a6 = v19;
  *a5 = v18;
  result = v16;
  *a3 = v15;
  *a4 = v16;
  return result;
}
