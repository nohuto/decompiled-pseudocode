/*
 * XREFs of ??$ChangePropertyValue@U_D3DCOLORVALUE@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAU_D3DCOLORVALUE@@@Z @ 0x180023014
 * Callers:
 *     ??$UpdatePropertyValue@U_D3DCOLORVALUE@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAU_D3DCOLORVALUE@@@Z @ 0x18002347C (--$UpdatePropertyValue@U_D3DCOLORVALUE@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PE.c)
 * Callees:
 *     ?GetPropertyStorageForWrite@CPropertyBag@@AEAAJIPEAPEAUPropertyBagValue@@@Z @ 0x180031BA0 (-GetPropertyStorageForWrite@CPropertyBag@@AEAAJIPEAPEAUPropertyBagValue@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPropertyBag::ChangePropertyValue<_D3DCOLORVALUE>(
        CResource *this,
        unsigned int a2,
        int a3,
        __int64 a4)
{
  int v8; // eax
  unsigned int v9; // esi
  struct PropertyBagValue *v10; // r8
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v18; // ebx
  int v19; // ebx
  struct PropertyBagValue *v20; // [rsp+30h] [rbp-18h] BYREF

  v20 = 0LL;
  v8 = CPropertyBag::GetPropertyStorageForWrite(this, a2, &v20);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1DFu);
    return v9;
  }
  v10 = v20;
  if ( a2 != *((_DWORD *)v20 + 2) || a3 != *(_DWORD *)v20 )
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1E9u);
    return v9;
  }
  v11 = a3 - 17;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 17;
      if ( v13 )
      {
        v14 = v13 - 17;
        if ( v14 )
        {
          v15 = v14 - 17;
          if ( v15 && (v16 = v15 - 1) != 0 && (v18 = v16 - 1) != 0 )
          {
            v19 = v18 - 33;
            if ( v19 )
            {
              if ( v19 != 161 )
              {
                v9 = -2147024809;
                MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x233u);
                return v9;
              }
              *(_OWORD *)((char *)v20 + 12) = *(_OWORD *)a4;
              *(_OWORD *)((char *)v10 + 28) = *(_OWORD *)(a4 + 16);
              *(_OWORD *)((char *)v10 + 44) = *(_OWORD *)(a4 + 32);
              *(_OWORD *)((char *)v10 + 60) = *(_OWORD *)(a4 + 48);
            }
            else
            {
              *(_OWORD *)((char *)v20 + 12) = *(_OWORD *)a4;
              *(_QWORD *)((char *)v10 + 28) = *(_QWORD *)(a4 + 16);
            }
          }
          else
          {
            *(_OWORD *)((char *)v20 + 12) = *(_OWORD *)a4;
          }
        }
        else
        {
          *(_QWORD *)((char *)v20 + 12) = *(_QWORD *)a4;
          *((_DWORD *)v10 + 5) = *(_DWORD *)(a4 + 8);
        }
      }
      else
      {
        *(_QWORD *)((char *)v20 + 12) = *(_QWORD *)a4;
      }
    }
    else
    {
      *((_DWORD *)v20 + 3) = *(_DWORD *)a4;
    }
  }
  else
  {
    *((_BYTE *)v20 + 12) = *(_BYTE *)a4;
  }
  CResource::InvalidateAnimationSources(this, a2);
  return v9;
}
