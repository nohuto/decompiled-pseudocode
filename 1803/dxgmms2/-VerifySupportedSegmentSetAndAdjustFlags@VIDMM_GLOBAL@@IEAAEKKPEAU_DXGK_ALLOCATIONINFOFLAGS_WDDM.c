/*
 * XREFs of ?VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1C0063970
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0067620 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C00A442C (-UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA.c)
 * Callees:
 *     ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C007B270 (-VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
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
  unsigned int v9; // ebx
  VIDMM_GLOBAL *v10; // r14
  __int64 v11; // r12
  __int64 v12; // r13
  int v13; // r11d
  unsigned int v14; // esi
  unsigned int v15; // r9d
  int v16; // edi
  char v17; // r15
  unsigned __int8 v18; // bp
  struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 *v19; // r11
  __int64 v20; // r10
  unsigned int v21; // eax
  unsigned int v22; // r9d
  __int64 v23; // rcx
  unsigned int v24; // r8d
  __int64 v25; // rdx
  struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *v26; // r8
  __int64 Value; // rdx
  unsigned __int8 result; // al
  int v29; // r8d
  bool v30; // zf
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
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned int v51; // [rsp+78h] [rbp+10h]

  v51 = a2;
  v8 = *((_QWORD *)this + 5090);
  v9 = a3;
  v10 = this;
  v11 = 1560LL * (unsigned int)a2;
  v12 = v8 + v11;
  if ( (~*(_DWORD *)(v8 + v11 + 16) & a3) != 0 )
  {
    v31 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v31 + 24) = 11550LL;
    WdLogEvent5_WdAssertion(v31);
    return 0;
  }
  v13 = 0;
  v14 = *(_DWORD *)(v12 + 20);
  v15 = v14;
  v16 = 1;
  if ( (~*(_DWORD *)(v8 + 16) & a3) != 0 )
  {
    v17 = 0;
  }
  else
  {
    if ( !a3 )
      goto LABEL_10;
    LODWORD(a2) = 1;
    do
    {
      if ( (a3 & 1) != 0 )
      {
        this = *(VIDMM_GLOBAL **)(*((_QWORD *)v10 + 464) + 8LL * v15);
        if ( (*((_DWORD *)this + 20) & 0x1001) == 0 )
          v13 |= a2;
      }
      a2 = (unsigned int)__ROL4__(a2, 1);
      ++v15;
      a3 >>= 1;
    }
    while ( a3 );
    if ( v13 )
      v17 = 0;
    else
LABEL_10:
      v17 = 1;
  }
  if ( v9 )
  {
    a2 = v9;
    while ( 1 )
    {
      if ( (a2 & 1) != 0 )
      {
        this = *(VIDMM_GLOBAL **)(*((_QWORD *)v10 + 464) + 8LL * v14);
        if ( (*((_DWORD *)this + 20) & 0x1001) != 0 )
          break;
      }
      ++v14;
      a2 = (unsigned int)a2 >> 1;
      if ( !(_DWORD)a2 )
        goto LABEL_32;
    }
    v18 = 1;
  }
  else
  {
LABEL_32:
    v18 = 0;
  }
  v19 = a4;
  if ( (a4->Value & 0x40000) != 0 && !v17 )
  {
    v32 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v32 + 24) = 11564LL;
    WdLogEvent5_WdAssertion(v32);
    return 0;
  }
  if ( (a4->Value & 0x20000) != 0 )
  {
    if ( VIDMM_GLOBAL::VerifySegmentSet(v10, v51, v9, 0x10000u, 0LL) )
    {
      if ( v18 )
      {
        v37 = WdLogNewEntry5_WdAssertion(v34, v33);
        *(_QWORD *)(v37 + 24) = 11596LL;
        WdLogEvent5_WdAssertion(v37);
        return 0;
      }
      v38 = *(_DWORD *)(v12 + 20);
      v39 = v9;
      if ( v9 )
      {
        do
        {
          if ( (v39 & 1) != 0 )
          {
            v40 = *(_QWORD *)(*((_QWORD *)v10 + 464) + 8LL * v38);
            if ( a5 > *(_QWORD *)(v40 + 392) )
            {
              v42 = WdLogNewEntry5_WdAssertion(v38, v39);
              *(_QWORD *)(v42 + 24) = 11609LL;
              WdLogEvent5_WdAssertion(v42);
              return 0;
            }
            if ( (*(_DWORD *)(v40 + 80) & 0x20) != 0 )
            {
              v41 = WdLogNewEntry5_WdAssertion(v38, v39);
              *(_QWORD *)(v41 + 24) = 11614LL;
              WdLogEvent5_WdAssertion(v41);
              return 0;
            }
          }
          ++v38;
          v39 = (unsigned int)v39 >> 1;
        }
        while ( (_DWORD)v39 );
      }
      v19 = a4;
    }
    else
    {
      v35 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v10 + 3) + 2360LL) + 352LL * v51 + 16);
      if ( (v35 & 0x10) == 0 )
      {
        v36 = WdLogNewEntry5_WdAssertion(v35, v51);
        *(_QWORD *)(v36 + 24) = 11588LL;
        WdLogEvent5_WdAssertion(v36);
        return 0;
      }
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v35);
      v19 = a4;
      a4->Value &= ~0x20000u;
    }
  }
  v20 = *((_QWORD *)v10 + 5090);
  v21 = v9;
  v22 = *(_DWORD *)(v20 + v11 + 20);
  v23 = (unsigned int)~*(_DWORD *)(v20 + v11 + 16);
  v24 = v22;
  if ( ((unsigned int)v23 & v9) != 0 || !v9 )
  {
LABEL_23:
    v26 = a8;
    *(_DWORD *)a8 &= ~4u;
  }
  else
  {
    while ( 1 )
    {
      if ( (v21 & 1) != 0 )
      {
        v25 = *(_QWORD *)(*((_QWORD *)v10 + 464) + 8LL * v24);
        v23 = *(unsigned int *)(v25 + 80);
        if ( (v23 & 0x20) != 0 )
          break;
      }
      ++v24;
      v21 >>= 1;
      if ( !v21 )
        goto LABEL_23;
    }
    if ( !a6 )
    {
      v43 = WdLogNewEntry5_WdAssertion(v23, v25);
      *(_QWORD *)(v43 + 24) = 11636LL;
      WdLogEvent5_WdAssertion(v43);
      return 0;
    }
    if ( a6 < a5 )
    {
      v44 = WdLogNewEntry5_WdAssertion(v23, v25);
      *(_QWORD *)(v44 + 24) = 11642LL;
      WdLogEvent5_WdAssertion(v44);
      return 0;
    }
    v26 = a8;
    *(_DWORD *)a8 |= 4u;
  }
  Value = v19->Value;
  if ( (Value & 4) != 0 && (Value & 0x800000) == 0 )
  {
    if ( *((_BYTE *)v10 + 7073) )
    {
      if ( (~*(_DWORD *)(v20 + 16) & v9) != 0 )
        goto LABEL_74;
      if ( v9 )
      {
        v29 = 0;
        do
        {
          if ( (v9 & 1) != 0 )
          {
            v23 = *(_QWORD *)(*((_QWORD *)v10 + 464) + 8LL * v22);
            if ( (*(_DWORD *)(v23 + 80) & 0x10) == 0 )
              v29 |= v16;
          }
          v16 = __ROL4__(v16, 1);
          ++v22;
          v9 >>= 1;
        }
        while ( v9 );
        v30 = v29 == 0;
        v26 = a8;
        if ( !v30 )
        {
LABEL_74:
          v45 = WdLogNewEntry5_WdAssertion(v23, Value);
          *(_QWORD *)(v45 + 24) = 11672LL;
          WdLogEvent5_WdAssertion(v45);
          return 0;
        }
      }
    }
    else
    {
      v23 = *(unsigned int *)(*((_QWORD *)v10 + 3) + 300LL);
      if ( (v23 & 8) == 0 && !v17 )
      {
        v46 = WdLogNewEntry5_WdAssertion(v23, Value);
        *(_QWORD *)(v46 + 24) = 11679LL;
        WdLogEvent5_WdAssertion(v46);
        return 0;
      }
    }
  }
  if ( (Value & 0x20000001) != 0x20000001 || v17 )
  {
    if ( (Value & 0x100000) == 0 || v17 )
    {
      if ( (Value & 0x4000) == 0 || v17 )
      {
        if ( a7 && (Value & 1) != 0 && !v17 )
        {
          v50 = WdLogNewEntry5_WdAssertion(v23, Value);
          *(_QWORD *)(v50 + 24) = 11716LL;
          WdLogEvent5_WdAssertion(v50);
          return 0;
        }
        else
        {
          result = 1;
          *(_DWORD *)v26 = (2 * v18) | v17 & 0xFD | *(_DWORD *)v26 & 0xFFFFFFFC;
        }
      }
      else
      {
        v49 = WdLogNewEntry5_WdAssertion(v23, Value);
        *(_QWORD *)(v49 + 24) = 11704LL;
        WdLogEvent5_WdAssertion(v49);
        return 0;
      }
    }
    else
    {
      v48 = WdLogNewEntry5_WdAssertion(v23, Value);
      *(_QWORD *)(v48 + 24) = 11697LL;
      WdLogEvent5_WdAssertion(v48);
      return 0;
    }
  }
  else
  {
    v47 = WdLogNewEntry5_WdAssertion(v23, Value);
    *(_QWORD *)(v47 + 24) = 11690LL;
    WdLogEvent5_WdAssertion(v47);
    return 0;
  }
  return result;
}
