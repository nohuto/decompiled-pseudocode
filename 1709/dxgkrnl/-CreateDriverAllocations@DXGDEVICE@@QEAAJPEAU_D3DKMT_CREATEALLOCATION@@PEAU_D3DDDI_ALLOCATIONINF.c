/*
 * XREFs of ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXPEBU_D3DKM_CREATESTANDARDALLOCATION@@HPEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1C0099F30
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1C0097830 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0001A40 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002160 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C000281C (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0002850 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateDriverAllocations(
        DXGDEVICE *this,
        unsigned __int64 i,
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
  struct _D3DKMT_CREATEALLOCATION *v14; // r12
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  UINT v19; // ebx
  struct _DXGK_ALLOCATIONINFO *v20; // r13
  UINT v21; // r9d
  __int64 v22; // r8
  void *v23; // rcx
  bool v24; // zf
  UINT PrivateDriverDataSize; // eax
  void *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  _QWORD *v30; // rax
  unsigned int v31; // r15d
  int v32; // r15d
  __int64 v33; // rax
  __int64 v34; // r14
  __int64 CurrentProcess; // rax
  __int64 v36; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 *ThreadProperty; // rax
  __int64 *v41; // rbx
  __int64 v42; // rbx
  int v43; // r13d
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  int v47; // r9d
  __int64 v48; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v50; // rdi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v52; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v55; // rdx
  __int64 v56; // rsi
  __int64 v57; // r8
  __int64 v58; // rcx
  _QWORD *v59; // rax
  unsigned __int8 v60; // cl
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  struct _DXGK_ALLOCATIONINFO *v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  struct _D3DKMT_CREATEALLOCATION *v68; // r10
  UINT v69; // r11d
  struct DXGALLOCATION *v70; // r9
  struct DXGALLOCATION *v71; // rdi
  DXGDEVICE *v72; // rbx
  struct _DXGK_ALLOCATIONINFO *v73; // r12
  __int64 v74; // rsi
  struct _DXGK_ALLOCATIONINFO *v75; // r8
  __int64 v76; // rdx
  UINT Value; // edx
  __int64 v78; // rcx
  UINT v79; // eax
  UINT v80; // eax
  __int64 v81; // rcx
  SIZE_T v82; // rax
  __int64 v83; // rcx
  __int64 Flags; // rcx
  __int64 v85; // rcx
  __int64 v86; // r8
  int v87; // r11d
  int v88; // edx
  __int64 (__fastcall **v89)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  __int64 v90; // rcx
  int v91; // r9d
  int v92; // ecx
  unsigned int v93; // eax
  int v94; // eax
  __int64 v95; // rax
  int v96; // ecx
  struct DXGRESOURCE *v97; // rsi
  __int64 v98; // rcx
  __int64 v99; // rdx
  _QWORD *v100; // rax
  _QWORD *v101; // rax
  _QWORD *v102; // rax
  _QWORD *v103; // rax
  __int64 v104; // rcx
  __int64 v105; // rax
  _QWORD *v106; // rax
  struct _D3DDDI_ALLOCATIONINFO2 *v108; // [rsp+20h] [rbp-99h]
  PVOID P; // [rsp+28h] [rbp-91h] BYREF
  UINT Size; // [rsp+30h] [rbp-89h]
  UINT Size_4; // [rsp+34h] [rbp-85h]
  struct _DXGK_ALLOCATIONINFO *v112; // [rsp+38h] [rbp-81h]
  __int64 v113; // [rsp+40h] [rbp-79h]
  int v114; // [rsp+48h] [rbp-71h]
  struct _DXGK_ALLOCATIONINFO *v115; // [rsp+50h] [rbp-69h]
  struct DXGRESOURCE *v116; // [rsp+58h] [rbp-61h]
  DXGDEVICE *v117; // [rsp+60h] [rbp-59h]
  struct DXGALLOCATION *v118; // [rsp+68h] [rbp-51h]
  struct _D3DKMT_CREATEALLOCATION *v119; // [rsp+70h] [rbp-49h]
  char v120[8]; // [rsp+78h] [rbp-41h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-39h] BYREF

  v12 = this;
  v13 = a6;
  v14 = (struct _D3DKMT_CREATEALLOCATION *)i;
  v118 = a5;
  v15 = *((_QWORD *)this + 2);
  v117 = this;
  v115 = a4;
  v108 = a3;
  v16 = *(_QWORD *)(v15 + 16);
  v119 = (struct _D3DKMT_CREATEALLOCATION *)i;
  v116 = a6;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v16 + 160) )
  {
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v16 + 144)) )
    {
      v17 = WdLogNewEntry5_WdAssertion(v16);
      *(_QWORD *)(v17 + 24) = 2855LL;
      WdLogEvent5_WdAssertion(v17);
    }
    a3 = v108;
  }
  v18 = 0LL;
  v19 = 0;
  P = 0LL;
  if ( v14->NumAllocations )
  {
    v20 = v115;
    do
    {
      i = v19;
      v16 = (__int64)&a3[v19];
      if ( *(_QWORD *)(v16 + 16) )
      {
        v21 = *(_DWORD *)(v16 + 24);
        v22 = v19;
        v20[v22].PrivateDriverDataSize = v21;
        if ( !a11 || (*(_DWORD *)&v14->Flags & 0x10000) != 0 )
        {
          v20[v22].pPrivateDriverData = *(void **)(v16 + 16);
        }
        else
        {
          v23 = a7[v19];
          v20[v22].pPrivateDriverData = v23;
          memmove(v23, a8[v19], v21);
        }
        a3 = v108;
      }
      ++v19;
    }
    while ( v19 < v14->NumAllocations );
    v12 = v117;
    v18 = 0LL;
    v13 = v116;
  }
  v114 = 0;
  if ( !v13 || (v24 = (*((_DWORD *)v13 + 1) & 1) == 0, v18 = *((_QWORD *)v13 + 7), v114 = 1, v24) )
  {
    v113 = v18;
  }
  else
  {
    v16 = *(_QWORD *)(v18 + 16);
    v113 = v16;
  }
  Size_4 = v14->NumAllocations;
  v112 = v115;
  PrivateDriverDataSize = v14->PrivateDriverDataSize;
  if ( PrivateDriverDataSize && v14->pStandardAllocation )
  {
    Size = v14->PrivateDriverDataSize;
    v26 = operator new(PrivateDriverDataSize, 0x4B677844u, PagedPool);
    P = v26;
    if ( !v26 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29);
      v31 = -1073741801;
      v30[3] = v12;
      v30[4] = Size;
      v30[5] = -1073741801LL;
      WdLogEvent5_WdWarning(v30);
      goto LABEL_181;
    }
    if ( a11 )
      memmove(v26, Src, Size);
    else
      memmove(v26, v14->pStandardAllocation, Size);
    v32 = 0;
  }
  else
  {
    v32 = 0;
    Size = 0;
    P = 0LL;
  }
  if ( a10 )
  {
    if ( (*(_DWORD *)a10 & 0x3000) != 0 )
    {
      if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v12 + 2) + 16LL)) )
      {
        for ( i = 0LL; (unsigned int)i < v14->NumAllocations; v112[v33].Flags.Value |= 0x400u )
        {
          v33 = (unsigned int)i;
          i = (unsigned int)(i + 1);
          v16 = 88 * v33;
        }
      }
    }
  }
  v34 = *((_QWORD *)v12 + 2);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v16, &EventProfilerEnter, (__int64)a3, 5002);
  CurrentProcess = PsGetCurrentProcess(v16, i);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v36);
  v39 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v41 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v39 = *v41;
      }
    }
  }
  v42 = v39 + 112;
  v43 = 0;
  if ( !v39 )
    v42 = 0LL;
  if ( v42 && *(struct _KTHREAD **)(v42 + 8) == KeGetCurrentThread() )
  {
    v44 = WdLogNewEntry5_WdAssertion(v38);
    *(_QWORD *)(v44 + 24) = 1214LL;
    WdLogEvent5_WdAssertion(v44);
  }
  if ( v39 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v42, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v47 = *(_DWORD *)(v42 + 16);
        if ( v47 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v45, &EventBlockThread, v46, v47);
      }
      ExAcquirePushLockExclusiveEx(v42, 0LL);
    }
    v43 = 2;
    *(_QWORD *)(v42 + 8) = KeGetCurrentThread();
  }
  DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v34 + 16), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v34 + 16) + 3924LL));
  CurrentIrql = KeGetCurrentIrql();
  v50 = 0LL;
  if ( CurrentIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v52 = WdLogNewEntry5_WdAssertion(v48);
      *(_QWORD *)(v52 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v52);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && !IsThreadCrossSessionAttached()
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      v50 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
      if ( v50 )
        v32 = *(_DWORD *)(v50 + 136);
    }
    else
    {
      v50 = 0LL;
    }
  }
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v120,
    *(struct DXGADAPTER **)(v34 + 16));
  v56 = (*(int (__fastcall **)(_QWORD, PVOID *))(*(_QWORD *)(v34 + 16) + 328LL))(
          *(_QWORD *)(*(_QWORD *)(v34 + 16) + 240LL),
          &P);
  if ( v120[0] )
    KeUnstackDetachProcess(&ApcState);
  v58 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v58 )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v58, v55, v57);
    v59[3] = 275LL;
    v59[4] = 16LL;
    v59[5] = v34;
    v59[6] = CurrentIrql;
    v60 = KeGetCurrentIrql();
    v59[7] = v60;
    WdLogEvent5_WdCriticalError(v59);
  }
  if ( v50 && *(_DWORD *)(v50 + 136) != v32 )
  {
    v61 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v58, v55, v57);
    v61[3] = 275LL;
    v61[4] = 25LL;
    v61[5] = *(int *)(v50 + 136);
    v61[6] = v32;
    v61[7] = 0LL;
    WdLogEvent5_WdCriticalError(v61);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v34 + 16) + 3924LL));
  v62 = (_QWORD *)WdLogNewEntry5_WdTrace(v58, v55);
  v62[3] = v56;
  v62[4] = v113;
  v62[5] = v112->hAllocation;
  v62[6] = v112->Flags.Value;
  v63 = v112;
  v62[7] = v112->PreferredSegment.Value;
  if ( (_DWORD)v56 && (_DWORD)v56 != -1073741811 && (_DWORD)v56 != -1073741801 )
  {
    v64 = WdLogNewEntry5_WdError(v63);
    *(_QWORD *)(v64 + 24) = v56;
    WdLogEvent5_WdError(v64);
  }
  DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v34 + 16));
  if ( v43 == 2 )
  {
    *(_QWORD *)(v42 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v42, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v66, &EventProfilerExit, v67, 5002);
  v31 = v56;
  if ( (int)v56 >= 0 )
  {
    v68 = v119;
    v69 = 0;
    v70 = v118;
    v71 = v118;
    if ( v119->NumAllocations )
    {
      v72 = v117;
      v73 = v115;
      while ( 1 )
      {
        v74 = v69;
        v75 = &v73[v69];
        *(_QWORD *)(*((_QWORD *)v71 + 6) + 16LL) = v75->hAllocation;
        *(_QWORD *)(*((_QWORD *)v71 + 6) + 24LL) = v75->pAllocationUsageHint;
        *(_DWORD *)(*((_QWORD *)v71 + 6) + 4LL) = *(_DWORD *)(*((_QWORD *)v71 + 6) + 4LL) & 0xFFFFF7FF | ((v75->Flags.Value & 0x30) != 0 ? 0x800 : 0);
        *(_DWORD *)(*((_QWORD *)v71 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v71 + 6) + 4LL) ^ (v75->Flags.Value << 17)) & 0x80000;
        v75->Flags.Value &= 0x807FFFFu;
        v76 = *(_QWORD *)(*((_QWORD *)v72 + 2) + 16LL);
        if ( (*(_DWORD *)(v76 + 1700) & 0x40) != 0 && *(_BYTE *)(v76 + 2254) )
          v75->Flags.Value |= 0x8000u;
        Value = v75->Flags.Value;
        if ( (Value & 0x8000) != 0 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v72 + 2) + 16LL) + 2255LL) )
          v75->Flags.Value = Value | 0x10000;
        v78 = v75->Flags.Value;
        if ( (v75->Flags.Value & 0x18000) == 0x10000 )
        {
          v103 = (_QWORD *)WdLogNewEntry5_WdError(v78);
          v103[3] = v72;
          v103[4] = *(_QWORD *)(*((_QWORD *)v72 + 2) + 16LL);
          v103[5] = -1073741811LL;
          v103[6] = 3023LL;
          WdLogEvent5_WdError(v103);
          v31 = -1073741811;
          goto LABEL_181;
        }
        if ( a10 )
        {
          if ( (*(_DWORD *)a10 & 0x1000) != 0 )
            v75->Flags.Value = v78 | 0x20000;
          v79 = *((_DWORD *)a10 + 94);
          if ( v79 )
          {
            v75->SupportedWriteSegmentSet = v79;
            v75->PreferredSegment.Value = *((_DWORD *)a10 + 95);
          }
          v80 = *((_DWORD *)a10 + 96);
          if ( v80 )
            v75->Alignment = v80;
          if ( (*(_DWORD *)a10 & 0x2000) != 0 )
          {
            v81 = *((_QWORD *)v70 + 12 * v69 + 6);
            *(_DWORD *)(v81 + 4) |= 0x8000u;
          }
          v82 = *((_QWORD *)a10 + 49);
          if ( v82 )
            v75->Size = v82;
          if ( *((_DWORD *)a10 + 4) == 5 )
          {
            v83 = *((_QWORD *)v70 + 12 * v69 + 6);
            *(_DWORD *)(v83 + 4) |= 0x10000u;
            v75->Flags.Value |= 0x8000u;
          }
        }
        Flags = (unsigned int)v68->Flags;
        if ( (Flags & 0x10000) != 0 )
        {
          if ( v75->Size != a12->ExistingHeapData.Size )
          {
            v101 = (_QWORD *)WdLogNewEntry5_WdError(Flags);
            v101[3] = v73[v74].Size;
            v101[4] = a12->ExistingHeapData.Size;
LABEL_171:
            v101[5] = -1073741811LL;
            WdLogEvent5_WdError(v101);
            v31 = -1073741811;
            goto LABEL_181;
          }
          if ( (Flags & 0x20020) != 0 )
            goto LABEL_108;
        }
        if ( a10 && *((_QWORD *)a10 + 53) )
LABEL_108:
          v75->Flags.Value |= 1u;
        if ( *((_DWORD *)v72 + 82) == 2
          && (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(*(DXGADAPTER **)(*((_QWORD *)v72 + 2) + 16LL)) > 1
          && !*(_BYTE *)(v85 + 2234)
          && (v108[v74].Flags.Value & 1) == 0 )
        {
          *(_DWORD *)(v86 + 52) = *(_DWORD *)(v85 + 2332);
        }
        if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v72 + 2) + 16LL)) )
          *((_DWORD *)v71 + 18) ^= (*((_DWORD *)v71 + 18) ^ (*(_DWORD *)(v67 + 52) << 12)) & 0x3F000;
        else
          *((_DWORD *)v71 + 18) &= 0xFFFC0FFF;
        v88 = *(_DWORD *)(v67 + 64);
        if ( (v88 & 0x200) != 0
          && (v89 = *(__int64 (__fastcall ***)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(*((_QWORD *)v72 + 2) + 16LL),
              v89[69] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange)
          || (v88 & 0x100) != 0
          && (!DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*((_QWORD *)v72 + 2) + 16LL))
           || v89[71] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           || v89[79] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           || v89[78] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
           || v89[77] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange) )
        {
          v102 = (_QWORD *)WdLogNewEntry5_WdError(v89);
          v102[3] = v72;
          v102[4] = *(_QWORD *)(*((_QWORD *)v72 + 2) + 16LL);
          v102[5] = -1073741637LL;
          WdLogEvent5_WdError(v102);
          v31 = -1073741637;
          goto LABEL_181;
        }
        v90 = *((_QWORD *)v71 + 6);
        if ( !*(_QWORD *)(v90 + 16) )
        {
          v101 = (_QWORD *)WdLogNewEntry5_WdError(v90);
          v101[3] = v72;
          v101[4] = v71;
          goto LABEL_171;
        }
        v65 = 96 * v74;
        if ( (v108[v74].Flags.Value & 2) != 0 )
          *(_DWORD *)(v90 + 4) |= 0x1000u;
        if ( (*(UINT *)((_BYTE *)&v108->Flags.Value + v65) & 1) == 0 || (*(_DWORD *)(v67 + 64) & 0x100) != 0 )
        {
          if ( (*(_DWORD *)&v68->Flags & 2) != 0 )
            *(_DWORD *)(v67 + 64) |= 0x20000000u;
          goto LABEL_155;
        }
        v91 = *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v108->VidPnSourceId + v65);
        v65 = (unsigned int)v68->Flags;
        if ( (v65 & 2) != 0 )
        {
          v94 = *((_DWORD *)v72 + 82);
          if ( v94 == 2 )
          {
            *(_DWORD *)(*((_QWORD *)v71 + 6) + 4LL) |= 2u;
            *(_DWORD *)(v67 + 64) |= 0x40000000u;
            goto LABEL_149;
          }
          if ( (v65 & 0x800) != 0 )
          {
            if ( (v65 & 0x400) != 0 )
            {
              if ( v94 == 1 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v72 + 2) + 16LL) + 2171LL) )
                v65 = 0x2000LL;
              else
                v65 = 0LL;
              *(_DWORD *)(*((_QWORD *)v71 + 6) + 4LL) = v65 | *(_DWORD *)(*((_QWORD *)v71 + 6) + 4LL) & 0xFFFFDFFF;
            }
            else
            {
              *(_DWORD *)(*((_QWORD *)v71 + 6) + 4LL) |= 1u;
              *(_DWORD *)(v67 + 64) |= 0x80000u;
            }
          }
          else if ( v94 == 1 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v72 + 2) + 16LL) + 2171LL) )
          {
            v95 = *((_QWORD *)v71 + 6);
            if ( (v65 & 0x400) != 0 )
              *(_DWORD *)(v95 + 4) |= 0x2000u;
            else
              *(_DWORD *)(v95 + 4) |= 1u;
          }
          v96 = *(_DWORD *)(v67 + 64) & 0x7FFFFFFF | ((*((_DWORD *)v72 + 82) == 1) << 31);
          *(_DWORD *)(v67 + 64) = v96;
          v93 = v96 & 0xBFFFFFFF | ((*((_DWORD *)v72 + 82) == 0) << 30) | 0x20000000;
        }
        else
        {
          v65 = 0LL;
          *(_DWORD *)(*((_QWORD *)v71 + 6) + 4LL) |= 1u;
          v92 = *(_DWORD *)(v67 + 64) & 0x7FFFFFFF | ((*((_DWORD *)v72 + 82) == 1) << 31);
          *(_DWORD *)(v67 + 64) = v92;
          v93 = v92 & 0xBFFFFFFF | ((*((_DWORD *)v72 + 82) == 0) << 30);
        }
        *(_DWORD *)(v67 + 64) = v93;
LABEL_149:
        if ( *((_QWORD *)v72 + 209) != *(_QWORD *)(*((_QWORD *)v72 + 2) + 16LL) )
        {
          *(_DWORD *)(*((_QWORD *)v71 + 6) + 4LL) |= 4u;
          v65 = *(_DWORD *)(v67 + 64) & 0x3DFFFFFF;
          LODWORD(v65) = v65 | 0x2000000;
          *(_DWORD *)(v67 + 64) = v65;
          if ( (*(_DWORD *)(*((_QWORD *)v71 + 6) + 4LL) & 2) != 0 )
          {
            v65 = (unsigned int)v65 | 0x20400000;
            *(_DWORD *)(v67 + 64) = v65;
          }
        }
        *(_DWORD *)(*((_QWORD *)v71 + 6) + 4LL) ^= (*(_DWORD *)(*((_QWORD *)v71 + 6) + 4LL) ^ (v91 << 6)) & 0x3C0;
        v70 = v118;
LABEL_155:
        v97 = v116;
        if ( v116 && (*((_DWORD *)v116 + 1) & 8) != 0 )
          *(_DWORD *)(v67 + 64) |= 0x88000u;
        if ( (*(_DWORD *)&v68->Flags & 0x1800) != 0 )
          *(_DWORD *)(v67 + 64) |= 0x20100000u;
        if ( (*(_DWORD *)&v68->Flags & 0x400) != 0 )
          *(_DWORD *)(v67 + 64) |= 0x200000u;
        v71 = (struct DXGALLOCATION *)*((_QWORD *)v71 + 8);
        v69 = v87 + 1;
        if ( v69 >= v68->NumAllocations )
          goto LABEL_163;
      }
    }
    v97 = v116;
LABEL_163:
    if ( v97 )
    {
      if ( (*(_DWORD *)&v68->Flags & 2) != 0 )
      {
        v98 = v113;
        v99 = *(_QWORD *)(*((_QWORD *)v97 + 7) + 16LL);
        if ( v99 && v113 && v113 != v99 )
        {
          v100 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v113, v99, v67);
          v100[3] = 275LL;
          v100[4] = 7LL;
          v100[5] = 0LL;
          v100[6] = 0LL;
          v100[7] = 0LL;
          WdLogEvent5_WdCriticalError(v100);
          v98 = v113;
        }
        *(_QWORD *)(*((_QWORD *)v97 + 7) + 16LL) = v98;
      }
      else
      {
        v104 = *((_QWORD *)v97 + 7);
        v105 = v113;
        if ( v104 && v113 && v104 != v113 )
        {
          v106 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v104, v65, v67);
          v106[3] = 275LL;
          v106[4] = 7LL;
          v106[5] = 0LL;
          v106[6] = 0LL;
          v106[7] = 0LL;
          WdLogEvent5_WdCriticalError(v106);
          v105 = v113;
        }
        *((_QWORD *)v97 + 7) = v105;
      }
    }
  }
LABEL_181:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v31;
}
