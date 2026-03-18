/*
 * XREFs of ?bSplitTriangle@@YAHPEAU_TRIVERTEX@@PEAKPEAU_GRADIENT_TRIANGLE@@1PEAE@Z @ 0x1C026B250
 * Callers:
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C012D0D4 (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 * Callees:
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 *     ?lCalculateTriangleArea@@YAJPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1C012D844 (-lCalculateTriangleArea@@YAJPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z.c)
 */

__int64 __fastcall bSplitTriangle(
        struct _TRIVERTEX *a1,
        unsigned int *a2,
        struct _GRADIENT_TRIANGLE *a3,
        unsigned int *a4,
        unsigned __int8 *a5)
{
  __int64 v7; // rsi
  ULONG Vertex1; // ecx
  ULONG Vertex3; // eax
  struct _TRIVERTEX *v10; // r15
  struct _TRIVERTEX *v11; // rdx
  struct _TRIVERTEX *v12; // rdi
  int x; // r8d
  int v14; // eax
  LONG y; // r10d
  LONG v16; // r14d
  __int64 v17; // r11
  int v18; // eax
  LONG v19; // ecx
  __int64 v20; // r13
  int v21; // eax
  __int64 v22; // r9
  LONG v23; // eax
  int v24; // r8d
  __int64 v25; // r12
  int v26; // ecx
  int v27; // eax
  __int64 v28; // r14
  int *p_x; // rdx
  __int64 v30; // r13
  __int64 v31; // r12
  __int64 v32; // r14
  int v33; // r12d
  ULONG v34; // r14d
  ULONG v35; // esi
  char v36; // r8
  int Green; // eax
  int Blue; // eax
  char v39; // r8
  unsigned int *v40; // r10
  ULONG v41; // r9d
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int8 *v45; // rax
  ULONG v47; // [rsp+20h] [rbp-48h]
  LONG v48; // [rsp+28h] [rbp-40h]
  __int64 v49; // [rsp+28h] [rbp-40h]
  ULONG v50; // [rsp+30h] [rbp-38h]
  struct _TRIVERTEX *v51; // [rsp+38h] [rbp-30h]
  __int64 v52; // [rsp+40h] [rbp-28h]
  struct _TRIVERTEX v53; // [rsp+48h] [rbp-20h] BYREF
  ULONG Vertex2; // [rsp+C0h] [rbp+58h] BYREF
  unsigned int *v57; // [rsp+C8h] [rbp+60h]

  v57 = a4;
  v7 = *a4 - 1;
  Vertex1 = a3[*a4 - 1].Vertex1;
  Vertex3 = a3[*a4 - 1].Vertex3;
  Vertex2 = a3[*a4 - 1].Vertex2;
  v10 = &a1[Vertex1];
  v11 = &a1[Vertex2];
  v12 = &a1[Vertex3];
  v50 = Vertex3;
  x = v10->x;
  v47 = Vertex1;
  v14 = v10->x - v11->x;
  v51 = v11;
  v48 = v11->x;
  if ( v14 < 0 )
    v14 = v11->x - x;
  y = v10->y;
  v16 = v11->y;
  v17 = v14;
  v18 = y - v16;
  v52 = v17;
  if ( y - v16 < 0 )
    v18 = v16 - y;
  v19 = v12->x;
  v20 = v18;
  v21 = x - v12->x;
  if ( v21 < 0 )
    v21 = v19 - x;
  v22 = v21;
  v23 = v12->y;
  v24 = y - v23;
  *(_QWORD *)&v53.x = v22;
  if ( y - v23 < 0 )
    v24 = v23 - y;
  v25 = v24;
  if ( v48 - v19 >= 0 )
    v26 = v48 - v19;
  else
    v26 = v19 - v48;
  v49 = v26;
  if ( v16 - v23 >= 0 )
    v27 = v16 - v23;
  else
    v27 = v23 - v16;
  v28 = v27;
  if ( (v17 > 0x4000 || v20 > 0x4000 || v22 > 0x4000 || v24 > 0x4000LL || v26 > 0x4000LL || v27 > 0x4000LL)
    && (unsigned int)lCalculateTriangleArea(v10, v11, v12, 0LL) )
  {
    v30 = v52 * v52 + v20 * v20;
    v31 = *(_QWORD *)&v53.x * *(_QWORD *)&v53.x + v25 * v25;
    v32 = v49 * v49 + v28 * v28;
    if ( v30 <= v31 )
    {
      if ( v31 <= v32 )
      {
        v34 = a3[v7].Vertex3;
        v10 = v12;
        v35 = a3[v7].Vertex1;
        v33 = Vertex2;
        goto LABEL_30;
      }
      v33 = a3[v7].Vertex3;
      p_x = &v12->x;
      v35 = a3[v7].Vertex2;
      v51 = v12;
    }
    else
    {
      v33 = Vertex2;
      if ( v30 <= v32 )
      {
        v34 = a3[v7].Vertex3;
        v10 = v12;
        v35 = a3[v7].Vertex1;
LABEL_30:
        bFToL((float)((float)((float)*p_x - (float)v10->x) * 0.5) + (float)v10->x, &v53.x, 6);
        bFToL((float)((float)((float)v51->y - (float)v10->y) * 0.5) + (float)v10->y, &v53.y, v36);
        bFToL((float)((float)((float)v51->Red - (float)v10->Red) * 0.5) + (float)v10->Red, (int *)&Vertex2, 6);
        Green = v10->Green;
        v53.Red = Vertex2;
        bFToL((float)((float)((float)v51->Green - (float)Green) * 0.5) + (float)Green, (int *)&Vertex2, 6);
        Blue = v10->Blue;
        v53.Green = Vertex2;
        bFToL((float)((float)((float)v51->Blue - (float)Blue) * 0.5) + (float)Blue, (int *)&Vertex2, 6);
        v53.Blue = Vertex2;
        bFToL((float)((float)((float)v51->Alpha - (float)v10->Alpha) * 0.5) + (float)v10->Alpha, (int *)&Vertex2, v39);
        v40 = v57;
        v53.Alpha = Vertex2;
        v41 = *a2;
        v42 = *v57;
        a1[*a2] = v53;
        v43 = v42;
        a3[v43].Vertex1 = v34;
        a3[v43].Vertex2 = v35;
        a3[v43].Vertex3 = v41;
        v44 = (unsigned int)(v42 + 1);
        a3[v44].Vertex1 = v33;
        a3[v44].Vertex2 = v35;
        a3[v44].Vertex3 = v41;
        v45 = a5;
        a5[v42] = 1;
        v45[(unsigned int)(v42 + 1)] = 0;
        *v40 = v42 + 2;
        *a2 = v41 + 1;
        return 1LL;
      }
      v35 = v50;
    }
    v34 = v47;
    goto LABEL_30;
  }
  return 0LL;
}
