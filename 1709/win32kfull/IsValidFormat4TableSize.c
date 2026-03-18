/*
 * XREFs of IsValidFormat4TableSize @ 0x1C022762C
 * Callers:
 *     bVerifyMsftTable @ 0x1C022A17C (bVerifyMsftTable.c)
 *     bVerifyMsftTableGeneral @ 0x1C022A350 (bVerifyMsftTableGeneral.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsValidFormat4TableSize(_WORD *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r10
  unsigned int v6; // r15d
  unsigned __int16 v8; // r8
  unsigned __int16 v9; // r8
  int v10; // r14d
  _WORD *v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rdi
  unsigned __int16 v14; // r10
  __int64 v15; // rdi
  __int64 v16; // rsi
  unsigned int v17; // ebp
  unsigned int v18; // ecx
  unsigned __int16 v19; // bx

  v5 = a3;
  v6 = 0;
  if ( __ROR2__(*a1, 8) != 4 )
    return 0LL;
  if ( a4 - a3 < 8 )
    return 0LL;
  v8 = __ROR2__(a1[3], 8);
  if ( !v8 )
    return 0LL;
  if ( (v8 & 1) != 0 )
    return 0LL;
  v9 = v8 >> 1;
  if ( (unsigned int)v5 > -17 - 8 * (unsigned int)v9 )
    return 0LL;
  v10 = 6 * v9 + v5 + 16;
  if ( 2 * (unsigned int)v9 + v10 > a4 )
    return 0LL;
  v11 = (_WORD *)(v5 + 2 * (unsigned int)v9 + a2 + 16);
  v12 = v5 + a2 + 14;
  v13 = v5 + 6 * (unsigned int)v9 + a2 + 16;
  if ( v11[v9 - 1] == 0xFFFF && v9 > 1u )
    --v9;
  v14 = 0;
  if ( v9 )
  {
    v15 = v13 - (_QWORD)v11;
    v16 = v12 - (_QWORD)v11;
    while ( 1 )
    {
      v17 = v6 + 1;
      v18 = (unsigned __int16)__ROR2__(*v11, 8);
      v19 = __ROR2__(*(_WORD *)((char *)v11 + v15), 8);
      if ( v18 >= v6 )
        v17 = v18;
      v6 = (unsigned __int16)__ROR2__(*(_WORD *)((char *)v11 + v16), 8);
      if ( v19 )
      {
        if ( v10 + v19 + 2 + 2 * (v6 + v14 - v17) > a4 )
          break;
      }
      ++v14;
      ++v11;
      if ( v14 >= v9 )
        return 1LL;
    }
    return 0LL;
  }
  return 1LL;
}
