/*
 * XREFs of ?_AddBorderInstructions@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@@Z @ 0x180074EB4
 * Callers:
 *     ?_UpdateInstructions@CProjectionBorderVisual@@IEAAJXZ @ 0x1800750FC (-_UpdateInstructions@CProjectionBorderVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     ?_AddRectInstruction@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@AEBU_D3DCOLORVALUE@@@Z @ 0x180074FF4 (-_AddRectInstruction@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@AEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CProjectionBorderVisual::_AddBorderInstructions(
        CProjectionBorderVisual *this,
        const struct tagRECT *a2,
        int a3,
        const struct _D3DCOLORVALUE *a4)
{
  unsigned int v8; // ebx
  LONG right; // r8d
  int v10; // r11d
  LONG left; // r9d
  int v12; // eax
  LONG bottom; // r10d
  int v14; // eax
  LONG top; // edx
  struct tagRECT *v16; // rdi
  int v17; // eax
  int v18; // eax
  struct tagRECT v20; // [rsp+30h] [rbp-29h] BYREF
  LONG v21; // [rsp+40h] [rbp-19h]
  int v22; // [rsp+44h] [rbp-15h]
  LONG v23; // [rsp+48h] [rbp-11h]
  LONG v24; // [rsp+4Ch] [rbp-Dh]
  LONG v25; // [rsp+50h] [rbp-9h]
  int v26; // [rsp+54h] [rbp-5h]
  int v27; // [rsp+58h] [rbp-1h]
  int v28; // [rsp+5Ch] [rbp+3h]
  int v29; // [rsp+60h] [rbp+7h]
  int v30; // [rsp+64h] [rbp+Bh]
  LONG v31; // [rsp+68h] [rbp+Fh]
  int v32; // [rsp+6Ch] [rbp+13h]
  __int64 v33; // [rsp+70h] [rbp+17h] BYREF

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
      v18 = CProjectionBorderVisual::_AddRectInstruction(this, (const struct tagRECT *)((char *)this + 280), a4);
      v8 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x48u);
    }
    else
    {
      v20.top = a2->top;
      v27 = left + a3;
      v20.left = left;
      v20.right = right;
      v20.bottom = a3 + top;
      v21 = left;
      v29 = right - a3;
      v16 = &v20;
      v22 = bottom - a3;
      v23 = right;
      v24 = bottom;
      v25 = left;
      v26 = a3 + top;
      v28 = bottom - a3;
      v30 = a3 + top;
      v31 = right;
      v32 = bottom - a3;
      while ( 1 )
      {
        v17 = CProjectionBorderVisual::_AddRectInstruction(this, v16, a4);
        v8 = v17;
        if ( v17 < 0 )
          break;
        if ( ++v16 == (struct tagRECT *)&v33 )
          return v8;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x55u);
    }
  }
  return v8;
}
