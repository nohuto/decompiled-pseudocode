/*
 * XREFs of RtlpHpSegPageRangeHandleCommit @ 0x1800484A0
 * Callers:
 *     RtlpHpSegPageRangeCommit @ 0x180048360 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegPageRangeDecommit @ 0x18004A1DC (RtlpHpSegPageRangeDecommit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegPageRangeHandleCommit(__int64 a1, __int64 a2, int *a3, _DWORD *a4, int a5)
{
  int *v5; // r12
  unsigned __int64 v7; // rbx
  int v8; // ebp
  unsigned int v9; // edi
  char v10; // cl
  int v11; // r11d
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  unsigned int v15; // r14d
  unsigned int v16; // edx
  unsigned int v17; // r8d
  int v18; // r9d
  unsigned __int64 v19; // rsi
  int v20; // r8d
  unsigned __int64 v21; // rsi
  unsigned int v22; // r15d
  bool v23; // zf
  unsigned int v24; // ecx
  __int64 result; // rax
  unsigned int v26; // r9d
  int v27; // ecx
  unsigned int v28; // r8d
  unsigned int v29; // r9d
  unsigned int v30; // ecx
  unsigned int v31; // edx

  v5 = a3;
  v7 = (unsigned int)*a3;
  v8 = -1;
  v9 = 1 << *(_BYTE *)(a1 + 9);
  v10 = *(_BYTE *)(a1 + 9);
  v11 = 0;
  v12 = v7 >> v10;
  v13 = v7 >> v10 << v10;
  v14 = a2 + 32 * v12;
  v15 = *a3 & (v9 - 1);
  v16 = 0;
  v17 = v15 + *a4 - 1;
  v18 = v17 & (v9 - 1);
  v19 = (unsigned __int64)v17 >> v10;
  v20 = -1;
  v21 = v14 + 32 * v19;
  v22 = v18 + 1;
  if ( v15 )
  {
    v29 = *(unsigned __int8 *)(v14 + 25);
    v30 = v9;
    if ( v14 == v21 )
      v30 = v22;
    if ( a5 > 1 || v29 >= v30 )
    {
      if ( a5 != 2 || v29 <= v15 )
      {
LABEL_44:
        v14 += 32LL;
        LODWORD(v13) = v9 + v13;
        goto LABEL_2;
      }
      v31 = v15;
      v30 = *(unsigned __int8 *)(v14 + 25);
    }
    else
    {
      v31 = v30;
      v15 = *(unsigned __int8 *)(v14 + 25);
    }
    v5 = a3;
    v20 = v13 + v30;
    v16 = v31 - v29;
    v8 = v13 + v15;
    if ( v16 && a5 >= 1 )
      *(_BYTE *)(v14 + 25) = v29 + v16;
    goto LABEL_44;
  }
LABEL_2:
  v23 = v14 == v21;
  if ( v14 < v21 )
  {
    while ( 1 )
    {
      v26 = *(unsigned __int8 *)(v14 + 25);
      v27 = 0;
      if ( a5 <= 1 && v26 < v9 )
        break;
      if ( a5 == 2 && *(_BYTE *)(v14 + 25) )
      {
        v28 = *(unsigned __int8 *)(v14 + 25);
        if ( v8 == -1 )
          v8 = v13;
        v27 = -v26;
        goto LABEL_30;
      }
LABEL_24:
      v16 += v27;
      v14 += 32LL;
      LODWORD(v13) = v9 + v13;
      v23 = v14 == v21;
      if ( v14 >= v21 )
        goto LABEL_3;
    }
    if ( v8 == -1 )
      v8 = v26 + v13;
    v28 = v9;
    v27 = v9 - v26;
LABEL_30:
    v20 = v13 + v28;
    if ( v27 && a5 >= 1 )
      *(_BYTE *)(v14 + 25) = v27 + v26;
    goto LABEL_24;
  }
LABEL_3:
  if ( !v23 )
    goto LABEL_13;
  v24 = *(unsigned __int8 *)(v14 + 25);
  if ( v24 < v22 && a5 <= 1 )
  {
    if ( v8 == -1 )
      v8 = v24 + v13;
    v11 = v22 - v24;
LABEL_9:
    v20 = v13 + v22;
    if ( v11 && a5 >= 1 )
      *(_BYTE *)(v14 + 25) = v11 + v24;
    goto LABEL_12;
  }
  if ( a5 == 2 && *(_BYTE *)(v14 + 25) )
  {
    v22 = *(unsigned __int8 *)(v14 + 25);
    if ( v8 == -1 )
      v8 = v13;
    v11 = -v24;
    goto LABEL_9;
  }
LABEL_12:
  v16 += v11;
LABEL_13:
  result = v16;
  if ( v16 )
  {
    *v5 = v8;
    *a4 = v20 - v8;
  }
  return result;
}
