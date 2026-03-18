/*
 * XREFs of ?InitializeGpuVaState@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAVVIDMM_GLOBAL@@IPEBQEAVVIDMM_SEGMENT@@PEBUDXGADAPTER_GPUMMUCAPS@@PEBUDXGK_PHYSICALADAPTERINFO@@I@Z @ 0x1C00A0988
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C007D5D0 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_PHYSICAL_ADAPTER::InitializeGpuVaState(
        VIDMM_PHYSICAL_ADAPTER *this,
        struct VIDMM_GLOBAL *a2,
        unsigned int a3,
        struct VIDMM_SEGMENT *const *a4,
        const struct DXGADAPTER_GPUMMUCAPS *a5,
        const struct DXGK_PHYSICALADAPTERINFO *a6,
        unsigned int a7)
{
  unsigned int v9; // ebx
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // eax
  int v17; // eax
  unsigned int v18; // ebp
  unsigned int v19; // r8d
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned int v22; // esi
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // eax
  int v26; // edx
  int v27; // edx
  unsigned int v28; // edx
  int v29; // r14d
  int v30; // edx
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rax
  unsigned int v34; // esi
  __int64 v35; // r15
  unsigned int v36; // r12d
  __int64 v37; // r10
  __int64 v38; // r9
  __int64 v39; // r8
  int v40; // r8d

  *((_BYTE *)this + 436) |= 0x20u;
  if ( (*((_BYTE *)a2 + 41448) & 2) != 0 )
  {
    v9 = 0;
    *((_QWORD *)this + 55) = a5;
    v10 = *((unsigned int *)a2 + 10360);
    v11 = *((_DWORD *)a5 + 2);
    if ( (_DWORD)v10 )
    {
      if ( v11 != (_DWORD)v10 )
      {
        v12 = WdLogNewEntry5_WdAssertion(v10, a2);
        *(_QWORD *)(v12 + 24) = 648LL;
        goto LABEL_6;
      }
    }
    else
    {
      *((_DWORD *)a2 + 10360) = v11;
      if ( v11 <= 0xC || v11 > 0x3F )
      {
        v12 = WdLogNewEntry5_WdAssertion(v10, a2);
        *(_QWORD *)(v12 + 24) = 639LL;
LABEL_6:
        WdLogEvent5_WdAssertion(v12);
        return 3221225485LL;
      }
    }
    v15 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
    v14 = 352LL * a3;
    LOBYTE(v15) = (*((_BYTE *)this + 436) ^ (4 * *(_BYTE *)(*(_QWORD *)(v15 + 2360) + v14 + 40))) & 4;
    *((_BYTE *)this + 436) ^= v15;
    if ( (*(_DWORD *)a5 & 0x80u) != 0 )
    {
      v16 = *((_DWORD *)a5 + 3);
      if ( !v16 || (v16 & 0xFFF) != 0 )
      {
        v12 = WdLogNewEntry5_WdAssertion(v14, v15);
        *(_QWORD *)(v12 + 24) = 663LL;
        goto LABEL_6;
      }
    }
    v17 = *((_DWORD *)a5 + 9);
    v18 = *((_DWORD *)a2 + 10360) - 12;
    *((_DWORD *)this + 8) = v17;
    if ( !v17 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v14, v15);
      *(_QWORD *)(v12 + 24) = 673LL;
      goto LABEL_6;
    }
    *((_DWORD *)this + 8) = (v17 + 4095) & 0xFFFFF000;
    v19 = *((_DWORD *)a5 + 7);
    *((_DWORD *)this + 10) = v19;
    v20 = *((unsigned int *)a5 + 12);
    *((_DWORD *)this + 14) = v20;
    v21 = *((unsigned int *)a5 + 8);
    *((_DWORD *)this + 12) = v21;
    v22 = *((_DWORD *)a5 + 13);
    *((_DWORD *)this + 16) = v22;
    if ( v19 > a7 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v20, v21);
      *(_QWORD *)(v12 + 24) = 685LL;
      goto LABEL_6;
    }
    if ( (unsigned int)v20 > a7 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v20, v21);
      *(_QWORD *)(v12 + 24) = 690LL;
      goto LABEL_6;
    }
    if ( (unsigned int)v21 > a7 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v20, v21);
      *(_QWORD *)(v12 + 24) = 695LL;
      goto LABEL_6;
    }
    if ( v22 > a7 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v20, v21);
      *(_QWORD *)(v12 + 24) = 700LL;
      goto LABEL_6;
    }
    v23 = *((unsigned int *)a5 + 6);
    *((_DWORD *)this + 17) = v23;
    v24 = (unsigned int)(1 << v23);
    *((_DWORD *)this + 19) = v24;
    *((_DWORD *)this + 20) = (unsigned int)v24 >> 4;
    *((_DWORD *)this + 18) = v24 - 1;
    v25 = *((_DWORD *)a5 + 1);
    *((_DWORD *)this + 106) = v25;
    if ( !(_DWORD)v23 || (unsigned int)v23 >= v18 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v23, v24);
      *(_QWORD *)(v12 + 24) = 712LL;
      goto LABEL_6;
    }
    if ( v25 && (unsigned int)(v25 - 1) > 1 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v23, v24);
      *(_QWORD *)(v12 + 24) = 720LL;
      goto LABEL_6;
    }
    *((_DWORD *)this + 9) = v19;
    if ( v19 )
    {
      if ( (*((_BYTE *)a4[v19 - 1] + 80) & 1) != 0 )
        v19 = 0;
      *((_DWORD *)this + 9) = v19;
    }
    v26 = *((_DWORD *)this + 14);
    *((_DWORD *)this + 13) = v26;
    if ( v26 )
    {
      if ( (*((_BYTE *)a4[v26 - 1] + 80) & 1) != 0 )
        v26 = 0;
      *((_DWORD *)this + 13) = v26;
    }
    v27 = *((_DWORD *)this + 12);
    *((_DWORD *)this + 11) = v27;
    if ( v27 )
    {
      if ( (*((_BYTE *)a4[v27 - 1] + 80) & 1) != 0 )
        v27 = 0;
      *((_DWORD *)this + 11) = v27;
    }
    v28 = v22;
    *((_DWORD *)this + 15) = v22;
    if ( v22 )
    {
      if ( (*((_BYTE *)a4[v22 - 1] + 80) & 1) != 0 )
        v28 = 0;
      *((_DWORD *)this + 15) = v28;
    }
    v29 = v23;
    *((_DWORD *)this + 107) = *((_DWORD *)a5 + 4) - 1;
    *((_QWORD *)this + 14) = 0LL;
    *((_DWORD *)this + 23) = v23;
    v30 = *((_DWORD *)this + 19);
    *((_QWORD *)this + 15) = 0LL;
    v31 = (unsigned int)(v30 - 1);
    *((_QWORD *)this + 13) = v31;
    *((_DWORD *)this + 22) = *((_DWORD *)this + 19);
    *((_DWORD *)this + 24) = *((_DWORD *)this + 8);
    *((_QWORD *)this + 16) = 1LL;
    v32 = *((_DWORD *)this + 107);
    if ( v32 == 1 )
    {
      *((_DWORD *)this + 35) = *((_DWORD *)a2 + 10360) - *((_DWORD *)this + 17);
      *((_QWORD *)this + 20) = *((unsigned int *)this + 17);
      *((_QWORD *)this + 21) = v31;
      *((_QWORD *)this + 19) = ~v31;
      *((_DWORD *)this + 34) = 0;
      *((_DWORD *)this + 36) = 0;
      *((_QWORD *)this + 22) = 1LL << *((_DWORD *)this + 17);
    }
    else
    {
      v34 = 1;
      if ( v32 )
      {
        while ( 1 )
        {
          v35 = v34;
          v36 = *((_DWORD *)a5 + 5 * v34 + 6);
          if ( !v36 || v36 > v18 - v29 )
            break;
          v29 += v36;
          v37 = 6LL * v34;
          *((_DWORD *)this + 2 * v37 + 23) = v36;
          v38 = *((_QWORD *)this + 6 * v34 + 8) + *((unsigned int *)this + 12 * v34 + 11);
          *((_QWORD *)this + v37 + 14) = v38;
          v39 = *((_QWORD *)this + 6 * v34 + 7) | *((_QWORD *)this + 6 * v34 + 9);
          *((_QWORD *)this + v37 + 15) = v39;
          v31 = 6 * (v34 + 2LL);
          *((_QWORD *)this + v37 + 13) = ~v39 & ((1LL << v29) - 1);
          v23 = v38;
          *((_DWORD *)this + 2 * v37 + 22) = 1LL << v36;
          v40 = *((_DWORD *)a5 + 5 * v34 + 9);
          *((_DWORD *)this + 12 * v34 + 24) = v40;
          *((_QWORD *)this + v37 + 16) = 1LL << v38;
          if ( !v40 )
          {
            v12 = WdLogNewEntry5_WdAssertion(v38, v31);
            *(_QWORD *)(v12 + 24) = 799LL;
            goto LABEL_6;
          }
          ++v34;
          *((_DWORD *)this + 12 * v35 + 24) = (v40 + 4095) & 0xFFFFF000;
          if ( v34 > *((_DWORD *)this + 107) )
            goto LABEL_53;
        }
        v12 = WdLogNewEntry5_WdAssertion(v23, v31);
        *(_QWORD *)(v12 + 24) = 784LL;
        goto LABEL_6;
      }
LABEL_53:
      if ( v29 != v18 )
      {
        v12 = WdLogNewEntry5_WdAssertion(v23, v31);
        *(_QWORD *)(v12 + 24) = 806LL;
        goto LABEL_6;
      }
    }
    do
    {
      v33 = v9++;
      *((_DWORD *)this + 12 * v33 + 25) = *((_DWORD *)a5 + 5 * v33 + 10);
    }
    while ( v9 <= *((_DWORD *)this + 107) );
  }
  return 0LL;
}
