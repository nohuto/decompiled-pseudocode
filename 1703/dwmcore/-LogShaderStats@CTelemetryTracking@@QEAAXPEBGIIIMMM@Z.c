/*
 * XREFs of ?LogShaderStats@CTelemetryTracking@@QEAAXPEBGIIIMMM@Z @ 0x180004C14
 * Callers:
 *     ?LogShaderStats@CIndependentRefreshRateScheduler@@UEAAXPEBGIIIMMM@Z @ 0x180004BB0 (-LogShaderStats@CIndependentRefreshRateScheduler@@UEAAXPEBGIIIMMM@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
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
  int v22; // r10d
  unsigned int v23; // r11d
  __int64 v24; // r10
  __int64 v25; // r9
  __int64 v26; // rdi
  float v27; // xmm2_4
  float v28; // xmm3_4
  unsigned int v29; // eax
  float v30; // xmm4_4
  bool v31; // cc
  _QWORD *v32; // rax
  __int64 v33; // rsi
  unsigned __int64 v34; // rsi
  SIZE_T v35; // rax
  wchar_t *v36; // rax
  wchar_t *v37; // r14
  wchar_t *v38; // rax
  const wchar_t *v39; // rax
  unsigned int v40; // r8d
  __int64 v41; // rcx
  __int64 v42; // rdx
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
  if ( (unsigned __int64)(v14 - 1) <= 6 )
  {
    v19 = v14 - 1;
    if ( !v19 )
    {
LABEL_15:
      v15 = *v13 + 37 * v15;
      goto LABEL_16;
    }
    v20 = v19 - 1;
    if ( !v20 )
    {
LABEL_14:
      v15 = *v13++ + 37 * v15;
      goto LABEL_15;
    }
    v21 = v20 - 1;
    if ( !v21 )
    {
LABEL_13:
      v15 = *v13++ + 37 * v15;
      goto LABEL_14;
    }
    v22 = v21 - 1;
    if ( !v22 )
    {
LABEL_12:
      v15 = *v13++ + 37 * v15;
      goto LABEL_13;
    }
    v43 = v22 - 1;
    if ( !v43 )
    {
LABEL_55:
      v15 = *v13++ + 37 * v15;
      goto LABEL_12;
    }
    v44 = v43 - 1;
    if ( !v44 )
    {
LABEL_54:
      v15 = *v13++ + 37 * v15;
      goto LABEL_55;
    }
    if ( v44 == 1 )
    {
      v15 = *v13++ + 37 * v15;
      goto LABEL_54;
    }
  }
LABEL_16:
  v23 = *((_DWORD *)this + 129);
  v24 = -1LL << (*((_BYTE *)this + 516) & 0x1F);
  v25 = v24 & v15;
  if ( v23 >= 0x20 )
  {
    v45 = v24 & v15;
    v26 = *((_QWORD *)this + 65)
        + 8LL
        * ((37
          * (BYTE6(v45)
           + 37
           * (BYTE5(v45)
            + 37
            * (BYTE4(v45)
             + 37 * (BYTE3(v45) + 37 * (BYTE2(v45) + 37 * (BYTE1(v45) + 37 * ((unsigned __int8)v25 + 11623883)))))))
          + HIBYTE(v45)) & ((v23 >> 5) - 1));
    while ( 1 )
    {
      v26 = *(_QWORD *)v26;
      if ( (v26 & 1) != 0 )
        break;
      if ( v25 == (v24 & *(_QWORD *)(v26 + 8)) )
        goto LABEL_20;
    }
    v26 = 0LL;
LABEL_20:
    if ( v26 )
      goto LABEL_21;
  }
  if ( *((_DWORD *)this + 128) < 0x40u )
  {
    v32 = WPF::ProcessHeapImpl::AllocClear(0x48uLL);
    v26 = (__int64)v32;
    if ( v32 )
    {
      v32[4] = v15;
      v33 = -1LL;
      do
        ++v33;
      while ( *(_WORD *)&a2[2 * v33] );
      v34 = v33 + 1;
      v35 = 2 * v34;
      if ( !is_mul_ok(v34, 2uLL) )
        v35 = -1LL;
      if ( !v35 )
        v35 = 1LL;
      v36 = (wchar_t *)HeapAlloc(WPF::g_processHeap, 0, v35);
      v37 = v36;
      if ( v36 )
      {
        if ( wcscpy_s(v36, v34, (const wchar_t *)a2) )
        {
          WPF::ProcessHeapImpl::Free(v37);
          *(_QWORD *)(v26 + 16) = a2;
          *(_QWORD *)(v26 + 24) = 0LL;
        }
        else
        {
          v38 = wcschr(v37, 1u);
          if ( v38 )
            *v38 = 0;
          *(_QWORD *)(v26 + 16) = v37;
          if ( v38 )
            v39 = v38 + 1;
          else
            v39 = L"0.0.0.0";
          *(_QWORD *)(v26 + 24) = v39;
        }
      }
      v9 = a3;
      *(_QWORD *)(v26 + 8) = v15;
      v40 = *((_DWORD *)this + 129);
      v46 = v15 & (-1LL << (v40 & 0x1F));
      v41 = *((_QWORD *)this + 65);
      v42 = (37
           * (BYTE6(v46)
            + 37
            * (BYTE5(v46)
             + 37
             * (BYTE4(v46)
              + 37 * (BYTE3(v46) + 37 * (BYTE2(v46) + 37 * (BYTE1(v46) + 37 * ((unsigned __int8)v46 + 11623883)))))))
           + HIBYTE(v46)) & ((v40 >> 5) - 1);
      *(_QWORD *)v26 = *(_QWORD *)(v41 + 8 * v42);
      *(_QWORD *)(v41 + 8 * v42) = v26;
      ++*((_DWORD *)this + 128);
    }
    else
    {
      v26 = 0LL;
    }
    if ( v26 )
    {
LABEL_21:
      v27 = *(float *)(v26 + 52);
      ++*(_DWORD *)(v26 + 64);
      v28 = *(float *)(v26 + 60);
      v29 = a5;
      if ( *(_DWORD *)(v26 + 40) > v9 )
        v9 = *(_DWORD *)(v26 + 40);
      v30 = (float)*(int *)(v26 + 64);
      if ( *(_DWORD *)(v26 + 44) > a4 )
        a4 = *(_DWORD *)(v26 + 44);
      v31 = *(_DWORD *)(v26 + 48) <= a5;
      *(_DWORD *)(v26 + 40) = v9;
      if ( !v31 )
        v29 = *(_DWORD *)(v26 + 48);
      *(_DWORD *)(v26 + 44) = a4;
      *(_DWORD *)(v26 + 48) = v29;
      *(float *)(v26 + 52) = (float)(v27 - (float)(v27 / v30)) + (float)(a6 / v30);
      *(float *)(v26 + 56) = (float)(*(float *)(v26 + 56) - (float)(*(float *)(v26 + 56) / v30)) + (float)(a7 / v30);
      *(float *)(v26 + 60) = (float)(v28 - (float)(v28 / v30)) + (float)(a8 / v30);
    }
  }
}
