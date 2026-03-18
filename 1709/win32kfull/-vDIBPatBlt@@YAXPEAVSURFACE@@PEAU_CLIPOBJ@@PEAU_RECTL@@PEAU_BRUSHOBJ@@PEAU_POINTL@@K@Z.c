/*
 * XREFs of ?vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C00EDD94
 * Callers:
 *     EngBitBlt @ 0x1C002DC60 (EngBitBlt.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C002D16C (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002D380 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

void __fastcall vDIBPatBlt(struct SURFACE *a1, struct _CLIPOBJ *a2, struct _RECTL *a3, struct _BRUSHOBJ *a4)
{
  int v6; // edi
  int v7; // r15d
  unsigned int i; // ebx
  LONG *v9; // rdx
  LONG right; // eax
  LONG top; // eax
  LONG bottom; // eax
  _DWORD v13[84]; // [rsp+A0h] [rbp-198h] BYREF

  memset(v13, 0, 0x144uLL);
  v6 = 0;
  v7 = 0;
  if ( a2 )
  {
    if ( a2->iDComplexity == 1 )
    {
      v7 = 1;
      v13[0] = 1;
      *(RECTL *)&v13[1] = a2->rclBounds;
    }
    else if ( a2->iDComplexity == 3 )
    {
      v6 = 1;
      v7 = 1;
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a2, 0, 0, 4u, 0x14u);
    }
  }
  if ( v7 )
  {
    if ( !v6 )
      goto LABEL_10;
    do
    {
      v6 = XCLIPOBJ::bEnum((XCLIPOBJ *)a2, 0x144u, (char *)v13, 0LL);
LABEL_10:
      for ( i = 0; i < v13[0]; ++i )
      {
        v9 = &v13[4 * i + 1];
        if ( *v9 < a3->left )
          *v9 = a3->left;
        right = a3->right;
        if ( v9[2] > right )
          v9[2] = right;
        top = a3->top;
        if ( v9[1] < top )
          v9[1] = top;
        bottom = a3->bottom;
        if ( v9[3] > bottom )
          v9[3] = bottom;
        if ( v9[1] < v9[3] && *v9 < v9[2] )
          _guard_dispatch_icall_fptr();
      }
    }
    while ( v6 );
  }
  else
  {
    _guard_dispatch_icall_fptr();
  }
}
