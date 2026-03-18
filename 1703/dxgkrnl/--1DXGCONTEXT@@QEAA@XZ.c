/*
 * XREFs of ??1DXGCONTEXT@@QEAA@XZ @ 0x1C00BC120
 * Callers:
 *     ??_GDXGCONTEXT@@QEAAPEAXI@Z @ 0x1C0020380 (--_GDXGCONTEXT@@QEAAPEAXI@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C1E20 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006F28 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?VidMmFreeDeferredDmaBufferMapping@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C0025D14 (-VidMmFreeDeferredDmaBufferMapping@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ??1DXGPRESENT@@QEAA@XZ @ 0x1C009184C (--1DXGPRESENT@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00CA174 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00D7240 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C017ED14 (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 */

void __fastcall DXGCONTEXT::~DXGCONTEXT(DXGCONTEXT *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  void *v13; // rcx
  void *v14; // rcx
  struct _VIDMM_DMA_BUFFER *v15; // rdx
  void *v16; // rcx
  unsigned int v17; // ebp
  _QWORD *v18; // rbx
  DXGDEVICE *v19; // rbp
  void *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  struct DXGPROCESS *Current; // r14
  __int64 v30; // rax
  unsigned int v31; // r9d
  unsigned int v32; // edx
  __int64 v33; // r10
  int v34; // r8d
  struct DXGRESOURCE *v35; // rbx
  __int64 v36; // rax
  int v37; // edx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  _BYTE v44[32]; // [rsp+30h] [rbp-38h] BYREF

  v2 = (_QWORD *)WdLogNewEntry5_WdEvent(this);
  v2[3] = this;
  v2[4] = *((unsigned int *)this + 6);
  v2[5] = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  WdLogEvent5_WdEvent(v2);
  v3 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v3 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v3 + 104)) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v21 + 24) = 557LL;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v22 + 24) = 558LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !*((_BYTE *)this + 364) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v23 + 24) = 564LL;
    WdLogEvent5_WdAssertion(v23);
  }
  v12 = *((_QWORD *)this + 19);
  if ( v12 )
  {
    v19 = (DXGDEVICE *)*((_QWORD *)this + 2);
    if ( !v19 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
      *(_QWORD *)(v24 + 24) = 8040LL;
      WdLogEvent5_WdAssertion(v24);
    }
    if ( *(_DWORD *)(v12 + 420) )
    {
      Current = DXGPROCESS::GetCurrent();
      if ( !Current )
      {
        v30 = WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
        *(_QWORD *)(v30 + 24) = 8050LL;
        WdLogEvent5_WdAssertion(v30);
      }
      DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v44, Current, v27, v28);
      v31 = *(_DWORD *)(v12 + 420);
      v32 = (v31 >> 6) & 0xFFFFFF;
      if ( v32 < *((_DWORD *)Current + 52)
        && (v33 = *((_QWORD *)Current + 24),
            v34 = *(_DWORD *)(v33 + 16LL * v32 + 8),
            ((v31 >> 26) & 0x30) == (*(_BYTE *)(v33 + 16LL * v32 + 8) & 0x30))
        && (v34 & 0x1000) == 0
        && (v34 & 0xF) != 0
        && (*(_BYTE *)(v33 + 16LL * v32 + 8) & 0xF) == 4 )
      {
        v35 = *(struct DXGRESOURCE **)(v33 + 16LL * v32);
        if ( v35 )
        {
          v36 = (v31 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v36 < *((_DWORD *)Current + 52) )
          {
            v37 = *(_DWORD *)(v33 + 16 * v36 + 8);
            if ( ((v31 >> 26) & 0x30) == (*(_BYTE *)(v33 + 16 * v36 + 8) & 0x30)
              && (v37 & 0x1000) == 0
              && (v37 & 0xF) != 0 )
            {
              *(_DWORD *)(v33 + 16LL * ((v31 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
            }
          }
        }
      }
      else
      {
        v35 = 0LL;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v44);
      if ( v35 )
      {
        if ( *((_DWORD *)v19 + 102) == 4 )
          DXGDEVICE::DestroyClientResource(v19, v35);
        else
          DXGDEVICE::DestroyAllocationInternal(v19, 0, 0LL, v35, 0LL, DXGDEVICE::DestroyFlagsDefault);
      }
      else
      {
        v40 = WdLogNewEntry5_WdError(v39, v38);
        *(_QWORD *)(v40 + 24) = v19;
        *(_QWORD *)(v40 + 32) = *(unsigned int *)(v12 + 420);
        WdLogEvent5_WdError(v40);
      }
      *(_QWORD *)(v12 + 416) = 0LL;
    }
    v20 = (void *)*((_QWORD *)this + 19);
    if ( v20 )
    {
      DXGPRESENT::~DXGPRESENT(*((DXGPRESENT **)this + 19));
      ExFreePoolWithTag(v20, 0);
    }
    *((_QWORD *)this + 19) = 0LL;
  }
  v13 = (void *)*((_QWORD *)this + 17);
  if ( v13 )
  {
    MmUnsecureVirtualMemory(v13);
    *((_QWORD *)this + 17) = 0LL;
  }
  if ( *((_QWORD *)this + 16) )
  {
    if ( !*((_QWORD *)this + 15) )
    {
      v41 = WdLogNewEntry5_WdAssertion(v13, v8, v10, v11);
      *(_QWORD *)(v41 + 24) = 598LL;
      WdLogEvent5_WdAssertion(v41);
    }
    ExFreePoolWithTag(*((PVOID *)this + 16), 0);
    *((_QWORD *)this + 16) = 0LL;
  }
  if ( *((_QWORD *)this + 15) )
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 15, (PSIZE_T)this + 14, 0x8000u);
    *((_QWORD *)this + 15) = 0LL;
    *((_DWORD *)this + 26) = 0;
    *((_QWORD *)this + 14) = 0LL;
  }
  v14 = (void *)*((_QWORD *)this + 12);
  if ( v14 )
  {
    MmUnsecureVirtualMemory(v14);
    *((_QWORD *)this + 12) = 0LL;
  }
  if ( *((_QWORD *)this + 11) )
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 11, (PSIZE_T)this + 10, 0x8000u);
    *((_QWORD *)this + 11) = 0LL;
    *((_DWORD *)this + 18) = 0;
    *((_QWORD *)this + 10) = 0LL;
  }
  if ( *((_QWORD *)this + 37) )
  {
    v42 = WdLogNewEntry5_WdAssertion(v14, v8, v10, v11);
    *(_QWORD *)(v42 + 24) = 640LL;
    WdLogEvent5_WdAssertion(v42);
  }
  v15 = (struct _VIDMM_DMA_BUFFER *)*((_QWORD *)this + 41);
  if ( v15 )
  {
    VIDMM_EXPORT::VidMmFreeDeferredDmaBufferMapping(
      *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL),
      v15);
    *((_QWORD *)this + 41) = 0LL;
  }
  v16 = (void *)*((_QWORD *)this + 8);
  if ( v16 )
  {
    ExFreePoolWithTag(v16, 0);
    *((_QWORD *)this + 8) = 0LL;
  }
  if ( *((_QWORD *)this + 7) )
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 7, (PSIZE_T)this + 6, 0x8000u);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  if ( *((DXGCONTEXT **)this + 35) != (DXGCONTEXT *)((char *)this + 280) )
  {
    v43 = WdLogNewEntry5_WdAssertion(v16, v15, v10, v11);
    *(_QWORD *)(v43 + 24) = 663LL;
    WdLogEvent5_WdAssertion(v43);
  }
  v17 = *((_DWORD *)this + 6);
  if ( v17 )
  {
    v18 = *(_QWORD **)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v18 + 21));
    HMGRTABLE::FreeHandle((HMGRTABLE *)(v18 + 24), v17);
    v18[22] = 0LL;
    ExReleasePushLockExclusiveEx(v18 + 21, 0LL);
    KeLeaveCriticalRegion();
    *((_DWORD *)this + 6) = 0;
  }
  *((_QWORD *)this + 2) = 0LL;
}
