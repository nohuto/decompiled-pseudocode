/*
 * XREFs of ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0065CE0
 * Callers:
 *     ?VidMmCreateContextAllocation@@YAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@PEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0013930 (-VidMmCreateContextAllocation@@YAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@PEAVDX.c)
 * Callees:
 *     memset @ 0x1C0018400 (memset.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0052448 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0054380 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0060310 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0061B40 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00622B0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0062D60 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00632F0 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     VidSchInsertContextAllocation @ 0x1C0072CCC (VidSchInsertContextAllocation.c)
 *     VidSchRemoveContextAllocation @ 0x1C0072DC8 (VidSchRemoveContextAllocation.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreateContextAllocation(
        VIDMM_GLOBAL *this,
        __int64 a2,
        unsigned int a3,
        struct DXGDEVICE *a4,
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
  int v14; // r13d
  unsigned int v15; // r11d
  int v16; // ebx
  struct _VIDMM_GLOBAL_ALLOC *v18; // r15
  struct _KEVENT *v19; // r14
  void *v20; // rsi
  struct VIDMM_DEVICE *v21; // r10
  int v22; // esi
  char v23; // r8
  char v24; // dl
  bool v25; // zf
  int v26; // ecx
  int OneAllocation; // eax
  int inserted; // edi
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct VIDMM_VAD **VirtualAddressAllocator; // rax
  unsigned int v33; // r8d
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  struct VIDMM_ALLOC *v44; // [rsp+A0h] [rbp-80h] BYREF
  struct _VIDMM_GLOBAL_ALLOC *v45; // [rsp+A8h] [rbp-78h] BYREF
  struct VIDMM_DEVICE *v46; // [rsp+B0h] [rbp-70h]
  _QWORD v47[16]; // [rsp+C0h] [rbp-60h] BYREF
  unsigned int v48; // [rsp+160h] [rbp+40h]
  void *v49; // [rsp+168h] [rbp+48h] BYREF

  v48 = a3;
  v14 = (int)a4;
  v45 = 0LL;
  v15 = a3;
  v44 = 0LL;
  v16 = a2;
  v49 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  if ( a4 )
    v21 = (struct VIDMM_DEVICE *)*((_QWORD *)a4 + 74);
  else
    v21 = 0LL;
  v46 = v21;
  if ( !a4 || *(_BYTE *)(*((_QWORD *)a4 + 5) + 305LL) )
  {
    v43 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v43 + 24) = 1961LL;
    WdLogEvent5_WdAssertion(v43);
    inserted = -1073741811;
LABEL_31:
    if ( v20 )
      VidSchRemoveContextAllocation(v20);
    goto LABEL_33;
  }
  v22 = (int)a5;
  v23 = a2 & 1;
  if ( (a2 & 1) == 0 )
  {
    if ( a5 )
      goto LABEL_7;
    v40 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v40 + 24) = 1968LL;
LABEL_21:
    WdLogEvent5_WdAssertion(v40);
    inserted = -1073741811;
LABEL_37:
    *a14 = 0LL;
    return (unsigned int)inserted;
  }
  if ( a5 )
  {
    v40 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v40 + 24) = 1975LL;
    goto LABEL_21;
  }
LABEL_7:
  if ( (a2 & 1) == 0 )
  {
    v24 = -1;
    v25 = !_BitScanForward((unsigned int *)&v26, *((_DWORD *)a5 + 89));
    a4 = a5;
    if ( !v25 )
      v24 = v26;
    v15 = v24;
    v48 = v24;
  }
  OneAllocation = VIDMM_GLOBAL::CreateOneAllocation(
                    this,
                    v21,
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
                    v23,
                    a4,
                    0,
                    0LL,
                    (struct _D3DDDI_SEGMENTPREFERENCE **)&v45);
  v18 = v45;
  inserted = OneAllocation;
  if ( OneAllocation < 0 )
    goto LABEL_35;
  v29 = VIDMM_GLOBAL::OpenOneAllocation(
          this,
          (struct VIDMM_PROCESS **)v46,
          v45,
          0LL,
          0,
          0LL,
          &v44,
          (unsigned __int8 *)&a12);
  v19 = (struct _KEVENT *)v44;
  inserted = v29;
  if ( v29 < 0 )
  {
LABEL_33:
    if ( v19 )
      VIDMM_GLOBAL::CloseOneAllocation(this, v19, 0LL, 0, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1, 0LL);
LABEL_35:
    if ( v18 )
      VIDMM_GLOBAL::DestroyOneAllocation((struct _KTHREAD **)this, v46, v18, 1);
    goto LABEL_37;
  }
  inserted = VidSchInsertContextAllocation(
               *(_QWORD *)(*((_QWORD *)this + 2) + 512LL),
               v14,
               v22,
               (_DWORD)v44,
               (__int64)&v49);
  if ( inserted < 0 )
  {
    v41 = WdLogNewEntry5_WdAssertion(v31, v30);
    goto LABEL_26;
  }
  if ( (v16 & 2) != 0 )
  {
    VirtualAddressAllocator = (struct VIDMM_VAD **)VIDMM_PROCESS::GetVirtualAddressAllocator(
                                                     *(VIDMM_PROCESS **)(*(_QWORD *)&v19->Header.Lock + 8LL),
                                                     *(_DWORD *)(*((_QWORD *)this + 3) + 200LL),
                                                     v48);
    if ( !CVirtualAddressAllocator::MapVirtualAddressRange(
            VirtualAddressAllocator,
            (__int64)v19,
            0LL,
            1,
            *((_QWORD *)v18 + 2),
            0LL,
            0LL,
            0LL,
            *((_DWORD *)v18 + 8),
            17LL,
            0LL,
            v33,
            0LL) )
    {
      v41 = WdLogNewEntry5_WdAssertion(v35, v34);
      *(_QWORD *)(v41 + 32) = 2073LL;
      goto LABEL_26;
    }
  }
  memset(v47, 0, 0x50uLL);
  v36 = *((_DWORD *)v18 + 19) & 0x3F;
  v47[2] = v19;
  LODWORD(v47[0]) = 209;
  LODWORD(v47[4]) = v16;
  inserted = VIDMM_GLOBAL::QueueDeferredCommand(
               this,
               (struct VIDMM_PAGING_QUEUE *)&v19->Header.WaitListHead.Flink[4].Blink[10 * v36],
               (struct _VIDMM_DEFERRED_COMMAND *)v47,
               1,
               0LL);
  if ( inserted < 0 )
  {
    if ( inserted == -1071775232 )
    {
      v42 = WdLogNewEntry5_WdWarning(v38);
      v20 = v49;
      *(_QWORD *)(v42 + 24) = v49;
      *(_QWORD *)(v42 + 32) = 2088LL;
      WdLogEvent5_WdWarning(v42);
      goto LABEL_31;
    }
    v41 = WdLogNewEntry5_WdAssertion(v38, v37);
    *(_QWORD *)(v41 + 32) = 2092LL;
LABEL_26:
    v20 = v49;
    *(_QWORD *)(v41 + 24) = v49;
    WdLogEvent5_WdAssertion(v41);
    goto LABEL_31;
  }
  *a14 = (struct _VIDMM_CONTEXT_ALLOC *)v49;
  return (unsigned int)inserted;
}
