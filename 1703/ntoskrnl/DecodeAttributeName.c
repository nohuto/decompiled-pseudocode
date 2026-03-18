/*
 * XREFs of DecodeAttributeName @ 0x1406FC80C
 * Callers:
 *     GetAttributeName @ 0x1406FCC24 (GetAttributeName.c)
 *     LocalGetRelativeAttributeForString @ 0x1406FEC78 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SddlpAlloc @ 0x14057FE50 (SddlpAlloc.c)
 *     GetDigitFromChar2 @ 0x1406FCFC4 (GetDigitFromChar2.c)
 *     IsEncodedAttributeChar @ 0x1406FE440 (IsEncodedAttributeChar.c)
 */

__int64 __fastcall DecodeAttributeName(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // r12d
  _WORD *v7; // rsi
  unsigned int v8; // edi
  unsigned int v9; // r14d
  unsigned int v10; // r15d
  int v11; // edx
  int v12; // r8d
  unsigned int v13; // ecx
  __int16 v14; // r9
  unsigned int v15; // r8d
  unsigned __int8 v17; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int8 v18; // [rsp+21h] [rbp-Fh] BYREF
  __int16 v19; // [rsp+22h] [rbp-Eh]
  int v20; // [rsp+24h] [rbp-Ch]
  int v21; // [rsp+28h] [rbp-8h]
  int v22; // [rsp+2Ch] [rbp-4h]
  unsigned __int8 v23; // [rsp+70h] [rbp+40h] BYREF
  _QWORD *v24; // [rsp+80h] [rbp+50h]
  unsigned __int8 v25; // [rsp+88h] [rbp+58h] BYREF

  v24 = a3;
  v3 = 0;
  v20 = 0;
  v23 = 0;
  v25 = 0;
  v17 = 0;
  v18 = 0;
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
  if ( !v8 )
  {
LABEL_20:
    *v24 = v7;
    return v3;
  }
  v10 = 4;
  v11 = 0;
  v12 = 3;
  v13 = 1;
  v22 = 3;
  v21 = 1;
  while ( 1 )
  {
    v14 = *(_WORD *)(a1 + 2LL * v9);
    if ( v14 != 37 )
    {
      v7[v11] = v14;
      goto LABEL_19;
    }
    if ( v10 >= v8 )
      break;
    if ( !(unsigned __int8)GetDigitFromChar2(*(unsigned __int16 *)(a1 + 2LL * v13), &v23) )
      break;
    if ( !(unsigned __int8)GetDigitFromChar2(*(unsigned __int16 *)(a1 + 2LL * v6), &v25) )
      break;
    if ( !(unsigned __int8)GetDigitFromChar2(*(unsigned __int16 *)(a1 + 2LL * v15), &v17) )
      break;
    if ( !(unsigned __int8)GetDigitFromChar2(*(unsigned __int16 *)(a1 + 2LL * v10), &v18) )
      break;
    v19 = v18 | (unsigned __int16)(16 * (v17 | (unsigned __int16)(16 * (v25 | (unsigned __int16)(16 * v23)))));
    if ( !(unsigned __int8)IsEncodedAttributeChar() )
      break;
    v9 += 4;
    v11 = v20;
    v6 += 4;
    v12 = v22 + 4;
    v7[v20] = v19;
    v13 = v21 + 4;
    v10 += 4;
LABEL_19:
    ++v13;
    ++v12;
    ++v11;
    v21 = v13;
    ++v9;
    v22 = v12;
    ++v6;
    v20 = v11;
    ++v10;
    if ( v9 >= v8 )
      goto LABEL_20;
  }
  v3 = 1336;
  ExFreePoolWithTag(v7, 0);
  return v3;
}
