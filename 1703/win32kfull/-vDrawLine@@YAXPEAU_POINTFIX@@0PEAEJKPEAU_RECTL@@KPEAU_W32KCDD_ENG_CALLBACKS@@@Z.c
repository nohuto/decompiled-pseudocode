/*
 * XREFs of ?vDrawLine@@YAXPEAU_POINTFIX@@0PEAEJKPEAU_RECTL@@KPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C00A6B18
 * Callers:
 *     ?vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z @ 0x1C00A68D4 (-vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z.c)
 * Callees:
 *     ?bGIQtoIntegerLine@@YAHPEAU_POINTFIX@@0PEAU_RECTL@@PEAU_DDALINE@@@Z @ 0x1C0134CF4 (-bGIQtoIntegerLine@@YAHPEAU_POINTFIX@@0PEAU_RECTL@@PEAU_DDALINE@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vDrawLine(
        struct _POINTFIX *a1,
        struct _POINTFIX *a2,
        unsigned __int8 *a3,
        __int64 a4,
        unsigned int a5,
        struct _RECTL *a6,
        unsigned int a7,
        struct _W32KCDD_ENG_CALLBACKS *a8)
{
  int v9; // r8d
  FIX y; // r10d
  FIX v11; // edx
  FIX x; // ecx
  LONG v13; // ecx
  int v14; // edx
  FIX v15; // r11d
  int v16; // r10d
  FIX v17; // eax
  int v18; // eax
  LONG right; // r9d
  LONG top; // r12d
  LONG bottom; // r13d
  int v22; // r9d
  int v23; // edi
  int v24; // edx
  _DWORD v25[2]; // [rsp+38h] [rbp-90h] BYREF
  int v26; // [rsp+40h] [rbp-88h]
  int v27; // [rsp+44h] [rbp-84h]
  int v28; // [rsp+48h] [rbp-80h]
  int v29; // [rsp+4Ch] [rbp-7Ch]
  int v30; // [rsp+50h] [rbp-78h]
  int v31; // [rsp+54h] [rbp-74h]
  struct _W32KCDD_ENG_CALLBACKS *v32; // [rsp+58h] [rbp-70h]
  struct _POINTFIX *v33; // [rsp+60h] [rbp-68h]
  struct _W32KCDD_ENG_CALLBACKS *v34; // [rsp+68h] [rbp-60h]
  struct _POINTFIX *v35; // [rsp+78h] [rbp-50h]
  int v36; // [rsp+80h] [rbp-48h]
  int v37; // [rsp+84h] [rbp-44h]

  v33 = a2;
  v35 = a1;
  v9 = 0;
  v25[0] = 0;
  v32 = a8;
  y = a2->y;
  v11 = a1->y;
  x = a1->x;
  if ( (((unsigned __int8)y | (unsigned __int8)(v11 | a2->x | x)) & 0xF) != 0 )
    goto LABEL_32;
  v13 = x >> 4;
  v14 = v11 >> 4;
  v15 = a2->x >> 4;
  v16 = y >> 4;
  v25[1] = v13;
  v26 = v14;
  if ( v15 < v13 )
  {
    v17 = v15;
    v15 = v13;
    v13 = v17;
    v9 = 4;
    v25[0] = 4;
  }
  if ( v16 < v14 )
  {
    v18 = v16;
    v16 = v14;
    v14 = v18;
    v9 |= 2u;
    v25[0] = v9;
  }
  if ( a6 )
  {
    if ( v15 < a6->left )
      return;
    right = a6->right;
    if ( v13 >= right )
      return;
    top = a6->top;
    if ( v16 < top )
      return;
    bottom = a6->bottom;
    if ( v14 >= bottom )
      return;
    if ( v13 < a6->left || v15 >= right || v14 < top || v16 >= bottom )
    {
LABEL_32:
      if ( !(unsigned int)bGIQtoIntegerLine(v35, v33, a6, (struct _DDALINE *)v25) || v27 <= 0 )
        return;
      goto LABEL_33;
    }
  }
  v22 = v15 - v13;
  v23 = v16 - v14;
  if ( v15 - v13 >= v16 - v14 )
  {
    if ( !v23 )
    {
      if ( a8 )
      {
        LODWORD(v33) = v26;
        v34 = a8;
      }
      _guard_dispatch_icall_fptr();
      return;
    }
    if ( !v22 )
      return;
    v24 = -1;
    if ( (v9 & 2) != 0 )
      v24 = 0;
    v27 = v15 - v13;
    v28 = 2 * v22;
    v29 = 2 * v23;
    v30 = v24 - v22;
LABEL_33:
    _guard_dispatch_icall_fptr();
    return;
  }
  if ( !v23 )
    return;
  if ( v22 || !a8 )
  {
    v25[0] = v9 | 1;
    v31 = 1;
    v27 = v16 - v14;
    v28 = 2 * v23;
    v29 = 2 * v22;
    v30 = ((v9 & 4) != 0) - 1 - v23;
    goto LABEL_33;
  }
  if ( (v9 & 2) != 0 )
  {
    ++v14;
    ++v16;
  }
  v35 = (struct _POINTFIX *)__PAIR64__(v14, v13);
  v36 = v13 + 1;
  v37 = v16;
  _guard_dispatch_icall_fptr();
}
