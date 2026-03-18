/*
 * XREFs of ?OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAVDXGALLOCATION@@PEAU_DXGK_OPENALLOCATIONINFO@@PEAPEAX4PEAXEEIPEAIPEA_K@Z @ 0x1C00EDF10
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00EBA10 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?DdiOpenAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_OPENALLOCATION@@@Z @ 0x1C0146C3C (-DdiOpenAllocation@ADAPTER_RENDER@@QEAAJPEAXPEBU_DXGKARG_OPENALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::OpenAllocations(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        struct _D3DDDI_ALLOCATIONINFO2 *a3,
        struct DXGALLOCATION *a4,
        struct _DXGK_OPENALLOCATIONINFO *a5,
        void **a6,
        void **a7,
        D3DKMT_CREATESTANDARDALLOCATION *Src,
        char a9,
        char a10,
        UINT a11,
        unsigned int *a12,
        unsigned __int64 *a13)
{
  __int64 v16; // rcx
  __int64 v17; // rcx
  UINT v18; // edi
  void *v19; // r9
  int v20; // r15d
  UINT NumAllocations; // edx
  UINT v22; // esi
  struct DXGALLOCATION *v23; // r12
  __int64 v24; // r9
  struct _D3DDDI_ALLOCATIONINFO2 *v25; // r8
  void *v26; // rcx
  void *pPrivateDriverData; // r10
  SIZE_T PrivateDriverDataSize; // rax
  struct DXGALLOCATION *v29; // r14
  char v30; // si
  char v31; // r8
  const void *v32; // rdx
  size_t v33; // r8
  char *v34; // rcx
  size_t v35; // r8
  void *v36; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  PVOID v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  _QWORD *v44; // rax
  size_t v45; // r8
  size_t v46; // r8
  D3DKMT_CREATESTANDARDALLOCATION *pStandardAllocation; // rcx
  const void *v48; // rdx
  D3DKMT_CREATESTANDARDALLOCATION *v49; // rcx
  void *v50; // [rsp+28h] [rbp-90h]
  _DXGKARG_OPENALLOCATION v51; // [rsp+40h] [rbp-78h] BYREF

  v16 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v16 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v16 + 144)) )
  {
    v38 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v38 + 24) = 3419LL;
    WdLogEvent5_WdAssertion(v38);
  }
  v18 = 0;
  v19 = 0LL;
  v50 = 0LL;
  v20 = 0;
  NumAllocations = a2->NumAllocations;
  if ( !NumAllocations )
    goto LABEL_34;
  *(_QWORD *)&v51.NumAllocations = 0LL;
  memset(&v51.pPrivateDriverData, 0, 40);
  v51.Flags.Value = (*(_DWORD *)&a2->Flags >> 6) & 2 | (a10 == 0);
  v51.NumAllocations = NumAllocations;
  v51.pOpenAllocation = a5;
  v51.SubresourceIndex = a11;
  v22 = 0;
  v23 = a4;
  while ( v22 < a2->NumAllocations )
  {
    v24 = v22;
    v51.pOpenAllocation[v24].hAllocation = *((_DWORD *)v23 + 4);
    v51.pOpenAllocation[v24].hDeviceSpecificAllocation = 0LL;
    v25 = &a3[v22];
    v51.pOpenAllocation[v24].PrivateDriverDataSize = v25->PrivateDriverDataSize;
    v26 = a6[v22];
    v51.pOpenAllocation[v24].pPrivateDriverData = v26;
    pPrivateDriverData = v25->pPrivateDriverData;
    if ( pPrivateDriverData )
    {
      if ( a9 && (*(_DWORD *)&a2->Flags & 0x10000) == 0 )
      {
        memmove(v26, a7[v22], v25->PrivateDriverDataSize);
        goto LABEL_11;
      }
      memmove(v51.pOpenAllocation[v24].pPrivateDriverData, pPrivateDriverData, v25->PrivateDriverDataSize);
      ++v22;
      v23 = (struct DXGALLOCATION *)*((_QWORD *)v23 + 8);
    }
    else
    {
      if ( v25->PrivateDriverDataSize && a9 )
      {
        v39 = WdLogNewEntry5_WdWarning(v26, v22, v25);
        *(_QWORD *)(v39 + 24) = this;
        *(_QWORD *)(v39 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v39);
        v20 = -1073741811;
      }
LABEL_11:
      ++v22;
      v23 = (struct DXGALLOCATION *)*((_QWORD *)v23 + 8);
    }
  }
  PrivateDriverDataSize = a2->PrivateDriverDataSize;
  v51.PrivateDriverSize = a2->PrivateDriverDataSize;
  v29 = a4;
  if ( a2->pStandardAllocation && (_DWORD)PrivateDriverDataSize )
  {
    v40 = operator new[](PrivateDriverDataSize, 0x4B677844u, PagedPool);
    v50 = v40;
    if ( !v40 )
    {
      v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v41, v43);
      v44[3] = this;
      v44[4] = a2->PrivateDriverDataSize;
      v20 = -1073741801;
      v44[5] = -1073741801LL;
      WdLogEvent5_WdWarning(v44);
      goto LABEL_33;
    }
    v51.pPrivateDriverData = v40;
    v45 = a2->PrivateDriverDataSize;
    v30 = a9;
    if ( a9 )
      memmove(v40, Src, v45);
    else
      memmove(v40, a2->pStandardAllocation, v45);
  }
  else
  {
    v30 = a9;
  }
  if ( v20 >= 0 )
  {
    v20 = ADAPTER_RENDER::DdiOpenAllocation(*((ADAPTER_RENDER **)this + 2), *((void **)this + 54), &v51);
    if ( v20 >= 0 )
    {
      if ( a12 )
        *a12 = v51.Pitch;
      if ( a13 )
        *a13 = v51.SubresourceOffset;
      v31 = a10;
      if ( v50 && !a10 )
      {
        if ( v30 )
        {
          v46 = a2->PrivateDriverDataSize;
          pStandardAllocation = a2->pStandardAllocation;
          if ( (unsigned __int64)pStandardAllocation + v46 > MmUserProbeAddress
            || (D3DKMT_CREATESTANDARDALLOCATION *)((char *)pStandardAllocation + v46) <= pStandardAllocation )
          {
            *(_BYTE *)MmUserProbeAddress = 0;
          }
          memmove(pStandardAllocation, v50, v46);
          v48 = v50;
          v49 = Src;
        }
        else
        {
          v48 = v50;
          v49 = a2->pStandardAllocation;
        }
        memmove(v49, v48, a2->PrivateDriverDataSize);
        v31 = a10;
      }
      while ( v18 < a2->NumAllocations )
      {
        *((_QWORD *)v29 + 4) = v51.pOpenAllocation[v18].hDeviceSpecificAllocation;
        v32 = a6[v18];
        if ( v32 && !v31 )
        {
          if ( !a9 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
          {
            v35 = a3[v18].PrivateDriverDataSize;
            v36 = a3[v18].pPrivateDriverData;
          }
          else
          {
            v33 = a3[v18].PrivateDriverDataSize;
            v34 = (char *)a3[v18].pPrivateDriverData;
            if ( (unsigned __int64)&v34[v33] > MmUserProbeAddress || &v34[v33] <= v34 )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v34, v32, v33);
            v35 = a3[v18].PrivateDriverDataSize;
            v32 = a6[v18];
            v36 = a7[v18];
          }
          memmove(v36, v32, v35);
        }
        ++v18;
        v29 = (struct DXGALLOCATION *)*((_QWORD *)v29 + 8);
        v31 = a10;
      }
    }
  }
LABEL_33:
  v19 = v50;
LABEL_34:
  operator delete[](v19);
  return (unsigned int)v20;
}
