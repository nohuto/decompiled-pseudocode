/*
 * XREFs of ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXPEBU_D3DKM_CREATESTANDARDALLOCATION@@HPEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1C00EE2B0
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00EBA10 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C00024F0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0015AA8 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C001616C (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00161C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0016230 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001B400 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00253B0 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C00F4C90 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DXGDEVICE::CreateDriverAllocations(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        struct _D3DDDI_ALLOCATIONINFO2 *a3,
        struct _DXGK_ALLOCATIONINFO *a4,
        struct DXGALLOCATION *a5,
        struct DXGRESOURCE *a6,
        void **a7,
        void **a8,
        void *Src,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a10,
        int a11,
        struct _D3DKMT_CREATESTANDARDALLOCATION *a12)
{
  DXGDEVICE *v12; // r13
  struct DXGRESOURCE *v13; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 NumAllocations; // rcx
  __int64 v20; // rax
  unsigned int v21; // ebx
  struct _DXGK_ALLOCATIONINFO *v22; // r13
  struct _D3DDDI_ALLOCATIONINFO2 *v23; // rcx
  UINT PrivateDriverDataSize; // r9d
  __int64 v25; // r8
  void *v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  UINT v29; // eax
  PVOID v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  _QWORD *v34; // rax
  unsigned int v35; // r15d
  int v36; // r15d
  UINT i; // edx
  __int64 v38; // rax
  __int64 v39; // r14
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 *ThreadProperty; // rax
  __int64 *v47; // rbx
  __int64 v48; // rbx
  int v49; // r13d
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // r8
  int v53; // r9d
  __int64 v54; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v56; // rdi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v58; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v61; // rdx
  __int64 v62; // rsi
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rcx
  _QWORD *v66; // rax
  unsigned __int8 v67; // cl
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  struct _DXGK_ALLOCATIONINFO *v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // r8
  struct _D3DKMT_CREATEALLOCATION *v74; // r10
  UINT v75; // r11d
  struct DXGALLOCATION *v76; // r9
  struct DXGRESOURCE *v77; // r13
  struct DXGALLOCATION *v78; // rsi
  DXGDEVICE *v79; // rdi
  struct _DXGK_ALLOCATIONINFO *v80; // r12
  __int64 v81; // r14
  struct _DXGK_ALLOCATIONINFO *v82; // rbx
  int Value; // edx
  __int64 v84; // r8
  int v85; // r8d
  UINT v86; // eax
  UINT v87; // eax
  __int64 v88; // rcx
  SIZE_T v89; // rax
  __int64 v90; // rcx
  __int64 Flags; // rcx
  DXGADAPTER *v92; // rcx
  __int64 v93; // r8
  int v94; // r11d
  UINT v95; // edx
  __int64 (__fastcall **v96)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  __int64 v97; // rcx
  __int64 v98; // rdx
  int v99; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v100; // ecx
  bool v101; // r8
  int v102; // r9d
  unsigned int v103; // ecx
  int v104; // ecx
  int v105; // eax
  int v106; // eax
  int v107; // edx
  unsigned int v108; // ecx
  int v109; // ecx
  int v110; // eax
  __int64 v111; // rcx
  int v112; // edx
  __int64 v113; // rcx
  __int64 v114; // rax
  D3DKMT_CREATEALLOCATIONFLAGS v115; // eax
  _QWORD *v116; // rax
  _QWORD *v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // r8
  _QWORD *v122; // rax
  __int64 v123; // rcx
  _QWORD *v124; // rax
  struct _D3DDDI_ALLOCATIONINFO2 *v126; // [rsp+28h] [rbp-A1h]
  void *v127; // [rsp+30h] [rbp-99h] BYREF
  UINT Size; // [rsp+38h] [rbp-91h]
  int Size_4; // [rsp+3Ch] [rbp-8Dh]
  struct _DXGK_ALLOCATIONINFO *v130; // [rsp+40h] [rbp-89h]
  __int64 v131; // [rsp+48h] [rbp-81h]
  int v132; // [rsp+50h] [rbp-79h]
  struct _D3DKMT_CREATEALLOCATION *v133; // [rsp+58h] [rbp-71h]
  struct _DXGK_ALLOCATIONINFO *v134; // [rsp+60h] [rbp-69h]
  struct DXGRESOURCE *v135; // [rsp+68h] [rbp-61h]
  DXGDEVICE *v136; // [rsp+70h] [rbp-59h]
  struct DXGALLOCATION *v137; // [rsp+78h] [rbp-51h]
  int v138; // [rsp+80h] [rbp-49h] BYREF
  __int64 v139; // [rsp+88h] [rbp-41h]
  char v140[8]; // [rsp+90h] [rbp-39h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-31h] BYREF

  v12 = this;
  v13 = a6;
  v137 = a5;
  v15 = *((_QWORD *)this + 2);
  v136 = this;
  v134 = a4;
  v126 = a3;
  v16 = *(_QWORD *)(v15 + 16);
  v133 = a2;
  v135 = a6;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v16 + 160) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v16 + 144)) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v17);
      *(_QWORD *)(v18 + 24) = 2915LL;
      WdLogEvent5_WdAssertion(v18);
    }
    a3 = v126;
  }
  NumAllocations = a2->NumAllocations;
  v20 = 0LL;
  v21 = 0;
  v127 = 0LL;
  if ( (_DWORD)NumAllocations )
  {
    v22 = v134;
    do
    {
      v23 = &a3[v21];
      if ( v23->pPrivateDriverData )
      {
        PrivateDriverDataSize = v23->PrivateDriverDataSize;
        v25 = v21;
        v22[v25].PrivateDriverDataSize = PrivateDriverDataSize;
        if ( !a11 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
        {
          v22[v25].pPrivateDriverData = v23->pPrivateDriverData;
        }
        else
        {
          v26 = a7[v21];
          v22[v25].pPrivateDriverData = v26;
          memmove(v26, a8[v21], PrivateDriverDataSize);
        }
        a3 = v126;
      }
      NumAllocations = a2->NumAllocations;
      ++v21;
    }
    while ( v21 < (unsigned int)NumAllocations );
    v12 = v136;
    v20 = 0LL;
    v13 = v135;
  }
  v132 = 0;
  if ( v13 )
  {
    v27 = *((_DWORD *)v13 + 1);
    v28 = *((_QWORD *)v13 + 7);
    v132 = 1;
    if ( (v27 & 1) == 0 )
    {
      v131 = v28;
      goto LABEL_19;
    }
    v20 = *(_QWORD *)(v28 + 16);
  }
  v131 = v20;
LABEL_19:
  v130 = v134;
  v29 = a2->PrivateDriverDataSize;
  Size_4 = NumAllocations;
  if ( v29 && a2->pStandardAllocation )
  {
    Size = v29;
    v30 = operator new[](v29, 0x4B677844u, PagedPool);
    v127 = v30;
    if ( !v30 )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33);
      v35 = -1073741801;
      v34[3] = v12;
      v34[4] = Size;
      v34[5] = -1073741801LL;
      WdLogEvent5_WdWarning(v34);
      goto LABEL_195;
    }
    if ( a11 )
      memmove(v30, Src, Size);
    else
      memmove(v30, a2->pStandardAllocation, Size);
    v36 = 0;
  }
  else
  {
    v36 = 0;
    Size = 0;
    v127 = 0LL;
  }
  if ( a10 )
  {
    if ( (*(_DWORD *)a10 & 0x3000) != 0 )
    {
      if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v12 + 2) + 16LL)) )
      {
        for ( i = 0; i < a2->NumAllocations; v130[v38].Flags.Value |= 0x400u )
        {
          v38 = i++;
          NumAllocations = 88 * v38;
        }
      }
    }
  }
  v39 = *((_QWORD *)v12 + 2);
  v139 = 0LL;
  v138 = 5002;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(NumAllocations, &EventProfilerEnter, (__int64)a3, 5002);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v138, 5002);
  CurrentProcess = PsGetCurrentProcess(v41, v40);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v45 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v47 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v45 = *v47;
      }
    }
  }
  v48 = v45 + 120;
  v49 = 0;
  if ( !v45 )
    v48 = 0LL;
  if ( v48 && *(struct _KTHREAD **)(v48 + 8) == KeGetCurrentThread() )
  {
    v50 = WdLogNewEntry5_WdAssertion(v44);
    *(_QWORD *)(v50 + 24) = 1306LL;
    WdLogEvent5_WdAssertion(v50);
  }
  if ( v45 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v48, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v53 = *(_DWORD *)(v48 + 16);
        if ( v53 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v51, &EventBlockThread, v52, v53);
      }
      ExAcquirePushLockExclusiveEx(v48, 0LL);
    }
    v49 = 2;
    *(_QWORD *)(v48 + 8) = KeGetCurrentThread();
  }
  DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v39 + 16), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v39 + 16) + 4168LL));
  CurrentIrql = KeGetCurrentIrql();
  v56 = 0LL;
  if ( CurrentIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v58 = WdLogNewEntry5_WdAssertion(v54);
      *(_QWORD *)(v58 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v58);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v54);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && !IsThreadCrossSessionAttached()
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      v56 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
      if ( v56 )
        v36 = *(_DWORD *)(v56 + 136);
    }
    else
    {
      v56 = 0LL;
    }
  }
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v140,
    *(struct DXGADAPTER **)(v39 + 16));
  v62 = (*(int (__fastcall **)(_QWORD, void **))(*(_QWORD *)(v39 + 16) + 328LL))(
          *(_QWORD *)(*(_QWORD *)(v39 + 16) + 240LL),
          &v127);
  if ( v140[0] )
    KeUnstackDetachProcess(&ApcState);
  v65 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v65 )
  {
    v66 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v65);
    v66[3] = 275LL;
    v66[4] = 16LL;
    v66[5] = v39;
    v66[6] = CurrentIrql;
    v67 = KeGetCurrentIrql();
    v66[7] = v67;
    WdLogEvent5_WdCriticalError(v66);
  }
  if ( v56 && *(_DWORD *)(v56 + 136) != v36 )
  {
    v68 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v65);
    v68[3] = 275LL;
    v68[4] = 38LL;
    v68[5] = *(int *)(v56 + 136);
    v68[6] = v36;
    v68[7] = 0LL;
    WdLogEvent5_WdCriticalError(v68);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v39 + 16) + 4168LL));
  v69 = (_QWORD *)WdLogNewEntry5_WdTrace(v65, v61, v63, v64);
  v69[3] = v62;
  v69[4] = v131;
  v69[5] = v130->hAllocation;
  v69[6] = v130->Flags.Value;
  v70 = v130;
  v69[7] = v130->PreferredSegment.Value;
  if ( (_DWORD)v62 && (_DWORD)v62 != -1073741811 && (_DWORD)v62 != -1073741801 )
  {
    v71 = WdLogNewEntry5_WdError(v70);
    *(_QWORD *)(v71 + 24) = v62;
    WdLogEvent5_WdError(v71);
  }
  DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v39 + 16));
  if ( v49 == 2 )
  {
    *(_QWORD *)(v48 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v48, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v138);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v72, &EventProfilerExit, v73, v138);
  v35 = v62;
  if ( (int)v62 >= 0 )
  {
    v74 = v133;
    v75 = 0;
    v76 = v137;
    v77 = v135;
    v78 = v137;
    if ( v133->NumAllocations )
    {
      v79 = v136;
      v80 = v134;
      while ( 1 )
      {
        v81 = v75;
        v82 = &v80[v75];
        *(_QWORD *)(*((_QWORD *)v78 + 6) + 16LL) = v82->hAllocation;
        *(_QWORD *)(*((_QWORD *)v78 + 6) + 24LL) = v82->pAllocationUsageHint;
        *(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) = *(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) & 0xFFFFF7FF | ((v82->Flags.Value & 0x30) != 0 ? 0x800 : 0);
        *(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) ^ (v82->Flags.Value << 17)) & 0x80000;
        v82->Flags.Value &= 0x807FFFFu;
        Value = v82->Flags.Value;
        v84 = *(_QWORD *)(*((_QWORD *)v79 + 2) + 16LL);
        if ( (*(_DWORD *)(v84 + 1836) & 0x40) != 0 && *(_BYTE *)(v84 + 2398) )
        {
          Value |= 0x8000u;
          v82->Flags.Value = Value;
        }
        v85 = Value;
        if ( (Value & 0x8000) != 0 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v79 + 2) + 16LL) + 2399LL) )
        {
          v85 = Value | 0x10000;
          v82->Flags.Value = Value | 0x10000;
        }
        if ( a10 )
        {
          if ( (*(_DWORD *)a10 & 0x1000) != 0 )
            v82->Flags.Value = v85 | 0x20000;
          v86 = *((_DWORD *)a10 + 94);
          if ( v86 )
          {
            v82->SupportedWriteSegmentSet = v86;
            v82->PreferredSegment.Value = *((_DWORD *)a10 + 95);
          }
          v87 = *((_DWORD *)a10 + 96);
          if ( v87 )
            v82->Alignment = v87;
          if ( (*(_DWORD *)a10 & 0x2000) != 0 )
          {
            v88 = *((_QWORD *)v76 + 12 * v75 + 6);
            *(_DWORD *)(v88 + 4) |= 0x8000u;
          }
          v89 = *((_QWORD *)a10 + 49);
          if ( v89 )
            v82->Size = v89;
          if ( *((_DWORD *)a10 + 4) == 5 )
          {
            v90 = *((_QWORD *)v76 + 12 * v75 + 6);
            *(_DWORD *)(v90 + 4) |= 0x10000u;
            v80[v75].Flags.Value |= 0x8000u;
          }
        }
        Flags = (unsigned int)v74->Flags;
        if ( (Flags & 0x10000) != 0 )
        {
          if ( v82->Size != a12->ExistingHeapData.Size )
          {
            v116 = (_QWORD *)WdLogNewEntry5_WdError(Flags);
            v116[3] = v80[v81].Size;
            v116[4] = a12->ExistingHeapData.Size;
LABEL_179:
            v116[5] = -1073741811LL;
            WdLogEvent5_WdError(v116);
            v35 = -1073741811;
            goto LABEL_195;
          }
          if ( (Flags & 0x20020) != 0 )
            goto LABEL_108;
        }
        if ( a10 && *((_QWORD *)a10 + 53) )
LABEL_108:
          v82->Flags.Value |= 1u;
        if ( *((_DWORD *)v79 + 82) == 2
          && (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(*(DXGADAPTER **)(*((_QWORD *)v79 + 2) + 16LL)) > 1
          && !DXGADAPTER::ReplicateGdiContent(v92)
          && (v126[v81].Flags.Value & 1) == 0 )
        {
          v80[v81].MaximumRenamingListLength = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v79 + 2) + 16LL) + 2484LL);
        }
        if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v79 + 2) + 16LL)) )
          *((_DWORD *)v78 + 18) ^= (*((_DWORD *)v78 + 18) ^ (v82->MaximumRenamingListLength << 12)) & 0x3F000;
        else
          *((_DWORD *)v78 + 18) &= 0xFFFC0FFF;
        v95 = v82->Flags.Value;
        if ( (v95 & 0x200) != 0
          && (v96 = *(__int64 (__fastcall ***)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(*((_QWORD *)v79 + 2) + 16LL),
              v96[69] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange)
          || (v95 & 0x100) != 0
          && (!DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*((_QWORD *)v79 + 2) + 16LL))
           || v96[71] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           || v96[79] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           || v96[78] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           || v96[77] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange) )
        {
          v117 = (_QWORD *)WdLogNewEntry5_WdError(v96);
          v117[3] = v79;
          v117[4] = *(_QWORD *)(*((_QWORD *)v79 + 2) + 16LL);
          v117[5] = -1073741637LL;
          WdLogEvent5_WdError(v117);
          v35 = -1073741637;
          goto LABEL_195;
        }
        v97 = *((_QWORD *)v78 + 6);
        if ( !*(_QWORD *)(v97 + 16) )
        {
          v116 = (_QWORD *)WdLogNewEntry5_WdError(v97);
          v116[3] = v79;
          v116[4] = v78;
          goto LABEL_179;
        }
        v98 = v93 + 96 * v81;
        v99 = *(_DWORD *)(v98 + 32);
        if ( (v99 & 2) != 0 )
        {
          *(_DWORD *)(v97 + 4) |= 0x1000u;
          v99 = *(_DWORD *)(v98 + 32);
        }
        if ( (v99 & 1) == 0 || (v82->Flags.Value & 0x100) != 0 )
        {
          if ( (*(_DWORD *)&v74->Flags & 2) != 0 )
            v82->Flags.Value |= 0x20000000u;
        }
        else
        {
          v100 = v74->Flags;
          v101 = 0;
          v102 = *(_DWORD *)(v98 + 28);
          if ( (*(_BYTE *)&v100 & 2) != 0 )
          {
            v106 = *((_DWORD *)v79 + 82);
            if ( v106 == 2 )
            {
              *(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) |= 2u;
              v82->Flags.Value |= 0x40000000u;
            }
            else
            {
              if ( (*(_WORD *)&v100 & 0x800) != 0 )
              {
                if ( (*(_WORD *)&v100 & 0x400) != 0 )
                {
                  if ( v106 == 1 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v79 + 2) + 16LL) + 2307LL) )
                    v107 = 0x2000;
                  else
                    v107 = 0;
                  *(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) = v107 | *(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) & 0xFFFFDFFF;
                  v106 = *((_DWORD *)v79 + 82);
                }
                else
                {
                  *(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) |= 1u;
                  v82->Flags.Value |= 0x80000u;
                  v106 = *((_DWORD *)v79 + 82);
                }
              }
              else if ( v106 == 1 )
              {
                if ( (*(_WORD *)&v100 & 0x400) != 0 )
                {
                  if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v79 + 2) + 16LL) + 2307LL) )
                    *(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) |= 0x2000u;
                }
                else
                {
                  *(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) |= 1u;
                }
                v106 = *((_DWORD *)v79 + 82);
                v101 = v106 == 1;
              }
              v108 = 0;
              if ( v106 == 1 )
                v108 = 0x80000000;
              v109 = v82->Flags.Value & 0x7FFFFFFF | v108;
              v110 = 0;
              v82->Flags.Value = v109;
              if ( !*((_DWORD *)v79 + 82) )
                v110 = 0x40000000;
              v82->Flags.Value = v109 & 0xBFFFFFFF | v110 | 0x20000000;
            }
          }
          else
          {
            v103 = 0;
            *(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) |= 1u;
            if ( *((_DWORD *)v79 + 82) == 1 )
              v103 = 0x80000000;
            v104 = v82->Flags.Value & 0x7FFFFFFF | v103;
            v105 = 0;
            v82->Flags.Value = v104;
            if ( !*((_DWORD *)v79 + 82) )
              v105 = 0x40000000;
            v82->Flags.Value = v104 & 0xBFFFFFFF | v105;
            v101 = *((_DWORD *)v79 + 82) == 1;
          }
          v111 = *(_QWORD *)(*((_QWORD *)v79 + 2) + 16LL);
          if ( *((_QWORD *)v79 + 211) != v111 )
          {
            *(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) |= 4u;
            v112 = v82->Flags.Value & 0x3DFFFFFF | 0x2000000;
            v82->Flags.Value = v112;
            v111 = *(unsigned int *)(*((_QWORD *)v78 + 6) + 4LL);
            if ( (v111 & 2) != 0 )
              v82->Flags.Value = v112 | 0x20400000;
            v101 = 0;
          }
          if ( v102 == -3 )
          {
            if ( !v101 )
            {
              v118 = WdLogNewEntry5_WdError(v111);
              *(_QWORD *)(v118 + 24) = v79;
              *(_QWORD *)(v118 + 32) = -1073741811LL;
              WdLogEvent5_WdError(v118);
              v35 = -1073741811;
              goto LABEL_195;
            }
            *(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) |= 0x100000u;
            v113 = *(_QWORD *)(*((_QWORD *)v79 + 211) + 2456LL);
            v114 = 500LL;
            if ( *(_DWORD *)(v113 + 508) )
              v114 = 512LL;
            *(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) ^ (*(_DWORD *)(v114 + v113) << 6)) & 0x3C0;
          }
          else
          {
            *(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) ^ (v102 << 6)) & 0x3C0;
          }
        }
        if ( v77 && (*((_DWORD *)v77 + 1) & 8) != 0 )
          v82->Flags.Value |= 0x88000u;
        v115 = v74->Flags;
        if ( (*(_WORD *)&v115 & 0x1800) != 0 )
        {
          v82->Flags.Value |= 0x20100000u;
          v115 = v74->Flags;
        }
        if ( (*(_WORD *)&v115 & 0x400) != 0 )
          v80[v81].Flags.Value |= 0x200000u;
        v78 = (struct DXGALLOCATION *)*((_QWORD *)v78 + 8);
        v75 = v94 + 1;
        if ( v75 >= v74->NumAllocations )
          break;
        v76 = v137;
      }
    }
    if ( v77 )
    {
      v119 = v131;
      if ( (*(_DWORD *)&v74->Flags & 2) != 0 )
      {
        v120 = *((_QWORD *)v77 + 7);
        v121 = *(_QWORD *)(v120 + 16);
        if ( v121 && v131 && v131 != v121 )
        {
          v122 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v120);
          v122[3] = 275LL;
          v122[4] = 7LL;
          v122[5] = 0LL;
          v122[6] = 0LL;
          v122[7] = 0LL;
          WdLogEvent5_WdCriticalError(v122);
          v120 = *((_QWORD *)v77 + 7);
          v119 = v131;
        }
        *(_QWORD *)(v120 + 16) = v119;
      }
      else
      {
        v123 = *((_QWORD *)v77 + 7);
        if ( v123 && v131 && v123 != v131 )
        {
          v124 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v123);
          v124[3] = 275LL;
          v124[4] = 7LL;
          v124[5] = 0LL;
          v124[6] = 0LL;
          v124[7] = 0LL;
          WdLogEvent5_WdCriticalError(v124);
          v119 = v131;
        }
        *((_QWORD *)v77 + 7) = v119;
      }
    }
  }
LABEL_195:
  operator delete[](v127);
  return v35;
}
