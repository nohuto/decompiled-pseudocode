/*
 * XREFs of ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C006A144
 * Callers:
 *     ?VidMmCreateContextAllocation@@YAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@PEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0003A40 (-VidMmCreateContextAllocation@@YAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@PEAVDX.c)
 * Callees:
 *     memset @ 0x1C0017DC0 (memset.c)
 *     VidSchRemoveContextAllocation @ 0x1C00554B4 (VidSchRemoveContextAllocation.c)
 *     VidSchInsertContextAllocation @ 0x1C0056648 (VidSchInsertContextAllocation.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C005A980 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00649C0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0065EE0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00665C0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0067090 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0067620 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0074864 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreateContextAllocation(
        struct _KTHREAD **this,
        __int64 a2,
        unsigned int a3,
        struct VIDMM_DEVICE **a4,
        struct DXGCONTEXT *a5,
        void *a6,
        unsigned __int64 a7,
        struct DXGALLOCATION *a8,
        unsigned int a9,
        unsigned int a10,
        struct _D3DDDI_SEGMENTPREFERENCE a11,
        struct _DXGK_SEGMENTBANKPREFERENCE a12,
        struct _DXGK_ALLOCATIONINFOFLAGS a13,
        struct _VIDMM_CONTEXT_ALLOC **a14)
{
  struct DXGDEVICE *v14; // r12
  unsigned int v15; // r11d
  int v16; // edi
  struct _VIDMM_GLOBAL_ALLOC *v17; // r13
  struct VIDMM_ALLOC *v18; // r15
  _QWORD *v19; // r14
  struct VIDMM_DEVICE *v20; // r10
  struct DXGCONTEXT *v21; // r14
  char v22; // r8
  char v23; // dl
  bool v24; // zf
  int v25; // ecx
  struct _KTHREAD **v26; // r15
  int OneAllocation; // esi
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct VIDMM_VAD **VirtualAddressAllocator; // rax
  unsigned int v31; // r8d
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  struct _KEVENT *v42; // rdx
  struct VIDMM_ALLOC *v43; // [rsp+A0h] [rbp-80h] BYREF
  struct _VIDMM_GLOBAL_ALLOC *v44; // [rsp+A8h] [rbp-78h] BYREF
  struct VIDMM_DEVICE *v45; // [rsp+B0h] [rbp-70h]
  _QWORD v46[16]; // [rsp+C0h] [rbp-60h] BYREF
  unsigned int v48; // [rsp+160h] [rbp+40h]
  void *v49; // [rsp+168h] [rbp+48h] BYREF

  v48 = a3;
  v14 = (struct DXGDEVICE *)a4;
  v44 = 0LL;
  v15 = a3;
  v43 = 0LL;
  v16 = a2;
  v49 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  if ( a4 )
    v20 = a4[76];
  else
    v20 = 0LL;
  v45 = v20;
  if ( !a4 || *((_BYTE *)a4[5] + 321) )
  {
    v41 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v41 + 24) = 1984LL;
    WdLogEvent5_WdAssertion(v41);
    OneAllocation = -1073741811;
LABEL_32:
    if ( v19 )
      VidSchRemoveContextAllocation(v19);
    goto LABEL_34;
  }
  v21 = a5;
  v22 = a2 & 1;
  if ( (a2 & 1) != 0 )
  {
    if ( !a5 )
      goto LABEL_10;
    v38 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v38 + 24) = 1998LL;
LABEL_20:
    WdLogEvent5_WdAssertion(v38);
    OneAllocation = -1073741811;
LABEL_39:
    *a14 = 0LL;
    return (unsigned int)OneAllocation;
  }
  if ( !a5 )
  {
    v38 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v38 + 24) = 1991LL;
    goto LABEL_20;
  }
  v23 = -1;
  v24 = !_BitScanForward((unsigned int *)&v25, *((_DWORD *)a5 + 89));
  a4 = (struct VIDMM_DEVICE **)a5;
  if ( !v24 )
    v23 = v25;
  v15 = v23;
  v48 = v23;
LABEL_10:
  v26 = this;
  OneAllocation = VIDMM_GLOBAL::CreateOneAllocation(
                    (VIDMM_GLOBAL *)this,
                    v20,
                    v15,
                    a7,
                    a7,
                    (unsigned int)a8,
                    a9,
                    a10,
                    a11,
                    a13,
                    0LL,
                    0LL,
                    a6,
                    0xA0000000,
                    v22,
                    a4,
                    0,
                    0LL,
                    (struct _D3DDDI_SEGMENTPREFERENCE **)&v44);
  if ( OneAllocation < 0 )
  {
    v17 = v44;
    goto LABEL_37;
  }
  v17 = v44;
  OneAllocation = VIDMM_GLOBAL::OpenOneAllocation(
                    this,
                    (struct VIDMM_PROCESS **)v45,
                    v44,
                    0LL,
                    0,
                    0LL,
                    &v43,
                    (unsigned __int8 *)&a12);
  if ( OneAllocation < 0 )
  {
    v18 = v43;
LABEL_34:
    if ( v18 )
    {
      v42 = (struct _KEVENT *)v18;
      v26 = this;
      VIDMM_GLOBAL::CloseOneAllocation(
        (VIDMM_GLOBAL *)this,
        v42,
        0LL,
        0,
        (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1,
        0LL);
    }
    else
    {
      v26 = this;
    }
LABEL_37:
    if ( v17 )
      VIDMM_GLOBAL::DestroyOneAllocation(v26, v45, v17, 1);
    goto LABEL_39;
  }
  v18 = v43;
  OneAllocation = VidSchInsertContextAllocation(
                    *((_QWORD *)this[2] + 66),
                    (__int64)v14,
                    (__int64)v21,
                    (__int64)v43,
                    &v49);
  if ( OneAllocation < 0 )
  {
    v39 = WdLogNewEntry5_WdAssertion(v29, v28);
    goto LABEL_25;
  }
  if ( (v16 & 2) != 0 )
  {
    VirtualAddressAllocator = (struct VIDMM_VAD **)VIDMM_PROCESS::GetVirtualAddressAllocator(
                                                     *(VIDMM_PROCESS **)(*(_QWORD *)v18 + 8LL),
                                                     *((_DWORD *)this[3] + 50),
                                                     v48);
    if ( !CVirtualAddressAllocator::MapVirtualAddressRange(
            VirtualAddressAllocator,
            (__int64)v18,
            0LL,
            1,
            *((_QWORD *)v17 + 2),
            0LL,
            0LL,
            0LL,
            *((_DWORD *)v17 + 8),
            17LL,
            0LL,
            v31,
            0LL) )
    {
      v39 = WdLogNewEntry5_WdAssertion(v33, v32);
      *(_QWORD *)(v39 + 32) = 2096LL;
      goto LABEL_25;
    }
  }
  memset(v46, 0, 0x50uLL);
  v34 = *((_DWORD *)v17 + 19);
  v46[2] = v18;
  LODWORD(v46[0]) = 209;
  LODWORD(v46[4]) = v16;
  OneAllocation = VIDMM_GLOBAL::QueueDeferredCommand(
                    (VIDMM_GLOBAL *)this,
                    (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*((_QWORD *)v18 + 1) + 72LL) + 160LL * (v34 & 0x3F)),
                    (struct _VIDMM_DEFERRED_COMMAND *)v46,
                    1,
                    0LL);
  if ( OneAllocation < 0 )
  {
    if ( OneAllocation == -1071775232 )
    {
      v40 = WdLogNewEntry5_WdWarning(v36, v35);
      v19 = v49;
      *(_QWORD *)(v40 + 24) = v49;
      *(_QWORD *)(v40 + 32) = 2111LL;
      WdLogEvent5_WdWarning(v40);
      goto LABEL_32;
    }
    v39 = WdLogNewEntry5_WdAssertion(v36, v35);
    *(_QWORD *)(v39 + 32) = 2115LL;
LABEL_25:
    v19 = v49;
    *(_QWORD *)(v39 + 24) = v49;
    WdLogEvent5_WdAssertion(v39);
    goto LABEL_32;
  }
  *a14 = (struct _VIDMM_CONTEXT_ALLOC *)v49;
  return (unsigned int)OneAllocation;
}
