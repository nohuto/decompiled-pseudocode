/*
 * XREFs of ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C0073778
 * Callers:
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z @ 0x1C0075314 (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0002358 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0002624 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?GetSystemMemoryCommitLimit@VIDMM_GLOBAL@@QEAA_KXZ @ 0x1C001F160 (-GetSystemMemoryCommitLimit@VIDMM_GLOBAL@@QEAA_KXZ.c)
 *     ?IsXBoxOneDevice@DXGADAPTER@@QEBAEXZ @ 0x1C001F180 (-IsXBoxOneDevice@DXGADAPTER@@QEBAEXZ.c)
 *     ?InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEA_K@Z @ 0x1C0047064 (-InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNA.c)
 *     ?Init@VIDMM_WORKER_THREAD@@QEAAJPEAPEAU_KEVENT@@@Z @ 0x1C0072C50 (-Init@VIDMM_WORKER_THREAD@@QEAAJPEAPEAU_KEVENT@@@Z.c)
 *     ?ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C0073090 (-ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00751D4 (-CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?InitializeGpuVaState@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAVVIDMM_GLOBAL@@IPEBQEAVVIDMM_SEGMENT@@PEBUDXGADAPTER_GPUMMUCAPS@@PEBUDXGK_PHYSICALADAPTERINFO@@I@Z @ 0x1C0076358 (-InitializeGpuVaState@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAVVIDMM_GLOBAL@@IPEBQEAVVIDMM_SEGMENT@@PEBU.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C009B898 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Init(
        VIDMM_GLOBAL *this,
        struct ADAPTER_RENDER *a2,
        struct _DXGK_QUERYSEGMENTOUT4 *a3,
        unsigned int a4)
{
  DXGADAPTER *v5; // rcx
  struct _DXGK_QUERYSEGMENTOUT4 *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r15
  unsigned int v12; // r9d
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  __int64 result; // rax
  char *v16; // rcx
  char *PoolWithTag; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  __int64 v21; // rax
  bool v22; // cf
  SIZE_T v23; // rax
  char *v24; // rax
  char *v25; // rdi
  unsigned int v26; // eax
  char v27; // cl
  int v28; // edx
  char v29; // al
  __int64 v30; // r12
  char v31; // al
  __int64 v32; // r15
  struct _DXGK_QUERYSEGMENTOUT4 *v33; // r14
  __int64 v34; // rdi
  UINT *v35; // r13
  __int64 v36; // r10
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  UINT NbSegment; // eax
  unsigned int v41; // r11d
  char v42; // cl
  int v43; // edi
  SIZE_T v44; // rax
  PVOID v45; // rax
  HANDLE *v46; // r15
  __int64 v47; // rdx
  __int64 v48; // rcx
  int VaAllocator; // edi
  __int64 v50; // rax
  __int64 v51; // r14
  SIZE_T v52; // rax
  PVOID v53; // rax
  __int64 v54; // rax
  unsigned int v55; // edi
  __int64 v56; // r14
  struct DXGK_SEGMENTDESCRIPTOR_INTERNAL **p_pSegmentDescriptor; // r15
  unsigned __int64 SystemMemoryCommitLimit; // rax
  __int64 v59; // r8
  unsigned __int64 v60; // r11
  unsigned __int64 v61; // r15
  __int64 v62; // rcx
  unsigned __int64 v63; // r10
  char v64; // r8
  __int64 v65; // rdi
  __int64 v66; // rdx
  __int64 v67; // r9
  __int64 v68; // r11
  __int64 v69; // r10
  int v70; // eax
  unsigned __int64 v71; // r9
  unsigned __int64 v72; // rax
  _DWORD *v73; // r11
  unsigned __int64 v74; // rcx
  unsigned __int64 v75; // rcx
  unsigned __int64 v76; // rax
  unsigned __int64 *v77; // r9
  unsigned __int64 *v78; // r14
  unsigned __int64 *v79; // rdi
  unsigned __int64 *v80; // r10
  char *v81; // r12
  __int64 v82; // r13
  unsigned __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rcx
  __int64 v87; // rax
  unsigned __int64 v88; // rdx
  __int64 v89; // r11
  unsigned __int64 v90; // rcx
  __int64 v91; // r10
  unsigned __int64 v92; // rcx
  unsigned __int64 v93; // rcx
  __int64 v94; // r8
  unsigned __int64 v95; // rcx
  __int64 v96; // rdi
  __int64 v97; // rax
  SIZE_T v98; // rax
  _QWORD *v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  _QWORD *v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  SIZE_T v106; // rax
  PVOID v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  unsigned int v110; // edi
  __int64 v111; // r15
  __int64 v112; // rcx
  const struct DXGADAPTER_GPUMMUCAPS *v113; // rdx
  unsigned int *v114; // r14
  unsigned int v115; // eax
  int v116; // eax
  _QWORD *v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rax
  unsigned __int64 v121; // rsi
  void (__fastcall ***v122)(_QWORD, __int64); // rcx
  const struct DXGK_PHYSICALADAPTERINFO *v123; // [rsp+28h] [rbp-71h]
  unsigned __int64 v124; // [rsp+40h] [rbp-59h] BYREF
  int v125; // [rsp+48h] [rbp-51h]
  __int128 v126; // [rsp+50h] [rbp-49h] BYREF
  __int64 v127; // [rsp+60h] [rbp-39h]
  __int64 v128; // [rsp+68h] [rbp-31h]
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-19h] BYREF
  unsigned int v131; // [rsp+100h] [rbp+67h]
  __int64 v132; // [rsp+108h] [rbp+6Fh]
  unsigned int v133; // [rsp+108h] [rbp+6Fh]

  *((_QWORD *)this + 2) = a2;
  v5 = (DXGADAPTER *)*((_QWORD *)a2 + 2);
  v7 = a3;
  *((_QWORD *)this + 3) = v5;
  *((_DWORD *)this + 8) = a4;
  LOBYTE(v8) = DXGADAPTER::IsXBoxOneDevice(v5);
  v124 = 0LL;
  byte_1C003C430 |= v8;
  v11 = *((_QWORD *)this + 3);
  if ( v12 >= 0x6000 )
    *((_BYTE *)this + 40873) |= 2u;
  v13 = *(unsigned int *)(v11 + 248);
  v125 = v13;
  *((_DWORD *)this + 1604) = v13;
  if ( (unsigned int)v13 > 0x40 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v14 + 24) = 64LL;
LABEL_5:
    WdLogEvent5_WdAssertion(v14);
    return 3221225485LL;
  }
  if ( (unsigned int)v13 <= 1 )
  {
    PoolWithTag = (char *)this + 41208;
  }
  else
  {
    v16 = (char *)v13;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v13 < 0x118 )
    {
LABEL_13:
      _InterlockedAdd(&dword_1C003C5A8, 1u);
      v18 = WdLogNewEntry5_WdLowResource(v16);
      *(_QWORD *)(v18 + 24) = 1057LL;
LABEL_14:
      WdLogEvent5_WdLowResource(v18);
      return 3221225495LL;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 280 * v13, 0x6D4D6956u);
  }
  *((_QWORD *)this + 5150) = PoolWithTag;
  v16 = PoolWithTag;
  *((_DWORD *)this + 10372) = v13;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 280 * v13);
  if ( !*((_QWORD *)this + 5150) )
    goto LABEL_13;
  if ( (_DWORD)v13 )
  {
    v19 = 0LL;
    v10 = v13;
    do
    {
      v20 = (_QWORD *)(v19 + *((_QWORD *)this + 5150));
      v19 += 280LL;
      v20[1] = v20;
      *v20 = v20;
      --v10;
    }
    while ( v10 );
  }
  v21 = 472 * v13;
  if ( !is_mul_ok(v13, 0x1D8uLL) )
    v21 = -1LL;
  v22 = __CFADD__(v21, 8LL);
  v23 = v21 + 8;
  if ( v22 )
    v23 = -1LL;
  v24 = (char *)operator new(v23, 0x30356956u, v10, (POOL_TYPE)512);
  if ( v24 )
  {
    v25 = v24 + 8;
    *(_QWORD *)v24 = v13;
    `vector constructor iterator'(
      v24 + 8,
      472LL,
      v13,
      (void (__fastcall *)(char *))VIDMM_PHYSICAL_ADAPTER::VIDMM_PHYSICAL_ADAPTER);
  }
  else
  {
    v25 = 0LL;
  }
  *((_QWORD *)this + 5021) = v25;
  if ( !v25 )
  {
    _InterlockedAdd(&dword_1C003C5A8, 1u);
    v18 = WdLogNewEntry5_WdLowResource(1LL);
    *(_QWORD *)(v18 + 24) = 1069LL;
    goto LABEL_14;
  }
  v26 = *(_DWORD *)(v11 + 1676);
  if ( (v26 & 0x20) != 0 )
  {
    *((_BYTE *)this + 40872) ^= (*((_BYTE *)this + 40872) ^ (v26 >> 6)) & 1;
    v27 = *((_BYTE *)this + 40872) ^ (*((_BYTE *)this + 40872) ^ (*(_DWORD *)(v11 + 1676) >> 6)) & 2;
    *((_BYTE *)this + 40872) = v27;
    if ( (v27 & 2) != 0 )
    {
      if ( (VIDMM_GLOBAL::_Config & 0x20) != 0
        || (v28 = *(_DWORD *)(*((_QWORD *)this + 3) + 300LL), (v28 & 4) != 0)
        || (v28 & 8) != 0 )
      {
        v29 = 0;
      }
      else
      {
        v29 = 4;
      }
      *((_BYTE *)this + 40872) = v29 | v27 & 0xFB;
    }
    if ( a4 >= 0x5017 || (VIDMM_GLOBAL::_Config & 0x100) != 0 )
      *((_BYTE *)this + 40872) |= 0x40u;
  }
  v30 = 0LL;
  v31 = ~*(_BYTE *)(v11 + 1672);
  v131 = 0;
  v32 = 0LL;
  *((_BYTE *)this + 4616) = (v31 & 0x20) != 0;
  if ( (_DWORD)v13 )
  {
    v132 = 0LL;
    v33 = v7;
    v34 = 0LL;
    v35 = (UINT *)((char *)this + 372);
    while ( 1 )
    {
      VIDMM_GLOBAL::ReadPhysicalAdapterConfiguration(this, v32);
      v36 = *(_QWORD *)(*((_QWORD *)this + 3) + 2192LL);
      v37 = *(_QWORD *)(*((_QWORD *)this + 2) + 896LL);
      v38 = v37 ? v37 + 144 * v32 : 0LL;
      v39 = *((_QWORD *)this + 5021);
      *(_DWORD *)(v34 + v39 + 20) = v131;
      *(_DWORD *)(v34 + v39 + 24) = v33->NbSegment;
      NbSegment = v33->NbSegment;
      if ( v33->NbSegment > 0x20 )
        break;
      if ( v33->PagingBufferSegmentId > NbSegment )
      {
        v14 = WdLogNewEntry5_WdAssertion(v37, v39);
        *(_QWORD *)(v14 + 24) = 1116LL;
        goto LABEL_5;
      }
      v41 = NbSegment + v131;
      v131 = v41;
      if ( v41 >= 0xFFFE )
      {
        v14 = WdLogNewEntry5_WdAssertion(v37, v39);
        *(_QWORD *)(v14 + 24) = 1123LL;
        goto LABEL_5;
      }
      *((_BYTE *)this + v132 + 52) = v33->PagingBufferSegmentId;
      *(v35 - 64) = v33->PagingBufferSize;
      *v35 = v33->PagingBufferPrivateDataSize;
      *(_BYTE *)(v34 + v39 + 436) ^= (*(_BYTE *)(v34 + v39 + 436) ^ (2 * *(_BYTE *)(v30 + v36 + 16))) & 2;
      v42 = *(_BYTE *)(v34 + v39 + 436) ^ (*(_BYTE *)(v34 + v39 + 436) ^ (*(_DWORD *)(v30 + v36 + 16) >> 1)) & 1;
      *(_BYTE *)(v34 + v39 + 436) = v42;
      if ( (v42 & 3) != 0 )
      {
        ++*(_DWORD *)(v34 + v39 + 24);
        *(_WORD *)(v34 + v39 + 28) = v41;
        v131 = v41 + 1;
      }
      else
      {
        *(_WORD *)(v34 + v39 + 28) = -1;
      }
      *(_DWORD *)(v34 + v39 + 16) = (1 << *(_DWORD *)(v34 + v39 + 24)) - 1;
      if ( v38 )
        *((_BYTE *)this + 40097) &= (*(_BYTE *)(v38 + 20) & 1) == 0;
      v32 = (unsigned int)(v32 + 1);
      ++v35;
      ++v132;
      v30 += 48LL;
      v34 += 472LL;
      ++v33;
      if ( (unsigned int)v32 >= (unsigned int)v13 )
      {
        LODWORD(v30) = v131;
        v7 = a3;
        goto LABEL_53;
      }
    }
    v14 = WdLogNewEntry5_WdAssertion(v37, v39);
    *(_QWORD *)(v14 + 24) = 1111LL;
    goto LABEL_5;
  }
LABEL_53:
  if ( dword_1C003C2B8 == 2 )
    *((_BYTE *)this + 7096) = (*(_BYTE *)(*((_QWORD *)this + 3) + 1660LL) & 4) != 0;
  else
    *((_BYTE *)this + 7096) = dword_1C003C2B8 == 1;
  *((_QWORD *)this + 807) = qword_1C003C140;
  *((_QWORD *)this + 5208) = qword_1C003C3A8;
  v43 = dword_1C003C274;
  if ( dword_1C003C274 )
  {
    v44 = 360LL * (unsigned int)dword_1C003C274;
    if ( !is_mul_ok((unsigned int)dword_1C003C274, 0x168uLL) )
      v44 = -1LL;
    v45 = operator new[](v44, 0x6D4D6956u, (POOL_TYPE)512);
    *((_QWORD *)this + 978) = v45;
    if ( v45 )
    {
      *((_DWORD *)this + 1958) = 0;
      *((_DWORD *)this + 1959) = 0;
      *((_DWORD *)this + 1954) = v43;
    }
  }
  *((_QWORD *)this + 803) = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\PhysicalMemory");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  v46 = (HANDLE *)((char *)this + 6432);
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  VaAllocator = ZwOpenSection((PHANDLE)this + 804, 0xF001Fu, &ObjectAttributes);
  if ( VaAllocator < 0 )
  {
    v50 = WdLogNewEntry5_WdAssertion(v48, v47);
    *(_QWORD *)(v50 + 24) = 1225LL;
    WdLogEvent5_WdAssertion(v50);
LABEL_175:
    if ( *((_QWORD *)this + 464) )
    {
      v121 = 0LL;
      if ( (_DWORD)v30 )
      {
        do
        {
          v122 = *(void (__fastcall ****)(_QWORD, __int64))(*((_QWORD *)this + 464) + 8 * v121);
          if ( v122 )
            (**v122)(v122, 1LL);
          ++v121;
        }
        while ( v121 < (unsigned int)v30 );
        v46 = (HANDLE *)((char *)this + 6432);
      }
      operator delete(*((void **)this + 464));
      *((_QWORD *)this + 464) = 0LL;
    }
    VIDMM_PAGING_PROCESS::DestroyPagingProcess((VIDMM_GLOBAL *)((char *)this + 40320));
    if ( *v46 )
    {
      ZwClose(*v46);
      *v46 = 0LL;
    }
    operator delete(*((void **)this + 803));
    *((_QWORD *)this + 803) = 0LL;
    return (unsigned int)VaAllocator;
  }
  v51 = (unsigned int)v30;
  v52 = 8LL * (unsigned int)v30;
  if ( !is_mul_ok((unsigned int)v30, 8uLL) )
    v52 = -1LL;
  v53 = operator new[](v52, 0x36306956u, (POOL_TYPE)512);
  *((_QWORD *)this + 464) = v53;
  if ( !v53 )
  {
    _InterlockedAdd(&dword_1C003C5E0, 1u);
    v54 = WdLogNewEntry5_WdLowResource(1LL);
    *(_QWORD *)(v54 + 24) = 1237LL;
    WdLogEvent5_WdLowResource(v54);
    VaAllocator = -1073741801;
    goto LABEL_175;
  }
  v55 = 0;
  if ( (_DWORD)v13 )
  {
    v56 = 0LL;
    p_pSegmentDescriptor = (struct DXGK_SEGMENTDESCRIPTOR_INTERNAL **)&v7->pSegmentDescriptor;
    do
    {
      VIDMM_GLOBAL::InitSegments(
        this,
        v55,
        (struct VIDMM_PHYSICAL_ADAPTER *)(v56 + *((_QWORD *)this + 5021)),
        *p_pSegmentDescriptor,
        &v124);
      p_pSegmentDescriptor += 5;
      ++v55;
      v56 += 472LL;
    }
    while ( v55 < (unsigned int)v13 );
    v51 = (unsigned int)v30;
  }
  *((_BYTE *)this + 40096) = qword_1C003C128 + v124 < *(_QWORD *)(*((_QWORD *)this + 3) + 2216LL);
  v128 = qword_1C003C318;
  SystemMemoryCommitLimit = VIDMM_GLOBAL::GetSystemMemoryCommitLimit(this);
  v61 = SystemMemoryCommitLimit;
  if ( v60 && SystemMemoryCommitLimit >= v60 )
    v61 = v60;
  v133 = 0;
  if ( (_DWORD)v13 )
  {
    v62 = 0LL;
    v124 = 0LL;
    v127 = 0LL;
    v63 = 0LL;
    while ( 1 )
    {
      v64 = 0;
      v65 = *((_QWORD *)this + 5021);
      v66 = v62 + *((_QWORD *)this + 5150);
      LOBYTE(v62) = 0;
      v126 = *(_OWORD *)(v66 + 16);
      if ( (_DWORD)v30 )
      {
        v67 = 0LL;
        v68 = v51;
        do
        {
          v69 = *(_QWORD *)(v67 + *((_QWORD *)this + 464));
          v70 = *(_DWORD *)(v69 + 80);
          if ( (v70 & 0x80000) != 0 )
          {
            if ( (v70 & 4) == 0 )
              *(_BYTE *)(v66 + 274) = 1;
            v70 = *(_DWORD *)(v69 + 80);
            if ( (v70 & 0x1001) == 0 )
              v64 = 1;
          }
          v62 = (unsigned __int8)v62;
          if ( (v70 & 0x1001) != 0 )
            v62 = 1LL;
          v67 += 8LL;
          --v68;
        }
        while ( v68 );
        LODWORD(v30) = v131;
        v63 = v124;
        v60 = v128;
      }
      v71 = v126;
      if ( !(_QWORD)v126 )
        break;
      if ( v64 && (_BYTE)v62 )
        *(_BYTE *)(v66 + 275) = 1;
      v72 = *(_QWORD *)(v63 + v65);
      if ( *((_QWORD *)&v126 + 1) )
      {
        v75 = *(_QWORD *)(v63 + v65 + 8);
        if ( v72 >= v60 )
          v72 = v60;
        if ( v72 )
        {
          if ( v71 < v72 )
            v72 = v71;
          *(_QWORD *)&v126 = v72;
        }
        v73 = (_DWORD *)(v66 + 240);
        v76 = v61;
        if ( v75 )
          v76 = v75;
        *((_QWORD *)&v126 + 1) = v76;
        *v73 = dword_1C003C36C;
        *(_DWORD *)(v66 + 244) = dword_1C003C370;
      }
      else
      {
        v73 = (_DWORD *)(v66 + 240);
        v74 = v61;
        if ( v72 )
          v74 = *(_QWORD *)(v63 + v65);
        *(_QWORD *)&v126 = v74;
        *v73 = dword_1C003C370;
      }
      v77 = (unsigned __int64 *)(v66 + 96);
      v78 = (unsigned __int64 *)(v66 + 64);
      v79 = (unsigned __int64 *)(v66 + 96);
      v80 = (unsigned __int64 *)(v66 + 64);
      v81 = (char *)&v126 - v66;
      v82 = 2LL;
      do
      {
        v83 = *(unsigned __int64 *)((char *)v80 + (_QWORD)v81 - 64) * (unsigned int)(100 - *v73) / 0x64;
        *(v80 - 4) = v83;
        *(v80 - 2) = v83;
        v84 = 3LL;
        *v80 = *(unsigned __int64 *)((char *)v80 + (_QWORD)v81 - 64)
             * (unsigned int)(100 - *v73 - dword_1C003C374)
             / 0x64;
        v59 = 1LL;
        do
        {
          v85 = 3LL;
          do
          {
            *v79++ = *v80;
            --v85;
          }
          while ( v85 );
          --v84;
        }
        while ( v84 );
        ++v73;
        v80[2] = *(v80 - 4) >> 1;
        ++v80;
        --v82;
      }
      while ( v82 );
      LODWORD(v13) = v125;
      if ( (*((_BYTE *)this + 40872) & 1) != 0 )
      {
        v86 = *(_QWORD *)(*((_QWORD *)this + 2) + 896LL);
        if ( v86 )
          v87 = v86 + 144LL * v133;
        else
          v87 = 0LL;
        v88 = 1LL << *(_DWORD *)(v87 + 8);
        v89 = 2LL;
        do
        {
          v90 = v88;
          v91 = 3LL;
          if ( *(v78 - 2) < v88 )
            v90 = *(v78 - 2);
          v22 = *v78 < v88;
          *(v78 - 2) = v90;
          v92 = v88;
          if ( v22 )
            v92 = *v78;
          v22 = v78[2] < v88;
          *v78 = v92;
          v93 = v88;
          if ( v22 )
            v93 = v78[2];
          v78[2] = v93;
          do
          {
            v94 = 3LL;
            do
            {
              v95 = v88;
              if ( *v77 < v88 )
                v95 = *v77;
              *v77++ = v95;
              --v94;
            }
            while ( v94 );
            v59 = 1LL;
            --v91;
          }
          while ( v91 );
          ++v78;
          --v89;
        }
        while ( v89 );
        LODWORD(v13) = v125;
      }
      v63 = v124 + 472;
      LODWORD(v30) = v131;
      v62 = v127 + 280;
      v60 = v128;
      v51 = v131;
      ++v133;
      v124 += 472LL;
      v127 += 280LL;
      if ( v133 >= (unsigned int)v13 )
      {
        LODWORD(v30) = v131;
        goto LABEL_134;
      }
    }
    v104 = WdLogNewEntry5_WdAssertion(v62, v66);
    *(_QWORD *)(v104 + 24) = 1320LL;
    WdLogEvent5_WdAssertion(v104);
    VaAllocator = -1073741811;
    goto LABEL_174;
  }
LABEL_134:
  *((_DWORD *)this + 926) = v30;
  if ( ((unsigned __int8)v59 & *((_BYTE *)this + 40872)) == 0 )
    goto LABEL_167;
  if ( dword_1C003C304 )
  {
    v96 = (unsigned int)dword_1C003C304;
    v97 = 24LL * (unsigned int)dword_1C003C304;
    if ( !is_mul_ok((unsigned int)dword_1C003C304, 0x18uLL) )
      v97 = -1LL;
    v22 = __CFADD__(v97, 8LL);
    v98 = v97 + 8;
    if ( v22 )
      v98 = -1LL;
    v99 = operator new(v98, 0x32356956u, v59, (POOL_TYPE)v59);
    if ( v99 )
    {
      *v99 = v96;
      v103 = v99 + 1;
    }
    else
    {
      v103 = 0LL;
    }
    *((_QWORD *)this + 5115) = v103;
    if ( !v103 )
    {
      v105 = WdLogNewEntry5_WdAssertion(v101, v100);
      *(_QWORD *)(v105 + 24) = 1463LL;
LABEL_146:
      WdLogEvent5_WdAssertion(v105);
      VaAllocator = -1073741801;
LABEL_174:
      v46 = (HANDLE *)((char *)this + 6432);
      goto LABEL_175;
    }
    v106 = 48LL * (unsigned int)dword_1C003C308;
    if ( !is_mul_ok((unsigned int)dword_1C003C308, 0x30uLL) )
      v106 = -1LL;
    v107 = operator new(v106, 0x32356956u, v102, PagedPool);
    *((_QWORD *)this + 5119) = v107;
    if ( !v107 )
    {
      v105 = WdLogNewEntry5_WdAssertion(v109, v108);
      *(_QWORD *)(v105 + 24) = 1470LL;
      goto LABEL_146;
    }
  }
  *((_BYTE *)this + 40872) &= ~0x20u;
  v110 = 0;
  *((_DWORD *)this + 10217) = 0;
  if ( !(_DWORD)v13 )
  {
LABEL_162:
    if ( a4 >= 0x5023 )
      v116 = dword_1C003C30C;
    else
      v116 = 4096 << *((_DWORD *)this + 10217);
    *((_DWORD *)this + 10229) = v116;
    VaAllocator = VIDMM_PAGING_PROCESS::CreateVaAllocator((VIDMM_GLOBAL *)((char *)this + 40320), this);
    if ( VaAllocator < 0 )
      goto LABEL_174;
    LODWORD(v59) = 1;
LABEL_167:
    v117 = operator new[](0xE8uLL, 0x37346956u, (POOL_TYPE)v59);
    v119 = (__int64)v117;
    if ( v117 )
    {
      v117[3] = 0LL;
      *v117 = this;
      v117[1] = 0LL;
      v117[2] = 0LL;
      v117[5] = 0LL;
      v117[4] = 0LL;
      v117[7] = 0LL;
      v117[6] = 0LL;
      v117[17] = 0LL;
      v117[16] = 0LL;
      *((_DWORD *)v117 + 36) = 0;
      v117[19] = 0LL;
      *((_BYTE *)v117 + 160) = 0;
      v117[23] = 0LL;
      v117[24] = 0LL;
      v117[25] = 0LL;
      *((_BYTE *)v117 + 216) = 1;
      v117[28] = 0LL;
      v117[9] = v117 + 8;
      v117[8] = v117 + 8;
      v117[13] = v117 + 12;
      v117[12] = v117 + 12;
      v117[11] = v117 + 10;
      v117[10] = v117 + 10;
      v117[15] = v117 + 14;
      v117[14] = v117 + 14;
    }
    else
    {
      v119 = 0LL;
    }
    *(_QWORD *)this = v119;
    if ( v119 )
    {
      VaAllocator = VIDMM_WORKER_THREAD::Init(v119, (struct _KEVENT **)this + 5140);
      if ( VaAllocator >= 0 )
      {
        *((_QWORD *)this + 982) = MEMORY[0xFFFFF78000000014];
        *((_QWORD *)this + 983) = MEMORY[0xFFFFF78000000014];
        return (unsigned int)VaAllocator;
      }
    }
    else
    {
      VaAllocator = -1073741801;
    }
    v120 = WdLogNewEntry5_WdAssertion(v119, v118);
    *(_QWORD *)(v120 + 24) = 1533LL;
    WdLogEvent5_WdAssertion(v120);
    goto LABEL_174;
  }
  v111 = 0LL;
  while ( 1 )
  {
    v112 = *(_QWORD *)(*((_QWORD *)this + 2) + 896LL);
    v113 = v112 ? (const struct DXGADAPTER_GPUMMUCAPS *)(v112 + 144LL * v110) : 0LL;
    v114 = (unsigned int *)(v111 + *((_QWORD *)this + 5021));
    result = VIDMM_PHYSICAL_ADAPTER::InitializeGpuVaState(
               (VIDMM_PHYSICAL_ADAPTER *)v114,
               this,
               v110,
               (struct VIDMM_SEGMENT *const *)(*((_QWORD *)this + 464) + 8LL * v114[5]),
               v113,
               v123,
               v114[6]);
    if ( (int)result < 0 )
      return result;
    v115 = v114[17];
    if ( v115 > *((_DWORD *)this + 10217) )
      *((_DWORD *)this + 10217) = v115;
    if ( v114[107] == 1 )
      *((_BYTE *)this + 40872) |= 0x20u;
    ++v110;
    v111 += 472LL;
    if ( v110 >= (unsigned int)v13 )
      goto LABEL_162;
  }
}
