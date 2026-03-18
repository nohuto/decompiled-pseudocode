/*
 * XREFs of ?prunPlgRead4@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02B3DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C02B4144 (-prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z.c)
 *     ?vAdvXDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C02B432C (-vAdvXDDA@@YAXPEAU_PLGDDA@@@Z.c)
 */

struct _PLGRUN *__fastcall prunPlgRead4(
        struct _PLGDDA *a1,
        struct _PLGRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // edi
  struct _PLGDDA *v9; // r11
  __int64 v10; // rbx
  struct _PLGRUN *v11; // r10
  unsigned __int8 *v12; // r14
  int v13; // ecx
  __int64 v14; // rsi
  unsigned int v15; // eax
  char v16; // si
  unsigned __int8 *v17; // r15
  int v18; // edx
  __int64 v19; // r12
  __int64 v20; // rbp
  unsigned int v21; // eax
  int v24; // [rsp+70h] [rbp+18h]
  int v25; // [rsp+88h] [rbp+30h]

  v8 = a6;
  v9 = a1;
  v10 = a6 & 7;
  v11 = a2;
  v12 = &a3[4 * ((__int64)a6 >> 3)];
  v13 = *(_DWORD *)v12;
  v25 = *(_DWORD *)v12;
  if ( a4 )
  {
    v16 = a8 & 0x1F;
    v17 = &a4[4 * ((__int64)a8 >> 5)];
    v18 = *(_DWORD *)v17;
    v24 = *(_DWORD *)v17;
    if ( v8 < a7 )
    {
      v19 = v10;
      v20 = a8 & 0x1F;
      while ( 1 )
      {
        if ( (v18 & dword_1C02F43A0[v20]) != 0 )
        {
          v21 = (v13 & (unsigned int)dword_1C02F4378[v19]) >> dword_1C02F4358[v19];
          if ( a5 )
            *(_DWORD *)v11 = a5->pulXlate[v21];
          else
            *(_DWORD *)v11 = v21;
          prunPumpDDA(v9, v11);
          v9 = a1;
        }
        vAdvXDDA(v9);
        ++v8;
        LOBYTE(v10) = v10 + 1;
        ++v19;
        ++v16;
        ++v20;
        if ( v8 >= a7 )
          break;
        if ( (v10 & 8) != 0 )
        {
          v12 += 4;
          LOBYTE(v10) = 0;
          v19 = 0LL;
          v13 = *(_DWORD *)v12;
          v25 = *(_DWORD *)v12;
        }
        else
        {
          v13 = v25;
        }
        v18 = v24;
        if ( (v16 & 0x20) != 0 )
        {
          v17 += 4;
          v16 = 0;
          v20 = 0LL;
          v18 = *(_DWORD *)v17;
          v24 = *(_DWORD *)v17;
        }
      }
    }
  }
  else
  {
    v14 = (unsigned int)v10;
    if ( v8 < a7 )
    {
      while ( 1 )
      {
        v15 = (v13 & (unsigned int)dword_1C02F4378[v14]) >> dword_1C02F4358[v14];
        *(_DWORD *)v11 = a5 ? a5->pulXlate[v15] : v15;
        prunPumpDDA(v9, v11);
        vAdvXDDA(a1);
        ++v8;
        LOBYTE(v10) = v10 + 1;
        ++v14;
        if ( v8 >= a7 )
          break;
        v13 = v25;
        if ( (v10 & 8) != 0 )
        {
          v12 += 4;
          LOBYTE(v10) = 0;
          v14 = 0LL;
          v13 = *(_DWORD *)v12;
          v25 = *(_DWORD *)v12;
        }
      }
    }
  }
  return v11;
}
