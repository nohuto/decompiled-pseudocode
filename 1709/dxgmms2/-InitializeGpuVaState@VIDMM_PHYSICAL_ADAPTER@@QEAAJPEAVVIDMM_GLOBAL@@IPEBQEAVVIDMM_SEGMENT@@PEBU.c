/*
 * XREFs of ?InitializeGpuVaState@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAVVIDMM_GLOBAL@@IPEBQEAVVIDMM_SEGMENT@@PEBUDXGADAPTER_GPUMMUCAPS@@PEBUDXGK_PHYSICALADAPTERINFO@@I@Z @ 0x1C007CF24
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C0079DD8 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
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
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  int v16; // eax
  unsigned int v17; // r14d
  unsigned int v18; // r9d
  unsigned int v19; // r8d
  unsigned int v20; // esi
  unsigned int v21; // r10d
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  __int64 v29; // rax
  int v30; // ebp
  unsigned int v31; // esi
  __int64 v32; // r15
  unsigned int v33; // r12d
  __int64 v34; // r10
  __int64 v35; // r9
  __int64 v36; // r8
  __int64 v37; // rdx

  *((_BYTE *)this + 436) |= 0x20u;
  if ( (*((_BYTE *)a2 + 40872) & 1) == 0 )
    return 0LL;
  v10 = 0;
  *((_QWORD *)this + 55) = a5;
  v11 = *((_DWORD *)a2 + 10216);
  if ( v11 )
  {
    if ( *((_DWORD *)a5 + 2) != v11 )
    {
      v29 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v29 + 24) = 648LL;
      goto LABEL_36;
    }
  }
  else
  {
    v12 = *((_DWORD *)a5 + 2);
    *((_DWORD *)a2 + 10216) = v12;
    if ( (unsigned int)(v12 - 13) > 0x32 )
    {
      v29 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v29 + 24) = 639LL;
      goto LABEL_36;
    }
  }
  v14 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  v13 = 6LL * a3;
  LOBYTE(v14) = (*((_BYTE *)this + 436) ^ (4 * *(_BYTE *)(*(_QWORD *)(v14 + 2216) + 48LL * a3 + 40))) & 4;
  *((_BYTE *)this + 436) ^= v14;
  if ( (*(_DWORD *)a5 & 0x80u) != 0 && ((v15 = *((_DWORD *)a5 + 3)) == 0 || (v15 & 0xFFF) != 0) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v13, v14);
    *(_QWORD *)(v29 + 24) = 663LL;
  }
  else
  {
    v16 = *((_DWORD *)a5 + 9);
    v17 = *((_DWORD *)a2 + 10216) - 12;
    *((_DWORD *)this + 8) = v16;
    if ( v16 )
    {
      *((_DWORD *)this + 8) = (v16 + 4095) & 0xFFFFF000;
      v18 = *((_DWORD *)a5 + 7);
      *((_DWORD *)this + 10) = v18;
      *((_DWORD *)this + 14) = *((_DWORD *)a5 + 12);
      *((_DWORD *)this + 12) = *((_DWORD *)a5 + 8);
      v19 = *((_DWORD *)a5 + 13);
      *((_DWORD *)this + 16) = v19;
      if ( v18 > a7 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v13, v14);
        *(_QWORD *)(v29 + 24) = 685LL;
      }
      else
      {
        v20 = *((_DWORD *)this + 14);
        if ( v20 > a7 )
        {
          v29 = WdLogNewEntry5_WdAssertion(v13, v14);
          *(_QWORD *)(v29 + 24) = 690LL;
        }
        else
        {
          v21 = *((_DWORD *)this + 12);
          if ( v21 > a7 )
          {
            v29 = WdLogNewEntry5_WdAssertion(v13, v14);
            *(_QWORD *)(v29 + 24) = 695LL;
          }
          else if ( v19 > a7 )
          {
            v29 = WdLogNewEntry5_WdAssertion(v13, v14);
            *(_QWORD *)(v29 + 24) = 700LL;
          }
          else
          {
            v22 = *((unsigned int *)a5 + 6);
            v23 = (unsigned int)(1 << v22);
            *((_DWORD *)this + 17) = v22;
            *((_DWORD *)this + 20) = (unsigned int)(1 << v22) >> 4;
            *((_DWORD *)this + 19) = v23;
            *((_DWORD *)this + 18) = v23 - 1;
            v24 = *((_DWORD *)a5 + 1);
            *((_DWORD *)this + 106) = v24;
            if ( (_DWORD)v22 && (unsigned int)v22 < v17 )
            {
              if ( v24 > 2 )
              {
                v29 = WdLogNewEntry5_WdAssertion(v22, v23);
                *(_QWORD *)(v29 + 24) = 720LL;
              }
              else
              {
                *((_DWORD *)this + 9) = v18;
                if ( v18 )
                {
                  if ( (*((_BYTE *)a4[v18 - 1] + 80) & 1) != 0 )
                    v18 = 0;
                  *((_DWORD *)this + 9) = v18;
                }
                *((_DWORD *)this + 13) = v20;
                if ( v20 )
                {
                  if ( (*((_BYTE *)a4[v20 - 1] + 80) & 1) != 0 )
                    v20 = 0;
                  *((_DWORD *)this + 13) = v20;
                }
                *((_DWORD *)this + 11) = v21;
                if ( v21 )
                {
                  if ( (*((_BYTE *)a4[v21 - 1] + 80) & 1) != 0 )
                    v21 = 0;
                  *((_DWORD *)this + 11) = v21;
                }
                *((_DWORD *)this + 15) = v19;
                if ( v19 )
                {
                  if ( (*((_BYTE *)a4[v19 - 1] + 80) & 1) != 0 )
                    v19 = 0;
                  *((_DWORD *)this + 15) = v19;
                }
                v25 = (unsigned int)(v23 - 1);
                *((_DWORD *)this + 107) = *((_DWORD *)a5 + 4) - 1;
                *((_QWORD *)this + 14) = 0LL;
                *((_DWORD *)this + 23) = v22;
                *((_QWORD *)this + 13) = v25;
                *((_QWORD *)this + 15) = 0LL;
                *((_DWORD *)this + 22) = *((_DWORD *)this + 19);
                *((_DWORD *)this + 24) = *((_DWORD *)this + 8);
                *((_QWORD *)this + 16) = 1LL;
                v26 = *((_DWORD *)this + 107);
                if ( v26 == 1 )
                {
                  *((_DWORD *)this + 35) = *((_DWORD *)a2 + 10216) - *((_DWORD *)this + 17);
                  *((_QWORD *)this + 20) = *((unsigned int *)this + 17);
                  *((_QWORD *)this + 21) = v25;
                  *((_QWORD *)this + 19) = ~v25;
                  *((_DWORD *)this + 34) = 0;
                  *((_DWORD *)this + 36) = 0;
                  *((_QWORD *)this + 22) = 1LL << *((_DWORD *)this + 17);
                  goto LABEL_33;
                }
                v30 = *((_DWORD *)this + 23);
                v31 = 1;
                if ( v26 )
                {
                  while ( 1 )
                  {
                    v32 = v31;
                    v33 = *((_DWORD *)a5 + 5 * v31 + 6);
                    if ( !v33 || v33 > v17 - v30 )
                      break;
                    v30 += v33;
                    v34 = 6LL * v31;
                    *((_DWORD *)this + 2 * v34 + 23) = v33;
                    v35 = *((_QWORD *)this + 6 * v31 + 8) + *((unsigned int *)this + 12 * v31 + 11);
                    *((_QWORD *)this + v34 + 14) = v35;
                    v36 = *((_QWORD *)this + 6 * v31 + 7) | *((_QWORD *)this + 6 * v31 + 9);
                    *((_QWORD *)this + v34 + 15) = v36;
                    *((_QWORD *)this + v34 + 13) = ~v36 & ((1LL << v30) - 1);
                    v22 = v35;
                    *((_DWORD *)this + 2 * v34 + 22) = 1LL << v33;
                    v37 = *((unsigned int *)a5 + 5 * v31 + 9);
                    *((_DWORD *)this + 12 * v31 + 24) = v37;
                    *((_QWORD *)this + v34 + 16) = 1LL << v35;
                    if ( !(_DWORD)v37 )
                    {
                      v29 = WdLogNewEntry5_WdAssertion(v35, v37);
                      *(_QWORD *)(v29 + 24) = 799LL;
                      goto LABEL_36;
                    }
                    ++v31;
                    v25 = ((_DWORD)v37 + 4095) & 0xFFFFF000;
                    *((_DWORD *)this + 12 * v32 + 24) = v25;
                    if ( v31 > *((_DWORD *)this + 107) )
                      goto LABEL_51;
                  }
                  v29 = WdLogNewEntry5_WdAssertion(v22, v25);
                  *(_QWORD *)(v29 + 24) = 784LL;
                }
                else
                {
LABEL_51:
                  if ( v30 == v17 )
                  {
                    do
                    {
LABEL_33:
                      v27 = v10++;
                      *((_DWORD *)this + 12 * v27 + 25) = *((_DWORD *)a5 + 5 * v27 + 10);
                    }
                    while ( v10 <= *((_DWORD *)this + 107) );
                    return 0LL;
                  }
                  v29 = WdLogNewEntry5_WdAssertion(v22, v25);
                  *(_QWORD *)(v29 + 24) = 806LL;
                }
              }
            }
            else
            {
              v29 = WdLogNewEntry5_WdAssertion(v22, v23);
              *(_QWORD *)(v29 + 24) = 712LL;
            }
          }
        }
      }
    }
    else
    {
      v29 = WdLogNewEntry5_WdAssertion(v13, v14);
      *(_QWORD *)(v29 + 24) = 673LL;
    }
  }
LABEL_36:
  WdLogEvent5_WdAssertion(v29);
  return 3221225485LL;
}
