/*
 * XREFs of RaspLoadBearings @ 0x14013D88C
 * Callers:
 *     RaspGetUnscaledGlyphData @ 0x14013CDF0 (RaspGetUnscaledGlyphData.c)
 * Callees:
 *     FioFwReadUshortAtOffset @ 0x14013DA8C (FioFwReadUshortAtOffset.c)
 *     FioFwReadBytesAtOffset @ 0x14013DEA8 (FioFwReadBytesAtOffset.c)
 */

__int64 __fastcall RaspLoadBearings(__int64 a1, unsigned int a2, __int64 a3, int *a4)
{
  unsigned int v4; // ebp
  __int64 result; // rax
  unsigned __int16 v10; // ax
  int v11; // esi
  __int16 v12; // di
  int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // r10d
  __int64 v17; // r8
  __int64 v18; // rdx
  unsigned int v19; // r14d
  __int16 v20; // [rsp+60h] [rbp+8h] BYREF
  __int16 v21; // [rsp+62h] [rbp+Ah]
  __int16 v22; // [rsp+68h] [rbp+10h] BYREF

  v4 = *(unsigned __int16 *)(a1 + 88);
  v22 = 0;
  if ( a2 >= v4 )
  {
    v19 = *(_DWORD *)(a1 + 68) - 4 + 4 * v4;
    result = FioFwReadBytesAtOffset(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL), v19, 4LL, &v20);
    if ( (int)result < 0 )
      return result;
    v11 = (unsigned __int16)__ROR2__(v20, 8);
    result = FioFwReadUshortAtOffset(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL), v19 + 2 * (a2 - v4 + 2), &v22);
    if ( (int)result < 0 )
      return result;
    v12 = v22;
  }
  else
  {
    result = FioFwReadBytesAtOffset(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL), *(_DWORD *)(a1 + 68) + 4 * a2, 4LL, &v20);
    if ( (int)result < 0 )
      return result;
    v10 = __ROR2__(v20, 8);
    v11 = v10;
    v12 = __ROR2__(v21, 8);
    if ( !v10 )
    {
      result = FioFwReadBytesAtOffset(
                 *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
                 *(_DWORD *)(a1 + 68) - 4 + 4 * v4,
                 4LL,
                 &v20);
      if ( (int)result < 0 )
        return result;
      v11 = (unsigned __int16)__ROR2__(v20, 8);
    }
  }
  if ( v12 < 0 )
    v12 = 0;
  v13 = *(_DWORD *)(a3 + 18);
  v14 = *(unsigned __int16 *)(a3 + 24);
  v15 = *(_QWORD *)(a3 + 50);
  v16 = v12 + *(_DWORD *)(a3 + 10) - v13;
  if ( v11 >= v16 )
    v16 = v11;
  *(_DWORD *)(v15 + 4 * v14) = v13 - v12;
  *a4 = v16;
  *(_DWORD *)(v15 + 4 * v14 + 4) = *(_DWORD *)(a3 + 18) + v16 - v12;
  v17 = *(unsigned __int16 *)(a3 + 24);
  v18 = *(_QWORD *)(a3 + 58);
  *(_DWORD *)(v18 + 4 * v17) = *(__int16 *)(a1 + 82) + *(__int16 *)(a1 + 84);
  result = 0LL;
  *(_DWORD *)(v18 + 4 * v17 + 4) = *(__int16 *)(a1 + 82) + *(__int16 *)(a1 + 84);
  *(_WORD *)(a3 + 24) += 2;
  return result;
}
