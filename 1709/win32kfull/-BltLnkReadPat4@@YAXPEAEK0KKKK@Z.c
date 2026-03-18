/*
 * XREFs of ?BltLnkReadPat4@@YAXPEAEK0KKKK@Z @ 0x1C02B1340
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

void __fastcall BltLnkReadPat4(
        unsigned __int8 *a1,
        char a2,
        unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v6; // esi
  unsigned int v7; // r10d
  unsigned __int8 v10; // cl
  unsigned int v11; // edx
  int v12; // r15d
  unsigned int v13; // esi
  unsigned int v14; // r8d
  unsigned __int64 v15; // rax
  unsigned __int8 v16; // r11
  int v17; // edx
  unsigned __int8 v18; // cl
  char v19; // al
  unsigned int v20; // ecx
  unsigned __int64 v21; // rax
  signed int v22; // ebp
  int v23; // edi
  unsigned __int8 v24; // cl
  unsigned __int8 v25; // cl

  v6 = a6;
  v7 = 0;
  if ( (a2 & 1) != 0 && a6 )
  {
    v10 = a3[(unsigned __int64)a5 >> 1];
    if ( (a5 & 1) == 0 )
      v10 >>= 4;
    v11 = a5 + 1;
    *a1++ = v10 & 0xF;
    v6 = a6 - 1;
  }
  else
  {
    v11 = a5;
  }
  v12 = a4;
  if ( (a4 & 1) != 0 )
    v12 = 2 * a4;
  if ( (int)v6 <= v12 )
  {
    v14 = v6 >> 1;
    v13 = v6 & 1;
  }
  else
  {
    v13 = v6 - v12;
    v12 >>= 1;
    v14 = v12;
  }
  while ( v14 )
  {
    --v14;
    v15 = 0LL;
    if ( v11 != a4 )
      v15 = v11;
    v16 = a3[v15 >> 1];
    if ( (v15 & 1) != 0 )
    {
      v20 = v15 + 1;
      v21 = 0LL;
      if ( v20 != a4 )
        v21 = v20;
      v17 = v21;
      v18 = a3[v21 >> 1];
      v19 = 16 * v16;
    }
    else
    {
      v17 = v15 + 1;
      if ( (_DWORD)v15 + 1 != a4 )
        goto LABEL_21;
      v18 = *a3;
      v19 = v16 & 0xF0;
      v17 = 0;
    }
    v16 = v19 | (v18 >> 4);
LABEL_21:
    *a1++ = v16;
    v11 = v17 + 1;
  }
  if ( v13 <= 1 )
  {
    if ( (v13 & 1) != 0 )
    {
      if ( v11 != a4 )
        v7 = v11;
      v24 = a3[(unsigned __int64)v7 >> 1];
      if ( (v7 & 1) != 0 )
        v25 = 16 * v24;
      else
        v25 = v24 & 0xF0;
      *a1 = v25;
    }
  }
  else
  {
    v22 = v13 >> 1;
    while ( 1 )
    {
      v23 = v12;
      if ( v12 > v22 )
        v23 = v22;
      memmove(a1, &a1[-v12], v23);
      a1 += v23;
      v22 -= v23;
      if ( !v22 )
        break;
      v12 *= 2;
    }
    if ( (v13 & 1) != 0 )
      *a1 = a1[-v12] & 0xF0;
  }
}
