/*
 * XREFs of ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C000433C
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

struct _PLGRUN *__fastcall prunPumpDDA(struct _PLGDDA *a1, struct _PLGRUN *a2)
{
  int v2; // r10d
  unsigned int v5; // r11d
  int v6; // r9d
  __int64 v7; // rax
  _DWORD *v8; // rdx
  unsigned int v9; // edi
  int v10; // ecx
  int v11; // r10d
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // edi
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // esi
  int v22; // r11d
  int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // [rsp+38h] [rbp+38h]
  __int64 v27; // [rsp+40h] [rbp+40h]
  __int64 v28; // [rsp+48h] [rbp+48h]

  v2 = *((_DWORD *)a1 + 17);
  v27 = *(_QWORD *)((char *)a1 + 100);
  v5 = HIDWORD(*(_QWORD *)((char *)a1 + 108));
  v6 = *(_QWORD *)((char *)a1 + 108);
  v26 = *(_QWORD *)((char *)a1 + 116);
  v7 = *(_QWORD *)((char *)a1 + 124);
  *((_DWORD *)a2 + 1) = v2;
  v8 = (_DWORD *)((char *)a2 + 12);
  v28 = v7;
  if ( v2 < *((_DWORD *)a1 + 19) )
  {
    v16 = HIDWORD(v27);
    v17 = v27;
    do
    {
      if ( v17 < v6 )
      {
        *v8 = v17;
        v18 = v6 - v17;
      }
      else
      {
        *v8 = v6;
        v18 = v17 - v6;
      }
      v8[1] = v18;
      ++*((_DWORD *)a2 + 2);
      v17 += *((_DWORD *)a1 + 81);
      v16 += *((_DWORD *)a1 + 82);
      v19 = *((_DWORD *)a1 + 83);
      if ( v16 >= v19 )
      {
        ++v17;
        v16 -= v19;
      }
      v6 += *((_DWORD *)a1 + 84);
      v5 += *((_DWORD *)a1 + 85);
      v20 = *((_DWORD *)a1 + 86);
      if ( v5 >= v20 )
      {
        ++v6;
        v5 -= v20;
      }
      v8 += 2;
      ++v2;
    }
    while ( v2 < *((_DWORD *)a1 + 19) );
  }
  v9 = HIDWORD(v26);
  v10 = v26;
  while ( v2 < *((_DWORD *)a1 + 21) )
  {
    if ( v10 < v6 )
    {
      *v8 = v10;
      v13 = v6 - v10;
    }
    else
    {
      *v8 = v6;
      v13 = v10 - v6;
    }
    v8[1] = v13;
    ++*((_DWORD *)a2 + 2);
    v10 += *((_DWORD *)a1 + 87);
    v9 += *((_DWORD *)a1 + 88);
    v14 = *((_DWORD *)a1 + 89);
    if ( v9 >= v14 )
    {
      ++v10;
      v9 -= v14;
    }
    v6 += *((_DWORD *)a1 + 84);
    v5 += *((_DWORD *)a1 + 85);
    v15 = *((_DWORD *)a1 + 86);
    if ( v5 >= v15 )
    {
      ++v6;
      v5 -= v15;
    }
    v8 += 2;
    ++v2;
  }
  if ( v2 < *((_DWORD *)a1 + 23) )
  {
    v21 = HIDWORD(v28);
    v22 = v28;
    do
    {
      if ( v10 < v22 )
      {
        *v8 = v10;
        v23 = v22 - v10;
      }
      else
      {
        *v8 = v22;
        v23 = v10 - v22;
      }
      v8[1] = v23;
      ++*((_DWORD *)a2 + 2);
      v10 += *((_DWORD *)a1 + 87);
      v9 += *((_DWORD *)a1 + 88);
      v24 = *((_DWORD *)a1 + 89);
      if ( v9 >= v24 )
      {
        ++v10;
        v9 -= v24;
      }
      v22 += *((_DWORD *)a1 + 90);
      v21 += *((_DWORD *)a1 + 91);
      v25 = *((_DWORD *)a1 + 92);
      if ( v21 >= v25 )
      {
        ++v22;
        v21 -= v25;
      }
      v8 += 2;
      ++v2;
    }
    while ( v2 < *((_DWORD *)a1 + 23) );
  }
  v11 = v2 - *((_DWORD *)a2 + 1);
  *((_DWORD *)a2 + 2) = v11;
  if ( *(_DWORD *)a1 && !v11 )
  {
    if ( v10 >= v6 )
    {
      *v8 = v6;
      v8[1] = v10 - v6;
    }
    else
    {
      *v8 = v10;
      v8[1] = v6 - v10;
    }
    *((_DWORD *)a2 + 2) = 1;
    v8 += 2;
  }
  return (struct _PLGRUN *)v8;
}
