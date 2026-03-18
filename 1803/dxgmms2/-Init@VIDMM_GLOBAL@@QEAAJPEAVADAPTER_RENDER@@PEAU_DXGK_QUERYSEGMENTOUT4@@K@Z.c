/*
 * XREFs of ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C007D5D0
 * Callers:
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z @ 0x1C007CF88 (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1C0002778 (--0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002BF0 (--3@YAXPEAX@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0003220 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1C0003850 (--0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     RtlStringCbPrintfW @ 0x1C0004C4C (RtlStringCbPrintfW.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0004F48 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0015DC8 (-EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C007D160 (-ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEA_K@Z @ 0x1C007DC38 (-InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNA.c)
 *     ?CreateWorkerThread@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C007E818 (-CreateWorkerThread@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?InitializeGpuVaState@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAVVIDMM_GLOBAL@@IPEBQEAVVIDMM_SEGMENT@@PEBUDXGADAPTER_GPUMMUCAPS@@PEBUDXGK_PHYSICALADAPTERINFO@@I@Z @ 0x1C00A0988 (-InitializeGpuVaState@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAVVIDMM_GLOBAL@@IPEBQEAVVIDMM_SEGMENT@@PEBU.c)
 *     ?CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00AAB60 (-CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C00AACD4 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Init(
        VIDMM_GLOBAL *this,
        struct ADAPTER_RENDER *a2,
        struct _DXGK_QUERYSEGMENTOUT4 *a3,
        unsigned int a4)
{
  __int64 v6; // rax
  unsigned int *v7; // rsi
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  bool v10; // cf
  SIZE_T v11; // rax
  char *v12; // rax
  __int64 v13; // rcx
  char *v14; // rbx
  unsigned int v15; // eax
  char v16; // cl
  char v17; // al
  int v18; // edx
  char v19; // dl
  unsigned int v20; // r13d
  __int64 v21; // r14
  __int64 v22; // rbx
  _DWORD *v23; // r13
  __int64 v24; // r15
  UINT *p_PagingBufferSize; // rsi
  __int64 v26; // r11
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  unsigned int v30; // eax
  __int64 v31; // rcx
  unsigned int v32; // r10d
  char *v33; // r9
  char v34; // cl
  bool v35; // cl
  int v36; // ebx
  HANDLE *v37; // r15
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rbx
  SIZE_T v41; // rax
  PVOID v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  wchar_t *v46; // r15
  unsigned int v47; // esi
  UCHAR **p_pSegmentDescriptor; // r13
  struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *v49; // rbx
  PPCW_INSTANCE *v50; // r14
  int inited; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  bool v58; // zf
  __int64 v59; // rdx
  __int64 v60; // rcx
  VIDMM_PARTITION *v61; // rax
  VIDMM_PARTITION *i; // rsi
  _QWORD *v63; // rax
  _QWORD *v64; // rdi
  __int64 result; // rax
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rcx
  VIDMM_PARTITION **v69; // rax
  VIDMM_PARTITION *v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rax
  SIZE_T v73; // rax
  PVOID v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  _QWORD *v78; // rcx
  unsigned __int64 v79; // rsi
  _QWORD *v80; // rax
  void (__fastcall ***v81)(_QWORD, __int64); // r8
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rbx
  __int64 v85; // rax
  SIZE_T v86; // rax
  _QWORD *v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  SIZE_T v91; // rax
  PVOID v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rsi
  unsigned int v96; // ecx
  __int64 v97; // r15
  __int64 v98; // rcx
  const struct DXGADAPTER_GPUMMUCAPS *v99; // rbx
  unsigned int *v100; // r14
  int v101; // eax
  __int64 v102; // rax
  VIDMM_PARTITION *v103; // rcx
  _QWORD *v104; // rax
  PPCW_DATA Data; // [rsp+28h] [rbp-A9h]
  struct DXGK_PHYSICALADAPTERINFO *v106; // [rsp+30h] [rbp-A1h]
  struct _PCW_DATA v107; // [rsp+48h] [rbp-89h] BYREF
  unsigned __int64 v108; // [rsp+58h] [rbp-79h] BYREF
  char v109[8]; // [rsp+60h] [rbp-71h] BYREF
  __int64 v110; // [rsp+68h] [rbp-69h]
  int v111; // [rsp+70h] [rbp-61h]
  char v112[8]; // [rsp+78h] [rbp-59h] BYREF
  __int64 v113; // [rsp+80h] [rbp-51h]
  int v114; // [rsp+88h] [rbp-49h]
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-41h] BYREF
  UNICODE_STRING Name; // [rsp+A0h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-21h] BYREF
  unsigned int v118; // [rsp+138h] [rbp+67h]

  v108 = 0LL;
  *((_QWORD *)this + 2) = a2;
  v6 = *((_QWORD *)a2 + 2);
  *((_QWORD *)this + 3) = v6;
  *((_DWORD *)this + 8) = a4;
  byte_1C0047468 |= (*(_DWORD *)(v6 + 300) & 0x200) != 0;
  v7 = (unsigned int *)*((_QWORD *)this + 3);
  if ( a4 >= 0x6000 )
    *((_BYTE *)this + 41449) |= 4u;
  v8 = v7[62];
  *((_DWORD *)this + 1748) = v8;
  if ( (unsigned int)v8 > 0x40 )
  {
    v71 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v71 + 24) = 64LL;
LABEL_72:
    WdLogEvent5_WdAssertion(v71);
    return 3221225485LL;
  }
  v9 = 1560 * v8;
  if ( !is_mul_ok(v8, 0x618uLL) )
    v9 = -1LL;
  v10 = __CFADD__(v9, 8LL);
  v11 = v9 + 8;
  if ( v10 )
    v11 = -1LL;
  v12 = (char *)operator new(v11, 0x30356956u, (__int64)a3, (POOL_TYPE)512);
  if ( v12 )
  {
    v14 = v12 + 8;
    *(_QWORD *)v12 = v8;
    `vector constructor iterator'(
      v12 + 8,
      1560LL,
      (unsigned int)v8,
      (void (__fastcall *)(char *))VIDMM_PHYSICAL_ADAPTER::VIDMM_PHYSICAL_ADAPTER);
  }
  else
  {
    v14 = 0LL;
  }
  *((_QWORD *)this + 5090) = v14;
  if ( !v14 )
  {
    _InterlockedIncrement(&dword_1C00475B8);
    v72 = WdLogNewEntry5_WdLowResource(v13);
    *(_QWORD *)(v72 + 24) = 1405LL;
    WdLogEvent5_WdLowResource(v72);
    return 3221225495LL;
  }
  v15 = v7[459];
  if ( (v15 & 0x20) != 0 )
  {
    *((_BYTE *)this + 41448) ^= (*((_BYTE *)this + 41448) ^ (v15 >> 5)) & 2;
    v16 = *((_BYTE *)this + 41448) ^ (*((_BYTE *)this + 41448) ^ (v7[459] >> 5)) & 4;
    *((_BYTE *)this + 41448) = v16;
    v17 = v16;
    if ( (v16 & 4) != 0 )
    {
      if ( (VIDMM_GLOBAL::_Config & 0x20) != 0
        || (v18 = *(_DWORD *)(*((_QWORD *)this + 3) + 300LL), (v18 & 4) != 0)
        || (v18 & 8) != 0 )
      {
        v19 = 0;
      }
      else
      {
        v19 = 8;
      }
      v17 = v19 | v16 & 0xF7;
      *((_BYTE *)this + 41448) = v17;
      v16 = v17;
    }
    if ( a4 >= 0x5017 || (v16 = v17, (VIDMM_GLOBAL::_Config & 0x100) != 0) )
      *((_BYTE *)this + 41448) = v16 | 0x80;
  }
  v20 = 0;
  v21 = 0LL;
  v118 = 0;
  *((_BYTE *)this + 4616) = (v7[458] & 0x20) == 0;
  if ( (_DWORD)v8 )
  {
    v107.Data = 0LL;
    v22 = 0LL;
    v23 = (_DWORD *)((char *)this + 372);
    v24 = 0LL;
    p_PagingBufferSize = &a3->PagingBufferSize;
    while ( 1 )
    {
      VIDMM_GLOBAL::ReadPhysicalAdapterConfiguration(this, v21);
      v26 = *(_QWORD *)(*((_QWORD *)this + 3) + 2360LL);
      v27 = *(_QWORD *)(*((_QWORD *)this + 2) + 1008LL);
      v28 = v27 ? v27 + 144 * v21 : 0LL;
      v29 = *((_QWORD *)this + 5090);
      *(_DWORD *)(v22 + v29 + 20) = v118;
      *(_DWORD *)(v22 + v29 + 24) = *(p_PagingBufferSize - 5);
      v30 = *(p_PagingBufferSize - 5);
      if ( v30 > 0x20 )
        break;
      v31 = *(p_PagingBufferSize - 1);
      if ( (unsigned int)v31 > v30 )
      {
        v71 = WdLogNewEntry5_WdAssertion(v31, v29);
        *(_QWORD *)(v71 + 24) = 1452LL;
        goto LABEL_72;
      }
      v32 = v30 + v118;
      v118 = v32;
      if ( v32 >= 0xFFFE )
      {
        v71 = WdLogNewEntry5_WdAssertion(v31, v29);
        *(_QWORD *)(v71 + 24) = 1459LL;
        goto LABEL_72;
      }
      v33 = (char *)v107.Data;
      *((_BYTE *)v107.Data + (unsigned __int64)this + 52) = v31;
      *(v23 - 64) = *p_PagingBufferSize;
      *v23 = p_PagingBufferSize[1];
      *(_BYTE *)(v22 + v29 + 436) ^= (*(_BYTE *)(v22 + v29 + 436) ^ (2 * *(_BYTE *)(v24 + v26 + 16))) & 2;
      v34 = *(_BYTE *)(v22 + v29 + 436) ^ (*(_BYTE *)(v22 + v29 + 436) ^ (*(_DWORD *)(v24 + v26 + 16) >> 1)) & 1;
      *(_BYTE *)(v22 + v29 + 436) = v34;
      if ( (v34 & 3) != 0 )
      {
        ++*(_DWORD *)(v22 + v29 + 24);
        *(_WORD *)(v22 + v29 + 28) = v32;
        v118 = v32 + 1;
      }
      else
      {
        *(_WORD *)(v22 + v29 + 28) = -1;
      }
      *(_DWORD *)(v22 + v29 + 16) = (1 << *(_DWORD *)(v22 + v29 + 24)) - 1;
      if ( v28 )
        *((_BYTE *)this + 40673) &= (*(_BYTE *)(v28 + 20) & 1) == 0;
      v21 = (unsigned int)(v21 + 1);
      ++v23;
      v107.Data = v33 + 1;
      v24 += 352LL;
      v22 += 1560LL;
      p_PagingBufferSize += 10;
      if ( (unsigned int)v21 >= (unsigned int)v8 )
      {
        v20 = v118;
        goto LABEL_32;
      }
    }
    v71 = WdLogNewEntry5_WdAssertion(v27, v29);
    *(_QWORD *)(v71 + 24) = 1447LL;
    goto LABEL_72;
  }
LABEL_32:
  if ( dword_1C00472F0 == 2 )
    v35 = (*(_DWORD *)(*((_QWORD *)this + 3) + 1820LL) & 4) != 0;
  else
    v35 = dword_1C00472F0 == 1;
  *((_BYTE *)this + 7672) = v35;
  *((_QWORD *)this + 5243) = qword_1C00473E0;
  v36 = dword_1C00472AC;
  if ( dword_1C00472AC )
  {
    v73 = 360LL * (unsigned int)dword_1C00472AC;
    if ( !is_mul_ok((unsigned int)dword_1C00472AC, 0x168uLL) )
      v73 = -1LL;
    v74 = operator new[](v73, 0x6D4D6956u, (POOL_TYPE)512);
    *((_QWORD *)this + 1050) = v74;
    if ( v74 )
    {
      *((_DWORD *)this + 2102) = 0;
      *((_DWORD *)this + 2103) = 0;
      *((_DWORD *)this + 2098) = v36;
    }
  }
  *((_QWORD *)this + 875) = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\PhysicalMemory");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  v37 = (HANDLE *)((char *)this + 7008);
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(v40) = ZwOpenSection((PHANDLE)this + 876, 0xF001Fu, &ObjectAttributes);
  if ( (int)v40 < 0 )
  {
    v75 = WdLogNewEntry5_WdAssertion(v39, v38);
    *(_QWORD *)(v75 + 24) = 1559LL;
    WdLogEvent5_WdAssertion(v75);
    goto LABEL_93;
  }
  v41 = 8LL * v20;
  if ( !is_mul_ok(v20, 8uLL) )
    v41 = -1LL;
  v42 = operator new[](v41, 0x36306956u, (POOL_TYPE)512);
  *((_QWORD *)this + 464) = v42;
  if ( !v42 )
  {
    _InterlockedIncrement(&dword_1C00475F0);
    v76 = WdLogNewEntry5_WdLowResource(v43);
    *(_QWORD *)(v76 + 24) = 1571LL;
    WdLogEvent5_WdLowResource(v76);
    LODWORD(v40) = -1073741801;
    goto LABEL_93;
  }
  v46 = (wchar_t *)operator new[](0x208uLL, 0x4B677844u, PagedPool);
  if ( !v46 )
  {
    v77 = WdLogNewEntry5_WdAssertion(v45, v44);
LABEL_91:
    WdLogEvent5_WdAssertion(v77);
    LODWORD(v40) = -1073741801;
    goto LABEL_92;
  }
  v47 = 0;
  if ( (_DWORD)v8 )
  {
    p_pSegmentDescriptor = &a3->pSegmentDescriptor;
    while ( 1 )
    {
      v49 = (struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *)*p_pSegmentDescriptor;
      v50 = (PPCW_INSTANCE *)(*((_QWORD *)this + 5090) + 1560LL * v47);
      memset(v50 + 62, 0, 0x30uLL);
      inited = VIDMM_GLOBAL::InitSegments(this, v47, (struct VIDMM_PHYSICAL_ADAPTER *)v50, v49, &v108);
      v40 = inited;
      if ( inited < 0 )
        break;
      LODWORD(v106) = v47;
      v54 = *((_QWORD *)a2 + 2);
      LODWORD(Data) = *(_DWORD *)(v54 + 268);
      LODWORD(v40) = RtlStringCbPrintfW(
                       v46,
                       0x208uLL,
                       L"luid_0x%08X_0x%08X_phys_%u",
                       *(unsigned int *)(v54 + 272),
                       Data);
      if ( (int)v40 < 0
        || (RtlInitUnicodeString(&Name, v46),
            v107.Data = v50,
            v107.Size = 1560,
            LODWORD(v40) = PcwCreateInstance(v50 + 194, GpuPerformanceCounterSetAdapterMemory, &Name, 1u, &v107),
            (int)v40 < 0) )
      {
        v82 = WdLogNewEntry5_WdAssertion(v56, v55);
        WdLogEvent5_WdAssertion(v82);
        goto LABEL_46;
      }
      ++v47;
      p_pSegmentDescriptor += 5;
      if ( v47 >= (unsigned int)v8 )
        goto LABEL_46;
    }
    v83 = WdLogNewEntry5_WdWarning(v53, v52);
    *(_QWORD *)(v83 + 24) = v40;
    WdLogEvent5_WdWarning(v83);
LABEL_46:
    v20 = v118;
  }
  operator delete(v46);
  if ( (int)v40 < 0 )
    goto LABEL_92;
  v10 = v108 + qword_1C0047168 < *(_QWORD *)(*((_QWORD *)this + 3) + 2384LL);
  *((_DWORD *)this + 926) = v20;
  v58 = (*((_BYTE *)this + 41448) & 2) == 0;
  *((_BYTE *)this + 40672) = v10;
  if ( v58 )
    goto LABEL_49;
  if ( dword_1C004733C )
  {
    v84 = (unsigned int)dword_1C004733C;
    v85 = 24LL * (unsigned int)dword_1C004733C;
    if ( !is_mul_ok((unsigned int)dword_1C004733C, 0x18uLL) )
      v85 = -1LL;
    v10 = __CFADD__(v85, 8LL);
    v86 = v85 + 8;
    if ( v10 )
      v86 = -1LL;
    v87 = operator new(v86, 0x32356956u, v57, PagedPool);
    if ( v87 )
      *v87++ = v84;
    *((_QWORD *)this + 5187) = v87;
    if ( !v87 )
    {
      v77 = WdLogNewEntry5_WdAssertion(v89, v88);
      *(_QWORD *)(v77 + 24) = 1652LL;
      goto LABEL_91;
    }
    v91 = 48LL * (unsigned int)dword_1C0047340;
    if ( !is_mul_ok((unsigned int)dword_1C0047340, 0x30uLL) )
      v91 = -1LL;
    v92 = operator new(v91, 0x32356956u, v90, PagedPool);
    *((_QWORD *)this + 5191) = v92;
    if ( !v92 )
    {
      v77 = WdLogNewEntry5_WdAssertion(v94, v93);
      *(_QWORD *)(v77 + 24) = 1659LL;
      goto LABEL_91;
    }
  }
  *((_DWORD *)this + 10361) = 0;
  v95 = 0LL;
  *((_BYTE *)this + 41448) &= 0xBEu;
  LOBYTE(v96) = 0;
  if ( !(_DWORD)v8 )
  {
LABEL_132:
    if ( a4 >= 0x5023 )
      v101 = dword_1C0047344;
    else
      v101 = 4096 << v96;
    *((_DWORD *)this + 10373) = v101;
    LODWORD(v40) = VIDMM_PAGING_PROCESS::CreateVaAllocator((VIDMM_GLOBAL *)((char *)this + 40896), this);
    if ( (int)v40 >= 0 )
    {
LABEL_49:
      LODWORD(v40) = VIDMM_GLOBAL::CreateWorkerThread(this);
      if ( (int)v40 < 0 )
      {
        v102 = WdLogNewEntry5_WdAssertion(v60, v59);
        *(_QWORD *)(v102 + 24) = 1727LL;
        WdLogEvent5_WdAssertion(v102);
      }
      else
      {
        DXGAUTOEXPUSHLOCKSHARED::DXGAUTOEXPUSHLOCKSHARED(
          (DXGAUTOEXPUSHLOCKSHARED *)v109,
          (struct _EX_PUSH_LOCK *const)&VIDMM_PARTITION::_PartitionLock);
        v61 = (VIDMM_PARTITION *)VIDMM_PARTITION::_PartitionTree;
        i = 0LL;
        while ( v61 )
        {
          i = v61;
          v61 = *(VIDMM_PARTITION **)v61;
        }
        while ( 1 )
        {
          if ( !i )
          {
            if ( v111 == 1 )
            {
              ExReleasePushLockSharedEx(v110, 0LL);
            }
            else if ( v111 == 2 )
            {
              ExReleasePushLockExclusiveEx(v110, 0LL);
            }
            *((_QWORD *)this + 1054) = MEMORY[0xFFFFF78000000014];
            *((_QWORD *)this + 1055) = MEMORY[0xFFFFF78000000014];
            DXGAUTOEXPUSHLOCKEXCLUSIVE::DXGAUTOEXPUSHLOCKEXCLUSIVE(
              (DXGAUTOEXPUSHLOCKEXCLUSIVE *)v112,
              (struct _EX_PUSH_LOCK *const)&VIDMM_GLOBAL::_AdapterListLock);
            v63 = (_QWORD *)qword_1C0047750;
            v64 = (_QWORD *)((char *)this + 42032);
            if ( *(struct _LIST_ENTRY **)qword_1C0047750 != &VIDMM_GLOBAL::_AdapterListHead )
              __fastfail(3u);
            v58 = v114 == 1;
            *v64 = &VIDMM_GLOBAL::_AdapterListHead;
            v64[1] = v63;
            *v63 = v64;
            qword_1C0047750 = (__int64)v64;
            if ( v58 )
            {
              ExReleasePushLockSharedEx(v113, 0LL);
            }
            else if ( v114 == 2 )
            {
              ExReleasePushLockExclusiveEx(v113, 0LL);
            }
            return (unsigned int)v40;
          }
          v66 = VIDMM_PARTITION::EnsureAdapter(i, this);
          v40 = v66;
          if ( v66 < 0 )
            break;
          v69 = (VIDMM_PARTITION **)*((_QWORD *)i + 1);
          v70 = i;
          if ( v69 )
          {
            v103 = *v69;
            for ( i = (VIDMM_PARTITION *)*((_QWORD *)i + 1); v103; v103 = *(VIDMM_PARTITION **)v103 )
              i = v103;
          }
          else
          {
            while ( 1 )
            {
              i = (VIDMM_PARTITION *)(*((_QWORD *)i + 2) & 0xFFFFFFFFFFFFFFFCuLL);
              if ( !i || *(VIDMM_PARTITION **)i == v70 )
                break;
              v70 = i;
            }
          }
        }
        v104 = (_QWORD *)WdLogNewEntry5_WdAssertion(v68, v67);
        v104[3] = this;
        v104[4] = i;
        v104[5] = v40;
        WdLogEvent5_WdAssertion(v104);
        if ( v111 == 1 )
        {
          ExReleasePushLockSharedEx(v110, 0LL);
        }
        else if ( v111 == 2 )
        {
          ExReleasePushLockExclusiveEx(v110, 0LL);
        }
      }
    }
LABEL_92:
    v37 = (HANDLE *)((char *)this + 7008);
LABEL_93:
    v78 = (_QWORD *)*((_QWORD *)this + 464);
    if ( v78 )
    {
      v79 = 0LL;
      if ( v20 )
      {
        v80 = (_QWORD *)*((_QWORD *)this + 464);
        do
        {
          v81 = (void (__fastcall ***)(_QWORD, __int64))v78[v79];
          if ( v81 )
          {
            (**v81)(v78[v79], 1LL);
            v78 = (_QWORD *)*((_QWORD *)this + 464);
            v80 = v78;
          }
          ++v79;
        }
        while ( v79 < v20 );
        v78 = v80;
      }
      operator delete(v78);
      *((_QWORD *)this + 464) = 0LL;
    }
    VIDMM_PAGING_PROCESS::DestroyPagingProcess((VIDMM_GLOBAL *)((char *)this + 40896));
    if ( *v37 )
    {
      ZwClose(*v37);
      *v37 = 0LL;
    }
    operator delete(*((void **)this + 875));
    *((_QWORD *)this + 875) = 0LL;
    return (unsigned int)v40;
  }
  v97 = 0LL;
  while ( 1 )
  {
    v98 = *(_QWORD *)(*((_QWORD *)this + 2) + 1008LL);
    v99 = v98 ? (const struct DXGADAPTER_GPUMMUCAPS *)(v98 + 144 * v95) : 0LL;
    v100 = (unsigned int *)(v97 + *((_QWORD *)this + 5090));
    result = VIDMM_PHYSICAL_ADAPTER::InitializeGpuVaState(
               (VIDMM_PHYSICAL_ADAPTER *)v100,
               this,
               v95,
               (struct VIDMM_SEGMENT *const *)(*((_QWORD *)this + 464) + 8LL * v100[5]),
               v99,
               v106,
               v100[6]);
    if ( (int)result < 0 )
      return result;
    v96 = v100[17];
    if ( v96 <= *((_DWORD *)this + 10361) )
      LOBYTE(v96) = *((_DWORD *)this + 10361);
    else
      *((_DWORD *)this + 10361) = v96;
    if ( v100[107] == 1 )
      *((_BYTE *)this + 41448) |= 0x40u;
    if ( (*(_DWORD *)v99 & 0x40) != 0 )
      *((_BYTE *)this + 41448) |= 1u;
    v95 = (unsigned int)(v95 + 1);
    v97 += 1560LL;
    if ( (unsigned int)v95 >= (unsigned int)v8 )
      goto LABEL_132;
  }
}
