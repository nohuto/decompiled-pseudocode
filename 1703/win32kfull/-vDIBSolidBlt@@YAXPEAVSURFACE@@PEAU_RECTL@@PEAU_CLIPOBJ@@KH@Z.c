/*
 * XREFs of ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C0076E60
 * Callers:
 *     EngBitBlt @ 0x1C00769E0 (EngBitBlt.c)
 *     EngTextOut @ 0x1C0083290 (EngTextOut.c)
 *     EngEraseSurface @ 0x1C00DDE90 (EngEraseSurface.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0075F90 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0076190 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00AC408 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

void __fastcall vDIBSolidBlt(struct SURFACE *a1, struct _RECTL *a2, struct _CLIPOBJ *a3, int a4, int a5)
{
  int v8; // r13d
  int v9; // esi
  __int64 v10; // rbx
  unsigned int v11; // edx
  void (__fastcall *v12)(struct _RECTL *, unsigned int, unsigned __int8 *, int, unsigned int, unsigned int); // r12
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  XCLIPOBJ *v16; // rbx
  int v17; // r8d
  unsigned __int8 *v18; // r14
  unsigned int i; // ebx
  struct _RECTL *v20; // rcx
  LONG right; // eax
  LONG top; // eax
  LONG bottom; // eax
  unsigned int v24; // [rsp+40h] [rbp-1E8h]
  int v25; // [rsp+48h] [rbp-1E0h]
  _DWORD v27[84]; // [rsp+90h] [rbp-198h] BYREF

  v8 = 0;
  v9 = 0;
  memset(v27, 0, 0x144uLL);
  v10 = *((unsigned int *)a1 + 24);
  if ( (unsigned int)(v10 - 1) > 5 && (unsigned int)bUMPDSecurityGateEx() )
  {
    if ( gfUMPDDebug )
      DbgPrint("windows\\core\\ntgdi\\gre\\windows\\patblt.cxx:%d:vDIBSolidBlt:Invalid surface format.\n", 88);
    return;
  }
  v11 = aulShiftFormat[v10];
  v24 = v11;
  if ( a5 )
  {
    v12 = vSolidXorRect24;
    if ( (_DWORD)v10 != 5 )
      v12 = vSolidXorRect1;
  }
  else
  {
    v12 = vSolidFillRect1;
    if ( (_DWORD)v10 == 5 )
      v12 = vSolidFillRect24;
  }
  v13 = v10 - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        if ( v15 != 1 )
          goto LABEL_21;
LABEL_18:
        a4 = ((unsigned __int16)a4 << 16) | (unsigned __int16)a4;
        goto LABEL_21;
      }
    }
    else
    {
      LOBYTE(a4) = (16 * (a4 & 0xF)) | a4 & 0xF;
    }
    LOWORD(a4) = ((unsigned __int8)a4 << 8) | (unsigned __int8)a4;
    goto LABEL_18;
  }
  a4 &= 1u;
  if ( a4 )
    a4 = -1;
LABEL_21:
  v16 = (XCLIPOBJ *)a3;
  if ( a3 )
  {
    if ( a3->iDComplexity == 1 )
    {
      v9 = 1;
      v27[0] = 1;
      *(RECTL *)&v27[1] = a3->rclBounds;
    }
    else if ( a3->iDComplexity == 3 )
    {
      v9 = 1;
      v8 = 1;
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a3, 0, 0, 4u, 0x14u);
      v11 = v24;
    }
  }
  v17 = *((_DWORD *)a1 + 22);
  v25 = v17;
  if ( *((_QWORD *)a1 + 71) )
  {
    v12 = vSolidFillRectWithCallback;
    v18 = (unsigned __int8 *)*((_QWORD *)a1 + 71);
  }
  else
  {
    v18 = (unsigned __int8 *)*((_QWORD *)a1 + 10);
  }
  if ( v9 )
  {
    if ( !v8 )
      goto LABEL_33;
    do
    {
      v8 = XCLIPOBJ::bEnum(v16, 0x144u, (char *)v27, 0LL);
      v17 = v25;
LABEL_33:
      for ( i = 0; i < v27[0]; ++i )
      {
        v20 = (struct _RECTL *)&v27[4 * i + 1];
        if ( v20->left < a2->left )
          v20->left = a2->left;
        right = a2->right;
        if ( v20->right > right )
          v20->right = right;
        top = a2->top;
        if ( v20->top < top )
          v20->top = top;
        bottom = a2->bottom;
        if ( v20->bottom > bottom )
          v20->bottom = bottom;
        if ( v20->top < v20->bottom && v20->left < v20->right )
        {
          v12(v20, 1u, v18, v17, a4, v24);
          v17 = v25;
        }
      }
      v16 = (XCLIPOBJ *)a3;
    }
    while ( v8 );
  }
  else
  {
    v12(a2, 1u, v18, v17, a4, v11);
  }
}
