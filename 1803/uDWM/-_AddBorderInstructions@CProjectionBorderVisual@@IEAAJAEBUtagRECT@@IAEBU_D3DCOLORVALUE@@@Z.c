/*
 * XREFs of ?_AddBorderInstructions@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@@Z @ 0x18007F7D4
 * Callers:
 *     ?_UpdateInstructions@CProjectionBorderVisual@@IEAAJXZ @ 0x18007FA40 (-_UpdateInstructions@CProjectionBorderVisual@@IEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_AddRectInstruction@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@AEBU_D3DCOLORVALUE@@@Z @ 0x18007F938 (-_AddRectInstruction@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@AEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CProjectionBorderVisual::_AddBorderInstructions(
        CProjectionBorderVisual *this,
        const struct tagRECT *a2,
        int a3,
        const struct _D3DCOLORVALUE *a4)
{
  unsigned int v8; // ebx
  LONG right; // r9d
  int v10; // edx
  LONG left; // r10d
  int v12; // eax
  LONG bottom; // r11d
  int v14; // eax
  LONG top; // ebx
  struct tagRECT *v16; // rdi
  double v17; // xmm0_8
  int v18; // eax
  int v19; // eax
  struct tagRECT v21; // [rsp+30h] [rbp-29h] BYREF
  LONG v22; // [rsp+40h] [rbp-19h]
  int v23; // [rsp+44h] [rbp-15h]
  LONG v24; // [rsp+48h] [rbp-11h]
  LONG v25; // [rsp+4Ch] [rbp-Dh]
  LONG v26; // [rsp+50h] [rbp-9h]
  LONG v27; // [rsp+54h] [rbp-5h]
  int v28; // [rsp+58h] [rbp-1h]
  int v29; // [rsp+5Ch] [rbp+3h]
  int v30; // [rsp+60h] [rbp+7h]
  LONG v31; // [rsp+64h] [rbp+Bh]
  LONG v32; // [rsp+68h] [rbp+Fh]
  int v33; // [rsp+6Ch] [rbp+13h]
  __int64 v34; // [rsp+70h] [rbp+17h] BYREF

  v8 = 0;
  if ( !IsRectEmpty(a2) )
  {
    right = a2->right;
    v10 = 2 * a3;
    left = a2->left;
    v12 = 0;
    if ( right - a2->left >= 0 )
      v12 = a2->right - a2->left;
    if ( v12 < v10 )
      goto LABEL_13;
    bottom = a2->bottom;
    v14 = 0;
    top = a2->top;
    if ( bottom - top >= 0 )
      v14 = a2->bottom - top;
    if ( v14 < v10 )
    {
LABEL_13:
      v19 = CProjectionBorderVisual::_AddRectInstruction(this, (const struct tagRECT *)((char *)this + 280), a4);
      v8 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x4Du);
    }
    else
    {
      v16 = &v21;
      v21.left = left;
      v21.top = top;
      v21.right = right;
      v22 = left;
      v24 = right;
      v25 = bottom;
      v17 = (double)a3 * *((double *)CDesktopManager::s_pDesktopManagerInstance + 55);
      v26 = left;
      v32 = right;
      v23 = bottom - (int)v17;
      v29 = v23;
      v33 = v23;
      v21.bottom = top + (int)v17;
      v28 = left + (int)v17;
      v27 = v21.bottom;
      v30 = right - (int)v17;
      v31 = v21.bottom;
      while ( 1 )
      {
        v18 = CProjectionBorderVisual::_AddRectInstruction(this, v16, a4);
        v8 = v18;
        if ( v18 < 0 )
          break;
        if ( ++v16 == (struct tagRECT *)&v34 )
          return v8;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x5Du);
    }
  }
  return v8;
}
