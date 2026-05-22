/*
 * XREFs of std::_Partition_by_median_guess_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800A051C
 * Callers:
 *     std::_Sort_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64___int64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800A01CC (std--_Sort_unchecked_SpatialInteractionDevices--SpatialInputButtonCaps_____ptr64___int64__lambda.c)
 * Callees:
 *     std::_Med3_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800A0C44 (std--_Med3_unchecked_SpatialInteractionDevices--SpatialInputButtonCaps_____ptr64__lambda_7cb88ca.c)
 */

unsigned __int16 **__fastcall std::_Partition_by_median_guess_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
        unsigned __int16 **a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v6; // r15
  unsigned __int16 *v7; // rdi
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
  unsigned __int16 *v18; // rax
  unsigned __int16 *v19; // rcx
  unsigned __int16 v20; // r8
  unsigned __int16 v21; // cx
  unsigned __int16 *v22; // r8
  __int64 *v23; // r9
  unsigned __int16 v24; // cx
  __int64 v25; // xmm1_8
  int v26; // ecx
  bool v27; // zf
  __int64 v28; // r10
  unsigned __int16 v29; // cx
  __int64 v30; // xmm1_8
  int v31; // ecx
  __int64 v32; // xmm1_8
  int v33; // ecx
  __int64 v34; // xmm1_8
  int v35; // ecx
  __int64 v36; // xmm1_8
  int v37; // ecx
  __int64 v38; // xmm1_8
  int v39; // ecx
  __int64 v40; // xmm1_8
  int v41; // ecx
  unsigned __int16 **result; // rax

  v6 = a3 - 12;
  v7 = (unsigned __int16 *)(a2
                          + 12
                          * (((__int64)((unsigned __int128)((__int64)(a3 - a2) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 1)
                           / 2));
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
      (char *)v7 - v12,
      v7,
      (char *)v7 + v12);
    std::_Med3_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
      v6 - v13,
      v6 - v14,
      v6);
    v8 = v11;
    v16 = v15;
  }
  std::_Med3_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps_____ptr64__lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
    v8,
    v7,
    v16);
  v17 = v7 + 6;
  v18 = v7;
  if ( a2 < (unsigned __int64)v7 )
  {
    v19 = v7;
    while ( 1 )
    {
      v20 = *(v7 - 6);
      if ( v20 < *v7 || v20 == *v7 && *(v7 - 4) < v7[2] )
        break;
      if ( *v7 < v20 || *v7 == v20 && v7[2] < *(v7 - 4) )
        break;
      v7 = v19 - 6;
      v19 = v7;
      v18 = v7;
      if ( a2 >= (unsigned __int64)v7 )
        goto LABEL_15;
    }
    v18 = v19;
  }
LABEL_15:
  if ( (unsigned __int64)v17 < a3 )
  {
    v21 = *v18;
    do
    {
      if ( *v17 < v21 || *v17 == v21 && v17[2] < v7[2] )
        break;
      if ( v21 < *v17 || v21 == *v17 && v7[2] < v17[2] )
        break;
      v17 += 6;
    }
    while ( (unsigned __int64)v17 < a3 );
  }
  v22 = v17;
  v23 = (__int64 *)v7;
  while ( 2 )
  {
    while ( (unsigned __int64)v22 < a3 )
    {
      v24 = *v22;
      if ( *v7 >= *v22 && (*v7 != v24 || v7[2] >= v22[2]) )
      {
        if ( v24 < *v7 || v24 == *v7 && v22[2] < v7[2] )
          break;
        if ( v17 != v22 )
        {
          v25 = *(_QWORD *)v17;
          v26 = *((_DWORD *)v17 + 2);
          *(_QWORD *)v17 = *(_QWORD *)v22;
          *((_DWORD *)v17 + 2) = *((_DWORD *)v22 + 2);
          *(_QWORD *)v22 = v25;
          *((_DWORD *)v22 + 2) = v26;
        }
        v17 += 6;
      }
LABEL_34:
      v22 += 6;
    }
    v27 = v23 == (__int64 *)a2;
    if ( (unsigned __int64)v23 <= a2 )
      goto LABEL_48;
    v28 = (__int64)v23 - 12;
    while ( 1 )
    {
      v29 = *v7;
      if ( *(_WORD *)v28 >= *v7 && (*(_WORD *)v28 != v29 || *(_WORD *)(v28 + 4) >= v7[2]) )
        break;
LABEL_46:
      v23 = (__int64 *)((char *)v23 - 12);
      v28 -= 12LL;
      if ( a2 >= (unsigned __int64)v23 )
        goto LABEL_47;
    }
    if ( v29 >= *(_WORD *)v28 && (v29 != *(_WORD *)v28 || v7[2] >= *(_WORD *)(v28 + 4)) )
    {
      v7 -= 6;
      if ( v7 != (unsigned __int16 *)v28 )
      {
        v30 = *(_QWORD *)v7;
        v31 = *((_DWORD *)v7 + 2);
        *(_QWORD *)v7 = *(_QWORD *)v28;
        *((_DWORD *)v7 + 2) = *(_DWORD *)(v28 + 8);
        *(_QWORD *)v28 = v30;
        *(_DWORD *)(v28 + 8) = v31;
      }
      goto LABEL_46;
    }
LABEL_47:
    v27 = v23 == (__int64 *)a2;
LABEL_48:
    if ( !v27 )
    {
      v23 = (__int64 *)((char *)v23 - 12);
      if ( v22 != (unsigned __int16 *)a3 )
      {
        v40 = *(_QWORD *)v22;
        v41 = *((_DWORD *)v22 + 2);
        *(_QWORD *)v22 = *v23;
        *((_DWORD *)v22 + 2) = *((_DWORD *)v23 + 2);
        *v23 = v40;
        *((_DWORD *)v23 + 2) = v41;
        goto LABEL_34;
      }
      v7 -= 6;
      if ( v23 != (__int64 *)v7 )
      {
        v36 = *v23;
        v37 = *((_DWORD *)v23 + 2);
        *v23 = *(_QWORD *)v7;
        *((_DWORD *)v23 + 2) = *((_DWORD *)v7 + 2);
        *(_QWORD *)v7 = v36;
        *((_DWORD *)v7 + 2) = v37;
      }
      v38 = *(_QWORD *)v7;
      v17 -= 6;
      v39 = *((_DWORD *)v7 + 2);
      *(_QWORD *)v7 = *(_QWORD *)v17;
      *((_DWORD *)v7 + 2) = *((_DWORD *)v17 + 2);
      *(_QWORD *)v17 = v38;
      *((_DWORD *)v17 + 2) = v39;
      continue;
    }
    break;
  }
  if ( v22 != (unsigned __int16 *)a3 )
  {
    if ( v17 != v22 )
    {
      v32 = *(_QWORD *)v7;
      v33 = *((_DWORD *)v7 + 2);
      *(_QWORD *)v7 = *(_QWORD *)v17;
      *((_DWORD *)v7 + 2) = *((_DWORD *)v17 + 2);
      *(_QWORD *)v17 = v32;
      *((_DWORD *)v17 + 2) = v33;
    }
    v34 = *(_QWORD *)v7;
    v17 += 6;
    v35 = *((_DWORD *)v7 + 2);
    *(_QWORD *)v7 = *(_QWORD *)v22;
    *((_DWORD *)v7 + 2) = *((_DWORD *)v22 + 2);
    v7 += 6;
    *(_QWORD *)v22 = v34;
    *((_DWORD *)v22 + 2) = v35;
    goto LABEL_34;
  }
  result = a1;
  *a1 = v7;
  a1[1] = v17;
  return result;
}
