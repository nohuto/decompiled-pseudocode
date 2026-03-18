/*
 * XREFs of ?Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEEE@Z @ 0x1C00A6DA0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ExAllocateFromPagedLookasideList @ 0x1C0020F88 (ExAllocateFromPagedLookasideList.c)
 *     ExFreeToPagedLookasideList @ 0x1C0020FC4 (ExFreeToPagedLookasideList.c)
 *     Template_pxqqt @ 0x1C00212D8 (Template_pxqqt.c)
 *     Template_qpxp @ 0x1C0021384 (Template_qpxp.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00A7920 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::Allocate(
        _QWORD *a1,
        ULONG_PTR a2,
        __int64 a3,
        ULONG a4,
        _QWORD *a5,
        _QWORD *a6,
        _BYTE *a7,
        char a8)
{
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
  __int64 v22; // rcx
  PVOID v23; // r8
  _QWORD *v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // r13
  __int64 v27; // rbx
  __int64 v28; // rax
  ULONG v29; // ebx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rcx
  char v33; // cl
  __int64 v34; // rcx
  NTSTATUS inserted; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  PVOID *v39; // rcx
  _QWORD *v40; // rax
  _QWORD *v41; // rcx
  char v42; // dl
  __int16 v43; // ax
  PVOID v44; // r9
  ULONG Protect[2]; // [rsp+28h] [rbp-70h]
  __int64 v47; // [rsp+30h] [rbp-68h]
  __int64 v48; // [rsp+38h] [rbp-60h]
  PVOID BaseAddress; // [rsp+40h] [rbp-58h] BYREF
  PVOID Object; // [rsp+48h] [rbp-50h] BYREF
  void *Handle; // [rsp+50h] [rbp-48h] BYREF
  HANDLE v52; // [rsp+58h] [rbp-40h]
  ULONG_PTR v53; // [rsp+60h] [rbp-38h] BYREF
  PPAGED_LOOKASIDE_LIST Lookaside; // [rsp+68h] [rbp-30h]
  ULONG v55; // [rsp+A0h] [rbp+8h]
  ULONG_PTR RegionSize; // [rsp+A8h] [rbp+10h] BYREF

  RegionSize = a2;
  v9 = (unsigned int)a3;
  v10 = a1;
  if ( (qword_1C003C050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 8004);
  SmallAllocation = 0;
  BaseAddress = 0LL;
  AllocationType = 0;
  Object = 0LL;
  Handle = 0LL;
  v55 = 0;
  v52 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    a1 = (_QWORD *)WdLogNewEntry5_WdTrace(a1);
    a1[3] = RegionSize;
    a1[4] = v9;
    a1[5] = v10;
  }
  v13 = *(_QWORD *)v10[1];
  if ( PsGetCurrentProcess(a1) != v13 )
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
  if ( v21 < (unsigned int)dword_1C003C290 )
  {
    SmallAllocation = VIDMM_PROCESS_HEAP::AllocateSmallAllocation(v10, v21, (unsigned int)v9, a4, v18, v19, v20, a8);
LABEL_65:
    LODWORD(v27) = SmallAllocation;
    goto LABEL_66;
  }
  Lookaside = (PPAGED_LOOKASIDE_LIST)(v10 + 8);
  v24 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(v10 + 8));
  v26 = v24;
  if ( v24 )
  {
    memset(v24, 0, 0x70uLL);
    if ( a4 != 3 )
    {
      if ( a4 == 4 )
        goto LABEL_28;
      if ( a4 - 5 > 1 )
      {
        v29 = 4;
        if ( a4 != 2 )
          v29 = 1028;
        v30 = 12288;
        v55 = v29;
        if ( a4 != 2 )
          v30 = 8400896;
        AllocationType = v30 | 0x800000;
        if ( !a8 )
          AllocationType = v30;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, AllocationType, v29) < 0 )
        {
          AllocationType &= ~0x800000u;
          LODWORD(v27) = ZwAllocateVirtualMemory(
                           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                           &BaseAddress,
                           0LL,
                           &RegionSize,
                           AllocationType,
                           v29);
          if ( (int)v27 < 0 )
          {
            BaseAddress = 0LL;
            _InterlockedAdd(&dword_1C003C63C, 1u);
            v28 = WdLogNewEntry5_WdLowResource(v31);
            *(_QWORD *)(v28 + 24) = 457LL;
            goto LABEL_12;
          }
        }
        v52 = MmSecureVirtualMemory(BaseAddress, RegionSize, 4u);
        if ( !v52 )
        {
          LODWORD(v27) = -1073741801;
          _InterlockedAdd(&dword_1C003C63C, 1u);
          v28 = WdLogNewEntry5_WdLowResource(v32);
          *(_QWORD *)(v28 + 24) = 475LL;
          goto LABEL_12;
        }
LABEL_49:
        *(_DWORD *)v26 |= 1u;
        v39 = (PVOID *)a6;
        v26[7] = RegionSize;
        v26[6] = v52;
        *((_BYTE *)v26 + 72) = 0;
        v26[1] = BaseAddress;
        *((_DWORD *)v26 + 4) = v55;
        *((_DWORD *)v26 + 5) = AllocationType;
        v26[4] = Object;
        v26[5] = Handle;
        v40 = a5;
        *((_DWORD *)v26 + 6) = a4;
        v26[10] = 0LL;
        *v40 = v26;
        *v39 = BaseAddress;
        *(_QWORD *)(v10[1] + 88LL) += RegionSize;
        *(_QWORD *)(v10[1] + 96LL) += RegionSize;
        ++*(_DWORD *)(v10[1] + 108LL);
        v41 = (_QWORD *)v10[1];
        if ( a4 == 1 )
        {
          v41[14] += RegionSize;
          v22 = v10[1];
          *(_QWORD *)(v22 + 120) += RegionSize;
        }
        else if ( a4 == 2 )
        {
          v41[16] += RegionSize;
          v22 = v10[1];
          *(_QWORD *)(v22 + 136) += RegionSize;
        }
        else
        {
          v41[18] += RegionSize;
          v22 = v10[1];
          *(_QWORD *)(v22 + 152) += RegionSize;
        }
        LOBYTE(v22) = bTracingEnabled;
        if ( bTracingEnabled )
        {
          v42 = (char)BaseAddress;
          v23 = Object;
          v43 = Microsoft_Windows_DxgKrnlEnableBits;
          v44 = BaseAddress;
          if ( a4 - 3 <= 3 )
            v44 = Object;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          {
            LODWORD(v48) = 0;
            LODWORD(v47) = *(_DWORD *)(v10[1] + 8LL);
            Protect[0] = a4;
            Template_pxqqt(
              v22,
              &EventCreateProcessAllocation,
              (__int64)Object,
              v44,
              RegionSize,
              *(_QWORD *)Protect,
              v47,
              v48);
            v42 = (char)BaseAddress;
            v23 = Object;
            LOBYTE(v22) = bTracingEnabled;
            v43 = Microsoft_Windows_DxgKrnlEnableBits;
          }
          if ( (_BYTE)v22 )
          {
            v22 = a4 - 3;
            if ( (unsigned int)v22 <= 3 )
              v42 = (char)v23;
            if ( (v43 & 0x200) != 0 )
              Template_qpxp(
                v10[1],
                &EventCreateProcessAllocationDetails,
                (__int64)v23,
                *(_DWORD *)(v10[1] + 8LL),
                (char)v26,
                RegionSize,
                v42);
          }
        }
        *a7 = 1;
        goto LABEL_65;
      }
    }
    v33 = 0;
    if ( ((a4 - 4) & 0xFFFFFFFD) != 0 )
    {
LABEL_29:
      v53 = RegionSize;
      LODWORD(v27) = MmCreateSection(&Object, 0LL, 0LL, &v53, 4, v33 != 0 ? 0x8000000 : 1207959552, 0LL, 0LL);
      if ( (int)v27 < 0 )
      {
        Object = 0LL;
        _InterlockedAdd(&dword_1C003C664, 1u);
        v28 = WdLogNewEntry5_WdLowResource(v34);
        *(_QWORD *)(v28 + 24) = 377LL;
        goto LABEL_12;
      }
      ObfReferenceObject(Object);
      inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, &Handle);
      v27 = inserted;
      if ( inserted < 0 )
      {
        v38 = WdLogNewEntry5_WdAssertion(v37, v36);
        *(_QWORD *)(v38 + 24) = Object;
        *(_QWORD *)(v38 + 32) = v27;
        WdLogEvent5_WdAssertion(v38);
        goto LABEL_35;
      }
      if ( a4 - 5 <= 1 )
      {
        LODWORD(v27) = MmMapViewInSystemSpace(Object, &BaseAddress, &RegionSize);
        if ( (int)v27 < 0 )
          goto LABEL_35;
      }
      goto LABEL_49;
    }
LABEL_28:
    v33 = 1;
    goto LABEL_29;
  }
  LODWORD(v27) = -1073741801;
  _InterlockedAdd(&dword_1C003C5B0, 1u);
  v28 = WdLogNewEntry5_WdLowResource(v25);
  *(_QWORD *)(v28 + 24) = 339LL;
LABEL_12:
  WdLogEvent5_WdLowResource(v28);
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
      v22 = (__int64)Object;
      if ( Object )
      {
        if ( Handle )
        {
          ObCloseHandle(Handle, ((unsigned __int64)Handle & 0xFFFFFFFF80000000uLL) == 0);
          v22 = (__int64)Object;
        }
        ObfDereferenceObject((PVOID)v22);
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
  if ( v26 )
    ExFreeToPagedLookasideList(Lookaside, v26);
LABEL_66:
  if ( (qword_1C003C050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v22, &EventProfilerExit, (__int64)v23, 8004);
  return (unsigned int)v27;
}
