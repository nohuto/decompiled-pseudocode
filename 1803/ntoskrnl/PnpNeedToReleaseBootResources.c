/*
 * XREFs of PnpNeedToReleaseBootResources @ 0x14062BF80
 * Callers:
 *     IopReleaseFilteredBootResources @ 0x14062BE68 (IopReleaseFilteredBootResources.c)
 * Callees:
 *     PnpIsRangeWithin @ 0x14062C0EC (PnpIsRangeWithin.c)
 */

__int64 __fastcall PnpNeedToReleaseBootResources(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int *v4; // rax
  unsigned int v5; // ebp
  _DWORD *v6; // rax
  unsigned int v7; // r15d
  _DWORD *v8; // rdi
  unsigned int v9; // r12d
  unsigned __int8 v10; // si
  __int64 v11; // rax
  _DWORD *v12; // r14
  int v13; // r13d
  unsigned int v14; // ecx
  __int64 v15; // rax
  int v17; // [rsp+20h] [rbp-58h]
  unsigned int v18; // [rsp+24h] [rbp-54h]
  unsigned int v19; // [rsp+2Ch] [rbp-4Ch]
  _DWORD *v20; // [rsp+88h] [rbp+10h]
  unsigned int v22; // [rsp+98h] [rbp+20h]

  v20 = a2;
  v3 = 0;
  *a3 = 0;
  if ( *a2 != 1 )
    return v3;
  v4 = *(unsigned int **)(a1 + 544);
  if ( !v4 )
    return v3;
  v5 = *v4;
  if ( !*v4 )
    return v3;
  v6 = v4 + 1;
  v7 = 0;
  while ( 1 )
  {
    v8 = v6 + 4;
    v9 = 0;
    v19 = v6[3];
    if ( v19 )
      break;
LABEL_22:
    ++v7;
    v6 = v8;
    if ( v7 >= v5 )
      return v3;
  }
  while ( 1 )
  {
    v10 = *(_BYTE *)v8;
    v11 = 0LL;
    if ( !*(_BYTE *)v8 )
      goto LABEL_21;
    if ( v10 != 5 )
      break;
    v11 = (unsigned int)v8[1];
LABEL_21:
    ++v9;
    v8 = (_DWORD *)((char *)v8 + v11 + 20);
    if ( v9 >= v19 )
      goto LABEL_22;
  }
  if ( v10 >= 8u )
    goto LABEL_21;
  v12 = a2 + 5;
  v17 = 0;
  v13 = 1;
  v22 = 0;
  v14 = 0;
  v18 = a2[4];
  if ( !v18 )
    return 1;
  while ( 1 )
  {
    if ( *(_BYTE *)v12 == 5 )
    {
      v15 = (unsigned int)v12[1];
      goto LABEL_15;
    }
    if ( v10 == *(_BYTE *)v12 )
      break;
LABEL_14:
    v15 = 0LL;
LABEL_15:
    ++v14;
    v12 = (_DWORD *)((char *)v12 + v15 + 20);
    v22 = v14;
    if ( v14 >= v18 )
      goto LABEL_18;
  }
  v17 = 1;
  if ( !(unsigned int)PnpIsRangeWithin(v8, v12) )
  {
    v14 = v22;
    goto LABEL_14;
  }
  v13 = 0;
LABEL_18:
  if ( !v17 )
    return 1;
  if ( !v13 )
  {
    v11 = 0LL;
    a2 = v20;
    goto LABEL_21;
  }
  *a3 = 1;
  return v3;
}
