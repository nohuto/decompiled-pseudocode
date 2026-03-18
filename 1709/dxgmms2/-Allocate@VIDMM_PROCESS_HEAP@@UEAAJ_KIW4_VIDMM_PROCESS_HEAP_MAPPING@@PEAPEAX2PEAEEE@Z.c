/*
 * XREFs of ?Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEEE@Z @ 0x1C00AF4C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ExAllocateFromPagedLookasideList @ 0x1C0022E9C (ExAllocateFromPagedLookasideList.c)
 *     ExFreeToPagedLookasideList @ 0x1C0022ED8 (ExFreeToPagedLookasideList.c)
 *     McTemplateK0pxqqt @ 0x1C0023360 (McTemplateK0pxqqt.c)
 *     McTemplateK0qpxp @ 0x1C0023408 (McTemplateK0qpxp.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00AFF94 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::Allocate(
        _QWORD *a1,
        ULONG_PTR a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6,
        _BYTE *a7,
        char a8)
{
  ULONG v8; // esi
  __int64 v9; // r15
  _QWORD *v10; // r14
  int SmallAllocation; // edi
  ULONG AllocationType; // r12d
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // r8
  _BYTE *v20; // r9
  ULONG_PTR v21; // rdx
  _QWORD *v22; // rcx
  __int64 v23; // r8
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // r13
  __int64 v28; // rbx
  __int64 v29; // rax
  ULONG v30; // ebx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // ecx
  __int64 v37; // rdx
  __int64 v38; // rcx
  NTSTATUS inserted; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  PVOID *v43; // rcx
  _QWORD *v44; // rax
  _QWORD *v45; // rcx
  char v46; // dl
  PVOID v47; // r9
  ULONG Protect[2]; // [rsp+28h] [rbp-48h]
  __int64 v50; // [rsp+30h] [rbp-40h]
  __int64 v51; // [rsp+38h] [rbp-38h]
  PVOID BaseAddress; // [rsp+40h] [rbp-30h] BYREF
  PVOID Object; // [rsp+48h] [rbp-28h] BYREF
  void *Handle; // [rsp+50h] [rbp-20h] BYREF
  HANDLE v55; // [rsp+58h] [rbp-18h]
  ULONG_PTR v56; // [rsp+60h] [rbp-10h] BYREF
  PPAGED_LOOKASIDE_LIST Lookaside; // [rsp+68h] [rbp-8h]
  ULONG v58; // [rsp+B0h] [rbp+40h]
  ULONG_PTR RegionSize; // [rsp+B8h] [rbp+48h] BYREF

  RegionSize = a2;
  v8 = a4;
  v9 = (unsigned int)a3;
  v10 = a1;
  if ( (qword_1C0040010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, (__int64)&EventProfilerEnter, a3, 8004);
  SmallAllocation = 0;
  BaseAddress = 0LL;
  AllocationType = 0;
  Object = 0LL;
  Handle = 0LL;
  v58 = 0;
  v55 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    a1 = (_QWORD *)WdLogNewEntry5_WdTrace(a1);
    a1[3] = RegionSize;
    a1[4] = v9;
    a1[5] = v10;
  }
  v13 = *(_QWORD *)v10[1];
  if ( PsGetCurrentProcess(a1, a2, a3, a4) != v13 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v14, v16);
    v17[3] = 270LL;
    v17[4] = 30LL;
    v17[5] = 0LL;
    v17[6] = 0LL;
    v17[7] = 0LL;
    WdLogEvent5_WdCriticalError(v17);
  }
  v18 = a5;
  v19 = a6;
  v20 = a7;
  v21 = RegionSize;
  *a5 = 0LL;
  *v19 = 0LL;
  *v20 = 0;
  if ( v21 < (unsigned int)dword_1C00402C8 )
  {
    SmallAllocation = VIDMM_PROCESS_HEAP::AllocateSmallAllocation(v10, v21, (unsigned int)v9, v8, v18, v19, v20, a8);
LABEL_65:
    LODWORD(v28) = SmallAllocation;
    goto LABEL_66;
  }
  Lookaside = (PPAGED_LOOKASIDE_LIST)(v10 + 8);
  v24 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(v10 + 8));
  v27 = v24;
  if ( v24 )
  {
    memset(v24, 0, 0x70uLL);
    if ( v8 != 3 )
    {
      if ( v8 == 4 )
        goto LABEL_28;
      if ( v8 - 5 > 1 )
      {
        v30 = 4;
        if ( v8 != 2 )
          v30 = 1028;
        v31 = 12288;
        v58 = v30;
        if ( v8 != 2 )
          v31 = 8400896;
        AllocationType = v31 | 0x800000;
        if ( !a8 )
          AllocationType = v31;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, AllocationType, v30) < 0 )
        {
          AllocationType &= ~0x800000u;
          LODWORD(v28) = ZwAllocateVirtualMemory(
                           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                           &BaseAddress,
                           0LL,
                           &RegionSize,
                           AllocationType,
                           v30);
          if ( (int)v28 < 0 )
          {
            BaseAddress = 0LL;
            _InterlockedAdd(&dword_1C004064C, 1u);
            v29 = WdLogNewEntry5_WdLowResource(v33, v32);
            *(_QWORD *)(v29 + 24) = 457LL;
            goto LABEL_12;
          }
        }
        v55 = MmSecureVirtualMemory(BaseAddress, RegionSize, 4u);
        if ( !v55 )
        {
          LODWORD(v28) = -1073741801;
          _InterlockedAdd(&dword_1C004064C, 1u);
          v29 = WdLogNewEntry5_WdLowResource(v35, v34);
          *(_QWORD *)(v29 + 24) = 475LL;
          goto LABEL_12;
        }
LABEL_49:
        *(_DWORD *)v27 |= 1u;
        v43 = (PVOID *)a6;
        v27[7] = RegionSize;
        v27[6] = v55;
        *((_BYTE *)v27 + 72) = 0;
        v27[1] = BaseAddress;
        *((_DWORD *)v27 + 4) = v58;
        *((_DWORD *)v27 + 5) = AllocationType;
        v27[4] = Object;
        v27[5] = Handle;
        v44 = a5;
        *((_DWORD *)v27 + 6) = v8;
        v27[10] = 0LL;
        *v44 = v27;
        *v43 = BaseAddress;
        *(_QWORD *)(v10[1] + 88LL) += RegionSize;
        *(_QWORD *)(v10[1] + 96LL) += RegionSize;
        ++*(_DWORD *)(v10[1] + 108LL);
        v45 = (_QWORD *)v10[1];
        if ( v8 == 1 )
        {
          v45[14] += RegionSize;
          v22 = (_QWORD *)v10[1];
          v22[15] += RegionSize;
        }
        else if ( v8 == 2 )
        {
          v45[16] += RegionSize;
          v22 = (_QWORD *)v10[1];
          v22[17] += RegionSize;
        }
        else
        {
          v45[18] += RegionSize;
          v22 = (_QWORD *)v10[1];
          v22[19] += RegionSize;
        }
        if ( bTracingEnabled )
        {
          v46 = (char)BaseAddress;
          v22 = Object;
          v47 = BaseAddress;
          if ( v8 - 3 <= 3 )
            v47 = Object;
          if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          {
            LODWORD(v51) = 0;
            LODWORD(v50) = *(_DWORD *)(v10[1] + 8LL);
            Protect[0] = v8;
            McTemplateK0pxqqt(
              (__int64)Object,
              &EventCreateProcessAllocation,
              v23,
              v47,
              RegionSize,
              *(_QWORD *)Protect,
              v50,
              v51);
            v46 = (char)BaseAddress;
            v22 = Object;
          }
          if ( bTracingEnabled )
          {
            if ( v8 - 3 <= 3 )
              v46 = (char)v22;
            if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              McTemplateK0qpxp(
                v10[1],
                &EventCreateProcessAllocationDetails,
                v23,
                *(_DWORD *)(v10[1] + 8LL),
                (char)v27,
                RegionSize,
                v46);
          }
        }
        *a7 = 1;
        goto LABEL_65;
      }
    }
    v36 = 1208221696;
    if ( ((v8 - 4) & 0xFFFFFFFD) != 0 )
    {
LABEL_29:
      v56 = RegionSize;
      LODWORD(v28) = MmCreateSection(&Object, 0LL, 0LL, &v56, 4, v36, 0LL, 0LL);
      if ( (int)v28 < 0 )
      {
        Object = 0LL;
        _InterlockedAdd(&dword_1C0040674, 1u);
        v29 = WdLogNewEntry5_WdLowResource(v38, v37);
        *(_QWORD *)(v29 + 24) = 377LL;
        goto LABEL_12;
      }
      ObfReferenceObject(Object);
      inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, &Handle);
      v28 = inserted;
      if ( inserted < 0 )
      {
        v42 = WdLogNewEntry5_WdAssertion(v41, v40);
        *(_QWORD *)(v42 + 24) = Object;
        *(_QWORD *)(v42 + 32) = v28;
        WdLogEvent5_WdAssertion(v42);
        goto LABEL_35;
      }
      if ( v8 - 5 <= 1 )
      {
        LODWORD(v28) = MmMapViewInSystemSpace(Object, &BaseAddress, &RegionSize);
        if ( (int)v28 < 0 )
          goto LABEL_35;
      }
      goto LABEL_49;
    }
LABEL_28:
    v36 = 134479872;
    goto LABEL_29;
  }
  LODWORD(v28) = -1073741801;
  _InterlockedAdd(&dword_1C00405C0, 1u);
  v29 = WdLogNewEntry5_WdLowResource(v26, v25);
  *(_QWORD *)(v29 + 24) = 339LL;
LABEL_12:
  WdLogEvent5_WdLowResource(v29);
LABEL_35:
  if ( v8 - 3 <= 1 )
    goto LABEL_40;
  if ( v8 == 5 )
    goto LABEL_41;
  if ( v8 == 6 )
  {
LABEL_40:
    if ( v8 - 5 > 1 )
    {
LABEL_43:
      v22 = Object;
      if ( Object )
      {
        if ( Handle )
        {
          ObCloseHandle(Handle, ((unsigned __int64)Handle & 0xFFFFFFFF80000000uLL) == 0);
          v22 = Object;
        }
        ObfDereferenceObject(v22);
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
  if ( v27 )
    ExFreeToPagedLookasideList(Lookaside, v27);
LABEL_66:
  if ( (qword_1C0040010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)v22, (__int64)&EventProfilerExit, v23, 8004);
  return (unsigned int)v28;
}
