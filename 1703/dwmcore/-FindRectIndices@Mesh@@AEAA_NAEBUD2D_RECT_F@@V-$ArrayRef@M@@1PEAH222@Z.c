/*
 * XREFs of ?FindRectIndices@Mesh@@AEAA_NAEBUD2D_RECT_F@@V?$ArrayRef@M@@1PEAH222@Z @ 0x18015E41C
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x18003CCC0 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall Mesh::FindRectIndices(
        __int64 a1,
        float *a2,
        __int64 a3,
        __int64 a4,
        int *a5,
        int *a6,
        int *a7,
        int *a8)
{
  int v9; // r11d
  int v10; // edx
  int v12; // ebp
  int v13; // esi
  char v14; // r10
  int v15; // ebx
  int v16; // edi
  __int64 v17; // rax
  float *v18; // rcx
  float v19; // xmm4_4
  float v20; // xmm2_4
  float v21; // xmm0_4
  int v22; // ecx
  float *v23; // rdx
  float v24; // xmm4_4
  float v25; // xmm2_4
  float v26; // xmm0_4

  v9 = 0;
  v10 = *(_DWORD *)(a3 + 8);
  v12 = -1;
  v13 = -1;
  v14 = 1;
  v15 = -1;
  v16 = -1;
  if ( v10 > 0 )
  {
    v17 = *(_QWORD *)(a1 + 176);
    v18 = *(float **)a3;
    v19 = *(float *)(v17 + 4);
    while ( 1 )
    {
      v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*v18 - *a2)) & _xmm);
      if ( v19 >= v20 )
        v12 = v9;
      v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*v18 - a2[2])) & _xmm);
      if ( v19 >= v21 )
        break;
      ++v9;
      ++v18;
      if ( v9 >= v10 )
        goto LABEL_9;
    }
    v13 = v9;
  }
LABEL_9:
  v22 = 0;
  if ( *(int *)(a4 + 8) > 0 )
  {
    v23 = *(float **)a4;
    v24 = *(float *)(*(_QWORD *)(a1 + 176) + 4LL);
    while ( 1 )
    {
      v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*v23 - a2[1])) & _xmm);
      if ( v24 >= v25 )
        v15 = v22;
      v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*v23 - a2[3])) & _xmm);
      if ( v24 >= v26 )
        break;
      ++v22;
      ++v23;
      if ( v22 >= *(_DWORD *)(a4 + 8) )
        goto LABEL_17;
    }
    v16 = v22;
  }
LABEL_17:
  *a5 = v12;
  *a6 = v15;
  *a7 = v13;
  *a8 = v16;
  if ( v12 == -1 || v15 == -1 || v13 == -1 || v16 == -1 )
    return 0;
  return v14;
}
