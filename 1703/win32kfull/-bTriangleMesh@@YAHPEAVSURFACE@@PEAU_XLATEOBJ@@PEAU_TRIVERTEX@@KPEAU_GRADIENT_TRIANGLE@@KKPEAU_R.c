/*
 * XREFs of ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C012D0D4
 * Callers:
 *     EngGradientFill @ 0x1C00AB7F0 (EngGradientFill.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     ?bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6AX0PEAU_GRADIENTRECTDATA@@@Z@Z @ 0x1C00AC438 (-bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6.c)
 *     ?bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z @ 0x1C012D28C (-bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z.c)
 *     ?bIsTriangleInBounds@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1C012DD94 (-bIsTriangleInBounds@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?bSplitTriangle@@YAHPEAU_TRIVERTEX@@PEAKPEAU_GRADIENT_TRIANGLE@@1PEAE@Z @ 0x1C026B250 (-bSplitTriangle@@YAHPEAU_TRIVERTEX@@PEAKPEAU_GRADIENT_TRIANGLE@@1PEAE@Z.c)
 */

__int64 __fastcall bTriangleMesh(
        struct SURFACE *a1,
        struct _XLATEOBJ *a2,
        struct _TRIVERTEX *a3,
        unsigned int a4,
        struct _GRADIENT_TRIANGLE *a5,
        size_t Size,
        LONG a7,
        struct _RECTL *a8,
        struct _RECTL *a9,
        struct _POINTL *a10)
{
  struct _RECTL *v10; // rbx
  __int64 v12; // r15
  unsigned int v14; // r12d
  int v15; // r9d
  struct _POINTL *v16; // rsi
  struct _RECTL *v17; // rdx
  struct _RECTL v18; // xmm0
  struct _POINTL *v19; // rax
  __int64 v20; // r15
  ULONG *p_Vertex3; // rbx
  struct _TRIVERTEX *v22; // rdi
  struct _TRIVERTEX *v23; // r14
  struct _TRIVERTEX *v24; // r8
  __int64 v26; // rdi
  unsigned int v27; // eax
  __int64 v28; // r13
  __int64 v29; // rbx
  unsigned __int64 v30; // rax
  struct _TRIVERTEX *v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // r13d
  unsigned int v34; // r14d
  struct _TRIVERTEX *v35; // rbx
  ULONG Vertex1; // r9d
  ULONG Vertex2; // r8d
  __int64 Vertex3; // rdx
  int v39; // eax
  unsigned __int8 v40; // cl
  unsigned int v41; // [rsp+30h] [rbp-40h] BYREF
  __int64 v42; // [rsp+38h] [rbp-38h] BYREF
  struct _GRADIENT_TRIANGLE *v43; // [rsp+40h] [rbp-30h]
  unsigned __int8 *v44; // [rsp+48h] [rbp-28h]
  void (*v45)(struct SURFACE *, struct _TRIANGLEDATA *); // [rsp+50h] [rbp-20h] BYREF
  struct _TRIVERTEX *v46; // [rsp+58h] [rbp-18h]
  struct _TRIVERTEX *v47; // [rsp+60h] [rbp-10h]
  struct _TRIVERTEX *v48; // [rsp+68h] [rbp-8h]

  v10 = a8;
  v12 = a4;
  v14 = 1;
  v15 = a8->bottom - a8->top;
  if ( v15 <= 0 )
    return 0;
  if ( (unsigned int)(v15 - 1) > 0x6666661 )
    return 0;
  v16 = (struct _POINTL *)PALLOCMEM2((unsigned int)(40 * v15 + 168), 1734624615LL, 1);
  if ( !v16 )
    return 0;
  v42 = *((_QWORD *)a1 + 16);
  if ( !v42 )
  {
    v42 = *(_QWORD *)(*((_QWORD *)a1 + 6) + 1824LL);
    if ( !v42 )
    {
LABEL_15:
      v14 = 0;
LABEL_13:
      Win32FreePool(v16);
      return v14;
    }
  }
  bDetermineTriangleFillRoutine(
    a1,
    (struct XEPALOBJ *)&v42,
    &v45,
    (void (**)(struct SURFACE *, struct _GRADIENTRECTDATA *))&a8);
  v17 = a9;
  v18 = *v10;
  v16[18].x = a7;
  v16[20] = (struct _POINTL)&v42;
  v19 = a10;
  *(struct _RECTL *)&v16->x = v18;
  v16[19] = (struct _POINTL)a2;
  v16[16] = *v19;
  if ( v17->right - v17->left < 0x4000 && v17->bottom - v17->top < 0x4000 )
  {
    if ( (_DWORD)Size )
    {
      v20 = (unsigned int)Size;
      p_Vertex3 = &a5->Vertex3;
      do
      {
        v22 = &a3[*(p_Vertex3 - 2)];
        v23 = &a3[*(p_Vertex3 - 1)];
        if ( (unsigned int)bIsTriangleInBounds(v22, v23, &a3[*p_Vertex3], (struct _TRIANGLEDATA *)v16) )
          v14 = bCalculateAndDrawTriangle(a1, v22, v23, v24, (struct _TRIANGLEDATA *)v16, v45);
        p_Vertex3 += 3;
        --v20;
      }
      while ( v20 );
    }
    goto LABEL_13;
  }
  if ( (unsigned int)v12 < 0xFFFFFFE3 )
  {
    LODWORD(v26) = Size;
    v27 = Size + 58;
    if ( (unsigned int)Size < 0xFFFFFFC6 )
    {
      v28 = v27;
      v29 = (unsigned int)(v12 + 29);
      v30 = v29 * 16 + 13LL * v27;
      if ( v30 <= 0xFFFFFFFF )
      {
        v31 = (struct _TRIVERTEX *)PALLOCMEM2((unsigned int)v30, 1953920071LL, 0);
        v46 = v31;
        if ( v31 )
        {
          v43 = (struct _GRADIENT_TRIANGLE *)&v31[v29];
          v32 = 3 * v28;
          v33 = v28 - 2;
          v34 = v12 + 28;
          v44 = (unsigned __int8 *)(&v31[v29].x + v32);
          memmove(v31, a3, 16 * v12);
          memmove(v43, a5, 12LL * (unsigned int)Size);
          memset(v44, 0, (unsigned int)Size);
          v35 = v46;
          v41 = v12;
          LODWORD(a8) = Size;
          do
          {
            Vertex1 = v43[(unsigned int)(v26 - 1)].Vertex1;
            if ( Vertex1 >= v34 )
              break;
            Vertex2 = v43[(unsigned int)(v26 - 1)].Vertex2;
            if ( Vertex2 >= v34 )
              break;
            Vertex3 = v43[(unsigned int)(v26 - 1)].Vertex3;
            if ( (unsigned int)Vertex3 >= v34 )
              break;
            v46 = &v35[Vertex3];
            v47 = &v35[Vertex2];
            v48 = &v35[Vertex1];
            if ( !(unsigned int)bIsTriangleInBounds(v48, v47, v46, (struct _TRIANGLEDATA *)v16) )
              goto LABEL_28;
            if ( !(unsigned int)bSplitTriangle(v35, &v41, v43, (unsigned int *)&a8, v44) )
            {
              v39 = bCalculateAndDrawTriangle(a1, v48, v47, v46, (struct _TRIANGLEDATA *)v16, v45);
              LODWORD(v12) = v41;
              v14 = v39;
              LODWORD(v26) = (_DWORD)a8;
              while ( 1 )
              {
LABEL_28:
                v26 = (unsigned int)(v26 - 1);
                LODWORD(a8) = v26;
                v40 = v44[v26];
                if ( v40 )
                {
                  LODWORD(v12) = v12 - 1;
                  v41 = v12;
                }
                if ( !(_DWORD)v26 )
                  goto LABEL_33;
                if ( v40 != 1 )
                  goto LABEL_32;
              }
            }
            LODWORD(v12) = v41;
            if ( v41 > v34 )
              break;
            LODWORD(v26) = (_DWORD)a8;
            if ( (unsigned int)a8 > v33 )
              break;
LABEL_32:
            ;
          }
          while ( (_DWORD)v26 );
LABEL_33:
          Win32FreePool(v35);
          goto LABEL_13;
        }
        goto LABEL_15;
      }
    }
  }
  Win32FreePool(v16);
  return 0LL;
}
