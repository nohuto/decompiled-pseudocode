/*
 * XREFs of ?VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1C005BF10
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00602A0 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C0095BEC (-UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA.c)
 * Callees:
 *     ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C005C17C (-VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 */

unsigned __int8 __fastcall VIDMM_GLOBAL::VerifySupportedSegmentSetAndAdjustFlags(
        VIDMM_GLOBAL *this,
        __int64 a2,
        unsigned int a3,
        struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 *a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        bool a7,
        struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *a8)
{
  __int64 v8; // r10
  unsigned int v10; // esi
  __int64 v11; // r12
  VIDMM_GLOBAL *v12; // rdi
  __int64 v13; // r15
  int v14; // r11d
  unsigned int v15; // r9d
  int v16; // edx
  char v17; // r14
  __int64 v18; // rdx
  unsigned int v19; // r8d
  unsigned __int8 v20; // bp
  unsigned int v21; // r10d
  __int64 v22; // rcx
  unsigned int v23; // eax
  unsigned int v24; // r8d
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *v27; // rbx
  __int64 Value; // rcx
  unsigned __int8 result; // al
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned int v38; // r8d
  __int64 v39; // rdx
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned int v52; // [rsp+68h] [rbp+10h]

  v52 = a2;
  v8 = *((_QWORD *)this + 5021);
  v10 = a3;
  v11 = 472LL * (unsigned int)a2;
  v12 = this;
  v13 = v11 + v8;
  if ( (~*(_DWORD *)(v11 + v8 + 16) & a3) != 0 )
  {
    v31 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v31 + 24) = 10909LL;
    WdLogEvent5_WdAssertion(v31);
    return 0;
  }
  v14 = 0;
  v15 = *(_DWORD *)(v13 + 20);
  if ( (~*(_DWORD *)(v8 + 16) & a3) != 0 )
  {
    v17 = 0;
  }
  else
  {
    if ( !a3 )
      goto LABEL_31;
    v16 = 1;
    do
    {
      if ( (a3 & 1) != 0 )
      {
        this = *(VIDMM_GLOBAL **)(*((_QWORD *)v12 + 464) + 8LL * v15);
        if ( (*((_DWORD *)this + 20) & 0x1001) == 0 )
          v14 |= v16;
      }
      v16 = __ROL4__(v16, 1);
      ++v15;
      a3 >>= 1;
    }
    while ( a3 );
    if ( v14 )
      v17 = 0;
    else
LABEL_31:
      v17 = 1;
  }
  v18 = v10;
  v19 = *(_DWORD *)(v13 + 20);
  if ( (~*(_DWORD *)(v13 + 16) & v10) != 0 || !v10 )
  {
LABEL_33:
    v20 = 0;
  }
  else
  {
    while ( 1 )
    {
      if ( (v18 & 1) != 0 )
      {
        this = *(VIDMM_GLOBAL **)(*((_QWORD *)v12 + 464) + 8LL * v19);
        if ( (*((_DWORD *)this + 20) & 0x1001) != 0 )
          break;
      }
      ++v19;
      v18 = (unsigned int)v18 >> 1;
      if ( !(_DWORD)v18 )
        goto LABEL_33;
    }
    v20 = 1;
  }
  if ( (a4->Value & 0x40000) != 0 && !v17 )
  {
    v32 = WdLogNewEntry5_WdAssertion(this, v18);
    *(_QWORD *)(v32 + 24) = 10923LL;
    WdLogEvent5_WdAssertion(v32);
    return 0;
  }
  if ( (a4->Value & 0x20000) == 0 )
    goto LABEL_18;
  if ( VIDMM_GLOBAL::VerifySegmentSet(v12, v52, v10, 0x10000u, 0LL) )
  {
    if ( v20 )
    {
      v37 = WdLogNewEntry5_WdAssertion(v34, v33);
      *(_QWORD *)(v37 + 24) = 10955LL;
      WdLogEvent5_WdAssertion(v37);
      return 0;
    }
    v38 = *(_DWORD *)(v13 + 20);
    v39 = v10;
    if ( v10 )
    {
      do
      {
        if ( (v39 & 1) != 0 )
        {
          v40 = *(_QWORD *)(*((_QWORD *)v12 + 464) + 8LL * v38);
          if ( a5 > *(_QWORD *)(v40 + 416) )
          {
            v42 = WdLogNewEntry5_WdAssertion(v38, v39);
            *(_QWORD *)(v42 + 24) = 10968LL;
            WdLogEvent5_WdAssertion(v42);
            return 0;
          }
          if ( (*(_DWORD *)(v40 + 80) & 0x20) != 0 )
          {
            v41 = WdLogNewEntry5_WdAssertion(v38, v39);
            *(_QWORD *)(v41 + 24) = 10973LL;
            WdLogEvent5_WdAssertion(v41);
            return 0;
          }
        }
        ++v38;
        v39 = (unsigned int)v39 >> 1;
      }
      while ( (_DWORD)v39 );
    }
LABEL_18:
    v21 = v52;
    goto LABEL_19;
  }
  v21 = v52;
  v35 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v12 + 3) + 2192LL) + 48LL * v52 + 16);
  if ( (v35 & 0x10) == 0 )
  {
    v36 = WdLogNewEntry5_WdAssertion(v35, v33);
    *(_QWORD *)(v36 + 24) = 10947LL;
    WdLogEvent5_WdAssertion(v36);
    return 0;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(v35);
    v21 = v52;
  }
  a4->Value &= ~0x20000u;
LABEL_19:
  v22 = *((_QWORD *)v12 + 5021);
  v23 = v10;
  v24 = *(_DWORD *)(v11 + v22 + 20);
  v25 = (unsigned int)~*(_DWORD *)(v11 + v22 + 16);
  if ( ((unsigned int)v25 & v10) != 0 || !v10 )
  {
LABEL_24:
    v27 = a8;
    *(_DWORD *)a8 &= ~4u;
  }
  else
  {
    while ( 1 )
    {
      if ( (v23 & 1) != 0 )
      {
        v25 = *(_QWORD *)(*((_QWORD *)v12 + 464) + 8LL * v24);
        v26 = *(_DWORD *)(v25 + 80) & 0x20;
        if ( (_DWORD)v26 == 32 )
          break;
      }
      ++v24;
      v23 >>= 1;
      if ( !v23 )
        goto LABEL_24;
    }
    if ( !a6 )
    {
      v43 = WdLogNewEntry5_WdAssertion(v26, v25);
      *(_QWORD *)(v43 + 24) = 10995LL;
      WdLogEvent5_WdAssertion(v43);
      return 0;
    }
    if ( a6 < a5 )
    {
      v44 = WdLogNewEntry5_WdAssertion(v26, v25);
      *(_QWORD *)(v44 + 24) = 11001LL;
      WdLogEvent5_WdAssertion(v44);
      return 0;
    }
    v27 = a8;
    *(_DWORD *)a8 |= 4u;
  }
  if ( (a4->Value & 4) != 0 && (a4->Value & 0x800000) == 0 )
  {
    if ( *((_BYTE *)v12 + 6497) )
    {
      if ( !VIDMM_GLOBAL::VerifySegmentSet(v12, v21, v10, 0x10u, 0LL) )
      {
        v45 = WdLogNewEntry5_WdAssertion(v30, v25);
        *(_QWORD *)(v45 + 24) = 11031LL;
        WdLogEvent5_WdAssertion(v45);
        return 0;
      }
    }
    else
    {
      v46 = *(unsigned int *)(*((_QWORD *)v12 + 3) + 300LL);
      if ( (v46 & 8) == 0 && !v17 )
      {
        v47 = WdLogNewEntry5_WdAssertion(v46, v25);
        *(_QWORD *)(v47 + 24) = 11038LL;
        WdLogEvent5_WdAssertion(v47);
        return 0;
      }
    }
  }
  Value = a4->Value;
  if ( (a4->Value & 0x20000001) != 0x20000001 || v17 )
  {
    if ( (Value & 0x100000) == 0 || v17 )
    {
      if ( (Value & 0x4000) == 0 || v17 )
      {
        if ( a7 && (Value & 1) != 0 && !v17 )
        {
          v51 = WdLogNewEntry5_WdAssertion(Value, v25);
          *(_QWORD *)(v51 + 24) = 11075LL;
          WdLogEvent5_WdAssertion(v51);
          return 0;
        }
        else
        {
          result = 1;
          *(_DWORD *)v27 = (2 * v20) | v17 & 0xFD | *(_DWORD *)v27 & 0xFFFFFFFC;
        }
      }
      else
      {
        v50 = WdLogNewEntry5_WdAssertion(Value, v25);
        *(_QWORD *)(v50 + 24) = 11063LL;
        WdLogEvent5_WdAssertion(v50);
        return 0;
      }
    }
    else
    {
      v49 = WdLogNewEntry5_WdAssertion(Value, v25);
      *(_QWORD *)(v49 + 24) = 11056LL;
      WdLogEvent5_WdAssertion(v49);
      return 0;
    }
  }
  else
  {
    v48 = WdLogNewEntry5_WdAssertion(Value, v25);
    *(_QWORD *)(v48 + 24) = 11049LL;
    WdLogEvent5_WdAssertion(v48);
    return 0;
  }
  return result;
}
