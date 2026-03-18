/*
 * XREFs of ?SetColors@CGradientColorData@@QEAAJPEBU_D3DCOLORVALUE@@I@Z @ 0x1801B2E0C
 * Callers:
 *     ?SetColors@CMILBrushGradient@@UEAAJPEBU_D3DCOLORVALUE@@I@Z @ 0x1801B2B70 (-SetColors@CMILBrushGradient@@UEAAJPEBU_D3DCOLORVALUE@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@M$0A@@@QEAAJPEFBMI@Z @ 0x1800BF7F8 (-AddMultipleAndSet@-$DynArray@M$0A@@@QEAAJPEFBMI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@U_D3DCOLORVALUE@@$0A@@@QEAAJPEFBU_D3DCOLORVALUE@@I@Z @ 0x1801B2CD8 (-AddMultipleAndSet@-$DynArray@U_D3DCOLORVALUE@@$0A@@@QEAAJPEFBU_D3DCOLORVALUE@@I@Z.c)
 */

__int64 __fastcall CGradientColorData::SetColors(
        CGradientColorData *this,
        const struct _D3DCOLORVALUE *a2,
        unsigned int a3)
{
  unsigned int v3; // ebx
  char *v4; // r14
  unsigned int v7; // ebp
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int v14; // eax
  float v16; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  *((_DWORD *)this + 6) = 0;
  v4 = (char *)this + 32;
  *((_DWORD *)this + 14) = 0;
  if ( a3 )
  {
    v7 = a3 - 1;
    if ( a3 == 1 )
    {
      v8 = DynArray<_D3DCOLORVALUE,0>::AddMultipleAndSet((__int64)this, a2, 1u);
      v3 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x36u);
        goto LABEL_17;
      }
      v9 = DynArray<_D3DCOLORVALUE,0>::AddMultipleAndSet((__int64)this, a2, 1u);
      v3 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x37u);
LABEL_17:
        *((_DWORD *)this + 6) = 0;
        *((_DWORD *)v4 + 6) = 0;
        return v3;
      }
    }
    else
    {
      v10 = DynArray<_D3DCOLORVALUE,0>::AddMultipleAndSet((__int64)this, a2, a3);
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x3Bu);
        goto LABEL_17;
      }
    }
    v16 = 0.0;
    v11 = DynArray<float,0>::AddMultipleAndSet((__int64)v4, &v16, 1u);
    v3 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x46u);
      goto LABEL_17;
    }
    v12 = 1;
    if ( v7 > 1 )
    {
      while ( 1 )
      {
        v16 = (float)v12 / (float)(int)v7;
        v13 = DynArray<float,0>::AddMultipleAndSet((__int64)v4, &v16, 1u);
        v3 = v13;
        if ( v13 < 0 )
          break;
        if ( ++v12 >= v7 )
          goto LABEL_12;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x4Bu);
      goto LABEL_17;
    }
LABEL_12:
    v16 = FLOAT_1_0;
    v14 = DynArray<float,0>::AddMultipleAndSet((__int64)v4, &v16, 1u);
    v3 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x52u);
      goto LABEL_17;
    }
  }
  return v3;
}
