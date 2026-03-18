/*
 * XREFs of ?prunPlgRead1@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02B3930
 * Callers:
 *     <none>
 * Callees:
 *     ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C02B4144 (-prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z.c)
 *     ?vAdvXDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C02B432C (-vAdvXDDA@@YAXPEAU_PLGDDA@@@Z.c)
 */

struct _PLGRUN *__fastcall prunPlgRead1(
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
  unsigned int v10; // ebx
  struct _PLGRUN *v11; // r10
  unsigned __int8 *v12; // r14
  int v13; // ecx
  int v14; // r8d
  int v15; // r11d
  ULONG *pulXlate; // rax
  __int64 v17; // rbp
  int v18; // eax
  char v19; // si
  unsigned __int8 *v20; // r12
  int v21; // edx
  __int64 v22; // r15
  int v23; // eax
  int v26; // [rsp+70h] [rbp+18h]
  int v27; // [rsp+78h] [rbp+20h]
  int v28; // [rsp+80h] [rbp+28h]
  int v29; // [rsp+88h] [rbp+30h]

  v8 = a6;
  v10 = a6 & 0x1F;
  v11 = a2;
  v12 = &a3[4 * ((__int64)a6 >> 5)];
  v13 = *(_DWORD *)v12;
  v26 = *(_DWORD *)v12;
  if ( a5 )
  {
    pulXlate = a5->pulXlate;
    v14 = *pulXlate;
    v15 = pulXlate[1];
  }
  else
  {
    v14 = 0;
    v15 = 1;
  }
  v28 = v15;
  v29 = v14;
  v17 = v10;
  if ( a4 )
  {
    v19 = a8 & 0x1F;
    v20 = &a4[4 * ((__int64)a8 >> 5)];
    v21 = *(_DWORD *)v20;
    v27 = *(_DWORD *)v20;
    if ( v8 < a7 )
    {
      v22 = a8 & 0x1F;
      while ( 1 )
      {
        if ( (v21 & dword_1C02F43A0[v22]) != 0 )
        {
          v23 = v14;
          if ( (v13 & dword_1C02F43A0[v17]) != 0 )
            v23 = v15;
          *(_DWORD *)v11 = v23;
          prunPumpDDA(a1, v11);
        }
        vAdvXDDA(a1);
        ++v8;
        LOBYTE(v10) = v10 + 1;
        ++v17;
        ++v19;
        ++v22;
        if ( v8 >= a7 )
          break;
        if ( (v10 & 0x20) != 0 )
        {
          v12 += 4;
          LOBYTE(v10) = 0;
          v17 = 0LL;
          v13 = *(_DWORD *)v12;
          v26 = *(_DWORD *)v12;
        }
        else
        {
          v13 = v26;
        }
        v21 = v27;
        v14 = v29;
        v15 = v28;
        if ( (v19 & 0x20) != 0 )
        {
          v20 += 4;
          v19 = 0;
          v22 = 0LL;
          v21 = *(_DWORD *)v20;
          v27 = *(_DWORD *)v20;
        }
      }
    }
  }
  else if ( v8 < a7 )
  {
    while ( 1 )
    {
      v18 = v14;
      if ( (v13 & dword_1C02F43A0[v17]) != 0 )
        v18 = v15;
      *(_DWORD *)v11 = v18;
      prunPumpDDA(a1, v11);
      vAdvXDDA(a1);
      ++v8;
      LOBYTE(v10) = v10 + 1;
      ++v17;
      if ( v8 >= a7 )
        break;
      v13 = v26;
      v14 = v29;
      v15 = v28;
      if ( (v10 & 0x20) != 0 )
      {
        v12 += 4;
        LOBYTE(v10) = 0;
        v17 = 0LL;
        v13 = *(_DWORD *)v12;
        v26 = *(_DWORD *)v12;
      }
    }
  }
  return v11;
}
