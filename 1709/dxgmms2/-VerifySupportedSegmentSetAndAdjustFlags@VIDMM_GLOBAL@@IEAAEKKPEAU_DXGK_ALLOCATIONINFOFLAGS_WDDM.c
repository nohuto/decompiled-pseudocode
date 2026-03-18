/*
 * XREFs of ?VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1C005F380
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00632F0 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C009DDD0 (-UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA.c)
 * Callees:
 *     ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C0074208 (-VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
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
  __int64 v9; // rcx
  __int64 v11; // r12
  unsigned int v12; // ebx
  __int64 v13; // r13
  int v14; // r10d
  unsigned int v15; // ebp
  unsigned int v16; // r9d
  char v17; // r15
  unsigned __int8 v18; // bp
  struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 *v19; // r13
  __int64 v20; // r11
  unsigned int v21; // eax
  unsigned int v22; // r10d
  __int64 v23; // rcx
  unsigned int v24; // r8d
  __int64 v25; // rdx
  struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *v26; // r8
  __int64 Value; // rdx
  unsigned __int8 result; // al
  int v29; // esi
  int v30; // r8d
  bool v31; // zf
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned int v39; // r8d
  __int64 v40; // rdx
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned int v52; // [rsp+78h] [rbp+10h]

  v52 = a2;
  v9 = *((_QWORD *)this + 5021);
  v11 = 1552LL * (unsigned int)a2;
  v12 = a3;
  v13 = v11 + v9;
  if ( (~*(_DWORD *)(v11 + v9 + 16) & a3) != 0 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v9, a2);
    *(_QWORD *)(v32 + 24) = 11377LL;
    WdLogEvent5_WdAssertion(v32);
    return 0;
  }
  v14 = 0;
  v15 = *(_DWORD *)(v13 + 20);
  v16 = v15;
  if ( (~*(_DWORD *)(v9 + 16) & a3) != 0 )
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
        v9 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v16);
        if ( (*(_DWORD *)(v9 + 80) & 0x1001) == 0 )
          v14 |= a2;
      }
      a2 = (unsigned int)__ROL4__(a2, 1);
      ++v16;
      a3 >>= 1;
    }
    while ( a3 );
    if ( v14 )
      v17 = 0;
    else
LABEL_10:
      v17 = 1;
  }
  if ( v12 )
  {
    a2 = v12;
    while ( 1 )
    {
      if ( (a2 & 1) != 0 )
      {
        v9 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v15);
        if ( (*(_DWORD *)(v9 + 80) & 0x1001) != 0 )
          break;
      }
      ++v15;
      a2 = (unsigned int)a2 >> 1;
      if ( !(_DWORD)a2 )
        goto LABEL_44;
    }
    v18 = 1;
  }
  else
  {
LABEL_44:
    v18 = 0;
  }
  if ( (a4->Value & 0x40000) != 0 && !v17 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v9, a2);
    *(_QWORD *)(v33 + 24) = 11391LL;
    WdLogEvent5_WdAssertion(v33);
    return 0;
  }
  if ( (a4->Value & 0x20000) == 0 )
    goto LABEL_18;
  if ( VIDMM_GLOBAL::VerifySegmentSet(this, v52, v12, 0x10000u, 0LL) )
  {
    if ( v18 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v35, v34);
      *(_QWORD *)(v38 + 24) = 11423LL;
      WdLogEvent5_WdAssertion(v38);
      return 0;
    }
    v39 = *(_DWORD *)(v13 + 20);
    v40 = v12;
    if ( v12 )
    {
      do
      {
        if ( (v40 & 1) != 0 )
        {
          v41 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v39);
          if ( a5 > *(_QWORD *)(v41 + 392) )
          {
            v43 = WdLogNewEntry5_WdAssertion(v39, v40);
            *(_QWORD *)(v43 + 24) = 11436LL;
            WdLogEvent5_WdAssertion(v43);
            return 0;
          }
          if ( (*(_DWORD *)(v41 + 80) & 0x20) != 0 )
          {
            v42 = WdLogNewEntry5_WdAssertion(v39, v40);
            *(_QWORD *)(v42 + 24) = 11441LL;
            WdLogEvent5_WdAssertion(v42);
            return 0;
          }
        }
        ++v39;
        v40 = (unsigned int)v40 >> 1;
      }
      while ( (_DWORD)v40 );
    }
LABEL_18:
    v19 = a4;
    goto LABEL_19;
  }
  v36 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 3) + 2216LL) + 48LL * v52 + 16);
  if ( (v36 & 0x10) == 0 )
  {
    v37 = WdLogNewEntry5_WdAssertion(v36, v52);
    *(_QWORD *)(v37 + 24) = 11415LL;
    WdLogEvent5_WdAssertion(v37);
    return 0;
  }
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(v36);
  v19 = a4;
  a4->Value &= ~0x20000u;
LABEL_19:
  v20 = *((_QWORD *)this + 5021);
  v21 = v12;
  v22 = *(_DWORD *)(v11 + v20 + 20);
  v23 = (unsigned int)~*(_DWORD *)(v11 + v20 + 16);
  v24 = v22;
  if ( ((unsigned int)v23 & v12) != 0 || !v12 )
  {
LABEL_24:
    v26 = a8;
    *(_DWORD *)a8 &= ~4u;
  }
  else
  {
    while ( 1 )
    {
      if ( (v21 & 1) != 0 )
      {
        v25 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v24);
        v23 = *(_DWORD *)(v25 + 80) & 0x20;
        if ( (_DWORD)v23 == 32 )
          break;
      }
      ++v24;
      v21 >>= 1;
      if ( !v21 )
        goto LABEL_24;
    }
    if ( !a6 )
    {
      v44 = WdLogNewEntry5_WdAssertion(v23, v25);
      *(_QWORD *)(v44 + 24) = 11463LL;
      WdLogEvent5_WdAssertion(v44);
      return 0;
    }
    if ( a6 < a5 )
    {
      v45 = WdLogNewEntry5_WdAssertion(v23, v25);
      *(_QWORD *)(v45 + 24) = 11469LL;
      WdLogEvent5_WdAssertion(v45);
      return 0;
    }
    v26 = a8;
    *(_DWORD *)a8 |= 4u;
  }
  Value = v19->Value;
  if ( (Value & 4) != 0 && (Value & 0x800000) == 0 )
  {
    if ( *((_BYTE *)this + 6497) )
    {
      if ( (~*(_DWORD *)(v20 + 16) & v12) != 0 )
        goto LABEL_74;
      if ( v12 )
      {
        v29 = 1;
        v30 = 0;
        do
        {
          if ( (v12 & 1) != 0 )
          {
            v23 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v22);
            if ( (*(_DWORD *)(v23 + 80) & 0x10) != 0x10 )
              v30 |= v29;
          }
          v29 = __ROL4__(v29, 1);
          ++v22;
          v12 >>= 1;
        }
        while ( v12 );
        v31 = v30 == 0;
        v26 = a8;
        if ( !v31 )
        {
LABEL_74:
          v46 = WdLogNewEntry5_WdAssertion(v23, Value);
          *(_QWORD *)(v46 + 24) = 11499LL;
          WdLogEvent5_WdAssertion(v46);
          return 0;
        }
      }
    }
    else
    {
      v23 = *(unsigned int *)(*((_QWORD *)this + 3) + 300LL);
      if ( (v23 & 8) == 0 && !v17 )
      {
        v47 = WdLogNewEntry5_WdAssertion(v23, Value);
        *(_QWORD *)(v47 + 24) = 11506LL;
        WdLogEvent5_WdAssertion(v47);
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
          v51 = WdLogNewEntry5_WdAssertion(v23, Value);
          *(_QWORD *)(v51 + 24) = 11543LL;
          WdLogEvent5_WdAssertion(v51);
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
        v50 = WdLogNewEntry5_WdAssertion(v23, Value);
        *(_QWORD *)(v50 + 24) = 11531LL;
        WdLogEvent5_WdAssertion(v50);
        return 0;
      }
    }
    else
    {
      v49 = WdLogNewEntry5_WdAssertion(v23, Value);
      *(_QWORD *)(v49 + 24) = 11524LL;
      WdLogEvent5_WdAssertion(v49);
      return 0;
    }
  }
  else
  {
    v48 = WdLogNewEntry5_WdAssertion(v23, Value);
    *(_QWORD *)(v48 + 24) = 11517LL;
    WdLogEvent5_WdAssertion(v48);
    return 0;
  }
  return result;
}
