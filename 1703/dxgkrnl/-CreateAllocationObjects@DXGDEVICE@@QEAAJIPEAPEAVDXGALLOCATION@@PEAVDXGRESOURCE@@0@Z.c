/*
 * XREFs of ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C00C7200
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6@Z @ 0x1C00C44B0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000153C (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ??_GDXGALLOCATION@@QEAAPEAXI@Z @ 0x1C00201EC (--_GDXGALLOCATION@@QEAAPEAXI@Z.c)
 *     ??_GDXGADAPTERALLOCATION@@QEAAPEAXI@Z @ 0x1C002040C (--_GDXGADAPTERALLOCATION@@QEAAPEAXI@Z.c)
 *     ??0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ @ 0x1C0025700 (--0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0087F50 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C0095DE0 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00CEC74 (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGALLOCATION@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C016B35C (--0DXGALLOCATION@@QEAA@PEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateAllocationObjects(
        DXGDEVICE *this,
        int a2,
        struct DXGALLOCATION **a3,
        struct DXGRESOURCE *a4,
        struct DXGALLOCATION **a5)
{
  struct DXGRESOURCE *v6; // r13
  int v9; // r14d
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // ebp
  struct _EX_RUNDOWN_REF *PoolWithQuotaTag; // rax
  __int64 v18; // rdx
  ADAPTER_RENDER *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbx
  __int64 v23; // r12
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  struct DXGALLOCATION *v35; // rax
  DXGADAPTERALLOCATION_VGPU *v36; // rax
  struct DXGALLOCATION **v38; // rax
  __int64 v39; // rax
  DXGALLOCATION *v40; // rax
  int v41; // r9d
  __int64 v42; // rax
  __int64 v43; // rax
  DXGADAPTERALLOCATION_VGPU *v44; // rax
  __int64 v45; // rax
  struct DXGALLOCATION *v46; // rbx
  struct DXGALLOCATION *v47; // rdi
  DXGADAPTERALLOCATION *v48; // rcx
  char v49; // [rsp+78h] [rbp+10h]
  struct DXGALLOCATION **v51; // [rsp+90h] [rbp+28h]

  v6 = a4;
  v9 = 0;
  v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v10 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 144)) )
  {
    v39 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v39 + 24) = 2624LL;
    WdLogEvent5_WdAssertion(v39);
  }
  *a3 = 0LL;
  *a5 = 0LL;
  if ( v6 && (*((_DWORD *)v6 + 1) & 1) != 0 )
  {
    v49 = 1;
    v51 = *(struct DXGALLOCATION ***)(*((_QWORD *)v6 + 7) + 136LL);
  }
  else
  {
    v49 = 0;
    v51 = 0LL;
  }
  v16 = a2 - 1;
  if ( a2 - 1 >= 0 )
  {
    while ( 1 )
    {
      if ( *((_BYTE *)this + 1821) )
      {
        v40 = (DXGALLOCATION *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x80uLL);
        v22 = (__int64)v40;
        if ( !v40 )
          goto LABEL_42;
        DXGALLOCATION::DXGALLOCATION(v40, this);
        *(_DWORD *)(v22 + 72) |= 0x40000u;
        *(_DWORD *)(v22 + 96) = 0;
        *(_QWORD *)(v22 + 104) = 0LL;
        *(_QWORD *)(v22 + 112) = 0LL;
        *(_QWORD *)(v22 + 120) = 0LL;
      }
      else
      {
        PoolWithQuotaTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x60uLL, 0x4B677844u);
        v22 = (__int64)PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
          goto LABEL_42;
        PoolWithQuotaTag[1].Count = (ULONG_PTR)this;
        LODWORD(PoolWithQuotaTag[2].Count) = 0;
        PoolWithQuotaTag[3].Count = 0LL;
        PoolWithQuotaTag[4].Count = 0LL;
        PoolWithQuotaTag[5].Count = 0LL;
        PoolWithQuotaTag[6].Count = 0LL;
        PoolWithQuotaTag[7].Count = 0LL;
        PoolWithQuotaTag[8].Count = 0LL;
        LODWORD(PoolWithQuotaTag[9].Count) = 0;
        PoolWithQuotaTag[10].Count = 0LL;
        ExInitializeRundownProtection(PoolWithQuotaTag + 11);
      }
      if ( !v22 )
        goto LABEL_42;
      v23 = *((_QWORD *)this + 5);
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v23 + 168, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v41 = *(_DWORD *)(v23 + 184);
          if ( v41 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_q(v24, &EventBlockThread, v25, v41);
        }
        ExAcquirePushLockExclusiveEx(v23 + 168, 0LL);
      }
      *(_QWORD *)(v23 + 176) = KeGetCurrentThread();
      *(_DWORD *)(v22 + 16) = HMGRTABLE::AllocHandle((unsigned int *)(v23 + 192), v22, 5LL, 0LL, 0);
      DxgkReferenceDxgAllocation((struct _EX_RUNDOWN_REF *)v22);
      *(_QWORD *)(v23 + 176) = 0LL;
      ExReleasePushLockExclusiveEx(v23 + 168, 0LL);
      KeLeaveCriticalRegion();
      if ( !*(_DWORD *)(v22 + 16) )
        break;
      v6 = a4;
      *(_QWORD *)(v22 + 40) = a4;
      if ( !*a5 )
        *a5 = (struct DXGALLOCATION *)v22;
      v30 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v30 + 160)
        && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v30 + 144)) )
      {
        v43 = WdLogNewEntry5_WdAssertion(v32, v31, v33, v34);
        *(_QWORD *)(v43 + 24) = 7376LL;
        WdLogEvent5_WdAssertion(v43);
      }
      *(_QWORD *)(v22 + 56) = 0LL;
      v35 = *a3;
      *(_QWORD *)(v22 + 64) = *a3;
      if ( v35 )
        *((_QWORD *)v35 + 7) = v22;
      *a3 = (struct DXGALLOCATION *)v22;
      if ( v49 )
      {
        v38 = v51 - 6;
        v19 = v51[1];
        v51 = (struct DXGALLOCATION **)v19;
        *(_QWORD *)(v22 + 48) = v38;
      }
      else
      {
        if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 186LL) )
        {
          v44 = (DXGADAPTERALLOCATION_VGPU *)operator new(0x70uLL, 0x4B677844u, PagedPool);
          if ( !v44 )
          {
LABEL_42:
            v45 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
            *(_QWORD *)(v45 + 24) = this;
            *(_QWORD *)(v45 + 32) = -1073741801LL;
            WdLogEvent5_WdWarning(v45);
            goto LABEL_43;
          }
          v36 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v44);
        }
        else
        {
          v36 = (DXGADAPTERALLOCATION_VGPU *)operator new(0x40uLL, 0x4B677844u, PagedPool);
          if ( !v36 )
            goto LABEL_42;
          *((_DWORD *)v36 + 1) = 0;
          *((_QWORD *)v36 + 1) = 0LL;
          *((_QWORD *)v36 + 2) = 0LL;
          *((_QWORD *)v36 + 4) = 0LL;
          *((_DWORD *)v36 + 10) = 0;
          *((_QWORD *)v36 + 7) = 0LL;
          *((_QWORD *)v36 + 6) = 0LL;
        }
        if ( !v36 )
          goto LABEL_42;
        *(_QWORD *)(v22 + 48) = v36;
      }
LABEL_26:
      if ( --v16 < 0 )
      {
        if ( v9 < 0 )
        {
          v46 = *a3;
          while ( v46 )
          {
            v47 = v46;
            v46 = (struct DXGALLOCATION *)*((_QWORD *)v46 + 8);
            ADAPTER_RENDER::FreeAllocationHandleAndWaitForZeroReferences(v19, v47, 0LL);
            v48 = (DXGADAPTERALLOCATION *)*((_QWORD *)v47 + 6);
            if ( v48 && (!v6 || (*((_DWORD *)v6 + 1) & 1) == 0) )
              DXGADAPTERALLOCATION::`scalar deleting destructor'(v48);
            DXGALLOCATION::`scalar deleting destructor'(v47);
          }
          *a3 = 0LL;
        }
        return (unsigned int)v9;
      }
    }
    v42 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
    *(_QWORD *)(v42 + 24) = this;
    *(_QWORD *)(v42 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v42);
    DXGALLOCATION::`scalar deleting destructor'((DXGALLOCATION *)v22);
    v6 = a4;
LABEL_43:
    v9 = -1073741801;
    goto LABEL_26;
  }
  return (unsigned int)v9;
}
