/*
 * XREFs of ?OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAVDXGALLOCATION@@PEAU_DXGK_OPENALLOCATIONINFO@@PEAPEAX4PEAXEEIPEAIPEA_K@Z @ 0x1C00C6700
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6@Z @ 0x1C00C44B0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DdiOpenAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_OPENALLOCATION@@@Z @ 0x1C016C418 (-DdiOpenAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_OPENALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::OpenAllocations(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        struct _D3DDDI_ALLOCATIONINFO2 *a3,
        struct DXGALLOCATION *a4,
        struct _DXGK_OPENALLOCATIONINFO *a5,
        void **a6,
        void **a7,
        void *Src,
        char a9,
        char a10,
        UINT a11,
        unsigned int *a12,
        unsigned __int64 *a13)
{
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  UINT v21; // ebx
  int v22; // r15d
  UINT NumAllocations; // esi
  UINT Value; // ecx
  UINT v25; // esi
  struct DXGALLOCATION *v26; // r12
  unsigned __int64 v27; // rax
  struct DXGALLOCATION *v28; // r14
  void *v29; // rsi
  char v30; // r8
  char v31; // r13
  const void *v32; // r10
  size_t v33; // r8
  char *v34; // rcx
  size_t v35; // r8
  const void *v36; // rdx
  void *v37; // rcx
  __int64 v38; // r9
  struct _D3DDDI_ALLOCATIONINFO2 *v39; // r8
  void *v40; // rcx
  void *pPrivateDriverData; // rax
  size_t PrivateDriverDataSize; // r8
  __int64 v44; // rax
  __int64 v45; // rax
  void *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  _QWORD *v51; // rax
  size_t v52; // r8
  size_t v53; // r8
  D3DKMT_CREATESTANDARDALLOCATION *pStandardAllocation; // rcx
  void *v55; // [rsp+28h] [rbp-80h]
  _DXGKARG_OPENALLOCATION v56; // [rsp+38h] [rbp-70h] BYREF

  v16 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v16 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v16 + 144)) )
  {
    v44 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
    *(_QWORD *)(v44 + 24) = 3219LL;
    WdLogEvent5_WdAssertion(v44);
  }
  v21 = 0;
  v55 = 0LL;
  v22 = 0;
  NumAllocations = a2->NumAllocations;
  if ( !NumAllocations )
  {
    v29 = 0LL;
    goto LABEL_35;
  }
  memset(&v56.pOpenAllocation, 0, 0x30uLL);
  Value = v56.Flags.Value;
  if ( !a10 )
    Value = v56.Flags.Value | 1;
  v56.Flags.Value = ((unsigned __int8)Value ^ (unsigned __int8)(*(_DWORD *)&a2->Flags >> 6)) & 2 ^ Value;
  v56.NumAllocations = NumAllocations;
  v56.pOpenAllocation = a5;
  v56.SubresourceIndex = a11;
  v25 = 0;
  v26 = a4;
  while ( v25 < a2->NumAllocations )
  {
    v38 = v25;
    v56.pOpenAllocation[v38].hAllocation = *((_DWORD *)v26 + 4);
    v56.pOpenAllocation[v38].hDeviceSpecificAllocation = 0LL;
    v39 = &a3[v25];
    v56.pOpenAllocation[v38].PrivateDriverDataSize = v39->PrivateDriverDataSize;
    v40 = a6[v25];
    v56.pOpenAllocation[v38].pPrivateDriverData = v40;
    pPrivateDriverData = v39->pPrivateDriverData;
    if ( pPrivateDriverData )
    {
      PrivateDriverDataSize = v39->PrivateDriverDataSize;
      if ( a9 )
        memmove(v40, a7[v25], PrivateDriverDataSize);
      else
        memmove(v56.pOpenAllocation[v38].pPrivateDriverData, pPrivateDriverData, PrivateDriverDataSize);
    }
    else if ( v39->PrivateDriverDataSize && a9 )
    {
      v45 = WdLogNewEntry5_WdWarning(v40, v25, v39, v38 * 32);
      *(_QWORD *)(v45 + 24) = this;
      *(_QWORD *)(v45 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v45);
      v22 = -1073741811;
    }
    ++v25;
    v26 = (struct DXGALLOCATION *)*((_QWORD *)v26 + 8);
  }
  v27 = a2->PrivateDriverDataSize;
  v56.PrivateDriverSize = a2->PrivateDriverDataSize;
  v28 = a4;
  if ( a2->pStandardAllocation )
  {
    v46 = operator new(v27, 0x4B677844u, PagedPool);
    v29 = v46;
    v55 = v46;
    if ( !v46 )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v48, v47, v49, v50);
      v51[3] = this;
      v51[4] = a2->PrivateDriverDataSize;
      v22 = -1073741801;
      v51[5] = -1073741801LL;
      WdLogEvent5_WdWarning(v51);
      goto LABEL_35;
    }
    v56.pPrivateDriverData = v46;
    v52 = a2->PrivateDriverDataSize;
    if ( a9 )
      memmove(v46, Src, v52);
    else
      memmove(v46, a2->pStandardAllocation, v52);
  }
  else
  {
    v29 = 0LL;
  }
  if ( v22 >= 0 )
  {
    v22 = ADAPTER_RENDER::DdiOpenAllocation(*((ADAPTER_RENDER **)this + 2), *((void **)this + 52), &v56);
    if ( v22 >= 0 )
    {
      if ( a12 )
        *a12 = v56.Pitch;
      if ( a13 )
        *a13 = v56.SubresourceOffset;
      v30 = a10;
      if ( !v29 || a10 )
      {
        v31 = a9;
      }
      else
      {
        v31 = a9;
        if ( a9 )
        {
          v53 = a2->PrivateDriverDataSize;
          pStandardAllocation = a2->pStandardAllocation;
          if ( (unsigned __int64)pStandardAllocation + v53 > MmUserProbeAddress
            || (D3DKMT_CREATESTANDARDALLOCATION *)((char *)pStandardAllocation + v53) <= pStandardAllocation )
          {
            *(_BYTE *)MmUserProbeAddress = 0;
          }
          memmove(pStandardAllocation, v29, v53);
          memmove(Src, v29, a2->PrivateDriverDataSize);
          v30 = a10;
        }
        else
        {
          memmove(a2->pStandardAllocation, v29, a2->PrivateDriverDataSize);
          v30 = a10;
        }
      }
      while ( v21 < a2->NumAllocations )
      {
        *((_QWORD *)v28 + 4) = v56.pOpenAllocation[v21].hDeviceSpecificAllocation;
        v32 = a6[v21];
        if ( v32 && !v30 )
        {
          if ( v31 )
          {
            v33 = a3[v21].PrivateDriverDataSize;
            v34 = (char *)a3[v21].pPrivateDriverData;
            if ( (unsigned __int64)&v34[v33] > MmUserProbeAddress || &v34[v33] <= v34 )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v34, v32, v33);
            v35 = a3[v21].PrivateDriverDataSize;
            v36 = a6[v21];
            v37 = a7[v21];
          }
          else
          {
            v35 = a3[v21].PrivateDriverDataSize;
            v36 = a6[v21];
            v37 = a3[v21].pPrivateDriverData;
          }
          memmove(v37, v36, v35);
        }
        ++v21;
        v28 = (struct DXGALLOCATION *)*((_QWORD *)v28 + 8);
        v30 = a10;
      }
      v29 = v55;
    }
  }
LABEL_35:
  if ( v29 )
    ExFreePoolWithTag(v29, 0);
  return (unsigned int)v22;
}
