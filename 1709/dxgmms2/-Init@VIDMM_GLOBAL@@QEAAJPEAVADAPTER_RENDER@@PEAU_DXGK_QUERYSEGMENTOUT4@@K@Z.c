/*
 * XREFs of ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C0079DD8
 * Callers:
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z @ 0x1C007CA88 (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0001AE0 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C000E614 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     RtlStringCbPrintfW @ 0x1C000EF90 (RtlStringCbPrintfW.c)
 *     ??0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1C0013804 (--0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0016298 (-EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ??0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1C0016694 (--0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEA_K@Z @ 0x1C007A540 (-InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNA.c)
 *     ?ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C007B1F4 (-ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?CreateWorkerThread@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C007B40C (-CreateWorkerThread@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C007C948 (-CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?InitializeGpuVaState@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAVVIDMM_GLOBAL@@IPEBQEAVVIDMM_SEGMENT@@PEBUDXGADAPTER_GPUMMUCAPS@@PEBUDXGK_PHYSICALADAPTERINFO@@I@Z @ 0x1C007CF24 (-InitializeGpuVaState@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAVVIDMM_GLOBAL@@IPEBQEAVVIDMM_SEGMENT@@PEBU.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C00A3B40 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Init(
        VIDMM_GLOBAL *this,
        struct ADAPTER_RENDER *a2,
        struct _DXGK_QUERYSEGMENTOUT4 *a3,
        unsigned int a4)
{
  __int64 v6; // rax
  unsigned int *v7; // rsi
  unsigned __int64 v8; // r15
  __int64 v9; // rax
  bool v10; // cf
  SIZE_T v11; // rax
  char *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  char *v15; // rbx
  unsigned int v16; // eax
  char v17; // cl
  int v18; // edx
  char v19; // al
  __int64 v20; // r12
  __int64 v21; // r14
  _DWORD *v22; // r13
  __int64 v23; // rbx
  UINT *p_PagingBufferSegmentId; // rsi
  __int64 v25; // r11
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  unsigned int v29; // eax
  unsigned int v30; // r9d
  char *v31; // r10
  char v32; // cl
  int v33; // ebx
  HANDLE *v34; // r13
  __int64 v35; // rdx
  __int64 v36; // rcx
  UCHAR *v37; // rbx
  SIZE_T v38; // rax
  PVOID v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  wchar_t *v44; // r14
  unsigned int v45; // esi
  UCHAR **p_pSegmentDescriptor; // r12
  PPCW_INSTANCE *v47; // r13
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  bool v52; // zf
  __int64 v53; // rdx
  __int64 v54; // rcx
  VIDMM_PARTITION *v55; // rax
  VIDMM_PARTITION *v56; // rsi
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  VIDMM_PARTITION *v60; // rax
  VIDMM_PARTITION *v61; // rcx
  _QWORD *v62; // rax
  _QWORD *v63; // rdi
  __int64 result; // rax
  __int64 v65; // rbx
  __int64 v66; // r14
  __int64 v67; // rcx
  const struct DXGADAPTER_GPUMMUCAPS *v68; // rdx
  unsigned int *v69; // rsi
  unsigned int v70; // eax
  int v71; // eax
  __int64 v72; // rax
  __int64 v73; // rax
  SIZE_T v74; // rax
  PVOID v75; // rax
  __int64 v76; // rax
  unsigned __int64 i; // rsi
  void (__fastcall ***v78)(_QWORD, __int64); // rcx
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rbx
  __int64 v83; // rax
  SIZE_T v84; // rax
  _QWORD *v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  SIZE_T v89; // rax
  PVOID v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  _QWORD *v93; // rax
  PPCW_DATA Data; // [rsp+28h] [rbp-A9h]
  struct DXGK_PHYSICALADAPTERINFO *v95; // [rsp+30h] [rbp-A1h]
  struct _PCW_DATA v96; // [rsp+48h] [rbp-89h] BYREF
  unsigned __int64 v97; // [rsp+58h] [rbp-79h] BYREF
  char v98[8]; // [rsp+60h] [rbp-71h] BYREF
  __int64 v99; // [rsp+68h] [rbp-69h]
  int v100; // [rsp+70h] [rbp-61h]
  char v101[8]; // [rsp+78h] [rbp-59h] BYREF
  __int64 v102; // [rsp+80h] [rbp-51h]
  int v103; // [rsp+88h] [rbp-49h]
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-41h] BYREF
  UNICODE_STRING Name; // [rsp+A0h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-21h] BYREF
  unsigned int v107; // [rsp+138h] [rbp+67h]

  v97 = 0LL;
  *((_QWORD *)this + 2) = a2;
  v6 = *((_QWORD *)a2 + 2);
  *((_DWORD *)this + 8) = a4;
  *((_QWORD *)this + 3) = v6;
  byte_1C0040468 |= (*(_DWORD *)(v6 + 300) & 0x200) != 0;
  v7 = (unsigned int *)*((_QWORD *)this + 3);
  if ( a4 >= 0x6000 )
    *((_BYTE *)this + 40873) |= 2u;
  v8 = v7[62];
  *((_DWORD *)this + 1604) = v8;
  if ( (unsigned int)v8 > 0x40 )
  {
    v72 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v72 + 24) = 64LL;
LABEL_89:
    WdLogEvent5_WdAssertion(v72);
    return 3221225485LL;
  }
  v9 = 1552 * v8;
  if ( !is_mul_ok(v8, 0x610uLL) )
    v9 = -1LL;
  v10 = __CFADD__(v9, 8LL);
  v11 = v9 + 8;
  if ( v10 )
    v11 = -1LL;
  v12 = (char *)operator new(v11, 0x30356956u, (__int64)a3, (POOL_TYPE)512);
  if ( v12 )
  {
    v15 = v12 + 8;
    *(_QWORD *)v12 = v8;
    `vector constructor iterator'(
      v12 + 8,
      1552LL,
      (unsigned int)v8,
      (void (__fastcall *)(char *))VIDMM_PHYSICAL_ADAPTER::VIDMM_PHYSICAL_ADAPTER);
  }
  else
  {
    v15 = 0LL;
  }
  *((_QWORD *)this + 5021) = v15;
  if ( !v15 )
  {
    _InterlockedIncrement(&dword_1C00405B8);
    v73 = WdLogNewEntry5_WdLowResource(v14, v13);
    *(_QWORD *)(v73 + 24) = 1392LL;
    WdLogEvent5_WdLowResource(v73);
    return 3221225495LL;
  }
  v16 = v7[425];
  if ( (v16 & 0x20) != 0 )
  {
    *((_BYTE *)this + 40872) ^= (*((_BYTE *)this + 40872) ^ (v16 >> 6)) & 1;
    v17 = *((_BYTE *)this + 40872) ^ (*((_BYTE *)this + 40872) ^ (v7[425] >> 6)) & 2;
    *((_BYTE *)this + 40872) = v17;
    if ( (v17 & 2) != 0 )
    {
      if ( (VIDMM_GLOBAL::_Config & 0x20) != 0
        || (v18 = *(_DWORD *)(*((_QWORD *)this + 3) + 300LL), (v18 & 4) != 0)
        || (v18 & 8) != 0 )
      {
        v19 = 0;
      }
      else
      {
        v19 = 4;
      }
      *((_BYTE *)this + 40872) = v19 | v17 & 0xFB;
    }
    if ( a4 >= 0x5017 || (VIDMM_GLOBAL::_Config & 0x100) != 0 )
      *((_BYTE *)this + 40872) |= 0x40u;
  }
  v20 = 0LL;
  v21 = 0LL;
  v107 = 0;
  *((_BYTE *)this + 4616) = (v7[424] & 0x20) == 0;
  if ( (_DWORD)v8 )
  {
    v96.Data = 0LL;
    v22 = (_DWORD *)((char *)this + 372);
    v23 = 0LL;
    p_PagingBufferSegmentId = &a3->PagingBufferSegmentId;
    while ( 1 )
    {
      VIDMM_GLOBAL::ReadPhysicalAdapterConfiguration(this, v21);
      v25 = *(_QWORD *)(*((_QWORD *)this + 3) + 2216LL);
      v26 = *(_QWORD *)(*((_QWORD *)this + 2) + 992LL);
      v27 = v26 ? v26 + 144 * v21 : 0LL;
      v28 = *((_QWORD *)this + 5021);
      *(_DWORD *)(v23 + v28 + 20) = v107;
      *(_DWORD *)(v23 + v28 + 24) = *(p_PagingBufferSegmentId - 4);
      v29 = *(p_PagingBufferSegmentId - 4);
      if ( v29 > 0x20 )
        break;
      if ( *p_PagingBufferSegmentId > v29 )
      {
        v72 = WdLogNewEntry5_WdAssertion(v26, v28);
        *(_QWORD *)(v72 + 24) = 1439LL;
        goto LABEL_89;
      }
      v30 = v29 + v107;
      v107 = v30;
      if ( v30 >= 0xFFFE )
      {
        v72 = WdLogNewEntry5_WdAssertion(v26, v28);
        *(_QWORD *)(v72 + 24) = 1446LL;
        goto LABEL_89;
      }
      v31 = (char *)v96.Data;
      *((_BYTE *)this + (unsigned __int64)v96.Data + 52) = *(_BYTE *)p_PagingBufferSegmentId;
      *(v22 - 64) = p_PagingBufferSegmentId[1];
      *v22 = p_PagingBufferSegmentId[2];
      *(_BYTE *)(v23 + v28 + 436) ^= (*(_BYTE *)(v23 + v28 + 436) ^ (2 * *(_BYTE *)(v20 + v25 + 16))) & 2;
      v32 = *(_BYTE *)(v23 + v28 + 436) ^ (*(_BYTE *)(v23 + v28 + 436) ^ (*(_DWORD *)(v20 + v25 + 16) >> 1)) & 1;
      *(_BYTE *)(v23 + v28 + 436) = v32;
      if ( (v32 & 3) != 0 )
      {
        ++*(_DWORD *)(v23 + v28 + 24);
        *(_WORD *)(v23 + v28 + 28) = v30;
        v107 = v30 + 1;
      }
      else
      {
        *(_WORD *)(v23 + v28 + 28) = -1;
      }
      *(_DWORD *)(v23 + v28 + 16) = (1 << *(_DWORD *)(v23 + v28 + 24)) - 1;
      if ( v27 )
        *((_BYTE *)this + 40097) &= (*(_BYTE *)(v27 + 20) & 1) == 0;
      v21 = (unsigned int)(v21 + 1);
      ++v22;
      v96.Data = v31 + 1;
      v20 += 48LL;
      v23 += 1552LL;
      p_PagingBufferSegmentId += 10;
      if ( (unsigned int)v21 >= (unsigned int)v8 )
      {
        LODWORD(v20) = v107;
        goto LABEL_32;
      }
    }
    v72 = WdLogNewEntry5_WdAssertion(v26, v28);
    *(_QWORD *)(v72 + 24) = 1434LL;
    goto LABEL_89;
  }
LABEL_32:
  if ( dword_1C00402F0 == 2 )
    *((_BYTE *)this + 7096) = (*(_BYTE *)(*((_QWORD *)this + 3) + 1684LL) & 4) != 0;
  else
    *((_BYTE *)this + 7096) = dword_1C00402F0 == 1;
  *((_QWORD *)this + 5171) = qword_1C00403E0;
  v33 = dword_1C00402AC;
  if ( dword_1C00402AC )
  {
    v74 = 360LL * (unsigned int)dword_1C00402AC;
    if ( !is_mul_ok((unsigned int)dword_1C00402AC, 0x168uLL) )
      v74 = -1LL;
    v75 = operator new[](v74, 0x6D4D6956u, (POOL_TYPE)512);
    *((_QWORD *)this + 978) = v75;
    if ( v75 )
    {
      *((_DWORD *)this + 1958) = 0;
      *((_DWORD *)this + 1959) = 0;
      *((_DWORD *)this + 1954) = v33;
    }
  }
  *((_QWORD *)this + 803) = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\PhysicalMemory");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  v34 = (HANDLE *)((char *)this + 6432);
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(v37) = ZwOpenSection((PHANDLE)this + 804, 0xF001Fu, &ObjectAttributes);
  if ( (int)v37 < 0 )
  {
    v76 = WdLogNewEntry5_WdAssertion(v36, v35);
    *(_QWORD *)(v76 + 24) = 1546LL;
LABEL_105:
    WdLogEvent5_WdAssertion(v76);
LABEL_106:
    if ( *((_QWORD *)this + 464) )
    {
      for ( i = 0LL; i < (unsigned int)v20; ++i )
      {
        v78 = *(void (__fastcall ****)(_QWORD, __int64))(*((_QWORD *)this + 464) + 8 * i);
        if ( v78 )
          (**v78)(v78, 1LL);
      }
      operator delete(*((void **)this + 464));
      *((_QWORD *)this + 464) = 0LL;
    }
    VIDMM_PAGING_PROCESS::DestroyPagingProcess((VIDMM_GLOBAL *)((char *)this + 40320));
    if ( *v34 )
    {
      ZwClose(*v34);
      *v34 = 0LL;
    }
    operator delete(*((void **)this + 803));
    *((_QWORD *)this + 803) = 0LL;
    return (unsigned int)v37;
  }
  v38 = 8LL * (unsigned int)v20;
  if ( !is_mul_ok((unsigned int)v20, 8uLL) )
    v38 = -1LL;
  v39 = operator new[](v38, 0x36306956u, (POOL_TYPE)512);
  *((_QWORD *)this + 464) = v39;
  if ( !v39 )
  {
    _InterlockedIncrement(&dword_1C00405F0);
    v79 = WdLogNewEntry5_WdLowResource(v41, v40);
    *(_QWORD *)(v79 + 24) = 1558LL;
    WdLogEvent5_WdLowResource(v79);
LABEL_118:
    LODWORD(v37) = -1073741801;
    goto LABEL_106;
  }
  v44 = (wchar_t *)operator new[](0x208uLL, 0x4B677844u, PagedPool);
  if ( !v44 )
  {
    v80 = WdLogNewEntry5_WdAssertion(v43, v42);
LABEL_117:
    WdLogEvent5_WdAssertion(v80);
    goto LABEL_118;
  }
  v45 = 0;
  if ( (_DWORD)v8 )
  {
    p_pSegmentDescriptor = &a3->pSegmentDescriptor;
    while ( 1 )
    {
      v37 = *p_pSegmentDescriptor;
      v47 = (PPCW_INSTANCE *)(*((_QWORD *)this + 5021) + 1552LL * v45);
      memset(v47 + 61, 0, 0x30uLL);
      VIDMM_GLOBAL::InitSegments(
        this,
        v45,
        (struct VIDMM_PHYSICAL_ADAPTER *)v47,
        (struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *)v37,
        &v97);
      LODWORD(v95) = v45;
      v48 = *((_QWORD *)a2 + 2);
      LODWORD(Data) = *(_DWORD *)(v48 + 268);
      LODWORD(v37) = RtlStringCbPrintfW(
                       v44,
                       0x208uLL,
                       L"luid_0x%08X_0x%08X_phys_%u",
                       *(unsigned int *)(v48 + 272),
                       Data);
      if ( (int)v37 < 0 )
        break;
      RtlInitUnicodeString(&Name, v44);
      v96.Data = v47;
      v96.Size = 1552;
      LODWORD(v37) = PcwCreateInstance(v47 + 193, GpuPerformanceCounterSetAdapterMemory, &Name, 1u, &v96);
      if ( (int)v37 < 0 )
        break;
      ++v45;
      p_pSegmentDescriptor += 5;
      if ( v45 >= (unsigned int)v8 )
        goto LABEL_45;
    }
    v81 = WdLogNewEntry5_WdAssertion(v50, v49);
    WdLogEvent5_WdAssertion(v81);
LABEL_45:
    LODWORD(v20) = v107;
    v34 = (HANDLE *)((char *)this + 6432);
  }
  operator delete(v44);
  if ( (int)v37 < 0 )
    goto LABEL_106;
  v10 = v97 + qword_1C0040168 < *(_QWORD *)(*((_QWORD *)this + 3) + 2240LL);
  *((_DWORD *)this + 926) = v20;
  v52 = (*((_BYTE *)this + 40872) & 1) == 0;
  *((_BYTE *)this + 40096) = v10;
  if ( v52 )
  {
LABEL_48:
    LODWORD(v37) = VIDMM_GLOBAL::CreateWorkerThread(this);
    if ( (int)v37 >= 0 )
    {
      DXGAUTOEXPUSHLOCKSHARED::DXGAUTOEXPUSHLOCKSHARED(
        (DXGAUTOEXPUSHLOCKSHARED *)v98,
        (struct _EX_PUSH_LOCK *const)&VIDMM_PARTITION::_PartitionLock);
      v55 = (VIDMM_PARTITION *)VIDMM_PARTITION::_PartitionTree;
      v56 = 0LL;
      while ( v55 )
      {
        v56 = v55;
        v55 = *(VIDMM_PARTITION **)v55;
      }
      while ( v56 )
      {
        v57 = VIDMM_PARTITION::EnsureAdapter(v56, this);
        v37 = (UCHAR *)v57;
        if ( v57 < 0 )
        {
          v93 = (_QWORD *)WdLogNewEntry5_WdAssertion(v59, v58);
          v93[3] = this;
          v93[4] = v56;
          v93[5] = v37;
          WdLogEvent5_WdAssertion(v93);
          if ( v100 == 1 )
          {
            ExReleasePushLockSharedEx(v99, 0LL);
          }
          else if ( v100 == 2 )
          {
            ExReleasePushLockExclusiveEx(v99, 0LL);
          }
          goto LABEL_106;
        }
        v60 = (VIDMM_PARTITION *)*((_QWORD *)v56 + 1);
        v61 = v56;
        if ( v60 )
        {
          do
          {
            v56 = v60;
            v60 = *(VIDMM_PARTITION **)v60;
          }
          while ( v60 );
        }
        else
        {
          while ( 1 )
          {
            v56 = (VIDMM_PARTITION *)(*((_QWORD *)v56 + 2) & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v56 || *(VIDMM_PARTITION **)v56 == v61 )
              break;
            v61 = v56;
          }
        }
      }
      if ( v100 == 1 )
      {
        ExReleasePushLockSharedEx(v99, 0LL);
      }
      else if ( v100 == 2 )
      {
        ExReleasePushLockExclusiveEx(v99, 0LL);
      }
      *((_QWORD *)this + 982) = MEMORY[0xFFFFF78000000014];
      *((_QWORD *)this + 983) = MEMORY[0xFFFFF78000000014];
      DXGAUTOEXPUSHLOCKEXCLUSIVE::DXGAUTOEXPUSHLOCKEXCLUSIVE(
        (DXGAUTOEXPUSHLOCKEXCLUSIVE *)v101,
        (struct _EX_PUSH_LOCK *const)&VIDMM_GLOBAL::_AdapterListLock);
      v62 = (_QWORD *)qword_1C0040738;
      v63 = (_QWORD *)((char *)this + 41448);
      if ( *(struct _LIST_ENTRY **)qword_1C0040738 != &VIDMM_GLOBAL::_AdapterListHead )
        __fastfail(3u);
      v52 = v103 == 1;
      *v63 = &VIDMM_GLOBAL::_AdapterListHead;
      v63[1] = v62;
      *v62 = v63;
      qword_1C0040738 = (__int64)v63;
      if ( v52 )
      {
        ExReleasePushLockSharedEx(v102, 0LL);
      }
      else if ( v103 == 2 )
      {
        ExReleasePushLockExclusiveEx(v102, 0LL);
      }
      return (unsigned int)v37;
    }
    v76 = WdLogNewEntry5_WdAssertion(v54, v53);
    *(_QWORD *)(v76 + 24) = 1704LL;
    goto LABEL_105;
  }
  if ( dword_1C004033C )
  {
    v82 = (unsigned int)dword_1C004033C;
    v83 = 24LL * (unsigned int)dword_1C004033C;
    if ( !is_mul_ok((unsigned int)dword_1C004033C, 0x18uLL) )
      v83 = -1LL;
    v10 = __CFADD__(v83, 8LL);
    v84 = v83 + 8;
    if ( v10 )
      v84 = -1LL;
    v85 = operator new(v84, 0x32356956u, v51, PagedPool);
    if ( v85 )
      *v85++ = v82;
    *((_QWORD *)this + 5115) = v85;
    if ( v85 )
    {
      v89 = 48LL * (unsigned int)dword_1C0040340;
      if ( !is_mul_ok((unsigned int)dword_1C0040340, 0x30uLL) )
        v89 = -1LL;
      v90 = operator new(v89, 0x32356956u, v88, PagedPool);
      *((_QWORD *)this + 5119) = v90;
      if ( v90 )
        goto LABEL_68;
      v80 = WdLogNewEntry5_WdAssertion(v92, v91);
      *(_QWORD *)(v80 + 24) = 1641LL;
    }
    else
    {
      v80 = WdLogNewEntry5_WdAssertion(v87, v86);
      *(_QWORD *)(v80 + 24) = 1634LL;
    }
    goto LABEL_117;
  }
LABEL_68:
  *((_DWORD *)this + 10217) = 0;
  v65 = 0LL;
  *((_BYTE *)this + 40872) &= ~0x20u;
  if ( !(_DWORD)v8 )
  {
LABEL_78:
    if ( a4 >= 0x5023 )
      v71 = dword_1C0040344;
    else
      v71 = 4096 << *((_DWORD *)this + 10217);
    *((_DWORD *)this + 10229) = v71;
    LODWORD(v37) = VIDMM_PAGING_PROCESS::CreateVaAllocator((VIDMM_GLOBAL *)((char *)this + 40320), this);
    if ( (int)v37 < 0 )
      goto LABEL_106;
    goto LABEL_48;
  }
  v66 = 0LL;
  while ( 1 )
  {
    v67 = *(_QWORD *)(*((_QWORD *)this + 2) + 992LL);
    v68 = v67 ? (const struct DXGADAPTER_GPUMMUCAPS *)(v67 + 144 * v65) : 0LL;
    v69 = (unsigned int *)(v66 + *((_QWORD *)this + 5021));
    result = VIDMM_PHYSICAL_ADAPTER::InitializeGpuVaState(
               (VIDMM_PHYSICAL_ADAPTER *)v69,
               this,
               v65,
               (struct VIDMM_SEGMENT *const *)(*((_QWORD *)this + 464) + 8LL * v69[5]),
               v68,
               v95,
               v69[6]);
    if ( (int)result < 0 )
      return result;
    v70 = v69[17];
    if ( v70 > *((_DWORD *)this + 10217) )
      *((_DWORD *)this + 10217) = v70;
    if ( v69[107] == 1 )
      *((_BYTE *)this + 40872) |= 0x20u;
    v65 = (unsigned int)(v65 + 1);
    v66 += 1552LL;
    if ( (unsigned int)v65 >= (unsigned int)v8 )
      goto LABEL_78;
  }
}
