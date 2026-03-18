/*
 * XREFs of ?LogShaderStats@CTelemetryTracking@@QEAAXPEBGIIIMMM@Z @ 0x1800CF1F4
 * Callers:
 *     ?LogShaderStats@CPartitionVerticalBlankScheduler@@UEAAXPEBGIIIMMM@Z @ 0x18005A250 (-LogShaderStats@CPartitionVerticalBlankScheduler@@UEAAXPEBGIIIMMM@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
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
  __int64 v10; // r10
  unsigned __int8 *v11; // r11
  __int64 v12; // r10
  __int64 v13; // rbx
  unsigned __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // r10d
  int v18; // r10d
  int v19; // r10d
  int v20; // r10d
  int v21; // r10d
  int v22; // r10d
  int v23; // r11d
  __int64 v24; // r10
  __int64 v25; // r9
  CTelemetryTracking *v26; // r13
  __int64 v27; // rdi
  float v28; // xmm2_4
  float v29; // xmm3_4
  int v30; // ecx
  unsigned int v31; // eax
  float v32; // xmm4_4
  unsigned int v33; // eax
  unsigned int v34; // eax
  _QWORD *v35; // rax
  __int64 v36; // rsi
  unsigned __int64 v37; // rsi
  SIZE_T v38; // rax
  LPVOID v39; // rax
  void *v40; // r14
  wchar_t *v41; // rax
  const wchar_t *v42; // rax
  unsigned int v43; // r8d
  unsigned __int64 v44; // r15
  __int64 v45; // rcx
  unsigned __int64 v46; // rdx

  if ( !a2 )
    return;
  v10 = -1LL;
  v11 = a2;
  do
    ++v10;
  while ( *(_WORD *)&a2[2 * v10] );
  v12 = 2 * v10;
  v13 = 314159LL;
  if ( v12 >= 8 )
  {
    v14 = (unsigned __int64)v12 >> 3;
    v12 -= 8 * ((unsigned __int64)v12 >> 3);
    do
    {
      v15 = v11[6]
          + 37 * (v11[5] + 37 * (v11[4] + 37 * (v11[3] + 37 * (v11[2] + 37 * (v11[1] + 37 * (*v11 + 37 * v13))))));
      v16 = v11[7];
      v11 += 8;
      v13 = v16 + 37 * v15;
      --v14;
    }
    while ( v14 );
  }
  if ( v12 >= 1 && v12 <= 7 )
  {
    v17 = v12 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( v21 )
            {
              v22 = v21 - 1;
              if ( v22 )
              {
                if ( v22 != 1 )
                  goto LABEL_21;
                v13 = *v11++ + 37 * v13;
              }
              v13 = *v11++ + 37 * v13;
            }
            v13 = *v11++ + 37 * v13;
          }
          v13 = *v11++ + 37 * v13;
        }
        v13 = *v11++ + 37 * v13;
      }
      v13 = *v11++ + 37 * v13;
    }
    v13 = *v11 + 37 * v13;
  }
LABEL_21:
  v23 = *((_DWORD *)this + 129) >> 5;
  v24 = -1LL << (*((_BYTE *)this + 516) & 0x1F);
  v25 = v24 & v13;
  if ( v23 )
  {
    v26 = this;
    v27 = *((_QWORD *)this + 65)
        + 8
        * ((((v24 & (unsigned __int64)v13) >> 56)
          + 37
          * ((unsigned __int8)((v24 & (unsigned __int64)v13) >> 48)
           + 37
           * ((unsigned __int8)((unsigned __int16)((v24 & (unsigned __int64)v13) >> 32) >> 8)
            + 37
            * ((unsigned __int8)((v24 & (unsigned __int64)v13) >> 32)
             + 37
             * ((((unsigned int)v24 & (unsigned int)v13) >> 24)
              + 37
              * ((unsigned __int8)(((unsigned int)v24 & (unsigned int)v13) >> 16)
               + 37 * ((unsigned __int8)((unsigned __int16)(v24 & v13) >> 8) + 37 * ((unsigned __int8)v25 + 11623883)))))))) & (unsigned int)(v23 - 1));
    while ( 1 )
    {
      v27 = *(_QWORD *)v27;
      if ( (v27 & 1) != 0 )
        break;
      if ( v25 == (v24 & *(_QWORD *)(v27 + 8)) )
        goto LABEL_25;
    }
  }
  else
  {
    v26 = this;
  }
  v27 = 0LL;
LABEL_25:
  if ( v27 )
    goto LABEL_26;
  if ( *((_DWORD *)v26 + 128) < 0x40u )
  {
    v35 = WPF::ProcessHeapImpl::AllocClear(0x48uLL);
    v27 = (__int64)v35;
    if ( v35 )
    {
      v35[4] = v13;
      v36 = -1LL;
      do
        ++v36;
      while ( *(_WORD *)&a2[2 * v36] );
      v37 = v36 + 1;
      v38 = 2 * v37;
      if ( !is_mul_ok(v37, 2uLL) )
        v38 = -1LL;
      if ( !v38 )
        v38 = 1LL;
      v39 = HeapAlloc(WPF::g_processHeap, 0, v38);
      v40 = v39;
      if ( v39 )
      {
        if ( (unsigned int)_o_wcscpy_s(v39, v37, a2) )
        {
          operator delete(v40);
          *(_QWORD *)(v27 + 16) = a2;
          *(_QWORD *)(v27 + 24) = 0LL;
        }
        else
        {
          v41 = wcschr((const wchar_t *)v40, 1u);
          if ( v41 )
            *v41 = 0;
          *(_QWORD *)(v27 + 16) = v40;
          if ( v41 )
            v42 = v41 + 1;
          else
            v42 = L"0.0.0.0";
          *(_QWORD *)(v27 + 24) = v42;
        }
      }
      *(_QWORD *)(v27 + 8) = v13;
      v43 = *((_DWORD *)v26 + 129);
      v44 = v13 & (-1LL << (v43 & 0x1F));
      v45 = *((_QWORD *)v26 + 65);
      v46 = (HIBYTE(v44)
           + 37
           * (BYTE6(v44)
            + 37
            * (BYTE5(v44)
             + 37
             * (BYTE4(v44)
              + 37 * (BYTE3(v44) + 37 * (BYTE2(v44) + 37 * (BYTE1(v44) + 37 * ((unsigned __int8)v44 + 11623883)))))))) & ((v43 >> 5) - 1);
      *(_QWORD *)v27 = *(_QWORD *)(v45 + 8 * v46);
      *(_QWORD *)(v45 + 8 * v46) = v27;
      ++*((_DWORD *)v26 + 128);
    }
    else
    {
      v27 = 0LL;
    }
    if ( v27 )
    {
LABEL_26:
      v28 = *(float *)(v27 + 52);
      v29 = *(float *)(v27 + 60);
      v30 = *(_DWORD *)(v27 + 64) + 1;
      *(_DWORD *)(v27 + 64) = v30;
      v31 = a3;
      v32 = (float)v30;
      if ( *(_DWORD *)(v27 + 40) > a3 )
        v31 = *(_DWORD *)(v27 + 40);
      *(_DWORD *)(v27 + 40) = v31;
      v33 = a4;
      if ( *(_DWORD *)(v27 + 44) > a4 )
        v33 = *(_DWORD *)(v27 + 44);
      *(_DWORD *)(v27 + 44) = v33;
      v34 = a5;
      if ( *(_DWORD *)(v27 + 48) > a5 )
        v34 = *(_DWORD *)(v27 + 48);
      *(_DWORD *)(v27 + 48) = v34;
      *(float *)(v27 + 52) = (float)(v28 - (float)(v28 / v32)) + (float)(a6 / v32);
      *(float *)(v27 + 56) = (float)(*(float *)(v27 + 56) - (float)(*(float *)(v27 + 56) / v32)) + (float)(a7 / v32);
      *(float *)(v27 + 60) = (float)(v29 - (float)(v29 / v32)) + (float)(a8 / v32);
    }
  }
}
