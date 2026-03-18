/*
 * XREFs of ?prunPlgRead8@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02AE410
 * Callers:
 *     <none>
 * Callees:
 *     ?vAdvXDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C00040CC (-vAdvXDDA@@YAXPEAU_PLGDDA@@@Z.c)
 *     ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C000433C (-prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z.c)
 */

struct _PLGRUN *__fastcall prunPlgRead8(
        struct _PLGDDA *a1,
        struct _PLGRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7,
        int a8)
{
  struct _PLGRUN *v8; // r10
  unsigned __int8 *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rbp
  unsigned __int8 *v13; // r14
  int v14; // ebp
  __int64 v15; // r15
  __int64 v16; // rdi

  v8 = a2;
  v10 = &a3[a6];
  if ( a4 )
  {
    v13 = &a4[4 * ((__int64)a8 >> 5)];
    v14 = *(_DWORD *)v13;
    if ( a6 != a7 )
    {
      v15 = (unsigned int)(a7 - a6);
      v16 = a8 & 0x1F;
      do
      {
        if ( v16 >= 32 )
        {
          v13 += 4;
          v16 = 0LL;
          v14 = *(_DWORD *)v13;
        }
        if ( (dword_1C02F0FE0[v16] & v14) != 0 )
        {
          if ( a5 )
            *(_DWORD *)v8 = a5->pulXlate[*v10];
          else
            *(_DWORD *)v8 = *v10;
          prunPumpDDA(a1, v8);
        }
        vAdvXDDA(a1);
        ++v10;
        ++v16;
        --v15;
      }
      while ( v15 );
    }
  }
  else if ( a5 )
  {
    if ( a6 != a7 )
    {
      v12 = (unsigned int)(a7 - a6);
      do
      {
        *(_DWORD *)v8 = a5->pulXlate[*v10];
        prunPumpDDA(a1, v8);
        vAdvXDDA(a1);
        ++v10;
        --v12;
      }
      while ( v12 );
    }
  }
  else if ( a6 != a7 )
  {
    v11 = (unsigned int)(a7 - a6);
    do
    {
      *(_DWORD *)v8 = *v10;
      prunPumpDDA(a1, v8);
      vAdvXDDA(a1);
      ++v10;
      --v11;
    }
    while ( v11 );
  }
  return v8;
}
