/*
 * XREFs of EtwpEventNameFilterSearch @ 0x14002D200
 * Callers:
 *     EtwpApplyEventNameFilter @ 0x14002CF40 (EtwpApplyEventNameFilter.c)
 * Callees:
 *     <none>
 */

char __fastcall EtwpEventNameFilterSearch(const char *a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v3; // r11
  unsigned __int8 *v6; // r10
  __int64 v7; // r9
  unsigned __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // r11d
  int v12; // r11d
  int v13; // r11d
  int v14; // r11d
  int v15; // r11d
  unsigned int v16; // ebx
  __int64 v17; // r11
  __int64 v18; // r10
  __int64 v19; // rdx
  int v21; // r11d
  __int64 v22; // [rsp+8h] [rbp+8h]

  v3 = a2;
  v6 = (unsigned __int8 *)a1;
  v7 = 314159LL;
  if ( a2 >= 8uLL )
  {
    v8 = (unsigned __int64)a2 >> 3;
    v3 = a2 - 8 * v8;
    do
    {
      v9 = v6[6] + 37 * (v6[5] + 37 * (v6[4] + 37 * (v6[3] + 37 * (v6[2] + 37 * (v6[1] + 37 * (*v6 + 37 * v7))))));
      v10 = v6[7];
      v6 += 8;
      v7 = v10 + 37 * v9;
      --v8;
    }
    while ( v8 );
  }
  if ( (unsigned __int64)(v3 - 1) <= 6 )
  {
    v11 = v3 - 1;
    if ( !v11 )
    {
LABEL_14:
      v7 = *v6 + 37 * v7;
      goto LABEL_15;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
LABEL_13:
      v7 = *v6++ + 37 * v7;
      goto LABEL_14;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
LABEL_12:
      v7 = *v6++ + 37 * v7;
      goto LABEL_13;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
LABEL_11:
      v7 = *v6++ + 37 * v7;
      goto LABEL_12;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
LABEL_10:
      v7 = *v6++ + 37 * v7;
      goto LABEL_11;
    }
    v21 = v15 - 1;
    if ( !v21 )
    {
LABEL_22:
      v7 = *v6++ + 37 * v7;
      goto LABEL_10;
    }
    if ( v21 == 1 )
    {
      v7 = *v6++ + 37 * v7;
      goto LABEL_22;
    }
  }
LABEL_15:
  v16 = *(_DWORD *)(a3 + 28);
  v17 = -1LL << (*(_BYTE *)(a3 + 28) & 0x1F);
  v18 = v17 & v7;
  if ( v16 >= 0x20 )
  {
    v22 = v17 & v7;
    v19 = *(_QWORD *)(a3 + 32)
        + 8LL
        * ((37
          * (BYTE6(v22)
           + 37
           * (BYTE5(v22)
            + 37
            * (BYTE4(v22)
             + 37 * (BYTE3(v22) + 37 * (BYTE2(v22) + 37 * (BYTE1(v22) + 37 * ((unsigned __int8)v18 + 11623883)))))))
          + HIBYTE(v22)) & ((v16 >> 5) - 1));
    while ( 1 )
    {
      v19 = *(_QWORD *)v19;
      if ( (v19 & 1) != 0 )
        break;
      if ( v18 == (v17 & *(_QWORD *)(v19 + 8)) )
        goto LABEL_19;
    }
    while ( 1 )
    {
      v19 = 0LL;
LABEL_19:
      if ( !v19 )
        break;
      if ( !strcmp(a1, *(const char **)(v19 + 16)) )
        return 1;
      while ( 1 )
      {
        v19 = *(_QWORD *)v19;
        if ( (v19 & 1) != 0 )
          break;
        if ( (v7 & (-1LL << (*(_BYTE *)(a3 + 28) & 0x1F))) == ((-1LL << (*(_BYTE *)(a3 + 28) & 0x1F)) & *(_QWORD *)(v19 + 8)) )
          goto LABEL_19;
      }
    }
  }
  return 0;
}
