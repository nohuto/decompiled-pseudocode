/*
 * XREFs of ?vDrawLine@@YAXPEAU_POINTFIX@@0PEAEJKPEAU_RECTL@@KPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C00E8698
 * Callers:
 *     ?vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z @ 0x1C00E8454 (-vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z.c)
 * Callees:
 *     ?bGIQtoIntegerLine@@YAHPEAU_POINTFIX@@0PEAU_RECTL@@PEAU_DDALINE@@@Z @ 0x1C0139DD8 (-bGIQtoIntegerLine@@YAHPEAU_POINTFIX@@0PEAU_RECTL@@PEAU_DDALINE@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
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
  int v9; // edx
  FIX y; // r10d
  FIX v11; // r9d
  FIX x; // r11d
  FIX v13; // ecx
  LONG v14; // ecx
  int v15; // r9d
  LONG v16; // r11d
  int v17; // r10d
  int v18; // r8d
  int v19; // edi
  LONG v20; // eax
  int v21; // eax
  LONG right; // edi
  LONG top; // r12d
  LONG bottom; // r13d
  int v25; // ecx
  _DWORD v26[2]; // [rsp+38h] [rbp-90h] BYREF
  int v27; // [rsp+40h] [rbp-88h]
  int v28; // [rsp+44h] [rbp-84h]
  int v29; // [rsp+48h] [rbp-80h]
  int v30; // [rsp+4Ch] [rbp-7Ch]
  int v31; // [rsp+50h] [rbp-78h]
  int v32; // [rsp+54h] [rbp-74h]
  struct _W32KCDD_ENG_CALLBACKS *v33; // [rsp+58h] [rbp-70h]
  struct _POINTFIX *v34; // [rsp+60h] [rbp-68h]
  struct _W32KCDD_ENG_CALLBACKS *v35; // [rsp+68h] [rbp-60h]
  struct _POINTFIX *v36; // [rsp+78h] [rbp-50h]
  int v37; // [rsp+80h] [rbp-48h]
  int v38; // [rsp+84h] [rbp-44h]

  v34 = a2;
  v36 = a1;
  v9 = 0;
  v26[0] = 0;
  v33 = a8;
  y = a2->y;
  v11 = a1->y;
  x = a2->x;
  v13 = a1->x;
  if ( (((unsigned __int8)y | (unsigned __int8)(v11 | x | v13)) & 0xF) != 0 )
    goto LABEL_27;
  v14 = v13 >> 4;
  v15 = v11 >> 4;
  v16 = x >> 4;
  v17 = y >> 4;
  v26[1] = v14;
  v27 = v15;
  if ( v16 < v14 )
  {
    v20 = v16;
    v16 = v14;
    v14 = v20;
    v9 = 4;
    v26[0] = 4;
  }
  if ( v17 < v15 )
  {
    v21 = v17;
    v17 = v15;
    v15 = v21;
    v9 |= 2u;
    v26[0] = v9;
  }
  if ( a6 )
  {
    if ( v16 < a6->left )
      return;
    right = a6->right;
    if ( v14 >= right )
      return;
    top = a6->top;
    if ( v17 < top )
      return;
    bottom = a6->bottom;
    if ( v15 >= bottom )
      return;
    if ( v16 >= right || v14 < a6->left || v15 < top || v17 >= bottom )
    {
LABEL_27:
      if ( !(unsigned int)bGIQtoIntegerLine(v36, v34, a6, (struct _DDALINE *)v26) || v28 <= 0 )
        return;
      goto LABEL_17;
    }
  }
  v18 = v16 - v14;
  v19 = v17 - v15;
  if ( v16 - v14 >= v17 - v15 )
  {
    if ( !v19 )
    {
      if ( a8 )
      {
        LODWORD(v34) = v27;
        v35 = a8;
      }
      _guard_dispatch_icall_fptr();
      return;
    }
    if ( !v18 )
      return;
    v25 = -1;
    if ( (v9 & 2) != 0 )
      v25 = 0;
    v28 = v18;
    v29 = 2 * v18;
    v30 = 2 * v19;
    v31 = v25 - v18;
LABEL_17:
    _guard_dispatch_icall_fptr();
    return;
  }
  if ( !v19 )
    return;
  if ( v18 || !a8 )
  {
    v26[0] = v9 | 1;
    v32 = 1;
    v28 = v17 - v15;
    v29 = 2 * v19;
    v30 = 2 * v18;
    v31 = ((v9 & 4) != 0) - 1 - v19;
    goto LABEL_17;
  }
  if ( (v9 & 2) != 0 )
  {
    ++v15;
    ++v17;
  }
  v36 = (struct _POINTFIX *)__PAIR64__(v15, v14);
  v37 = v14 + 1;
  v38 = v17;
  _guard_dispatch_icall_fptr();
}
