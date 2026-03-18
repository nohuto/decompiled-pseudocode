/*
 * XREFs of ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C009F898
 * Callers:
 *     VidMmUpdateGpuVirtualAddress @ 0x1C0020F00 (VidMmUpdateGpuVirtualAddress.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001820 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C00018AC (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111@Z @ 0x1C0001958 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     VidSchWaitForSingleSyncObject @ 0x1C0005FE0 (VidSchWaitForSingleSyncObject.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013400 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1C0020FC0 (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 *     VidSchSubmitGlobalCommand @ 0x1C0071CA8 (VidSchSubmitGlobalCommand.c)
 *     ?IsRangeValid@@YAE_K00@Z @ 0x1C009B3F8 (-IsRangeValid@@YAE_K00@Z.c)
 *     ?RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1C00A5224 (-RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IP.c)
 *     ?RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@PEAUVIDMM_ALLOC@@PEAU_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION@@@Z @ 0x1C00A5394 (-RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@P.c)
 *     ?ReferenceReservedZeroVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0@Z @ 0x1C00A5A64 (-ReferenceReservedZeroVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmUpdateGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct _D3DKMT_UPDATEGPUVIRTUALADDRESS *a2,
        struct VIDMM_COMPANION_CONTEXT *a3,
        int a4,
        struct _VIDMM_MULTI_ALLOC **a5,
        struct _VIDSCH_SYNC_OBJECT *a6,
        struct _KSEMAPHORE **a7)
{
  struct _VIDSCH_SYNC_OBJECT *v7; // rsi
  UINT64 FenceValue; // rbx
  UINT64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r12
  unsigned int v20; // ebx
  __int64 v21; // r9
  _QWORD *v22; // rdi
  VIDMM_GLOBAL *v23; // r11
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  UINT v26; // r14d
  unsigned __int64 BaseAddress; // r12
  unsigned __int64 v28; // rbx
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v29; // rsi
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION_TYPE OperationType; // eax
  __int64 v31; // rcx
  PVOID v32; // r10
  __int64 v33; // rax
  _QWORD *v34; // rax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // r8
  struct VIDMM_ALLOC *v37; // rbx
  D3DGPU_SIZE_T AllocationSizeInBytes; // rcx
  unsigned __int64 AllocationOffsetInBytes; // rax
  D3DGPU_SIZE_T SizeInBytes; // r10
  D3DGPU_SIZE_T v41; // r8
  D3DGPU_SIZE_T v42; // rax
  unsigned __int64 v43; // rax
  __int64 Value; // rbx
  PVOID v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rax
  _QWORD *v49; // rcx
  _QWORD *v50; // rax
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rcx
  _QWORD *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rcx
  struct VIDMM_VAD *v64; // rbx
  __int64 v65; // rax
  struct VIDMM_VAD *v66; // r8
  char *v67; // rax
  struct VIDMM_VAD *v68; // rcx
  struct VIDMM_VAD **v69; // rdx
  char **v70; // rdx
  char *v71; // rcx
  __int128 *i; // rcx
  bool v73; // zf
  __int64 v74; // rdx
  unsigned int j; // r8d
  __int64 v76; // rax
  __int128 v77; // [rsp+60h] [rbp-A0h] BYREF
  int v78; // [rsp+70h] [rbp-90h]
  int v79; // [rsp+74h] [rbp-8Ch]
  int v80; // [rsp+78h] [rbp-88h]
  unsigned __int64 v81; // [rsp+80h] [rbp-80h]
  __int64 v82; // [rsp+88h] [rbp-78h]
  unsigned __int64 v83; // [rsp+90h] [rbp-70h]
  D3DGPU_SIZE_T v84; // [rsp+98h] [rbp-68h]
  unsigned __int64 v85; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v86; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v87; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v88; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v89; // [rsp+C0h] [rbp-40h]
  UINT64 DriverProtection; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v91; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v92; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v93; // [rsp+E0h] [rbp-20h]
  union _LARGE_INTEGER Timeout; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v95; // [rsp+F0h] [rbp-10h]
  struct VIDMM_ALLOC *v96; // [rsp+F8h] [rbp-8h]
  PRKSEMAPHORE Semaphore; // [rsp+100h] [rbp+0h]
  struct VIDMM_VAD *v98; // [rsp+108h] [rbp+8h]
  _BYTE v99[32]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v100[24]; // [rsp+130h] [rbp+30h] BYREF
  bool v102; // [rsp+208h] [rbp+108h]
  char v103; // [rsp+210h] [rbp+110h]

  v7 = a6;
  FenceValue = a2->FenceValue;
  v11 = *((_QWORD *)a3 + 7);
  if ( *((_BYTE *)a6 + 29) )
  {
    if ( FenceValue < v11 )
    {
      v12 = WdLogNewEntry5_WdWarning(this);
      *(_QWORD *)(v12 + 24) = FenceValue;
      *(_QWORD *)(v12 + 32) = v11;
LABEL_8:
      WdLogEvent5_WdWarning(v12);
      v15 = WdLogNewEntry5_WdWarning(v14);
      *(_QWORD *)(v15 + 24) = a2->FenceValue;
      WdLogEvent5_WdWarning(v15);
      return 3221225485LL;
    }
    if ( FenceValue == v11 )
    {
      v13 = WdLogNewEntry5_WdWarning(this);
      *(_QWORD *)(v13 + 24) = FenceValue;
LABEL_11:
      WdLogEvent5_WdWarning(v13);
    }
  }
  else
  {
    if ( (int)v11 - (int)FenceValue > 0 )
    {
      v12 = WdLogNewEntry5_WdWarning(this);
      *(_QWORD *)(v12 + 24) = (unsigned int)FenceValue;
      *(_QWORD *)(v12 + 32) = (unsigned int)v11;
      goto LABEL_8;
    }
    if ( (_DWORD)v11 == (_DWORD)FenceValue )
    {
      v13 = WdLogNewEntry5_WdWarning(this);
      *(_QWORD *)(v13 + 24) = (unsigned int)FenceValue;
      goto LABEL_11;
    }
  }
  Semaphore = (PRKSEMAPHORE)((char *)a3 + 24);
  *a7 = (struct _KSEMAPHORE *)((char *)a3 + 24);
  Timeout.QuadPart = 0LL;
  if ( KeWaitForSingleObject((char *)a3 + 24, Executive, 0, 0, &Timeout) == 258 )
  {
    v18 = WdLogNewEntry5_WdWarning(v17);
    WdLogEvent5_WdWarning(v18);
    return 3223191810LL;
  }
  v19 = *(_QWORD *)a3;
  v20 = -1073741811;
  v21 = *((_QWORD *)a3 + 1);
  v22 = 0LL;
  v23 = this;
  *((_QWORD *)a3 + 7) = a2->FenceValue;
  v24 = *(_QWORD *)(v19 + 16);
  v25 = *(_QWORD *)(v21 + 96);
  v82 = v19;
  v81 = v24;
  v79 = -1073741811;
  v78 = *(unsigned __int16 *)(v25 + 6);
  *((_QWORD *)&v77 + 1) = &v77;
  *(_QWORD *)&v77 = &v77;
  v98 = 0LL;
  v87 = -1LL;
  v86 = 0LL;
  v89 = -1LL;
  v88 = 0LL;
  v103 = 0;
  if ( *((_QWORD *)this + 5115) )
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVa(
      this,
      1u,
      *(struct VIDMM_PROCESS **)(v19 + 88),
      (struct _VIDSCH_CONTEXT *)v21,
      a2->NumOperations,
      a6,
      a2->FenceValue);
    v23 = this;
    v24 = v81;
  }
  v26 = 0;
  if ( a2->NumOperations )
  {
    BaseAddress = (unsigned __int64)a6;
    v28 = v85;
    while ( 1 )
    {
      v29 = &a2->Operations[(unsigned __int64)v26];
      OperationType = v29->OperationType;
      if ( v29->OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP
        || OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP_PROTECT )
      {
        BaseAddress = v29->Map.BaseAddress;
        v85 = BaseAddress + v29->Map.SizeInBytes;
        if ( !IsRangeValid(BaseAddress, v85, v24) )
          goto LABEL_87;
        v23 = this;
        v37 = a5[v29->Map.hAllocation];
        v96 = v37;
        if ( *((_QWORD *)this + 5115) )
        {
          VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
            this,
            *(struct VIDMM_PROCESS **)(v82 + 88),
            *((struct _VIDSCH_CONTEXT **)a3 + 1),
            v37,
            v29);
          v23 = this;
        }
        AllocationSizeInBytes = v29->Map.AllocationSizeInBytes;
        if ( (AllocationSizeInBytes & 0xFFF) != 0
          || (AllocationOffsetInBytes = v29->Map.AllocationOffsetInBytes,
              v83 = AllocationOffsetInBytes,
              (AllocationOffsetInBytes & 0xFFF) != 0) )
        {
          v53 = (_QWORD *)WdLogNewEntry5_WdWarning(AllocationSizeInBytes);
          v53[3] = v26;
          v53[4] = 24013LL;
          goto LABEL_86;
        }
        SizeInBytes = v29->Map.SizeInBytes;
        v84 = SizeInBytes;
        if ( AllocationSizeInBytes )
        {
          if ( AllocationSizeInBytes > SizeInBytes )
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdWarning(AllocationSizeInBytes);
            v53[3] = v26;
            goto LABEL_86;
          }
          if ( SizeInBytes % AllocationSizeInBytes )
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdWarning(AllocationSizeInBytes);
            v53[3] = v26;
            v53[4] = 24036LL;
            goto LABEL_86;
          }
          AllocationOffsetInBytes = v83;
        }
        else
        {
          v29->Map.AllocationSizeInBytes = SizeInBytes;
        }
        v41 = v29->Map.AllocationSizeInBytes;
        if ( AllocationOffsetInBytes + v41 < AllocationOffsetInBytes
          || (AllocationSizeInBytes = *(_QWORD *)v37,
              AllocationOffsetInBytes + v41 > *(_QWORD *)(**(_QWORD **)v37 + 16LL)) )
        {
          v53 = (_QWORD *)WdLogNewEntry5_WdWarning(AllocationSizeInBytes);
          v53[3] = *(_QWORD *)(**(_QWORD **)v37 + 16LL);
          v53[4] = v26;
          v53[5] = 24047LL;
          goto LABEL_86;
        }
        if ( (*((_BYTE *)v23 + 40873) & 2) != 0 )
        {
          v43 = 1LL;
          v102 = SizeInBytes != v41;
        }
        else
        {
          v84 = v29->Map.AllocationSizeInBytes;
          v42 = SizeInBytes;
          SizeInBytes = v41;
          v43 = v42 / v41;
          v102 = 0;
          v83 = 0LL;
        }
        v93 = v43;
        if ( v43 >= 0xFFFFFFFF )
        {
          v53 = (_QWORD *)WdLogNewEntry5_WdWarning(0xFFFFFFFFLL);
          v53[3] = v26;
          v53[4] = 24070LL;
          goto LABEL_86;
        }
        DriverProtection = 0LL;
        v24 = BaseAddress;
        v92 = BaseAddress;
        if ( v29->OperationType )
        {
          Value = v29->MapProtect.Protection.Value;
          DriverProtection = v29->MapProtect.DriverProtection;
        }
        else
        {
          Value = 1LL;
        }
        v95 = Value;
        v80 = 0;
        if ( (_DWORD)v43 )
        {
          while ( 1 )
          {
            v91 = v24 + SizeInBytes;
            v45 = operator new[](0x88uLL, 0x39346956u, PagedPool);
            if ( v45 )
            {
              v47 = v102 ? v29->Map.AllocationSizeInBytes >> 12 : 0LL;
              v48 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                      (__int64)v45,
                      0LL,
                      v92,
                      v91,
                      v78,
                      (__int64)v96,
                      v29->Map.AllocationOffsetInBytes,
                      1,
                      Value,
                      DriverProtection,
                      v47,
                      v83);
            }
            else
            {
              v48 = 0LL;
            }
            if ( !v48 )
              break;
            v49 = (_QWORD *)*((_QWORD *)&v77 + 1);
            v50 = (_QWORD *)(v48 + 8);
            if ( **((__int128 ***)&v77 + 1) != &v77 )
              __fastfail(3u);
            SizeInBytes = v84;
            v50[1] = *((_QWORD *)&v77 + 1);
            *v50 = &v77;
            *v49 = v50;
            v24 = v91;
            *((_QWORD *)&v77 + 1) = v50;
            v92 = v91;
            if ( ++v80 >= (unsigned int)v93 )
            {
              v28 = v85;
              goto LABEL_74;
            }
          }
          v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v46);
          v53[3] = 24102LL;
          goto LABEL_86;
        }
        v28 = v85;
      }
      else
      {
        if ( OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_UNMAP )
        {
          BaseAddress = v29->Map.BaseAddress;
          v28 = BaseAddress + v29->Map.SizeInBytes;
          if ( *((_QWORD *)v23 + 5115) )
            VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
              v23,
              *(struct VIDMM_PROCESS **)(v82 + 88),
              *((struct _VIDSCH_CONTEXT **)a3 + 1),
              0LL,
              &a2->Operations[(unsigned __int64)v26]);
          if ( !IsRangeValid(BaseAddress, v28, v81) )
            goto LABEL_87;
          v32 = operator new[](0x88uLL, 0x39346956u, PagedPool);
          if ( v32 )
            v33 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                    (__int64)v32,
                    0LL,
                    BaseAddress,
                    v28,
                    v78,
                    0LL,
                    0LL,
                    (v29->Copy.DestAddress & 8) != 0 ? 0 : 6,
                    v29->Unmap.Protection.Value,
                    0LL,
                    0LL,
                    0LL);
          else
            v33 = 0LL;
          if ( !v33 )
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v31);
            v53[3] = 24138LL;
LABEL_86:
            WdLogEvent5_WdWarning(v53);
LABEL_87:
            v20 = -1073741811;
            goto LABEL_88;
          }
          v24 = *((_QWORD *)&v77 + 1);
          v34 = (_QWORD *)(v33 + 8);
          if ( **((__int128 ***)&v77 + 1) != &v77 )
            __fastfail(3u);
          v34[1] = *((_QWORD *)&v77 + 1);
          *v34 = &v77;
          *(_QWORD *)v24 = v34;
          *((_QWORD *)&v77 + 1) = v34;
        }
        else
        {
          if ( OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_COPY )
            goto LABEL_75;
          BaseAddress = v29->Unmap.Protection.Value;
          v28 = BaseAddress + v29->Map.SizeInBytes;
          if ( *((_QWORD *)v23 + 5115) )
            VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
              v23,
              *(struct VIDMM_PROCESS **)(v82 + 88),
              *((struct _VIDSCH_CONTEXT **)a3 + 1),
              0LL,
              &a2->Operations[(unsigned __int64)v26]);
          if ( !IsRangeValid(BaseAddress, v28, v81) )
            goto LABEL_87;
          v35 = v29->Map.BaseAddress;
          v24 = v35 + v29->Map.SizeInBytes;
          if ( v24 <= v35 )
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v24);
            v53[3] = v26;
            v53[4] = 24163LL;
            goto LABEL_86;
          }
          if ( (v35 & 0xFFF) != 0 || (v24 & 0xFFF) != 0 )
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v24);
            v53[3] = v26;
            v53[4] = 24168LL;
            goto LABEL_86;
          }
          if ( BaseAddress < v24 && v28 > v35 )
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v24);
            v53[3] = v26;
            v53[4] = 24174LL;
            goto LABEL_86;
          }
          v36 = v89;
          v103 = 1;
          if ( v89 > v35 )
            v36 = v29->Map.BaseAddress;
          v89 = v36;
          if ( v88 >= v24 )
            v24 = v88;
          v88 = v24;
        }
LABEL_74:
        v23 = this;
      }
LABEL_75:
      if ( v28 <= BaseAddress )
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v24);
        v53[3] = v26;
        v53[4] = 24194LL;
        goto LABEL_86;
      }
      if ( ((BaseAddress | v28) & 0xFFF) != 0 )
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v24);
        v53[3] = v26;
        v53[4] = 24199LL;
        goto LABEL_86;
      }
      v51 = v87;
      if ( v87 > BaseAddress )
        v51 = BaseAddress;
      v87 = v51;
      v52 = v86;
      if ( v86 < v28 )
        v52 = v28;
      ++v26;
      v86 = v52;
      if ( v26 >= a2->NumOperations )
      {
        v7 = a6;
        v20 = -1073741811;
        v19 = v82;
        break;
      }
      v24 = v81;
    }
  }
  if ( (a2->Flags.Value & 1) == 0 )
  {
    *((_BYTE *)v7 + 25) = 0;
    v79 = VidSchWaitForSingleSyncObject(*((_QWORD *)a3 + 1), (__int64)v7, a2->FenceValue);
    v20 = v79;
    if ( v79 < 0 )
    {
      v59 = WdLogNewEntry5_WdAssertion(v58, v57);
      *(_QWORD *)(v59 + 24) = 24222LL;
      WdLogEvent5_WdAssertion(v59);
LABEL_88:
      KeReleaseSemaphore(Semaphore, 0, 1, 0);
      if ( v22 )
        VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'((VIDMM_DEVICE_COMMAND_UPDATEGPUVA *)v22);
      while ( 1 )
      {
        v54 = v77;
        if ( (__int128 *)v77 == &v77 )
          break;
        if ( *(__int128 **)(v77 + 8) != &v77 || (v55 = *(_QWORD *)v77, *(_QWORD *)(*(_QWORD *)v77 + 8LL) != (_QWORD)v77) )
          __fastfail(3u);
        *(_QWORD *)&v77 = *(_QWORD *)v77;
        v56 = v54 - 8;
        *(_QWORD *)(v55 + 8) = &v77;
        *(_QWORD *)(v56 + 8) = 0LL;
        *(_QWORD *)(v56 + 16) = 0LL;
        VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((volatile signed __int32 *)v56);
      }
      return v20;
    }
  }
  v60 = operator new[](0xB8uLL, 0x39346956u, PagedPool);
  v22 = v60;
  if ( v60 )
  {
    memset(v60, 0, 0xB8uLL);
    v22[13] = v22 + 12;
    v22[12] = v22 + 12;
    v22[7] = v22 + 6;
    v22[6] = v22 + 6;
  }
  else
  {
    v22 = 0LL;
  }
  if ( !v22 )
  {
    v62 = WdLogNewEntry5_WdWarning(v61);
    WdLogEvent5_WdWarning(v62);
    goto LABEL_88;
  }
  v22[1] = this;
  *((_DWORD *)v22 + 5) = a2->NumOperations;
  v22[10] = a2->FenceValue + 1;
  *((_DWORD *)v22 + 4) = v78;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v99, (struct _KTHREAD **)(v19 + 56));
  v64 = CVirtualAddressAllocator::ReferenceReservedZeroVad((CVirtualAddressAllocator *)v19, v87, v86);
  if ( !v64 )
  {
LABEL_116:
    v65 = WdLogNewEntry5_WdWarning(v63);
    WdLogEvent5_WdWarning(v65);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v99);
    v20 = v79;
    goto LABEL_88;
  }
  if ( v103 )
  {
    v66 = CVirtualAddressAllocator::ReferenceReservedZeroVad((CVirtualAddressAllocator *)v19, v89, v88);
    if ( !v66 )
      goto LABEL_116;
  }
  else
  {
    v66 = v98;
  }
  v22[15] = v66;
  v22[21] = v22 + 15;
  v67 = (char *)v64 + 80;
  v22[14] = v64;
  v22[18] = v22 + 14;
  v68 = (struct VIDMM_VAD *)(v22 + 16);
  v69 = (struct VIDMM_VAD **)*((_QWORD *)v64 + 11);
  if ( *v69 != (struct VIDMM_VAD *)((char *)v64 + 80) )
    __fastfail(3u);
  *(_QWORD *)v68 = v67;
  v22[17] = v69;
  *v69 = v68;
  *((_QWORD *)v64 + 11) = v68;
  if ( v66 )
  {
    v70 = (char **)*((_QWORD *)v64 + 11);
    v71 = (char *)(v22 + 19);
    if ( *v70 != v67 )
      __fastfail(3u);
    *(_QWORD *)v71 = v67;
    v22[20] = v70;
    *v70 = v71;
    *((_QWORD *)v64 + 11) = v71;
    *((_BYTE *)v22 + 176) = 1;
  }
  for ( i = (__int128 *)v77; i != &v77; i = *(__int128 **)i )
  {
    v73 = *((_QWORD *)i + 9) == 0LL;
    *((_QWORD *)i - 1) = v64;
    if ( v73 )
    {
      v74 = *((_QWORD *)v64 + 12);
      if ( (struct VIDMM_VAD *)v74 != (struct VIDMM_VAD *)((char *)v64 + 96) )
        *((_QWORD *)i + 9) = *(_QWORD *)(v74 + 72);
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v99);
  v22[8] = a5;
  *((_DWORD *)v22 + 8) = a4;
  v22[3] = a2->Operations;
  a2->Operations = 0LL;
  v22[9] = v7;
  v22[11] = a3;
  *v22 = *((_QWORD *)a3 + 1);
  if ( (__int128 *)v77 == &v77 )
  {
    v22[13] = v22 + 12;
    v22[12] = v22 + 12;
  }
  else
  {
    *((_OWORD *)v22 + 6) = v77;
    *(_QWORD *)(v22[12] + 8LL) = v22 + 12;
    *(_QWORD *)v22[13] = v22 + 12;
  }
  *((_QWORD *)&v77 + 1) = &v77;
  *(_QWORD *)&v77 = &v77;
  _InterlockedIncrement((volatile signed __int32 *)v7 + 8);
  for ( j = 0; j < *((_DWORD *)v22 + 8); ++j )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v22[8] + 8LL * j) + 160LL));
  memset(v100, 0, 0x80uLL);
  LODWORD(v100[5]) = 2;
  v100[3] = VIDMM_GLOBAL::VidMmiUpdateGpuVirtualAddress;
  v76 = *((_QWORD *)a3 + 1);
  LODWORD(v100[0]) = 2;
  v100[6] = v22;
  v100[4] = 0LL;
  VidSchSubmitGlobalCommand(*(_QWORD *)(*(_QWORD *)(v76 + 104) + 32LL), (__int64)v100);
  return 0LL;
}
