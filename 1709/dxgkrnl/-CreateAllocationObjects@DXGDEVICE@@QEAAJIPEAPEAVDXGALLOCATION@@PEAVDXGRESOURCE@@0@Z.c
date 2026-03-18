/*
 * XREFs of ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C009AB40
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1C0097830 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C00088FC (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ??_GDXGALLOCATION@@QEAAPEAXI@Z @ 0x1C001D47C (--_GDXGALLOCATION@@QEAAPEAXI@Z.c)
 *     ??_GDXGADAPTERALLOCATION@@QEAAPEAXI@Z @ 0x1C001D720 (--_GDXGADAPTERALLOCATION@@QEAAPEAXI@Z.c)
 *     ??0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ @ 0x1C0023E40 (--0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C007A79C (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0082468 (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00EEED0 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ??0DXGALLOCATION@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C016EFDC (--0DXGALLOCATION@@QEAA@PEAVDXGDEVICE@@@Z.c)
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
  __int64 v11; // rcx
  int v13; // ebp
  struct _EX_RUNDOWN_REF *PoolWithQuotaTag; // rax
  __int64 v15; // rdx
  ADAPTER_RENDER *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // r12
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rcx
  struct DXGALLOCATION *v27; // rax
  DXGADAPTERALLOCATION_VGPU *v28; // rax
  struct DXGALLOCATION **v30; // rax
  int v31; // r9d
  __int64 v32; // rax
  DXGALLOCATION *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  DXGADAPTERALLOCATION_VGPU *v36; // rax
  __int64 v37; // rax
  struct DXGALLOCATION *v38; // rbx
  struct DXGALLOCATION *v39; // rdi
  DXGADAPTERALLOCATION *v40; // rcx
  char v41; // [rsp+78h] [rbp+10h]
  struct DXGALLOCATION **v43; // [rsp+90h] [rbp+28h]

  v6 = a4;
  v9 = 0;
  v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v10 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 144)) )
  {
    v32 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v32 + 24) = 2714LL;
    WdLogEvent5_WdAssertion(v32);
  }
  *a3 = 0LL;
  *a5 = 0LL;
  if ( v6 && (*((_DWORD *)v6 + 1) & 1) != 0 )
  {
    v41 = 1;
    v43 = *(struct DXGALLOCATION ***)(*((_QWORD *)v6 + 7) + 136LL);
  }
  else
  {
    v41 = 0;
    v43 = 0LL;
  }
  v13 = a2 - 1;
  if ( a2 - 1 >= 0 )
  {
    while ( 1 )
    {
      if ( *((_BYTE *)this + 1693) )
      {
        v33 = (DXGALLOCATION *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x88uLL);
        v18 = (__int64)v33;
        if ( !v33 )
          goto LABEL_42;
        DXGALLOCATION::DXGALLOCATION(v33, this);
        *(_DWORD *)(v18 + 72) |= 0x40000u;
        *(_DWORD *)(v18 + 96) = 0;
        *(_DWORD *)(v18 + 100) = 0;
        *(_QWORD *)(v18 + 104) = 0LL;
        *(_QWORD *)(v18 + 112) = 0LL;
        *(_QWORD *)(v18 + 120) = 0LL;
        *(_QWORD *)(v18 + 128) = 0LL;
      }
      else
      {
        PoolWithQuotaTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x60uLL, 0x4B677844u);
        v18 = (__int64)PoolWithQuotaTag;
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
      if ( !v18 )
        goto LABEL_42;
      v19 = *((_QWORD *)this + 5);
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v19 + 200, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v31 = *(_DWORD *)(v19 + 216);
          if ( v31 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v20, &EventBlockThread, v21, v31);
        }
        ExAcquirePushLockExclusiveEx(v19 + 200, 0LL);
      }
      *(_QWORD *)(v19 + 208) = KeGetCurrentThread();
      *(_DWORD *)(v18 + 16) = HMGRTABLE::AllocHandle((unsigned int *)(v19 + 224), v18, 5, 0, 0);
      DxgkReferenceDxgAllocation((struct DXGALLOCATION *)v18);
      *(_QWORD *)(v19 + 208) = 0LL;
      ExReleasePushLockExclusiveEx(v19 + 200, 0LL);
      KeLeaveCriticalRegion();
      if ( !*(_DWORD *)(v18 + 16) )
        break;
      v6 = a4;
      *(_QWORD *)(v18 + 40) = a4;
      if ( !*a5 )
        *a5 = (struct DXGALLOCATION *)v18;
      v25 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v25 + 160)
        && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v25 + 144)) )
      {
        v35 = WdLogNewEntry5_WdAssertion(v26);
        *(_QWORD *)(v35 + 24) = 7386LL;
        WdLogEvent5_WdAssertion(v35);
      }
      *(_QWORD *)(v18 + 56) = 0LL;
      v27 = *a3;
      *(_QWORD *)(v18 + 64) = *a3;
      if ( v27 )
        *((_QWORD *)v27 + 7) = v18;
      *a3 = (struct DXGALLOCATION *)v18;
      if ( v41 )
      {
        v30 = v43 - 6;
        v16 = v43[1];
        v43 = (struct DXGALLOCATION **)v16;
        *(_QWORD *)(v18 + 48) = v30;
      }
      else
      {
        if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 185LL) )
        {
          v36 = (DXGADAPTERALLOCATION_VGPU *)operator new(0x70uLL, 0x4B677844u, PagedPool);
          if ( !v36 )
          {
LABEL_42:
            v37 = WdLogNewEntry5_WdWarning(v16, v15, v17);
            *(_QWORD *)(v37 + 24) = this;
            *(_QWORD *)(v37 + 32) = -1073741801LL;
            WdLogEvent5_WdWarning(v37);
            goto LABEL_43;
          }
          v28 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v36);
        }
        else
        {
          v28 = (DXGADAPTERALLOCATION_VGPU *)operator new(0x40uLL, 0x4B677844u, PagedPool);
          if ( !v28 )
            goto LABEL_42;
          *((_DWORD *)v28 + 1) = 0;
          *((_QWORD *)v28 + 1) = 0LL;
          *((_QWORD *)v28 + 2) = 0LL;
          *((_QWORD *)v28 + 4) = 0LL;
          *((_DWORD *)v28 + 10) = 0;
          *((_QWORD *)v28 + 7) = 0LL;
          *((_QWORD *)v28 + 6) = 0LL;
        }
        if ( !v28 )
          goto LABEL_42;
        *(_QWORD *)(v18 + 48) = v28;
      }
LABEL_26:
      if ( --v13 < 0 )
      {
        if ( v9 < 0 )
        {
          v38 = *a3;
          while ( v38 )
          {
            v39 = v38;
            v38 = (struct DXGALLOCATION *)*((_QWORD *)v38 + 8);
            ADAPTER_RENDER::FreeAllocationHandleAndWaitForZeroReferences(v16, v39, 0LL);
            v40 = (DXGADAPTERALLOCATION *)*((_QWORD *)v39 + 6);
            if ( v40 && (!v6 || (*((_DWORD *)v6 + 1) & 1) == 0) )
              DXGADAPTERALLOCATION::`scalar deleting destructor'(v40);
            DXGALLOCATION::`scalar deleting destructor'(v39);
          }
          *a3 = 0LL;
        }
        return (unsigned int)v9;
      }
    }
    v34 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v34 + 24) = this;
    *(_QWORD *)(v34 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v34);
    DXGALLOCATION::`scalar deleting destructor'((DXGALLOCATION *)v18);
    v6 = a4;
LABEL_43:
    v9 = -1073741801;
    goto LABEL_26;
  }
  return (unsigned int)v9;
}
