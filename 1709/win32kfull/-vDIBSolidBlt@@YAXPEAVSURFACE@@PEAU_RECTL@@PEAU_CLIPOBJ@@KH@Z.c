/*
 * XREFs of ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C002E470
 * Callers:
 *     EngTextOut @ 0x1C0011110 (EngTextOut.c)
 *     EngBitBlt @ 0x1C002DC60 (EngBitBlt.c)
 *     EngEraseSurface @ 0x1C00EF080 (EngEraseSurface.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C002D16C (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002D380 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00B7CB4 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

void __fastcall vDIBSolidBlt(struct SURFACE *a1, struct _RECTL *a2, struct _CLIPOBJ *a3, int a4, int a5)
{
  unsigned __int16 v5; // r14
  int v8; // r13d
  __int64 v9; // rbx
  unsigned int v10; // r15d
  void (__fastcall *v11)(struct _RECTL *, unsigned int, unsigned __int8 *, int, unsigned int, unsigned int); // rsi
  unsigned __int8 *v12; // rbx
  int v13; // r14d
  unsigned int v14; // r13d
  unsigned int i; // eax
  struct _RECTL *v16; // rcx
  LONG right; // eax
  LONG top; // eax
  LONG bottom; // eax
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // [rsp+40h] [rbp-1E8h]
  unsigned int v24; // [rsp+40h] [rbp-1E8h]
  int v25; // [rsp+50h] [rbp-1D8h]
  _DWORD v27[84]; // [rsp+90h] [rbp-198h] BYREF

  v5 = a4;
  v23 = a4;
  v25 = 0;
  v8 = 0;
  memset(v27, 0, 0x144uLL);
  v9 = *((unsigned int *)a1 + 24);
  if ( (unsigned int)(v9 - 1) > 5 && (unsigned int)bUMPDSecurityGateEx() )
  {
    if ( gfUMPDDebug )
      DbgPrint("windows\\core\\ntgdi\\gre\\windows\\patblt.cxx:%d:vDIBSolidBlt:Invalid surface format.\n", 88);
    return;
  }
  v10 = aulShiftFormat[v9];
  if ( a5 )
  {
    v11 = vSolidXorRect24;
    if ( (_DWORD)v9 != 5 )
      v11 = vSolidXorRect1;
  }
  else if ( (_DWORD)v9 == 5 )
  {
    v11 = vSolidFillRect24;
  }
  else
  {
    v11 = vSolidFillRect1;
  }
  if ( (unsigned int)v9 <= 4 )
  {
    v20 = v9 - 1;
    if ( !v20 )
    {
      v23 = v5 & 1;
      if ( (v5 & 1) != 0 )
        v23 = -1;
      goto LABEL_6;
    }
    v21 = v20 - 1;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        if ( v22 != 1 )
          goto LABEL_6;
LABEL_44:
        v23 = (v5 << 16) | v5;
        goto LABEL_6;
      }
    }
    else
    {
      LOBYTE(v5) = (16 * (v5 & 0xF)) | v5 & 0xF;
    }
    v5 = ((unsigned __int8)v5 << 8) | (unsigned __int8)v5;
    goto LABEL_44;
  }
LABEL_6:
  if ( a3 )
  {
    if ( a3->iDComplexity == 1 )
    {
      v8 = 1;
      v27[0] = 1;
      *(RECTL *)&v27[1] = a3->rclBounds;
    }
    else if ( a3->iDComplexity == 3 )
    {
      v8 = 1;
      v25 = 1;
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a3, 0, 0, 4u, 0x14u);
    }
  }
  v12 = (unsigned __int8 *)*((_QWORD *)a1 + 10);
  v13 = *((_DWORD *)a1 + 22);
  if ( *((_QWORD *)a1 + 71) )
  {
    v11 = vSolidFillRectWithCallback;
    v12 = (unsigned __int8 *)*((_QWORD *)a1 + 71);
  }
  if ( v8 )
  {
    v14 = v23;
    if ( v25 )
      goto LABEL_36;
    while ( 1 )
    {
      for ( i = 0; ; i = v24 + 1 )
      {
        v24 = i;
        if ( i >= v27[0] )
          break;
        v16 = (struct _RECTL *)&v27[4 * i + 1];
        if ( v16->left < a2->left )
          v16->left = a2->left;
        right = a2->right;
        if ( v16->right > right )
          v16->right = right;
        top = a2->top;
        if ( v16->top < top )
          v16->top = top;
        bottom = a2->bottom;
        if ( v16->bottom > bottom )
          v16->bottom = bottom;
        if ( v16->top < v16->bottom && v16->left < v16->right )
          v11(v16, 1u, v12, v13, v14, v10);
      }
      if ( !v25 )
        break;
LABEL_36:
      v25 = XCLIPOBJ::bEnum((XCLIPOBJ *)a3, 0x144u, (char *)v27, 0LL);
    }
  }
  else
  {
    v11(a2, 1u, v12, v13, v23, v10);
  }
}
