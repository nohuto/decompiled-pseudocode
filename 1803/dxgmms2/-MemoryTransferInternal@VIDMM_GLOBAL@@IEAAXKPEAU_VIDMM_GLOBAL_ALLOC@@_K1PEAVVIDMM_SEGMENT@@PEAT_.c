/*
 * XREFs of ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00627D8
 * Callers:
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0062910 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C00AFF50 (-ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z.c)
 *     ?ValidateApertureCoherency@VIDMM_GLOBAL@@QEAAJK_KKPEAU_MDL@@PEAK12E@Z @ 0x1C00B55E0 (-ValidateApertureCoherency@VIDMM_GLOBAL@@QEAAJK_KKPEAU_MDL@@PEAK12E@Z.c)
 * Callees:
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C00033CC (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0005148 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     McTemplateK0pppxxq @ 0x1C0024190 (McTemplateK0pppxxq.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C005FD88 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C005FF5C (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C006007C (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0060E60 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0060FAC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C006221C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00A1B04 (-MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEA.c)
 *     ?VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A558C (-VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x1C00A87B8 (-ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::MemoryTransferInternal(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        D3DGPU_VIRTUAL_ADDRESS *a3,
        SIZE_T a4,
        unsigned __int64 a5,
        struct VIDMM_SEGMENT *a6,
        union _LARGE_INTEGER *a7,
        struct _MDL *a8,
        struct VIDMM_SEGMENT *a9,
        union _LARGE_INTEGER *a10,
        struct _MDL *a11,
        DXGK_TRANSFERFLAGS a12)
{
  unsigned int v13; // r15d
  LONGLONG QuadPart; // rdx
  LONGLONG v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // rax
  struct VIDMM_SEGMENT *v21; // r14
  _QWORD *v22; // rax
  UINT Value; // eax
  D3DGPU_VIRTUAL_ADDRESS v24; // rax
  D3DGPU_VIRTUAL_ADDRESS v25; // rax
  struct _MDL *v26; // rax
  struct _MDL *v27; // rax
  BOOL v28; // ecx
  int v29; // eax
  ADAPTER_RENDER *v30; // rcx
  __int64 v31; // rcx
  int v32; // eax
  int v33; // r14d
  __int64 v34; // r15
  HANDLE CurrentProcessId; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  struct VIDMM_SEGMENT *v38; // [rsp+40h] [rbp-C0h]
  struct _DXGK_TRANSFERFLAGS v39; // [rsp+60h] [rbp-A0h]
  __int64 v40; // [rsp+70h] [rbp-90h]
  struct _DXGKARG_BUILDPAGINGBUFFER v41; // [rsp+80h] [rbp-80h] BYREF
  int v42; // [rsp+200h] [rbp+100h]

  v13 = a2;
  v40 = a2;
  if ( (*(_BYTE *)(1560LL * a2 + *((_QWORD *)this + 5090) + 436) & 4) == 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a3;
      v19 = WdLogNewEntry5_WdTrace(v18);
      *(_QWORD *)(v19 + 24) = a4;
      *(_QWORD *)(v19 + 32) = a5;
      v20 = (_QWORD *)WdLogNewEntry5_WdTrace(a5);
      v21 = a6;
      v20[4] = a7;
      v20[5] = a8;
      v20[3] = a6;
      v22 = (_QWORD *)WdLogNewEntry5_WdTrace(a8);
      v22[4] = a10;
      v22[5] = a11;
      v22[3] = a9;
    }
    else
    {
      v21 = a6;
    }
    VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v13, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v41);
    Value = a12.Value;
    v41.Transfer.Flags = a12;
    if ( a3 )
    {
      if ( !a5 )
      {
        Value = a12.Value | 8;
        v41.Transfer.Flags.Value = a12.Value | 8;
      }
      if ( a4 + a5 == a3[2] )
        v41.Transfer.Flags.Value = Value | 0x10;
    }
    while ( 1 )
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, v13, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v41);
      if ( a3 )
      {
        v25 = a3[5];
        if ( v25 )
          v24 = *(_QWORD *)(v25 + 16);
        else
          v24 = a3[6];
      }
      else
      {
        v24 = 0LL;
      }
      v41.UpdateContextAllocation.ContextAllocation = v24;
      v41.Transfer.TransferOffset = a5;
      v41.Transfer.TransferSize = a4;
      v41.Operation = DXGK_OPERATION_TRANSFER;
      v41.Transfer.MdlOffset = 0;
      if ( v21 )
      {
        if ( (*((_DWORD *)v21 + 20) & 0x1000) != 0 )
          v41.Transfer.Source.SegmentId = 0;
        else
          v41.Transfer.Source.SegmentId = *((_DWORD *)v21 + 4) + 1;
        v26 = (struct _MDL *)(a7->QuadPart + *((_QWORD *)v21 + 3));
      }
      else
      {
        v26 = a8;
        v41.Transfer.Source.SegmentId = 0;
      }
      v41.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)v26;
      if ( a9 )
      {
        if ( (*((_DWORD *)a9 + 20) & 0x1000) != 0 )
          v41.Transfer.Destination.SegmentId = 0;
        else
          v41.Transfer.Destination.SegmentId = *((_DWORD *)a9 + 4) + 1;
        v27 = (struct _MDL *)(a10->QuadPart + *((_QWORD *)a9 + 3));
      }
      else
      {
        v27 = a11;
        v41.Transfer.Destination.SegmentId = 0;
      }
      v41.Transfer.Destination.SegmentAddress.QuadPart = (LONGLONG)v27;
      if ( a3 )
        v28 = !VIDMM_GLOBAL::IsPagingOperationPending(this, (struct _VIDMM_GLOBAL_ALLOC *)a3, 0);
      else
        v28 = 1;
      v41.Transfer.Flags.Value = v41.Transfer.Flags.Value & 0xFFFFFFFB | (4 * v28);
      v29 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v41);
      v42 = v29;
      if ( a3 && v29 == -1071775486 )
      {
        VIDMM_GLOBAL::WaitForAllPagingEngines(this, (struct _VIDMM_GLOBAL_ALLOC *)a3);
        VIDMM_GLOBAL::VerifyAllocationIsIdle(this, (struct _VIDMM_GLOBAL_ALLOC *)a3);
        v30 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        v41.Transfer.Flags.Value |= 4u;
        v42 = ADAPTER_RENDER::DdiBuildPagingBuffer(v30, &v41);
      }
      v31 = *((_QWORD *)this + 877);
      if ( v31 && (!a9 || (*((_DWORD *)a9 + 20) & 0x1001) != 0) )
        VIDMM_PROCESS::ChargeEvictionTransfer(
          *(VIDMM_PROCESS **)(v31 + 8),
          *(_DWORD *)(*((_QWORD *)this + 3) + 200LL),
          a4);
      _InterlockedExchangeAdd64((volatile signed __int64 *)this + 1052, a4);
      if ( !bTracingEnabled )
        goto LABEL_58;
      if ( !v21 )
        goto LABEL_54;
      v32 = *((_DWORD *)v21 + 20);
      if ( (v32 & 0x1001) == 0 )
      {
        if ( a9 && (*((_DWORD *)a9 + 20) & 2) != 0 )
          v33 = 4;
        else
          v33 = 2;
        goto LABEL_55;
      }
      v33 = 3;
      if ( (v32 & 2) == 0 )
LABEL_54:
        v33 = 1;
LABEL_55:
      v34 = *((_QWORD *)this + v40 + 143);
      CurrentProcessId = PsGetCurrentProcessId();
      if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      {
        LODWORD(v38) = v33;
        McTemplateK0pppxxq(a5, v36, v37, CurrentProcessId, a3, v34, a5, a4, v38);
      }
      VidMmRecordTransfer((VIDMM_GLOBAL *)((char *)this + 7704), a4, v33);
      v13 = a2;
LABEL_58:
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, v13, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v41, v42, 0, 0LL);
      v21 = a6;
      if ( v42 >= 0 )
        return;
    }
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a3 + 44, 0LL);
  if ( (D3DGPU_VIRTUAL_ADDRESS *)a3[24] == a3 + 24 )
  {
    ExReleasePushLockExclusiveEx(a3 + 44, 0LL);
    KeLeaveCriticalRegion();
    if ( a10 )
      QuadPart = a10->QuadPart;
    else
      QuadPart = 0LL;
    if ( a7 )
      v17 = a7->QuadPart;
    else
      v17 = 0LL;
    VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(this, v13, a3, a4, a5, a6, v17, a8, a9, QuadPart, a11, 0LL, v39, 0LL);
  }
  else
  {
    VIDMM_GLOBAL::MemoryTransferUsingGpuVa(
      this,
      v13,
      (struct _VIDMM_GLOBAL_ALLOC *)a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      a11,
      a12);
    ExReleasePushLockExclusiveEx(a3 + 44, 0LL);
    KeLeaveCriticalRegion();
  }
}
