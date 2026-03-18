/*
 * XREFs of ?LogShaderStats@CTelemetryTracking@@QEAAXPEBGIIIMMM@Z @ 0x1800BBA54
 * Callers:
 *     ?LogShaderStats@CPartitionVerticalBlankScheduler@@UEAAXPEBGIIIMMM@Z @ 0x1800111D0 (-LogShaderStats@CPartitionVerticalBlankScheduler@@UEAAXPEBGIIIMMM@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 */

void __fastcall CTelemetryTracking::LogShaderStats(
        CTelemetryTracking *this,
        unsigned __int8 *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        float a6,
        float a7,
        float a8)
{
  unsigned int v9; // esi
  __int64 v10; // r10
  unsigned __int8 *v13; // r11
  __int64 v14; // r10
  __int64 v15; // rbx
  unsigned __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // r10d
  int v20; // r10d
  int v21; // r10d
  __int64 v22; // r11
  __int64 v23; // r9
  __int64 v24; // rdi
  float v25; // xmm2_4
  float v26; // xmm3_4
  unsigned int v27; // eax
  float v28; // xmm4_4
  bool v29; // cc
  _QWORD *v30; // rax
  __int64 v31; // rsi
  unsigned __int64 v32; // rsi
  SIZE_T v33; // rax
  wchar_t *v34; // rax
  wchar_t *v35; // r14
  wchar_t *v36; // rax
  const wchar_t *v37; // rax
  unsigned int v38; // r8d
  __int64 v39; // rcx
  __int64 v40; // rdx
  int v41; // r10d
  int v42; // r10d
  int v43; // r10d
  int v44; // r10d
  __int64 v45; // [rsp+68h] [rbp+10h]
  __int64 v46; // [rsp+68h] [rbp+10h]

  if ( !a2 )
    return;
  v9 = a3;
  v10 = -1LL;
  v13 = a2;
  do
    ++v10;
  while ( *(_WORD *)&a2[2 * v10] );
  v14 = 2 * v10;
  v15 = 314159LL;
  if ( v14 >= 8 )
  {
    v16 = (unsigned __int64)v14 >> 3;
    v14 -= 8 * ((unsigned __int64)v14 >> 3);
    do
    {
      v17 = v13[6]
          + 37 * (v13[5] + 37 * (v13[4] + 37 * (v13[3] + 37 * (v13[2] + 37 * (v13[1] + 37 * (*v13 + 37 * v15))))));
      v18 = v13[7];
      v13 += 8;
      v15 = v18 + 37 * v17;
      --v16;
    }
    while ( v16 );
  }
  if ( v14 >= 1 && v14 <= 7 )
  {
    v19 = v14 - 1;
    if ( !v19 )
    {
LABEL_12:
      v15 = *v13 + 37 * v15;
      goto LABEL_13;
    }
    v20 = v19 - 1;
    if ( !v20 )
    {
LABEL_11:
      v15 = *v13++ + 37 * v15;
      goto LABEL_12;
    }
    v41 = v20 - 1;
    if ( !v41 )
    {
LABEL_56:
      v15 = *v13++ + 37 * v15;
      goto LABEL_11;
    }
    v42 = v41 - 1;
    if ( !v42 )
    {
LABEL_55:
      v15 = *v13++ + 37 * v15;
      goto LABEL_56;
    }
    v43 = v42 - 1;
    if ( !v43 )
    {
LABEL_54:
      v15 = *v13++ + 37 * v15;
      goto LABEL_55;
    }
    v44 = v43 - 1;
    if ( !v44 )
    {
LABEL_53:
      v15 = *v13++ + 37 * v15;
      goto LABEL_54;
    }
    if ( v44 == 1 )
    {
      v15 = *v13++ + 37 * v15;
      goto LABEL_53;
    }
  }
LABEL_13:
  v21 = *((_DWORD *)this + 129) >> 5;
  v22 = -1LL << (*((_BYTE *)this + 516) & 0x1F);
  v23 = v22 & v15;
  if ( v21 )
  {
    v45 = v22 & v15;
    v24 = *((_QWORD *)this + 65)
        + 8LL
        * ((37
          * (BYTE6(v45)
           + 37
           * (BYTE5(v45)
            + 37
            * (BYTE4(v45)
             + 37 * (BYTE3(v45) + 37 * (BYTE2(v45) + 37 * (BYTE1(v45) + 37 * ((unsigned __int8)v23 + 11623883)))))))
          + HIBYTE(v45)) & (unsigned int)(v21 - 1));
    while ( 1 )
    {
      v24 = *(_QWORD *)v24;
      if ( (v24 & 1) != 0 )
        break;
      if ( v23 == (v22 & *(_QWORD *)(v24 + 8)) )
        goto LABEL_17;
    }
    v24 = 0LL;
LABEL_17:
    if ( v24 )
      goto LABEL_18;
  }
  if ( *((_DWORD *)this + 128) < 0x40u )
  {
    v30 = WPF::ProcessHeapImpl::AllocClear(0x48uLL);
    v24 = (__int64)v30;
    if ( v30 )
    {
      v30[4] = v15;
      v31 = -1LL;
      do
        ++v31;
      while ( *(_WORD *)&a2[2 * v31] );
      v32 = v31 + 1;
      v33 = 2 * v32;
      if ( !is_mul_ok(v32, 2uLL) )
        v33 = -1LL;
      if ( !v33 )
        v33 = 1LL;
      v34 = (wchar_t *)HeapAlloc(WPF::g_processHeap, 0, v33);
      v35 = v34;
      if ( v34 )
      {
        if ( wcscpy_s(v34, v32, (const wchar_t *)a2) )
        {
          WPF::ProcessHeapImpl::Free(v35);
          *(_QWORD *)(v24 + 16) = a2;
          *(_QWORD *)(v24 + 24) = 0LL;
        }
        else
        {
          v36 = wcschr(v35, 1u);
          if ( v36 )
            *v36 = 0;
          *(_QWORD *)(v24 + 16) = v35;
          if ( v36 )
            v37 = v36 + 1;
          else
            v37 = L"0.0.0.0";
          *(_QWORD *)(v24 + 24) = v37;
        }
      }
      v9 = a3;
      *(_QWORD *)(v24 + 8) = v15;
      v38 = *((_DWORD *)this + 129);
      v46 = v15 & (-1LL << (v38 & 0x1F));
      v39 = *((_QWORD *)this + 65);
      v40 = (37
           * (BYTE6(v46)
            + 37
            * (BYTE5(v46)
             + 37
             * (BYTE4(v46)
              + 37 * (BYTE3(v46) + 37 * (BYTE2(v46) + 37 * (BYTE1(v46) + 37 * ((unsigned __int8)v46 + 11623883)))))))
           + HIBYTE(v46)) & ((v38 >> 5) - 1);
      *(_QWORD *)v24 = *(_QWORD *)(v39 + 8 * v40);
      *(_QWORD *)(v39 + 8 * v40) = v24;
      ++*((_DWORD *)this + 128);
    }
    else
    {
      v24 = 0LL;
    }
    if ( v24 )
    {
LABEL_18:
      v25 = *(float *)(v24 + 52);
      ++*(_DWORD *)(v24 + 64);
      v26 = *(float *)(v24 + 60);
      v27 = a5;
      if ( *(_DWORD *)(v24 + 40) > v9 )
        v9 = *(_DWORD *)(v24 + 40);
      v28 = (float)*(int *)(v24 + 64);
      if ( *(_DWORD *)(v24 + 44) > a4 )
        a4 = *(_DWORD *)(v24 + 44);
      v29 = *(_DWORD *)(v24 + 48) <= a5;
      *(_DWORD *)(v24 + 40) = v9;
      if ( !v29 )
        v27 = *(_DWORD *)(v24 + 48);
      *(_DWORD *)(v24 + 44) = a4;
      *(_DWORD *)(v24 + 48) = v27;
      *(float *)(v24 + 52) = (float)(v25 - (float)(v25 / v28)) + (float)(a6 / v28);
      *(float *)(v24 + 56) = (float)(*(float *)(v24 + 56) - (float)(*(float *)(v24 + 56) / v28)) + (float)(a7 / v28);
      *(float *)(v24 + 60) = (float)(v26 - (float)(v26 / v28)) + (float)(a8 / v28);
    }
  }
}
