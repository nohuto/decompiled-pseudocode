/*
 * XREFs of ?bSplitTriangle@@YAHPEAU_TRIVERTEX@@PEAKPEAU_GRADIENT_TRIANGLE@@1PEAE@Z @ 0x1C0269FB0
 * Callers:
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C01306B4 (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 * Callees:
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
 *     ?lCalculateTriangleArea@@YAJPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1C0130E20 (-lCalculateTriangleArea@@YAJPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z.c)
 */

__int64 __fastcall bSplitTriangle(
        struct _TRIVERTEX *a1,
        unsigned int *a2,
        struct _GRADIENT_TRIANGLE *a3,
        unsigned int *a4,
        unsigned __int8 *a5)
{
  __int64 v7; // r15
  ULONG Vertex1; // ecx
  ULONG Vertex2; // r8d
  struct _TRIVERTEX *v10; // r9
  struct _TRIVERTEX *v11; // rdx
  struct _TRIVERTEX *v12; // r12
  LONG y; // r10d
  LONG x; // r11d
  LONG v15; // r8d
  int v16; // eax
  LONG v17; // r9d
  LONG v18; // edx
  int v19; // eax
  LONG v20; // ecx
  __int64 v21; // rsi
  int v22; // eax
  LONG v23; // r8d
  int v24; // ecx
  __int64 v25; // r13
  int v26; // eax
  __int64 v27; // r14
  int v28; // eax
  int v29; // r9d
  int v30; // eax
  int v31; // r8d
  __int64 v32; // rbx
  __int64 v33; // rsi
  __int64 v34; // r14
  __int64 v35; // rbx
  ULONG v36; // r14d
  struct _TRIVERTEX *v37; // rbx
  ULONG v38; // esi
  int v39; // r12d
  char v40; // r8
  int Green; // eax
  int Blue; // eax
  char v43; // r8
  unsigned int *v44; // r10
  ULONG v45; // r9d
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned __int8 *v49; // rax
  ULONG v51; // [rsp+20h] [rbp-38h]
  ULONG Vertex3; // [rsp+24h] [rbp-34h]
  struct _TRIVERTEX *v53; // [rsp+28h] [rbp-30h]
  struct _TRIVERTEX *v54; // [rsp+30h] [rbp-28h]
  __int64 v55; // [rsp+38h] [rbp-20h]
  struct _TRIVERTEX v56; // [rsp+40h] [rbp-18h] BYREF
  ULONG v59; // [rsp+B0h] [rbp+58h] BYREF
  unsigned int *v60; // [rsp+B8h] [rbp+60h]

  v60 = a4;
  v7 = *a4 - 1;
  Vertex1 = a3[*a4 - 1].Vertex1;
  Vertex2 = a3[*a4 - 1].Vertex2;
  Vertex3 = a3[*a4 - 1].Vertex3;
  v10 = &a1[Vertex2];
  v11 = &a1[Vertex1];
  v51 = Vertex1;
  v12 = &a1[Vertex3];
  v59 = Vertex2;
  y = v10->y;
  x = v10->x;
  v15 = v11->x;
  v16 = v10->x - v11->x;
  v54 = v10;
  v17 = v12->x;
  v53 = v11;
  v18 = v11->y;
  if ( v15 - x >= 0 )
    v16 = v15 - x;
  v55 = v16;
  v19 = y - v18;
  if ( v18 - y >= 0 )
    v19 = v18 - y;
  v20 = v15;
  v21 = v19;
  v22 = v17 - v15;
  v23 = v12->y;
  v24 = v20 - v17;
  if ( v24 >= 0 )
    v22 = v24;
  v25 = v22;
  v26 = v23 - v18;
  if ( v18 - v23 >= 0 )
    v26 = v18 - v23;
  v27 = v26;
  v28 = x - v17;
  v29 = v17 - x;
  if ( v28 >= 0 )
    v29 = v28;
  v30 = y - v23;
  v31 = v23 - y;
  *(_QWORD *)&v56.x = v29;
  if ( v30 >= 0 )
    v31 = v30;
  v32 = v31;
  if ( (v55 > 0x4000 || v21 > 0x4000 || v25 > 0x4000 || v27 > 0x4000 || v29 > 0x4000LL || v31 > 0x4000LL)
    && (unsigned int)lCalculateTriangleArea(v53, v54, v12, 0LL) )
  {
    v33 = v55 * v55 + v21 * v21;
    v34 = v25 * v25 + v27 * v27;
    v35 = *(_QWORD *)&v56.x * *(_QWORD *)&v56.x + v32 * v32;
    if ( v33 <= v34 )
    {
      if ( v34 > v35 )
      {
        v38 = a3[v7].Vertex2;
        v37 = v53;
        v36 = v51;
        v54 = v12;
        v39 = a3[v7].Vertex3;
LABEL_27:
        bFToL((float)((float)((float)v54->x - (float)v37->x) * 0.5) + (float)v37->x, &v56.x, 6);
        bFToL((float)((float)((float)v54->y - (float)v37->y) * 0.5) + (float)v37->y, &v56.y, v40);
        bFToL((float)((float)((float)v54->Red - (float)v37->Red) * 0.5) + (float)v37->Red, (int *)&v59, 6);
        Green = v37->Green;
        v56.Red = v59;
        bFToL((float)((float)((float)v54->Green - (float)Green) * 0.5) + (float)Green, (int *)&v59, 6);
        Blue = v37->Blue;
        v56.Green = v59;
        bFToL((float)((float)((float)v54->Blue - (float)Blue) * 0.5) + (float)Blue, (int *)&v59, 6);
        v56.Blue = v59;
        bFToL((float)((float)((float)v54->Alpha - (float)v37->Alpha) * 0.5) + (float)v37->Alpha, (int *)&v59, v43);
        v44 = v60;
        v56.Alpha = v59;
        v45 = *a2;
        v46 = *v60;
        a1[*a2] = v56;
        v47 = v46;
        a3[v47].Vertex1 = v36;
        a3[v47].Vertex2 = v38;
        a3[v47].Vertex3 = v45;
        v48 = (unsigned int)(v46 + 1);
        a3[v48].Vertex1 = v39;
        a3[v48].Vertex2 = v38;
        a3[v48].Vertex3 = v45;
        v49 = a5;
        a5[v46] = 1;
        v49[(unsigned int)(v46 + 1)] = 0;
        *v44 = v46 + 2;
        *a2 = v45 + 1;
        return 1LL;
      }
    }
    else if ( v33 > v35 )
    {
      v37 = v53;
      v38 = Vertex3;
      v36 = v51;
      goto LABEL_26;
    }
    v36 = a3[v7].Vertex3;
    v37 = v12;
    v38 = a3[v7].Vertex1;
LABEL_26:
    v39 = v59;
    goto LABEL_27;
  }
  return 0LL;
}
