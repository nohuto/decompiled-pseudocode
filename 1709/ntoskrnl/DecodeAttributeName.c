/*
 * XREFs of DecodeAttributeName @ 0x1407341FC
 * Callers:
 *     GetAttributeName @ 0x14073461C (GetAttributeName.c)
 *     LocalGetRelativeAttributeForString @ 0x140736660 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SddlpAlloc @ 0x14057C7AC (SddlpAlloc.c)
 *     GetDigitFromChar2 @ 0x1407349BC (GetDigitFromChar2.c)
 *     IsEncodedAttributeChar @ 0x140735E60 (IsEncodedAttributeChar.c)
 */

__int64 __fastcall DecodeAttributeName(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // r15d
  _WORD *v7; // rsi
  unsigned int v8; // edi
  unsigned int v9; // r14d
  unsigned int v10; // r10d
  unsigned int v11; // r12d
  int v12; // edx
  int v13; // r8d
  unsigned int v14; // ecx
  __int16 v15; // r9
  unsigned int v16; // r8d
  unsigned __int8 v18; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int8 v19; // [rsp+21h] [rbp-Fh] BYREF
  __int16 v20; // [rsp+22h] [rbp-Eh]
  int v21; // [rsp+24h] [rbp-Ch]
  int v22; // [rsp+28h] [rbp-8h]
  int v23; // [rsp+2Ch] [rbp-4h]
  unsigned __int8 v24; // [rsp+70h] [rbp+40h] BYREF
  _QWORD *v25; // [rsp+80h] [rbp+50h]
  unsigned __int8 v26; // [rsp+88h] [rbp+58h] BYREF

  v25 = a3;
  v3 = 0;
  v21 = 0;
  v24 = 0;
  v26 = 0;
  v18 = 0;
  v19 = 0;
  if ( !a1 || !a2 || !a3 )
    return 87LL;
  if ( (a2 & 1) != 0 )
    return 1336;
  v6 = 2;
  v7 = SddlpAlloc(a2 + 2LL);
  if ( !v7 )
    return 8;
  v8 = a2 >> 1;
  v9 = 0;
  v10 = v8;
  if ( !v8 )
  {
LABEL_20:
    *v25 = v7;
    return v3;
  }
  v11 = 4;
  v12 = 0;
  v13 = 3;
  v14 = 1;
  v23 = 3;
  v22 = 1;
  while ( 1 )
  {
    v15 = *(_WORD *)(a1 + 2LL * v9);
    if ( v15 != 37 )
    {
      v7[v12] = v15;
      goto LABEL_19;
    }
    if ( v11 >= v10 )
      break;
    if ( !(unsigned __int8)GetDigitFromChar2(*(unsigned __int16 *)(a1 + 2LL * v14), &v24) )
      break;
    if ( !(unsigned __int8)GetDigitFromChar2(*(unsigned __int16 *)(a1 + 2LL * v6), &v26) )
      break;
    if ( !(unsigned __int8)GetDigitFromChar2(*(unsigned __int16 *)(a1 + 2LL * v16), &v18) )
      break;
    if ( !(unsigned __int8)GetDigitFromChar2(*(unsigned __int16 *)(a1 + 2LL * v11), &v19) )
      break;
    v20 = v19 | (unsigned __int16)(16 * (v18 | (unsigned __int16)(16 * (v26 | (unsigned __int16)(16 * v24)))));
    if ( !(unsigned __int8)IsEncodedAttributeChar() )
      break;
    v9 += 4;
    v12 = v21;
    v6 += 4;
    v10 = v8;
    v13 = v23 + 4;
    v7[v21] = v20;
    v14 = v22 + 4;
    v11 += 4;
LABEL_19:
    ++v14;
    ++v13;
    ++v12;
    v22 = v14;
    ++v9;
    v23 = v13;
    ++v6;
    v21 = v12;
    ++v11;
    if ( v9 >= v8 )
      goto LABEL_20;
  }
  ExFreePoolWithTag(v7, 0);
  return 1336;
}
