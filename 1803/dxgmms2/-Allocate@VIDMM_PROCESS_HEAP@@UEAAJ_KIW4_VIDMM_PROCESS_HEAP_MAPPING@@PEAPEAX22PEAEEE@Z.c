/*
 * XREFs of ?Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C00B7D90
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0016180 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00161A4 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ExAllocateFromPagedLookasideList @ 0x1C0025848 (ExAllocateFromPagedLookasideList.c)
 *     ExFreeToPagedLookasideList @ 0x1C0025884 (ExFreeToPagedLookasideList.c)
 *     McTemplateK0pxqqt @ 0x1C0025D10 (McTemplateK0pxqqt.c)
 *     McTemplateK0qpxp @ 0x1C0025DB8 (McTemplateK0qpxp.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00B8848 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::Allocate(
        __int64 a1,
        ULONG_PTR a2,
        __int64 a3,
        ULONG a4,
        _QWORD *a5,
        _QWORD *a6,
        __int64 a7,
        _BYTE *a8,
        char a9)
{
  int SmallAllocation; // edi
  __int64 v10; // r14
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  ULONG AllocationType; // r12d
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD *v22; // rax
  _QWORD *v23; // r8
  _QWORD *v24; // r9
  _BYTE *v25; // rcx
  ULONG_PTR v26; // rdx
  _QWORD *v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // r13
  __int64 v30; // rbx
  __int64 v31; // rax
  ULONG v32; // ebx
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  int v37; // ecx
  __int64 v38; // rcx
  NTSTATUS inserted; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  PVOID v43; // rcx
  PVOID *v44; // rcx
  _QWORD *v45; // rax
  _QWORD *v46; // rcx
  char v47; // dl
  char v48; // cl
  PVOID v49; // r9
  __int64 v50; // rcx
  __int64 v51; // r8
  ULONG Protect[2]; // [rsp+28h] [rbp-58h]
  __int64 v54; // [rsp+30h] [rbp-50h]
  __int64 v55; // [rsp+38h] [rbp-48h]
  PVOID BaseAddress; // [rsp+40h] [rbp-40h] BYREF
  PVOID Object; // [rsp+48h] [rbp-38h] BYREF
  void *Handle; // [rsp+50h] [rbp-30h] BYREF
  HANDLE v59; // [rsp+58h] [rbp-28h]
  ULONG_PTR v60; // [rsp+60h] [rbp-20h] BYREF
  PPAGED_LOOKASIDE_LIST Lookaside; // [rsp+68h] [rbp-18h]
  int v62; // [rsp+70h] [rbp-10h] BYREF
  __int64 v63; // [rsp+78h] [rbp-8h]
  ULONG v64; // [rsp+C0h] [rbp+40h]
  ULONG_PTR RegionSize; // [rsp+C8h] [rbp+48h] BYREF

  RegionSize = a2;
  SmallAllocation = 0;
  v10 = (unsigned int)a3;
  v63 = 0LL;
  v62 = 8004;
  if ( (qword_1C0047010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, (__int64)&EventProfilerEnter, a3, 8004);
  DXGETWPROFILER_BASE::PushProfilerEntry();
  AllocationType = 0;
  BaseAddress = 0LL;
  Object = 0LL;
  Handle = 0LL;
  v64 = 0;
  v59 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v14);
    v14[3] = RegionSize;
    v14[4] = v10;
    v14[5] = a1;
  }
  v18 = **(_QWORD **)(a1 + 8);
  if ( PsGetCurrentProcess(v14, v13, v15, v16) != v18 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19, v21);
    v22[3] = 270LL;
    v22[4] = 30LL;
    v22[5] = 0LL;
    v22[6] = 0LL;
    v22[7] = 0LL;
    WdLogEvent5_WdCriticalError(v22);
  }
  v23 = a5;
  v24 = a6;
  v25 = a8;
  v26 = RegionSize;
  *a5 = 0LL;
  *v24 = 0LL;
  *v25 = 0;
  if ( v26 < (unsigned int)dword_1C00472C8 )
  {
    SmallAllocation = VIDMM_PROCESS_HEAP::AllocateSmallAllocation(a1, v26, (unsigned int)v10, a4, v23, v24, v25, a9);
LABEL_65:
    LODWORD(v30) = SmallAllocation;
    goto LABEL_66;
  }
  Lookaside = (PPAGED_LOOKASIDE_LIST)(a1 + 64);
  v27 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(a1 + 64));
  v29 = v27;
  if ( v27 )
  {
    memset(v27, 0, 0x70uLL);
    if ( a4 != 3 )
    {
      if ( a4 == 4 )
        goto LABEL_28;
      if ( a4 - 5 > 1 )
      {
        v32 = 4;
        if ( a4 != 2 )
          v32 = 1028;
        v33 = 12288;
        v64 = v32;
        if ( a4 != 2 )
          v33 = 8400896;
        AllocationType = v33 | 0x800000;
        if ( !a9 )
          AllocationType = v33;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, AllocationType, v32) < 0 )
        {
          AllocationType &= ~0x800000u;
          LODWORD(v30) = ZwAllocateVirtualMemory(
                           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                           &BaseAddress,
                           0LL,
                           &RegionSize,
                           AllocationType,
                           v32);
          if ( (int)v30 < 0 )
          {
            BaseAddress = 0LL;
            _InterlockedAdd(&dword_1C004764C, 1u);
            v31 = WdLogNewEntry5_WdLowResource(v34);
            *(_QWORD *)(v31 + 24) = 458LL;
            goto LABEL_12;
          }
        }
        v59 = MmSecureVirtualMemory(BaseAddress, RegionSize, 4u);
        if ( !v59 )
        {
          LODWORD(v30) = -1073741801;
          _InterlockedAdd(&dword_1C004764C, 1u);
          v31 = WdLogNewEntry5_WdLowResource(v35);
          *(_QWORD *)(v31 + 24) = 476LL;
          goto LABEL_12;
        }
LABEL_49:
        *(_DWORD *)v29 |= 1u;
        v44 = (PVOID *)a6;
        v29[7] = RegionSize;
        v29[6] = v59;
        *((_BYTE *)v29 + 72) = 0;
        v29[1] = BaseAddress;
        *((_DWORD *)v29 + 4) = v64;
        *((_DWORD *)v29 + 5) = AllocationType;
        v29[4] = Object;
        v29[5] = Handle;
        v45 = a5;
        *((_DWORD *)v29 + 6) = a4;
        v29[10] = 0LL;
        *v45 = v29;
        *v44 = BaseAddress;
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL) += RegionSize;
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL) += RegionSize;
        ++*(_DWORD *)(*(_QWORD *)(a1 + 8) + 148LL);
        v46 = *(_QWORD **)(a1 + 8);
        if ( a4 == 1 )
        {
          v46[19] += RegionSize;
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 160LL) += RegionSize;
        }
        else if ( a4 == 2 )
        {
          v46[21] += RegionSize;
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 176LL) += RegionSize;
        }
        else
        {
          v46[23] += RegionSize;
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 192LL) += RegionSize;
        }
        if ( bTracingEnabled )
        {
          v47 = (char)BaseAddress;
          v48 = (char)Object;
          v49 = BaseAddress;
          if ( a4 - 3 <= 3 )
            v49 = Object;
          if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          {
            LODWORD(v55) = 0;
            LODWORD(v54) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
            Protect[0] = a4;
            McTemplateK0pxqqt(
              (__int64)Object,
              &EventCreateProcessAllocation,
              v36,
              v49,
              RegionSize,
              *(_QWORD *)Protect,
              v54,
              v55);
            v47 = (char)BaseAddress;
            v48 = (char)Object;
          }
          if ( bTracingEnabled )
          {
            if ( a4 - 3 <= 3 )
              v47 = v48;
            if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              McTemplateK0qpxp(
                *(_QWORD *)(a1 + 8),
                &EventCreateProcessAllocationDetails,
                v36,
                *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
                (char)v29,
                RegionSize,
                v47);
          }
        }
        *a8 = 1;
        goto LABEL_65;
      }
    }
    v37 = 1208221696;
    if ( ((a4 - 4) & 0xFFFFFFFD) != 0 )
    {
LABEL_29:
      v60 = RegionSize;
      LODWORD(v30) = MmCreateSection(&Object, 0LL, 0LL, &v60, 4, v37, -1LL, 0LL);
      if ( (int)v30 < 0 )
      {
        Object = 0LL;
        _InterlockedAdd(&dword_1C0047674, 1u);
        v31 = WdLogNewEntry5_WdLowResource(v38);
        *(_QWORD *)(v31 + 24) = 378LL;
        goto LABEL_12;
      }
      ObfReferenceObject(Object);
      inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, &Handle);
      v30 = inserted;
      if ( inserted < 0 )
      {
        v42 = WdLogNewEntry5_WdAssertion(v41, v40);
        *(_QWORD *)(v42 + 24) = Object;
        *(_QWORD *)(v42 + 32) = v30;
        WdLogEvent5_WdAssertion(v42);
        goto LABEL_35;
      }
      if ( a4 - 5 <= 1 )
      {
        LODWORD(v30) = MmMapViewInSystemSpace(Object, &BaseAddress, &RegionSize);
        if ( (int)v30 < 0 )
          goto LABEL_35;
      }
      goto LABEL_49;
    }
LABEL_28:
    v37 = 134479872;
    goto LABEL_29;
  }
  LODWORD(v30) = -1073741801;
  _InterlockedAdd(&dword_1C00475C0, 1u);
  v31 = WdLogNewEntry5_WdLowResource(v28);
  *(_QWORD *)(v31 + 24) = 340LL;
LABEL_12:
  WdLogEvent5_WdLowResource(v31);
LABEL_35:
  if ( a4 - 3 <= 1 )
    goto LABEL_40;
  if ( a4 == 5 )
    goto LABEL_41;
  if ( a4 == 6 )
  {
LABEL_40:
    if ( a4 - 5 > 1 )
    {
LABEL_43:
      v43 = Object;
      if ( Object )
      {
        if ( Handle )
        {
          ObCloseHandle(Handle, ((unsigned __int64)Handle & 0xFFFFFFFF80000000uLL) == 0);
          v43 = Object;
        }
        ObfDereferenceObject(v43);
      }
      goto LABEL_47;
    }
LABEL_41:
    if ( BaseAddress )
      MmUnmapViewInSystemSpace(BaseAddress);
    goto LABEL_43;
  }
  if ( BaseAddress )
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
LABEL_47:
  if ( v29 )
    ExFreeToPagedLookasideList(Lookaside, v29);
LABEL_66:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v62);
  if ( (qword_1C0047010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v50, (__int64)&EventProfilerExit, v51, v62);
  return (unsigned int)v30;
}
