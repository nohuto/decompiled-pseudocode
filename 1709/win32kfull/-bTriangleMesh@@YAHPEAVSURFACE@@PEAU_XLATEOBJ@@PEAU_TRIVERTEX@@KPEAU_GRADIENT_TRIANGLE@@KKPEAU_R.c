/*
 * XREFs of ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C01306B4
 * Callers:
 *     EngGradientFill @ 0x1C00B6FF0 (EngGradientFill.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ?bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6AX0PEAU_GRADIENTRECTDATA@@@Z@Z @ 0x1C00B73D0 (-bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6.c)
 *     ?bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z @ 0x1C013086C (-bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z.c)
 *     ?bIsTriangleInBounds@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1C0131384 (-bIsTriangleInBounds@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?bSplitTriangle@@YAHPEAU_TRIVERTEX@@PEAKPEAU_GRADIENT_TRIANGLE@@1PEAE@Z @ 0x1C0269FB0 (-bSplitTriangle@@YAHPEAU_TRIVERTEX@@PEAKPEAU_GRADIENT_TRIANGLE@@1PEAE@Z.c)
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
  struct _RECTL *v16; // rdx
  struct _POINTL *v17; // rsi
  __int64 v18; // r8
  struct _RECTL v19; // xmm0
  struct _POINTL *v20; // rax
  __int64 v21; // r15
  ULONG *p_Vertex3; // rbx
  struct _TRIVERTEX *v23; // rdi
  struct _TRIVERTEX *v24; // r14
  unsigned int v26; // r14d
  __int64 v27; // rdi
  unsigned int v28; // eax
  __int64 v29; // rbx
  unsigned __int64 v30; // rax
  struct _TRIVERTEX *v31; // rax
  struct _TRIVERTEX *v32; // r13
  __int64 v33; // rcx
  unsigned int v34; // ebx
  unsigned int v35; // r14d
  __int64 Vertex3; // rdx
  __int64 Vertex2; // r8
  ULONG Vertex1; // r9d
  int v39; // eax
  unsigned __int8 v40; // cl
  unsigned int v41; // [rsp+30h] [rbp-40h] BYREF
  struct _TRIVERTEX *v42; // [rsp+38h] [rbp-38h]
  __int64 v43; // [rsp+40h] [rbp-30h] BYREF
  struct _GRADIENT_TRIANGLE *v44; // [rsp+48h] [rbp-28h]
  unsigned __int8 *v45; // [rsp+50h] [rbp-20h]
  void (*v46)(struct SURFACE *, struct _TRIANGLEDATA *); // [rsp+58h] [rbp-18h] BYREF
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
  v17 = (struct _POINTL *)PALLOCMEM2((unsigned int)(40 * v15 + 168), 1734624615LL, 1);
  if ( !v17 )
    return 0;
  v43 = *((_QWORD *)a1 + 16);
  if ( !v43 )
  {
    v43 = *(_QWORD *)(*((_QWORD *)a1 + 6) + 1824LL);
    if ( !v43 )
    {
LABEL_15:
      v14 = 0;
LABEL_13:
      Win32FreePool(v17, v16, v18);
      return v14;
    }
  }
  bDetermineTriangleFillRoutine(
    a1,
    (struct XEPALOBJ *)&v43,
    &v46,
    (void (**)(struct SURFACE *, struct _GRADIENTRECTDATA *))&a8);
  v18 = 0x4000LL;
  v16 = a9;
  v19 = *v10;
  v17[18].x = a7;
  v17[20] = (struct _POINTL)&v43;
  v20 = a10;
  *(struct _RECTL *)&v17->x = v19;
  v17[19] = (struct _POINTL)a2;
  v17[16] = *v20;
  if ( v16->right - v16->left < 0x4000 && v16->bottom - v16->top < 0x4000 )
  {
    if ( (_DWORD)Size )
    {
      v21 = (unsigned int)Size;
      p_Vertex3 = &a5->Vertex3;
      do
      {
        v23 = &a3[*(p_Vertex3 - 2)];
        v24 = &a3[*(p_Vertex3 - 1)];
        if ( (unsigned int)bIsTriangleInBounds(v23, v24, &a3[*p_Vertex3], (struct _TRIANGLEDATA *)v17) )
          v14 = bCalculateAndDrawTriangle(a1, v23, v24, (struct _TRIVERTEX *)v18, (struct _TRIANGLEDATA *)v17, v46);
        p_Vertex3 += 3;
        --v21;
      }
      while ( v21 );
    }
    goto LABEL_13;
  }
  if ( (unsigned int)v12 < 0xFFFFFFE3 )
  {
    v26 = v12 + 29;
    LODWORD(v27) = Size;
    v28 = Size + 58;
    if ( (unsigned int)Size < 0xFFFFFFC6 )
    {
      v29 = v28;
      v30 = 16LL * v26 + 13LL * v28;
      a8 = (struct _RECTL *)(16LL * v26);
      if ( v30 <= 0xFFFFFFFF )
      {
        v31 = (struct _TRIVERTEX *)PALLOCMEM2((unsigned int)v30, 1953920071LL, 0);
        v32 = v31;
        if ( v31 )
        {
          v33 = 3 * v29;
          v44 = (struct _GRADIENT_TRIANGLE *)((char *)a8 + (_QWORD)v31);
          v34 = v29 - 2;
          LODWORD(v42) = v34;
          v35 = v12 + 28;
          v45 = (unsigned __int8 *)&a8->left + 4 * v33 + (_QWORD)v31;
          memmove(v31, a3, 16 * v12);
          memmove(v44, a5, 12LL * (unsigned int)Size);
          memset(v45, 0, (unsigned int)Size);
          v41 = v12;
          LODWORD(a8) = Size;
          do
          {
            Vertex1 = v44[(unsigned int)(v27 - 1)].Vertex1;
            if ( Vertex1 >= v35 )
              break;
            Vertex2 = v44[(unsigned int)(v27 - 1)].Vertex2;
            if ( (unsigned int)Vertex2 >= v35 )
              break;
            Vertex3 = v44[(unsigned int)(v27 - 1)].Vertex3;
            if ( (unsigned int)Vertex3 >= v35 )
              break;
            v42 = &v32[Vertex3];
            v47 = &v32[(unsigned int)Vertex2];
            v48 = &v32[Vertex1];
            if ( !(unsigned int)bIsTriangleInBounds(v48, v47, v42, (struct _TRIANGLEDATA *)v17) )
              goto LABEL_28;
            if ( !(unsigned int)bSplitTriangle(v32, &v41, v44, (unsigned int *)&a8, v45) )
            {
              v39 = bCalculateAndDrawTriangle(a1, v48, v47, v42, (struct _TRIANGLEDATA *)v17, v46);
              LODWORD(v12) = v41;
              v14 = v39;
              LODWORD(v27) = (_DWORD)a8;
LABEL_28:
              Vertex3 = 0xFFFFFFFFLL;
              while ( 1 )
              {
                v27 = (unsigned int)(v27 - 1);
                LODWORD(a8) = v27;
                v40 = v45[v27];
                if ( v40 )
                {
                  LODWORD(v12) = v12 - 1;
                  v41 = v12;
                }
                if ( !(_DWORD)v27 )
                  goto LABEL_34;
                if ( v40 != 1 )
                  goto LABEL_33;
              }
            }
            LODWORD(v12) = v41;
            if ( v41 > v35 )
              break;
            LODWORD(v27) = (_DWORD)a8;
            if ( (unsigned int)a8 > v34 )
              break;
LABEL_33:
            ;
          }
          while ( (_DWORD)v27 );
LABEL_34:
          Win32FreePool(v32, Vertex3, Vertex2);
          goto LABEL_13;
        }
        goto LABEL_15;
      }
    }
  }
  Win32FreePool(v17, 0xFFFFFFFFLL, 0x4000LL);
  return 0LL;
}
