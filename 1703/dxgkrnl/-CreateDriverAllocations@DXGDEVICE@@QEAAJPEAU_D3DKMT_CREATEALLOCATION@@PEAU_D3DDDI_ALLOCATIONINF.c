/*
 * XREFs of ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXPEBU_D3DKM_CREATESTANDARDALLOCATION@@H@Z @ 0x1C00C6A70
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6@Z @ 0x1C00C44B0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0005450 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0005D94 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C00062BC (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00062F0 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
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
        int a11)
{
  DXGDEVICE *v11; // rsi
  struct DXGRESOURCE *v12; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  UINT v19; // ebx
  struct _DXGK_ALLOCATIONINFO *v20; // rsi
  UINT v21; // eax
  __int64 v22; // r8
  void *v23; // rcx
  __int64 v24; // rsi
  __int64 CurrentProcess; // rax
  __int64 v26; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdi
  __int64 v33; // rbx
  int v34; // r12d
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned __int8 CurrentIrql; // r13
  __int64 v42; // rdi
  struct _KTHREAD *CurrentThread; // rdi
  int CurrentProcessSessionId; // r14d
  __int64 ThreadWin32Thread; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r14
  __int64 v50; // rcx
  _QWORD *v51; // rax
  struct _DXGK_ALLOCATIONINFO *v52; // rcx
  __int64 Value; // rdx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  unsigned int v57; // r13d
  struct DXGALLOCATION *v58; // r12
  __int64 v59; // r9
  struct DXGALLOCATION *v60; // rdi
  struct DXGRESOURCE *v61; // rsi
  DXGDEVICE *v62; // rbx
  struct _DXGK_ALLOCATIONINFO *v63; // r11
  struct _DXGK_ALLOCATIONINFO *v64; // r8
  int v65; // edx
  int v66; // edx
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  _QWORD *v70; // rax
  bool v72; // zf
  __int64 v73; // rax
  __int64 (__fastcall **v74)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  __int64 v75; // r9
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // rdx
  UINT v80; // eax
  UINT v81; // eax
  SIZE_T v82; // rax
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rcx
  __int64 v87; // rax
  D3DKMT_CREATEALLOCATIONFLAGS Flags; // r10d
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // edx
  unsigned int v90; // ecx
  int v91; // eax
  int v92; // ecx
  unsigned int v93; // eax
  __int64 v94; // rax
  int v95; // eax
  __int64 v96; // rax
  void *v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  _QWORD *v102; // rax
  UINT v104; // r9d
  UINT v105; // edx
  __int64 v106; // rax
  __int64 *ThreadProperty; // rax
  __int64 v108; // rax
  int v109; // r9d
  __int64 v110; // rax
  _QWORD *v111; // rax
  unsigned __int8 v112; // cl
  _QWORD *v113; // rax
  __int64 v114; // rax
  _QWORD *v115; // rax
  int v116; // r10d
  __int64 v117; // rax
  int v118; // ecx
  int v119; // r10d
  _QWORD *v120; // rax
  _QWORD *v121; // rax
  _QWORD *v122; // rax
  int v123; // [rsp+20h] [rbp-99h]
  struct _D3DDDI_ALLOCATIONINFO2 *v124; // [rsp+28h] [rbp-91h]
  PVOID P; // [rsp+30h] [rbp-89h] BYREF
  UINT Size; // [rsp+38h] [rbp-81h]
  UINT Size_4; // [rsp+3Ch] [rbp-7Dh]
  struct _DXGK_ALLOCATIONINFO *v128; // [rsp+40h] [rbp-79h]
  __int64 v129; // [rsp+48h] [rbp-71h]
  int v130; // [rsp+50h] [rbp-69h]
  struct _DXGK_ALLOCATIONINFO *v131; // [rsp+58h] [rbp-61h]
  struct DXGRESOURCE *v132; // [rsp+60h] [rbp-59h]
  DXGDEVICE *v133; // [rsp+68h] [rbp-51h]
  struct DXGALLOCATION *v134; // [rsp+70h] [rbp-49h]
  char v135[8]; // [rsp+78h] [rbp-41h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-39h] BYREF

  v11 = this;
  v12 = a6;
  v134 = a5;
  v14 = *((_QWORD *)this + 2);
  v133 = this;
  v131 = a4;
  v124 = a3;
  v15 = *(_QWORD *)(v14 + 16);
  v132 = a6;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v15 + 160) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v15 + 144)) )
    {
      v96 = WdLogNewEntry5_WdAssertion(v15, v16, v17, v18);
      *(_QWORD *)(v96 + 24) = 2764LL;
      WdLogEvent5_WdAssertion(v96);
    }
    a3 = v124;
  }
  v19 = 0;
  P = 0LL;
  if ( a2->NumAllocations )
  {
    v20 = v131;
    do
    {
      v15 = (__int64)&a3[v19];
      if ( *(_QWORD *)(v15 + 16) )
      {
        v21 = *(_DWORD *)(v15 + 24);
        v22 = v19;
        v20[v22].PrivateDriverDataSize = v21;
        if ( a11 )
        {
          v23 = a7[v19];
          v20[v22].pPrivateDriverData = v23;
          memmove(v23, a8[v19], v21);
        }
        else
        {
          v20[v22].pPrivateDriverData = *(void **)(v15 + 16);
        }
        a3 = v124;
      }
      ++v19;
    }
    while ( v19 < a2->NumAllocations );
    v11 = v133;
    v12 = v132;
  }
  v130 = 0;
  if ( v12 )
  {
    v72 = (*((_DWORD *)v12 + 1) & 1) == 0;
    v73 = *((_QWORD *)v12 + 7);
    v130 = 1;
    if ( v72 )
    {
      v129 = v73;
    }
    else
    {
      v15 = *(_QWORD *)(v73 + 16);
      v129 = v15;
    }
  }
  else
  {
    v129 = 0LL;
  }
  Size_4 = a2->NumAllocations;
  v128 = v131;
  if ( a2->PrivateDriverDataSize && a2->pStandardAllocation )
  {
    Size = a2->PrivateDriverDataSize;
    v97 = operator new(Size, 0x4B677844u, PagedPool);
    P = v97;
    if ( !v97 )
    {
      v102 = (_QWORD *)WdLogNewEntry5_WdWarning(v99, v98, v100, v101);
      v57 = -1073741801;
      v102[3] = v11;
      v102[4] = Size;
      v102[5] = -1073741801LL;
      WdLogEvent5_WdWarning(v102);
      goto LABEL_60;
    }
    if ( a11 )
      memmove(v97, Src, Size);
    else
      memmove(v97, a2->pStandardAllocation, Size);
  }
  else
  {
    Size = 0;
    P = 0LL;
  }
  if ( a10 )
  {
    if ( (*(_DWORD *)a10 & 0x3000) != 0 )
    {
      if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v11 + 2) + 16LL)) )
      {
        v105 = v104;
        if ( a2->NumAllocations )
        {
          do
          {
            v106 = v105++;
            v15 = 88 * v106;
            v128[v106].Flags.Value |= 0x400u;
          }
          while ( v105 < a2->NumAllocations );
        }
      }
    }
  }
  v24 = *((_QWORD *)v11 + 2);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v15, &EventProfilerEnter, (__int64)a3, 5002);
  CurrentProcess = PsGetCurrentProcess(v15);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v26);
  v32 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v32 = *ThreadProperty;
    }
  }
  if ( v32 )
    v33 = v32 + 88;
  else
    v33 = 0LL;
  v34 = 0;
  if ( v33 && *(struct _KTHREAD **)(v33 + 8) == KeGetCurrentThread() )
  {
    v108 = WdLogNewEntry5_WdAssertion(v29, v28, v30, v31);
    *(_QWORD *)(v108 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v108);
  }
  if ( v32 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v33, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v109 = *(_DWORD *)(v33 + 16);
        if ( v109 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v35, &EventBlockThread, v36, v109);
      }
      ExAcquirePushLockExclusiveEx(v33, 0LL);
    }
    v34 = 2;
    *(_QWORD *)(v33 + 8) = KeGetCurrentThread();
  }
  DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v24 + 16), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v24 + 16) + 3892LL));
  CurrentIrql = KeGetCurrentIrql();
  v42 = 0LL;
  if ( CurrentIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v110 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
      *(_QWORD *)(v110 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v110);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v38, v37, v39, v40);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      v42 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
      if ( v42 )
      {
        v123 = *(_DWORD *)(v42 + 136);
        goto LABEL_38;
      }
    }
    else
    {
      v42 = 0LL;
    }
  }
  v123 = 0;
LABEL_38:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v135,
    *(struct DXGADAPTER **)(v24 + 16));
  v49 = (*(int (__fastcall **)(_QWORD, PVOID *))(*(_QWORD *)(v24 + 16) + 328LL))(
          *(_QWORD *)(*(_QWORD *)(v24 + 16) + 240LL),
          &P);
  if ( v135[0] )
    KeUnstackDetachProcess(&ApcState);
  v50 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v50 )
  {
    v111 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v50, v46, v47);
    v111[3] = 275LL;
    v111[4] = 16LL;
    v111[5] = v24;
    v111[6] = CurrentIrql;
    v112 = KeGetCurrentIrql();
    v111[7] = v112;
    WdLogEvent5_WdCriticalError(v111);
  }
  if ( v42 && *(_DWORD *)(v42 + 136) != v123 )
  {
    v113 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v50, v46, v47);
    v113[3] = 275LL;
    v113[4] = 25LL;
    v113[5] = *(int *)(v42 + 136);
    v113[6] = v123;
    v113[7] = 0LL;
    WdLogEvent5_WdCriticalError(v113);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v24 + 16) + 3892LL));
  v51 = (_QWORD *)WdLogNewEntry5_WdTrace(v50, v46, v47, v48);
  v51[3] = v49;
  v51[4] = v129;
  v51[5] = v128->hAllocation;
  v51[6] = v128->Flags.Value;
  v52 = v128;
  Value = v128->PreferredSegment.Value;
  v51[7] = Value;
  if ( (_DWORD)v49 && (_DWORD)v49 != -1073741811 && (_DWORD)v49 != -1073741801 )
  {
    v114 = WdLogNewEntry5_WdError(v52, Value);
    *(_QWORD *)(v114 + 24) = v49;
    WdLogEvent5_WdError(v114);
  }
  DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v24 + 16));
  if ( v34 == 2 )
  {
    *(_QWORD *)(v33 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v33, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v55, &EventProfilerExit, v56, 5002);
  v57 = v49;
  if ( (int)v49 >= 0 )
  {
    v58 = v134;
    v59 = 0LL;
    v60 = v134;
    v61 = v132;
    if ( a2->NumAllocations )
    {
      v62 = v133;
      v63 = v131;
      while ( 1 )
      {
        v64 = &v63[(unsigned int)v59];
        *(_QWORD *)(*((_QWORD *)v60 + 6) + 16LL) = v64->hAllocation;
        *(_QWORD *)(*((_QWORD *)v60 + 6) + 24LL) = v64->pAllocationUsageHint;
        if ( (v64->Flags.Value & 0x30) != 0 )
          v65 = 2048;
        else
          v65 = 0;
        *(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) = v65 | *(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) & 0xFFFFF7FF;
        *(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) ^ (v64->Flags.Value << 17)) & 0x80000;
        v66 = v64->Flags.Value & 0x807FFFF;
        v64->Flags.Value = v66;
        v67 = *(_QWORD *)(*((_QWORD *)v62 + 2) + 16LL);
        if ( (*(_DWORD *)(v67 + 1676) & 0x40) != 0 && *(_BYTE *)(v67 + 2230) )
          v64->Flags.Value = v66 | 0x8000;
        v68 = v64->Flags.Value;
        if ( (v68 & 0x8000) != 0 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v62 + 2) + 16LL) + 2231LL) )
        {
          LODWORD(v68) = v68 | 0x10000;
          v64->Flags.Value = v68;
        }
        v69 = v64->Flags.Value;
        if ( (v64->Flags.Value & 0x18000) == 0x10000 )
        {
          v70 = (_QWORD *)WdLogNewEntry5_WdError(v69, v68);
          v70[3] = v62;
          v70[4] = *(_QWORD *)(*((_QWORD *)v62 + 2) + 16LL);
          v70[5] = -1073741811LL;
          v70[6] = 2929LL;
          WdLogEvent5_WdError(v70);
          v57 = -1073741811;
          goto LABEL_60;
        }
        if ( a10 )
        {
          if ( (*(_DWORD *)a10 & 0x1000) != 0 )
            v64->Flags.Value = v69 | 0x20000;
          v80 = *((_DWORD *)a10 + 94);
          if ( v80 )
          {
            v64->SupportedWriteSegmentSet = v80;
            v64->PreferredSegment.Value = *((_DWORD *)a10 + 95);
          }
          v81 = *((_DWORD *)a10 + 96);
          if ( v81 )
            v64->Alignment = v81;
          if ( (*(_DWORD *)a10 & 0x2000) != 0 )
            *(_DWORD *)(*((_QWORD *)v58 + 12 * v59 + 6) + 4LL) |= 0x8000u;
          v82 = *((_QWORD *)a10 + 49);
          if ( v82 )
            v64->Size = v82;
          if ( *((_DWORD *)a10 + 4) == 5 )
          {
            *(_DWORD *)(*((_QWORD *)v58 + 12 * v59 + 6) + 4LL) |= 0x10000u;
            v64->Flags.Value |= 0x8000u;
          }
        }
        if ( *((_DWORD *)v62 + 82) == 2
          && (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(*(DXGADAPTER **)(*((_QWORD *)v62 + 2) + 16LL)) > 1
          && !*(_BYTE *)(v83 + 2210)
          && (v124[v85].Flags.Value & 1) == 0 )
        {
          *(_DWORD *)(v84 + 52) = *(_DWORD *)(v83 + 2308);
        }
        if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v62 + 2) + 16LL)) )
          *((_DWORD *)v60 + 18) ^= (*((_DWORD *)v60 + 18) ^ (*(_DWORD *)(v56 + 52) << 12)) & 0x3F000;
        else
          *((_DWORD *)v60 + 18) &= 0xFFFC0FFF;
        v76 = *(unsigned int *)(v56 + 64);
        if ( (v76 & 0x200) != 0
          && (v74 = *(__int64 (__fastcall ***)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(*((_QWORD *)v62 + 2) + 16LL),
              v74[69] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange)
          || (v76 & 0x100) != 0
          && (!DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*((_QWORD *)v62 + 2) + 16LL))
           || v74[71] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           || v74[79] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           || v74[78] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           || v74[77] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange) )
        {
          v115 = (_QWORD *)WdLogNewEntry5_WdError(v74, v76);
          v115[3] = v62;
          v115[4] = *(_QWORD *)(*((_QWORD *)v62 + 2) + 16LL);
          v115[5] = -1073741637LL;
          WdLogEvent5_WdError(v115);
          v57 = -1073741637;
          goto LABEL_60;
        }
        v54 = *((_QWORD *)v60 + 6);
        if ( !*(_QWORD *)(v54 + 16) )
        {
          v120 = (_QWORD *)WdLogNewEntry5_WdError(v74, v54);
          v120[3] = v62;
          v120[4] = v60;
          v120[5] = -1073741811LL;
          WdLogEvent5_WdError(v120);
          v57 = -1073741811;
          goto LABEL_60;
        }
        v77 = v75;
        if ( (v124[v75].Flags.Value & 2) != 0 )
          *(_DWORD *)(v54 + 4) |= 0x1000u;
        if ( (v124[v77].Flags.Value & 1) == 0 || (*(_DWORD *)(v56 + 64) & 0x100) != 0 )
        {
          if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
            *(_DWORD *)(v56 + 64) |= 0x20000000u;
          goto LABEL_85;
        }
        Flags = a2->Flags;
        VidPnSourceId = v124[v77].VidPnSourceId;
        if ( (*(_BYTE *)&Flags & 2) == 0 )
          break;
        v95 = *((_DWORD *)v62 + 82);
        if ( v95 != 2 )
        {
          if ( (*(_WORD *)&Flags & 0x800) != 0 )
          {
            if ( (*(_WORD *)&Flags & 0x400) != 0 )
            {
              if ( v95 == 1 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v62 + 2) + 16LL) + 2147LL) )
                v116 = 0x2000;
              else
                v116 = 0;
              *(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) = v116 | *(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) & 0xFFFFDFFF;
            }
            else
            {
              *(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) |= 1u;
              *(_DWORD *)(v56 + 64) |= 0x80000u;
            }
          }
          else if ( v95 == 1 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v62 + 2) + 16LL) + 2147LL) )
          {
            v117 = *((_QWORD *)v60 + 6);
            if ( (*(_WORD *)&Flags & 0x400) != 0 )
              *(_DWORD *)(v117 + 4) |= 0x2000u;
            else
              *(_DWORD *)(v117 + 4) |= 1u;
          }
          v118 = *(_DWORD *)(v56 + 64) & 0x7FFFFFFF | ((*((_DWORD *)v62 + 82) == 1) << 31);
          *(_DWORD *)(v56 + 64) = v118;
          v93 = v118 & 0xBFFFFFFF | ((*((_DWORD *)v62 + 82) == 0) << 30) | 0x20000000;
          goto LABEL_122;
        }
        *(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) |= 2u;
        *(_DWORD *)(v56 + 64) |= 0x40000000u;
LABEL_123:
        if ( *((_QWORD *)v62 + 225) != *(_QWORD *)(*((_QWORD *)v62 + 2) + 16LL) )
        {
          *(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) |= 4u;
          v119 = *(_DWORD *)(v56 + 64) & 0x3DFFFFFF | 0x2000000;
          *(_DWORD *)(v56 + 64) = v119;
          if ( (*(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) & 2) != 0 )
            *(_DWORD *)(v56 + 64) = v119 | 0x20400000;
        }
        v94 = *((_QWORD *)v60 + 6);
        v54 = (*(_DWORD *)(v94 + 4) ^ (VidPnSourceId << 6)) & 0x3C0;
        *(_DWORD *)(v94 + 4) ^= v54;
LABEL_85:
        if ( v61 && (*((_DWORD *)v61 + 1) & 8) != 0 )
          *(_DWORD *)(v56 + 64) |= 0x88000u;
        if ( ((*(_DWORD *)&a2->Flags | (*(_DWORD *)&a2->Flags >> 1)) & 0x800) != 0 )
          *(_DWORD *)(v56 + 64) |= 0x20100000u;
        if ( (*(_DWORD *)&a2->Flags & 0x400) != 0 )
          *(_DWORD *)(v56 + 64) |= 0x200000u;
        v60 = (struct DXGALLOCATION *)*((_QWORD *)v60 + 8);
        v59 = (unsigned int)(v75 + 1);
        if ( (unsigned int)v59 >= a2->NumAllocations )
          goto LABEL_91;
      }
      *(_DWORD *)(*((_QWORD *)v60 + 6) + 4LL) |= 1u;
      if ( *((_DWORD *)v62 + 82) == 1 )
        v90 = 0x80000000;
      else
        v90 = 0;
      v91 = v90 | *(_DWORD *)(v56 + 64) & 0x7FFFFFFF;
      *(_DWORD *)(v56 + 64) = v91;
      if ( *((_DWORD *)v62 + 82) )
        v92 = 0;
      else
        v92 = 0x40000000;
      v93 = v92 | v91 & 0xBFFFFFFF;
LABEL_122:
      *(_DWORD *)(v56 + 64) = v93;
      goto LABEL_123;
    }
LABEL_91:
    if ( v61 )
    {
      if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
      {
        v78 = v129;
        v79 = *(_QWORD *)(*((_QWORD *)v61 + 7) + 16LL);
        if ( v79 && v129 && v129 != v79 )
        {
          v121 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v129, v79, v56);
          v121[3] = 275LL;
          v121[4] = 7LL;
          v121[5] = 0LL;
          v121[6] = 0LL;
          v121[7] = 0LL;
          WdLogEvent5_WdCriticalError(v121);
          v78 = v129;
        }
        *(_QWORD *)(*((_QWORD *)v61 + 7) + 16LL) = v78;
      }
      else
      {
        v86 = *((_QWORD *)v61 + 7);
        v87 = v129;
        if ( v86 && v129 && v86 != v129 )
        {
          v122 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v86, v54, v56);
          v122[3] = 275LL;
          v122[4] = 7LL;
          v122[5] = 0LL;
          v122[6] = 0LL;
          v122[7] = 0LL;
          WdLogEvent5_WdCriticalError(v122);
          v87 = v129;
        }
        *((_QWORD *)v61 + 7) = v87;
      }
    }
  }
LABEL_60:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v57;
}
