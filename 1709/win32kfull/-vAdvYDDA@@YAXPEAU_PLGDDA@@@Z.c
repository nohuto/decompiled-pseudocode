/*
 * XREFs of ?vAdvYDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C000450C
 * Callers:
 *     EngPlgBlt @ 0x1C0002840 (EngPlgBlt.c)
 * Callees:
 *     <none>
 */

void __fastcall vAdvYDDA(struct _PLGDDA *a1)
{
  unsigned int v1; // eax
  unsigned int v2; // edx
  int v3; // r8d
  int v4; // eax
  unsigned int v5; // r8d
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // r8d
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // r8d
  int v12; // eax
  unsigned int v13; // r8d
  unsigned int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // edx
  int v17; // r8d
  int v18; // eax
  unsigned int v19; // r8d
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // r8d
  unsigned int v23; // edx
  unsigned int v24; // r8d
  unsigned int v25; // edx
  unsigned int v26; // r8d
  unsigned int v27; // edx
  unsigned int v28; // r8d
  unsigned int v29; // edx
  unsigned int v30; // r8d

  *((_DWORD *)a1 + 1) += *((_DWORD *)a1 + 45);
  *((_DWORD *)a1 + 2) += *((_DWORD *)a1 + 46);
  v1 = *((_DWORD *)a1 + 2);
  v2 = *((_DWORD *)a1 + 47);
  v3 = *((_DWORD *)a1 + 1);
  if ( v1 >= v2 )
  {
    *((_DWORD *)a1 + 2) = v1 - v2;
    v4 = v3 + 1;
    v5 = *((_DWORD *)a1 + 95);
    *((_DWORD *)a1 + 1) = v4;
    *((_DWORD *)a1 + 9) += *((_DWORD *)a1 + 93);
    *((_DWORD *)a1 + 10) += *((_DWORD *)a1 + 94);
    v6 = *((_DWORD *)a1 + 10);
    if ( v6 >= v5 )
    {
      ++*((_DWORD *)a1 + 9);
      *((_DWORD *)a1 + 10) = v6 - v5;
    }
    *((_DWORD *)a1 + 11) += *((_DWORD *)a1 + 96);
    *((_DWORD *)a1 + 12) += *((_DWORD *)a1 + 97);
    v7 = *((_DWORD *)a1 + 12);
    v8 = *((_DWORD *)a1 + 98);
    if ( v7 >= v8 )
    {
      ++*((_DWORD *)a1 + 11);
      *((_DWORD *)a1 + 12) = v7 - v8;
    }
  }
  *((_DWORD *)a1 + 3) += *((_DWORD *)a1 + 48);
  *((_DWORD *)a1 + 4) += *((_DWORD *)a1 + 49);
  v9 = *((_DWORD *)a1 + 4);
  v10 = *((_DWORD *)a1 + 50);
  v11 = *((_DWORD *)a1 + 3);
  if ( v9 >= v10 )
  {
    *((_DWORD *)a1 + 4) = v9 - v10;
    v12 = v11 + 1;
    v13 = *((_DWORD *)a1 + 98);
    *((_DWORD *)a1 + 3) = v12;
    *((_DWORD *)a1 + 13) += *((_DWORD *)a1 + 96);
    *((_DWORD *)a1 + 14) += *((_DWORD *)a1 + 97);
    v14 = *((_DWORD *)a1 + 14);
    if ( v14 >= v13 )
    {
      ++*((_DWORD *)a1 + 13);
      *((_DWORD *)a1 + 14) = v14 - v13;
    }
  }
  *((_DWORD *)a1 + 5) += *((_DWORD *)a1 + 51);
  *((_DWORD *)a1 + 6) += *((_DWORD *)a1 + 52);
  v15 = *((_DWORD *)a1 + 6);
  v16 = *((_DWORD *)a1 + 53);
  v17 = *((_DWORD *)a1 + 5);
  if ( v15 >= v16 )
  {
    *((_DWORD *)a1 + 6) = v15 - v16;
    v18 = v17 + 1;
    v19 = *((_DWORD *)a1 + 95);
    *((_DWORD *)a1 + 5) = v18;
    *((_DWORD *)a1 + 15) += *((_DWORD *)a1 + 93);
    *((_DWORD *)a1 + 16) += *((_DWORD *)a1 + 94);
    v20 = *((_DWORD *)a1 + 16);
    if ( v20 >= v19 )
    {
      ++*((_DWORD *)a1 + 15);
      *((_DWORD *)a1 + 16) = v20 - v19;
    }
  }
  *((_DWORD *)a1 + 7) += *((_DWORD *)a1 + 54);
  *((_DWORD *)a1 + 8) += *((_DWORD *)a1 + 55);
  v21 = *((_DWORD *)a1 + 8);
  v22 = *((_DWORD *)a1 + 56);
  if ( v21 >= v22 )
  {
    ++*((_DWORD *)a1 + 7);
    *((_DWORD *)a1 + 8) = v21 - v22;
  }
  *((_DWORD *)a1 + 9) += *((_DWORD *)a1 + 69);
  *((_DWORD *)a1 + 10) += *((_DWORD *)a1 + 70);
  v23 = *((_DWORD *)a1 + 10);
  v24 = *((_DWORD *)a1 + 71);
  if ( v23 >= v24 )
  {
    ++*((_DWORD *)a1 + 9);
    *((_DWORD *)a1 + 10) = v23 - v24;
  }
  *((_DWORD *)a1 + 11) += *((_DWORD *)a1 + 72);
  *((_DWORD *)a1 + 12) += *((_DWORD *)a1 + 73);
  v25 = *((_DWORD *)a1 + 12);
  v26 = *((_DWORD *)a1 + 74);
  if ( v25 >= v26 )
  {
    ++*((_DWORD *)a1 + 11);
    *((_DWORD *)a1 + 12) = v25 - v26;
  }
  *((_DWORD *)a1 + 13) += *((_DWORD *)a1 + 75);
  *((_DWORD *)a1 + 14) += *((_DWORD *)a1 + 76);
  v27 = *((_DWORD *)a1 + 14);
  v28 = *((_DWORD *)a1 + 77);
  if ( v27 >= v28 )
  {
    ++*((_DWORD *)a1 + 13);
    *((_DWORD *)a1 + 14) = v27 - v28;
  }
  *((_DWORD *)a1 + 15) += *((_DWORD *)a1 + 78);
  *((_DWORD *)a1 + 16) += *((_DWORD *)a1 + 79);
  v29 = *((_DWORD *)a1 + 16);
  v30 = *((_DWORD *)a1 + 80);
  if ( v29 >= v30 )
  {
    ++*((_DWORD *)a1 + 15);
    *((_DWORD *)a1 + 16) = v29 - v30;
  }
}
