/*
 * XREFs of ?vAdvXDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C00040CC
 * Callers:
 *     ?prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C0004030 (-prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02ADD50 (-prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead1@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02ADEC0 (-prunPlgRead1@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02AE090 (-prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead4@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02AE220 (-prunPlgRead4@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead8@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02AE410 (-prunPlgRead8@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vAdvXDDA(struct _PLGDDA *a1)
{
  unsigned int v1; // eax
  unsigned int v2; // edx
  int v3; // r8d
  unsigned int v4; // eax
  unsigned int v5; // edx
  int v6; // r8d
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // r8d
  unsigned int v10; // edx
  unsigned int v11; // r8d
  unsigned int v12; // edx
  unsigned int v13; // r8d
  unsigned int v14; // edx
  unsigned int v15; // r8d
  unsigned int v16; // edx
  unsigned int v17; // r8d
  unsigned int v18; // edx
  unsigned int v19; // r8d
  int v20; // eax
  unsigned int v21; // r8d
  unsigned int v22; // edx
  unsigned int v23; // edx
  unsigned int v24; // r8d
  int v25; // eax
  unsigned int v26; // r8d
  unsigned int v27; // edx
  int v28; // eax
  unsigned int v29; // r8d
  unsigned int v30; // edx

  *((_DWORD *)a1 + 17) += *((_DWORD *)a1 + 33);
  *((_DWORD *)a1 + 18) += *((_DWORD *)a1 + 34);
  v1 = *((_DWORD *)a1 + 18);
  v2 = *((_DWORD *)a1 + 35);
  v3 = *((_DWORD *)a1 + 17);
  if ( v1 >= v2 )
  {
    *((_DWORD *)a1 + 18) = v1 - v2;
    v20 = v3 + 1;
    v21 = *((_DWORD *)a1 + 95);
    *((_DWORD *)a1 + 17) = v20;
    *((_DWORD *)a1 + 25) += *((_DWORD *)a1 + 93);
    *((_DWORD *)a1 + 26) += *((_DWORD *)a1 + 94);
    v22 = *((_DWORD *)a1 + 26);
    if ( v22 >= v21 )
    {
      ++*((_DWORD *)a1 + 25);
      *((_DWORD *)a1 + 26) = v22 - v21;
    }
    *((_DWORD *)a1 + 27) += *((_DWORD *)a1 + 96);
    *((_DWORD *)a1 + 28) += *((_DWORD *)a1 + 97);
    v23 = *((_DWORD *)a1 + 28);
    v24 = *((_DWORD *)a1 + 98);
    if ( v23 >= v24 )
    {
      ++*((_DWORD *)a1 + 27);
      *((_DWORD *)a1 + 28) = v23 - v24;
    }
  }
  *((_DWORD *)a1 + 19) += *((_DWORD *)a1 + 36);
  *((_DWORD *)a1 + 20) += *((_DWORD *)a1 + 37);
  v4 = *((_DWORD *)a1 + 20);
  v5 = *((_DWORD *)a1 + 38);
  v6 = *((_DWORD *)a1 + 19);
  if ( v4 >= v5 )
  {
    *((_DWORD *)a1 + 20) = v4 - v5;
    v25 = v6 + 1;
    v26 = *((_DWORD *)a1 + 98);
    *((_DWORD *)a1 + 19) = v25;
    *((_DWORD *)a1 + 29) += *((_DWORD *)a1 + 96);
    *((_DWORD *)a1 + 30) += *((_DWORD *)a1 + 97);
    v27 = *((_DWORD *)a1 + 30);
    if ( v27 >= v26 )
    {
      ++*((_DWORD *)a1 + 29);
      *((_DWORD *)a1 + 30) = v27 - v26;
    }
  }
  *((_DWORD *)a1 + 21) += *((_DWORD *)a1 + 39);
  *((_DWORD *)a1 + 22) += *((_DWORD *)a1 + 40);
  v7 = *((_DWORD *)a1 + 22);
  v8 = *((_DWORD *)a1 + 41);
  v9 = *((_DWORD *)a1 + 21);
  if ( v7 >= v8 )
  {
    *((_DWORD *)a1 + 22) = v7 - v8;
    v28 = v9 + 1;
    v29 = *((_DWORD *)a1 + 95);
    *((_DWORD *)a1 + 21) = v28;
    *((_DWORD *)a1 + 31) += *((_DWORD *)a1 + 93);
    *((_DWORD *)a1 + 32) += *((_DWORD *)a1 + 94);
    v30 = *((_DWORD *)a1 + 32);
    if ( v30 >= v29 )
    {
      ++*((_DWORD *)a1 + 31);
      *((_DWORD *)a1 + 32) = v30 - v29;
    }
  }
  *((_DWORD *)a1 + 23) += *((_DWORD *)a1 + 42);
  *((_DWORD *)a1 + 24) += *((_DWORD *)a1 + 43);
  v10 = *((_DWORD *)a1 + 24);
  v11 = *((_DWORD *)a1 + 44);
  if ( v10 >= v11 )
  {
    ++*((_DWORD *)a1 + 23);
    *((_DWORD *)a1 + 24) = v10 - v11;
  }
  *((_DWORD *)a1 + 25) += *((_DWORD *)a1 + 57);
  *((_DWORD *)a1 + 26) += *((_DWORD *)a1 + 58);
  v12 = *((_DWORD *)a1 + 26);
  v13 = *((_DWORD *)a1 + 59);
  if ( v12 >= v13 )
  {
    ++*((_DWORD *)a1 + 25);
    *((_DWORD *)a1 + 26) = v12 - v13;
  }
  *((_DWORD *)a1 + 27) += *((_DWORD *)a1 + 60);
  *((_DWORD *)a1 + 28) += *((_DWORD *)a1 + 61);
  v14 = *((_DWORD *)a1 + 28);
  v15 = *((_DWORD *)a1 + 62);
  if ( v14 >= v15 )
  {
    ++*((_DWORD *)a1 + 27);
    *((_DWORD *)a1 + 28) = v14 - v15;
  }
  *((_DWORD *)a1 + 29) += *((_DWORD *)a1 + 63);
  *((_DWORD *)a1 + 30) += *((_DWORD *)a1 + 64);
  v16 = *((_DWORD *)a1 + 30);
  v17 = *((_DWORD *)a1 + 65);
  if ( v16 >= v17 )
  {
    ++*((_DWORD *)a1 + 29);
    *((_DWORD *)a1 + 30) = v16 - v17;
  }
  *((_DWORD *)a1 + 31) += *((_DWORD *)a1 + 66);
  *((_DWORD *)a1 + 32) += *((_DWORD *)a1 + 67);
  v18 = *((_DWORD *)a1 + 32);
  v19 = *((_DWORD *)a1 + 68);
  if ( v18 >= v19 )
  {
    ++*((_DWORD *)a1 + 31);
    *((_DWORD *)a1 + 32) = v18 - v19;
  }
}
