/*
 * XREFs of ?GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z @ 0x1C026DE48
 * Callers:
 *     EngTransparentBlt @ 0x1C00ED7C0 (EngTransparentBlt.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C002D16C (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002D380 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?vTransparentScan@@YAXPEAU_SURFOBJ@@0KKPEAU_XLATEOBJ@@PEAU_RECTL@@K@Z @ 0x1C026FB18 (-vTransparentScan@@YAXPEAU_SURFOBJ@@0KKPEAU_XLATEOBJ@@PEAU_RECTL@@K@Z.c)
 */

__int64 __fastcall GreTransparentBltPS(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        unsigned int a7)
{
  struct _RECTL *v10; // r15
  int v12; // ebx
  RECTL rclBounds; // xmm0
  unsigned int i; // edi
  LONG left; // edx
  LONG right; // ecx
  LONG top; // ecx
  LONG bottom; // r8d
  LONG v19; // r8d
  LONG v20; // r14d
  LONG v21; // r9d
  LONG v22; // r10d
  unsigned int v23; // r10d
  unsigned int v24; // r15d
  int v25; // r14d
  int v26; // eax
  unsigned int v27; // [rsp+44h] [rbp-214h]
  struct _RECTL v28; // [rsp+50h] [rbp-208h] BYREF
  int v29; // [rsp+60h] [rbp-1F8h]
  struct _SURFOBJ *v30; // [rsp+68h] [rbp-1F0h]
  struct _SURFOBJ *v31; // [rsp+70h] [rbp-1E8h]
  struct _RECTL *v32; // [rsp+78h] [rbp-1E0h]
  __int64 v33; // [rsp+80h] [rbp-1D8h] BYREF
  char v34; // [rsp+88h] [rbp-1D0h]
  int v35; // [rsp+8Ch] [rbp-1CCh]
  struct _SURFOBJ *v36; // [rsp+90h] [rbp-1C8h]
  struct _SURFOBJ *v37; // [rsp+98h] [rbp-1C0h]
  struct _CLIPOBJ *v38; // [rsp+A0h] [rbp-1B8h]
  struct _XLATEOBJ *v39; // [rsp+A8h] [rbp-1B0h]
  struct _RECTL *v40; // [rsp+B0h] [rbp-1A8h]
  unsigned int v41; // [rsp+C0h] [rbp-198h] BYREF
  _OWORD v42[20]; // [rsp+C4h] [rbp-194h]

  v31 = a2;
  v30 = a1;
  v36 = a1;
  v37 = a2;
  v38 = a3;
  v40 = a5;
  v10 = a6;
  v32 = a6;
  SURFOBJ_TO_SURFACE(a1);
  SURFOBJ_TO_SURFACE(a2);
  v33 = 0LL;
  v34 = 0;
  v35 = 0;
  if ( !a3 || !a3->iDComplexity )
  {
    rclBounds = *a5;
    goto LABEL_9;
  }
  if ( a3->iDComplexity == 1 )
  {
    rclBounds = a3->rclBounds;
LABEL_9:
    v12 = 0;
    v41 = 1;
    v42[0] = rclBounds;
    goto LABEL_10;
  }
  if ( a3->iDComplexity != 3 )
  {
    SURFMEM::~SURFMEM((SURFMEM *)&v33);
    return 0LL;
  }
  v12 = 1;
  XCLIPOBJ::cEnumStart((XCLIPOBJ *)a3, 0, 0, 4u, 0x14u);
LABEL_10:
  if ( !a4 )
    a4 = xloIdent;
  v39 = a4;
  if ( !v12 )
    goto LABEL_14;
  do
  {
    v12 = XCLIPOBJ::bEnum((XCLIPOBJ *)a3, 0x144u, (char *)&v41, 0LL);
LABEL_14:
    for ( i = 0; i < v41; ++i )
    {
      left = a5->left;
      if ( SLODWORD(v42[i]) < a5->left )
        LODWORD(v42[i]) = left;
      right = a5->right;
      if ( SDWORD2(v42[i]) > right )
        DWORD2(v42[i]) = right;
      top = a5->top;
      if ( SDWORD1(v42[i]) < top )
        DWORD1(v42[i]) = top;
      bottom = a5->bottom;
      if ( SHIDWORD(v42[i]) > bottom )
        HIDWORD(v42[i]) = bottom;
      v19 = DWORD1(v42[i]);
      v20 = HIDWORD(v42[i]);
      if ( v19 < v20 )
      {
        v21 = v42[i];
        v22 = DWORD2(v42[i]);
        if ( v21 < v22 )
        {
          v28.left = v42[i];
          v28.top = v19;
          v28.right = v22;
          v28.bottom = v19 + 1;
          v23 = v21 + v10->left - left;
          v27 = v23;
          v24 = v19 + v10->top - top;
          v25 = v20 - v19;
          while ( 1 )
          {
            v26 = v25--;
            v29 = v25;
            if ( !v26 )
              break;
            vTransparentScan(v30, v31, v23, v24, a4, &v28, a7);
            v23 = v27;
            ++v24;
            ++v28.top;
            ++v28.bottom;
          }
          v10 = v32;
        }
      }
    }
  }
  while ( v12 );
  SURFMEM::~SURFMEM((SURFMEM *)&v33);
  return 1LL;
}
