/*
 * XREFs of std::_Partition_by_median_guess_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x18007B09C
 * Callers:
 *     std::_Sort_unchecked1_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64___int64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x18007AD8C (std--_Sort_unchecked1_SpatialInteractionDevices--SpatialInputButtonCaps_____ptr64___int64__lambd.c)
 * Callees:
 *     std::_Med3_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x18007BBD4 (std--_Med3_unchecked_SpatialInteractionDevices--SpatialInputButtonCaps_____ptr64__lambda_7cb88ca.c)
 */

unsigned __int64 *__fastcall std::_Partition_by_median_guess_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // r10
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int16 *v17; // rdx
  unsigned __int16 v18; // cx
  unsigned __int16 *v19; // r8
  unsigned __int16 v20; // cx
  unsigned __int16 *v21; // r8
  unsigned __int64 v22; // r9
  unsigned __int16 v23; // cx
  __int64 v24; // xmm1_8
  int v25; // ecx
  bool v26; // zf
  unsigned __int64 v27; // r10
  unsigned __int16 v28; // cx
  __int64 v29; // xmm1_8
  int v30; // ecx
  __int64 v31; // xmm1_8
  int v32; // ecx
  __int64 v33; // xmm1_8
  int v34; // ecx
  __int64 v35; // xmm1_8
  int v36; // ecx
  __int64 v37; // xmm1_8
  int v38; // ecx
  __int64 v39; // xmm1_8
  int v40; // ecx
  unsigned __int64 *result; // rax

  v6 = a3 - 12;
  v7 = a2 + 12 * ((__int64)(a3 - a2) / 24);
  v8 = a2;
  v9 = (__int64)(a3 - 12 - a2) / 12;
  if ( v9 <= 40 )
  {
    v16 = a3 - 12;
  }
  else
  {
    v10 = (v9 + 1) / 8;
    v11 = 12 * v10 + a2;
    std::_Med3_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
      v8,
      v11,
      24 * v10 + a2);
    std::_Med3_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
      v7 - v12,
      v7,
      v12 + v7);
    std::_Med3_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
      v6 - v13,
      v6 - v14,
      a3 - 12);
    v8 = v11;
    v16 = v15;
  }
  std::_Med3_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
    v8,
    v7,
    v16);
  v17 = (unsigned __int16 *)(v7 + 12);
  if ( a2 < v7 )
  {
    do
    {
      v18 = *(_WORD *)v7;
      v19 = (unsigned __int16 *)(v7 - 12);
      if ( *(_WORD *)(v7 - 12) < *(_WORD *)v7 || *(_WORD *)(v7 - 12) == v18 && *(_WORD *)(v7 - 8) < *(_WORD *)(v7 + 4) )
        break;
      if ( v18 < *v19 || v18 == *v19 && *(_WORD *)(v7 + 4) < *(_WORD *)(v7 - 8) )
        break;
      v7 -= 12LL;
    }
    while ( a2 < (unsigned __int64)v19 );
  }
  if ( (unsigned __int64)v17 < a3 )
  {
    v20 = *(_WORD *)v7;
    do
    {
      if ( *v17 < v20 || *v17 == v20 && v17[2] < *(_WORD *)(v7 + 4) )
        break;
      if ( v20 < *v17 || v20 == *v17 && *(_WORD *)(v7 + 4) < v17[2] )
        break;
      v17 += 6;
    }
    while ( (unsigned __int64)v17 < a3 );
  }
  v21 = v17;
  v22 = v7;
  while ( 2 )
  {
    while ( (unsigned __int64)v21 < a3 )
    {
      v23 = *v21;
      if ( *(_WORD *)v7 >= *v21 && (*(_WORD *)v7 != v23 || *(_WORD *)(v7 + 4) >= v21[2]) )
      {
        if ( v23 < *(_WORD *)v7 || v23 == *(_WORD *)v7 && v21[2] < *(_WORD *)(v7 + 4) )
          break;
        if ( v17 != v21 )
        {
          v24 = *(_QWORD *)v17;
          v25 = *((_DWORD *)v17 + 2);
          *(_QWORD *)v17 = *(_QWORD *)v21;
          *((_DWORD *)v17 + 2) = *((_DWORD *)v21 + 2);
          *(_QWORD *)v21 = v24;
          *((_DWORD *)v21 + 2) = v25;
        }
        v17 += 6;
      }
LABEL_31:
      v21 += 6;
    }
    v26 = v22 == a2;
    if ( v22 <= a2 )
      goto LABEL_45;
    v27 = v22 - 12;
    while ( 1 )
    {
      v28 = *(_WORD *)v7;
      if ( *(_WORD *)v27 >= *(_WORD *)v7 && (*(_WORD *)v27 != v28 || *(_WORD *)(v27 + 4) >= *(_WORD *)(v7 + 4)) )
        break;
LABEL_43:
      v22 -= 12LL;
      v27 -= 12LL;
      if ( a2 >= v22 )
        goto LABEL_44;
    }
    if ( v28 >= *(_WORD *)v27 && (v28 != *(_WORD *)v27 || *(_WORD *)(v7 + 4) >= *(_WORD *)(v27 + 4)) )
    {
      v7 -= 12LL;
      if ( v7 != v27 )
      {
        v29 = *(_QWORD *)v7;
        v30 = *(_DWORD *)(v7 + 8);
        *(_QWORD *)v7 = *(_QWORD *)v27;
        *(_DWORD *)(v7 + 8) = *(_DWORD *)(v27 + 8);
        *(_QWORD *)v27 = v29;
        *(_DWORD *)(v27 + 8) = v30;
      }
      goto LABEL_43;
    }
LABEL_44:
    v26 = v22 == a2;
LABEL_45:
    if ( !v26 )
    {
      v22 -= 12LL;
      if ( v21 != (unsigned __int16 *)a3 )
      {
        v39 = *(_QWORD *)v21;
        v40 = *((_DWORD *)v21 + 2);
        *(_QWORD *)v21 = *(_QWORD *)v22;
        *((_DWORD *)v21 + 2) = *(_DWORD *)(v22 + 8);
        *(_QWORD *)v22 = v39;
        *(_DWORD *)(v22 + 8) = v40;
        goto LABEL_31;
      }
      v7 -= 12LL;
      if ( v22 != v7 )
      {
        v35 = *(_QWORD *)v22;
        v36 = *(_DWORD *)(v22 + 8);
        *(_QWORD *)v22 = *(_QWORD *)v7;
        *(_DWORD *)(v22 + 8) = *(_DWORD *)(v7 + 8);
        *(_QWORD *)v7 = v35;
        *(_DWORD *)(v7 + 8) = v36;
      }
      v37 = *(_QWORD *)v7;
      v17 -= 6;
      v38 = *(_DWORD *)(v7 + 8);
      *(_QWORD *)v7 = *(_QWORD *)v17;
      *(_DWORD *)(v7 + 8) = *((_DWORD *)v17 + 2);
      *(_QWORD *)v17 = v37;
      *((_DWORD *)v17 + 2) = v38;
      continue;
    }
    break;
  }
  if ( v21 != (unsigned __int16 *)a3 )
  {
    if ( v17 != v21 )
    {
      v31 = *(_QWORD *)v7;
      v32 = *(_DWORD *)(v7 + 8);
      *(_QWORD *)v7 = *(_QWORD *)v17;
      *(_DWORD *)(v7 + 8) = *((_DWORD *)v17 + 2);
      *(_QWORD *)v17 = v31;
      *((_DWORD *)v17 + 2) = v32;
    }
    v33 = *(_QWORD *)v7;
    v17 += 6;
    v34 = *(_DWORD *)(v7 + 8);
    *(_QWORD *)v7 = *(_QWORD *)v21;
    *(_DWORD *)(v7 + 8) = *((_DWORD *)v21 + 2);
    v7 += 12LL;
    *(_QWORD *)v21 = v33;
    *((_DWORD *)v21 + 2) = v34;
    goto LABEL_31;
  }
  result = a1;
  *a1 = v7;
  a1[1] = (unsigned __int64)v17;
  return result;
}
