/*
 * XREFs of GetNextWchar @ 0x1800F56B4
 * Callers:
 *     RtlGenerate8dot3Name @ 0x1800F5810 (RtlGenerate8dot3Name.c)
 * Callees:
 *     RtlIsValidOemCharacter @ 0x1800F5E60 (RtlIsValidOemCharacter.c)
 */

__int64 __fastcall GetNextWchar(unsigned __int16 *a1, unsigned int *a2, char a3, char a4)
{
  unsigned int v4; // edi
  unsigned __int16 v8; // r10
  __int64 v9; // r14
  __int64 v10; // rax
  unsigned int v11; // ebx
  int v12; // eax
  unsigned __int16 v14; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a1 >> 1;
  v8 = 0;
  if ( *a2 >= v4 )
    return v8;
  v9 = *((_QWORD *)a1 + 1);
  while ( 1 )
  {
    v10 = *a2;
    v11 = v10 + 1;
    v14 = *(_WORD *)(v9 + 2 * v10);
    v8 = v14;
    *a2 = v10 + 1;
    if ( v8 <= 0x20u )
      goto LABEL_10;
    if ( v8 >= 0x7Fu )
    {
      if ( !a4 || !(unsigned __int8)RtlIsValidOemCharacter(&v14) )
        goto LABEL_10;
      v8 = v14;
    }
    if ( v8 != 46 )
      break;
    if ( !a3 )
      goto LABEL_13;
LABEL_10:
    v8 = 0;
    if ( v11 >= v4 )
      return v8;
  }
  if ( v8 >= 0x80u )
    goto LABEL_15;
LABEL_13:
  v12 = RtlFatIllegalTable[(unsigned __int64)v8 >> 5];
  if ( _bittest(&v12, v8 & 0x1F) )
    v8 = 95;
LABEL_15:
  if ( (unsigned __int16)(v8 - 97) <= 0x19u )
    v8 -= 32;
  return v8;
}
