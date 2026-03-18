/*
 * XREFs of ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C009738C
 * Callers:
 *     VidMmUpdateGpuVirtualAddress @ 0x1C001EE60 (VidMmUpdateGpuVirtualAddress.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B5C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001F5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0002550 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     VidSchWaitForSingleSyncObject @ 0x1C0005560 (VidSchWaitForSingleSyncObject.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1C001EED0 (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 *     VidSchSubmitGlobalCommand @ 0x1C006C8E0 (VidSchSubmitGlobalCommand.c)
 *     ?IsRangeValid@@YAE_K00@Z @ 0x1C00939E8 (-IsRangeValid@@YAE_K00@Z.c)
 *     ?RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@IPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1C009CF48 (-RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@IPEAU_VIDSCH_SYNC_OBJECT@@_K.c)
 *     ?ReferenceReservedZeroVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0@Z @ 0x1C009D740 (-ReferenceReservedZeroVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0@Z.c)
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
  struct _VIDSCH_SYNC_OBJECT *v7; // r13
  struct VIDMM_COMPANION_CONTEXT *v8; // rsi
  UINT64 FenceValue; // rbx
  UINT64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // ebx
  unsigned __int64 v22; // rdx
  struct VIDMM_VAD *v23; // r12
  VIDMM_DEVICE_COMMAND_UPDATEGPUVA *v24; // rdi
  UINT v25; // r14d
  unsigned __int64 v26; // r8
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 BaseAddress; // r12
  unsigned __int64 v30; // r13
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v31; // rsi
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION_TYPE OperationType; // eax
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  _QWORD *v36; // rbx
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA v37; // rcx
  _QWORD *v38; // rax
  _QWORD *v39; // rbx
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // r8
  D3DGPU_SIZE_T v43; // rdx
  struct _VIDMM_MULTI_ALLOC *v44; // rbx
  D3DGPU_SIZE_T AllocationSizeInBytes; // rcx
  D3DGPU_SIZE_T AllocationOffsetInBytes; // r11
  D3DGPU_SIZE_T SizeInBytes; // r10
  D3DGPU_SIZE_T v48; // r8
  D3DGPU_SIZE_T v49; // rax
  unsigned __int64 v50; // rax
  D3DGPU_SIZE_T v51; // rtt
  unsigned __int64 v52; // rcx
  __int64 Value; // rbx
  _QWORD *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  _QWORD *v57; // r13
  D3DGPU_SIZE_T v58; // rcx
  struct _VIDMM_MULTI_ALLOC *v59; // rdx
  UINT64 v60; // rax
  char v61; // cl
  _QWORD *v62; // rax
  _QWORD *v63; // r13
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rcx
  VIDMM_DEVICE_COMMAND_UPDATEGPUVA *v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rax
  CVirtualAddressAllocator *v75; // r14
  __int64 v76; // rdx
  __int64 v77; // rcx
  struct VIDMM_VAD *v78; // rbx
  __int64 v79; // rax
  char *v80; // rax
  struct VIDMM_VAD *v81; // rcx
  struct VIDMM_VAD **v82; // rdx
  char **v83; // rdx
  char *v84; // rcx
  __int128 *i; // rcx
  bool v86; // zf
  __int64 v87; // rdx
  unsigned int j; // r8d
  __int64 v89; // rax
  char v90; // [rsp+38h] [rbp-D0h]
  __int128 v91; // [rsp+40h] [rbp-C8h] BYREF
  int v92; // [rsp+50h] [rbp-B8h]
  int v93; // [rsp+54h] [rbp-B4h]
  unsigned __int64 v94; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v95; // [rsp+60h] [rbp-A8h]
  __int64 v96; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v97; // [rsp+70h] [rbp-98h]
  D3DGPU_SIZE_T v98; // [rsp+78h] [rbp-90h]
  unsigned __int64 v99; // [rsp+80h] [rbp-88h]
  unsigned __int64 v100; // [rsp+88h] [rbp-80h]
  UINT64 DriverProtection; // [rsp+90h] [rbp-78h]
  D3DGPU_SIZE_T v102; // [rsp+98h] [rbp-70h]
  unsigned __int64 v103; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v104; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v105; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v106; // [rsp+B8h] [rbp-50h]
  union _LARGE_INTEGER Timeout; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v108; // [rsp+C8h] [rbp-40h]
  struct _VIDMM_MULTI_ALLOC *v109; // [rsp+D0h] [rbp-38h]
  CVirtualAddressAllocator *v110; // [rsp+E0h] [rbp-28h]
  PRKSEMAPHORE Semaphore; // [rsp+E8h] [rbp-20h]
  _BYTE v112[24]; // [rsp+F0h] [rbp-18h] BYREF
  _QWORD v113[24]; // [rsp+108h] [rbp+0h] BYREF
  bool v115; // [rsp+1E0h] [rbp+D8h]

  v7 = a6;
  v8 = a3;
  FenceValue = a2->FenceValue;
  v11 = *((_QWORD *)a3 + 7);
  if ( *((_BYTE *)a6 + 29) )
  {
    if ( FenceValue < v11 )
    {
      v12 = WdLogNewEntry5_WdWarning(this, a2);
      *(_QWORD *)(v12 + 24) = FenceValue;
      *(_QWORD *)(v12 + 32) = v11;
LABEL_8:
      WdLogEvent5_WdWarning(v12);
      v16 = WdLogNewEntry5_WdWarning(v15, v14);
      *(_QWORD *)(v16 + 24) = a2->FenceValue;
      WdLogEvent5_WdWarning(v16);
      return 3221225485LL;
    }
    if ( FenceValue == v11 )
    {
      v13 = WdLogNewEntry5_WdWarning(this, a2);
      *(_QWORD *)(v13 + 24) = FenceValue;
LABEL_11:
      WdLogEvent5_WdWarning(v13);
    }
  }
  else
  {
    if ( (int)v11 - (int)FenceValue > 0 )
    {
      v12 = WdLogNewEntry5_WdWarning(this, a2);
      *(_QWORD *)(v12 + 24) = (unsigned int)FenceValue;
      *(_QWORD *)(v12 + 32) = (unsigned int)v11;
      goto LABEL_8;
    }
    if ( (_DWORD)v11 == (_DWORD)FenceValue )
    {
      v13 = WdLogNewEntry5_WdWarning(this, a2);
      *(_QWORD *)(v13 + 24) = (unsigned int)FenceValue;
      goto LABEL_11;
    }
  }
  Semaphore = (PRKSEMAPHORE)((char *)v8 + 24);
  *a7 = (struct _KSEMAPHORE *)((char *)v8 + 24);
  Timeout.QuadPart = 0LL;
  if ( KeWaitForSingleObject((char *)v8 + 24, Executive, 0, 0, &Timeout) == 258 )
  {
    v20 = WdLogNewEntry5_WdWarning(v19, v18);
    WdLogEvent5_WdWarning(v20);
    return 3223191810LL;
  }
  *((_QWORD *)v8 + 7) = a2->FenceValue;
  v21 = -1073741811;
  v22 = 0LL;
  v110 = *(CVirtualAddressAllocator **)v8;
  v23 = 0LL;
  v93 = -1073741811;
  v24 = 0LL;
  v94 = 0LL;
  v25 = 0;
  v26 = *((_QWORD *)v110 + 2);
  v27 = *((_QWORD *)v8 + 1);
  v97 = v26;
  v99 = 0LL;
  v90 = 0;
  v28 = -1LL;
  v92 = *(unsigned __int16 *)(*(_QWORD *)(v27 + 96) + 6LL);
  *((_QWORD *)&v91 + 1) = &v91;
  *(_QWORD *)&v91 = &v91;
  v95 = -1LL;
  v100 = -1LL;
  if ( a2->NumOperations )
  {
    BaseAddress = (unsigned __int64)a3;
    v30 = v106;
    while ( 1 )
    {
      v31 = &a2->Operations[(unsigned __int64)v25];
      OperationType = v31->OperationType;
      if ( v31->OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP
        || OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP_PROTECT )
      {
        BaseAddress = v31->Map.BaseAddress;
        v106 = BaseAddress + v31->Map.SizeInBytes;
        v30 = v106;
        if ( !IsRangeValid(BaseAddress, v106, v26) )
          goto LABEL_80;
        v44 = a5[v31->Map.hAllocation];
        AllocationSizeInBytes = v31->Map.AllocationSizeInBytes;
        v109 = v44;
        if ( (AllocationSizeInBytes & 0xFFF) != 0
          || (AllocationOffsetInBytes = v31->Map.AllocationOffsetInBytes,
              v102 = AllocationOffsetInBytes,
              (AllocationOffsetInBytes & 0xFFF) != 0) )
        {
          v67 = (_QWORD *)WdLogNewEntry5_WdWarning(AllocationSizeInBytes, v43);
          v67[3] = v25;
          v67[4] = 23376LL;
          goto LABEL_79;
        }
        SizeInBytes = v31->Map.SizeInBytes;
        v98 = SizeInBytes;
        if ( AllocationSizeInBytes )
        {
          if ( AllocationSizeInBytes > SizeInBytes )
          {
            v67 = (_QWORD *)WdLogNewEntry5_WdWarning(AllocationSizeInBytes, v43);
            v67[3] = v25;
            goto LABEL_79;
          }
          v43 = SizeInBytes % AllocationSizeInBytes;
          if ( SizeInBytes % AllocationSizeInBytes )
          {
            v67 = (_QWORD *)WdLogNewEntry5_WdWarning(AllocationSizeInBytes, v43);
            v67[3] = v25;
            v67[4] = 23399LL;
            goto LABEL_79;
          }
        }
        else
        {
          v31->Map.AllocationSizeInBytes = SizeInBytes;
        }
        v48 = v31->Map.AllocationSizeInBytes;
        if ( AllocationOffsetInBytes + v48 < AllocationOffsetInBytes
          || (AllocationSizeInBytes = *(_QWORD *)v44,
              v43 = **(_QWORD **)v44,
              AllocationOffsetInBytes + v48 > *(_QWORD *)(v43 + 16)) )
        {
          v67 = (_QWORD *)WdLogNewEntry5_WdWarning(AllocationSizeInBytes, v43);
          v67[3] = *(_QWORD *)(**(_QWORD **)v44 + 16LL);
          v67[4] = v25;
          v67[5] = 23410LL;
          goto LABEL_79;
        }
        if ( (*((_BYTE *)this + 40873) & 2) != 0 )
        {
          v50 = 1LL;
          v115 = SizeInBytes != v48;
        }
        else
        {
          v98 = v31->Map.AllocationSizeInBytes;
          v49 = SizeInBytes;
          SizeInBytes = v48;
          v51 = v49;
          v50 = v49 / v48;
          v43 = v51 % v48;
          v115 = 0;
          v102 = 0LL;
        }
        v105 = v50;
        if ( v50 >= 0xFFFFFFFF )
        {
          v67 = (_QWORD *)WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, v43);
          v67[3] = v25;
          v67[4] = 23433LL;
          goto LABEL_79;
        }
        DriverProtection = 0LL;
        v52 = BaseAddress;
        v104 = BaseAddress;
        if ( v31->OperationType )
        {
          Value = v31->MapProtect.Protection.Value;
          DriverProtection = v31->MapProtect.DriverProtection;
        }
        else
        {
          Value = 1LL;
        }
        v108 = Value;
        LODWORD(v96) = 0;
        if ( (_DWORD)v50 )
        {
          while ( 1 )
          {
            v103 = v52 + SizeInBytes;
            v54 = operator new[](0x88uLL, 0x39346956u, PagedPool);
            v57 = v54;
            if ( v54 )
            {
              v58 = v115 ? v31->Map.AllocationSizeInBytes >> 12 : 0LL;
              v59 = v109;
              v54[9] = v31->Map.AllocationOffsetInBytes;
              v60 = DriverProtection;
              v57[15] = v58;
              v61 = v92;
              v57[10] = v60;
              v57[12] = v104;
              v57[13] = v103;
              v57[14] = v102;
              *((_DWORD *)v57 + 16) = 0;
              LODWORD(v60) = v57[8] & 0xFFFFFC01;
              v57[7] = v59;
              *v57 = 0LL;
              *((_DWORD *)v57 + 16) = v60 | (16 * (v61 & 0x3F)) | 1;
              v57[11] = Value;
              *((_DWORD *)v57 + 32) = 1;
              memset(v57 + 1, 0, 0x30uLL);
            }
            else
            {
              v57 = 0LL;
            }
            if ( !v57 )
              break;
            v62 = (_QWORD *)*((_QWORD *)&v91 + 1);
            v63 = v57 + 1;
            if ( **((__int128 ***)&v91 + 1) != &v91 )
              __fastfail(3u);
            SizeInBytes = v98;
            v63[1] = *((_QWORD *)&v91 + 1);
            *v63 = &v91;
            v52 = v103;
            *v62 = v63;
            *((_QWORD *)&v91 + 1) = v63;
            v104 = v52;
            LODWORD(v96) = v96 + 1;
            if ( (unsigned int)v96 >= (unsigned int)v105 )
            {
              v30 = v106;
              goto LABEL_65;
            }
          }
          v67 = (_QWORD *)WdLogNewEntry5_WdWarning(v56, v55);
          v67[3] = 23465LL;
LABEL_79:
          WdLogEvent5_WdWarning(v67);
LABEL_80:
          v21 = -1073741811;
LABEL_81:
          KeReleaseSemaphore(Semaphore, 0, 1, 0);
          if ( v24 )
            VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'(v24);
          while ( 1 )
          {
            v68 = v91;
            if ( (__int128 *)v91 == &v91 )
              break;
            v69 = *(_QWORD *)v91;
            if ( *(__int128 **)(v91 + 8) != &v91 || *(_QWORD *)(v69 + 8) != (_QWORD)v91 )
              __fastfail(3u);
            *(_QWORD *)&v91 = *(_QWORD *)v91;
            v70 = v68 - 8;
            *(_QWORD *)(v69 + 8) = &v91;
            *(_QWORD *)(v70 + 8) = 0LL;
            *(_QWORD *)(v70 + 16) = 0LL;
            VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((volatile signed __int32 *)v70);
          }
          return v21;
        }
      }
      else if ( OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_UNMAP )
      {
        BaseAddress = v31->Map.BaseAddress;
        v30 = BaseAddress + v31->Map.SizeInBytes;
        if ( !IsRangeValid(BaseAddress, v30, v26) )
          goto LABEL_80;
        v33 = operator new[](0x88uLL, 0x39346956u, PagedPool);
        v36 = v33;
        if ( v33 )
        {
          v37 = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)v31->Unmap.Protection.Value;
          v33[11] = v37;
          *((_DWORD *)v33 + 16) = 0;
          *v33 = 0LL;
          v33[7] = 0LL;
          v33[9] = 0LL;
          v33[10] = 0LL;
          v33[12] = BaseAddress;
          v33[13] = v30;
          v33[14] = 0LL;
          v33[15] = 0LL;
          *((_DWORD *)v33 + 32) = 1;
          *((_DWORD *)v33 + 16) = (v33[8] & 0xFFFFFFF0 | ((*(_BYTE *)&v37 & 8) != 0 ? 0 : 6)) ^ ((unsigned __int16)(16 * v92) ^ (unsigned __int16)(*((_WORD *)v33 + 32) | ((*(_BYTE *)&v37 & 8) == 0 ? 6 : 0))) & 0x3F0;
          memset(v33 + 1, 0, 0x30uLL);
        }
        else
        {
          v36 = 0LL;
        }
        if ( !v36 )
        {
          v67 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v34);
          v67[3] = 23496LL;
          goto LABEL_79;
        }
        v38 = (_QWORD *)*((_QWORD *)&v91 + 1);
        v39 = v36 + 1;
        if ( **((__int128 ***)&v91 + 1) != &v91 )
          __fastfail(3u);
        v39[1] = *((_QWORD *)&v91 + 1);
        *v39 = &v91;
        *v38 = v39;
        *((_QWORD *)&v91 + 1) = v39;
      }
      else
      {
        if ( OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_COPY )
          goto LABEL_66;
        BaseAddress = v31->Unmap.Protection.Value;
        v30 = BaseAddress + v31->Map.SizeInBytes;
        if ( !IsRangeValid(BaseAddress, v30, v26) )
          goto LABEL_80;
        v40 = v31->Map.BaseAddress;
        v41 = v40 + v31->Map.SizeInBytes;
        if ( v41 <= v40 )
        {
          v67 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v40);
          v67[3] = v25;
          v67[4] = 23516LL;
          goto LABEL_79;
        }
        if ( (v40 & 0xFFF) != 0 || (v41 & 0xFFF) != 0 )
        {
          v67 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v40);
          v67[3] = v25;
          v67[4] = 23521LL;
          goto LABEL_79;
        }
        if ( BaseAddress < v41 && v30 > v40 )
        {
          v67 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v40);
          v67[3] = v25;
          v67[4] = 23527LL;
          goto LABEL_79;
        }
        v42 = v100;
        v90 = 1;
        if ( v100 > v40 )
          v42 = v40;
        v100 = v42;
        if ( v99 >= v41 )
          v41 = v99;
        v99 = v41;
      }
LABEL_65:
      v26 = v97;
      v22 = v94;
      v28 = v95;
LABEL_66:
      if ( v30 <= BaseAddress )
      {
        v67 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v22);
        v67[3] = v25;
        v67[4] = 23547LL;
        goto LABEL_79;
      }
      if ( ((BaseAddress | v30) & 0xFFF) != 0 )
      {
        v67 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v22);
        v67[3] = v25;
        v67[4] = 23552LL;
        goto LABEL_79;
      }
      if ( v28 > BaseAddress )
        v28 = BaseAddress;
      v95 = v28;
      if ( v22 < v30 )
        v22 = v30;
      ++v25;
      v94 = v22;
      if ( v25 >= a2->NumOperations )
      {
        v8 = a3;
        v21 = -1073741811;
        v7 = a6;
        v23 = 0LL;
        break;
      }
    }
  }
  if ( (a2->Flags.Value & 1) == 0 )
  {
    *((_BYTE *)v7 + 25) = 0;
    v93 = VidSchWaitForSingleSyncObject(*((_QWORD *)v8 + 1), (__int64)v7, a2->FenceValue);
    v21 = v93;
    if ( v93 < 0 )
    {
      v66 = WdLogNewEntry5_WdAssertion(v65, v64);
      *(_QWORD *)(v66 + 24) = 23575LL;
      WdLogEvent5_WdAssertion(v66);
      goto LABEL_81;
    }
  }
  v71 = (VIDMM_DEVICE_COMMAND_UPDATEGPUVA *)operator new[](0xB8uLL, 0x39346956u, PagedPool);
  v24 = v71;
  if ( v71 )
  {
    memset(v71, 0, 0xB8uLL);
    *((_QWORD *)v24 + 13) = (char *)v24 + 96;
    *((_QWORD *)v24 + 12) = (char *)v24 + 96;
    *((_QWORD *)v24 + 7) = (char *)v24 + 48;
    *((_QWORD *)v24 + 6) = (char *)v24 + 48;
  }
  else
  {
    v24 = 0LL;
  }
  if ( !v24 )
  {
    v74 = WdLogNewEntry5_WdWarning(v73, v72);
    WdLogEvent5_WdWarning(v74);
    goto LABEL_81;
  }
  v75 = v110;
  *((_QWORD *)v24 + 1) = this;
  *((_DWORD *)v24 + 5) = a2->NumOperations;
  *((_QWORD *)v24 + 10) = a2->FenceValue + 1;
  *((_DWORD *)v24 + 4) = v92;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v112, (struct _KTHREAD **)v75 + 7);
  v78 = CVirtualAddressAllocator::ReferenceReservedZeroVad(v75, v95, v94);
  if ( !v78 || v90 && (v23 = CVirtualAddressAllocator::ReferenceReservedZeroVad(v75, v100, v99)) == 0LL )
  {
    v79 = WdLogNewEntry5_WdWarning(v77, v76);
    WdLogEvent5_WdWarning(v79);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v112);
    v21 = v93;
    goto LABEL_81;
  }
  *((_QWORD *)v24 + 15) = v23;
  *((_QWORD *)v24 + 21) = (char *)v24 + 120;
  v80 = (char *)v78 + 80;
  *((_QWORD *)v24 + 14) = v78;
  *((_QWORD *)v24 + 18) = (char *)v24 + 112;
  v81 = (VIDMM_DEVICE_COMMAND_UPDATEGPUVA *)((char *)v24 + 128);
  v82 = (struct VIDMM_VAD **)*((_QWORD *)v78 + 11);
  if ( *v82 != (struct VIDMM_VAD *)((char *)v78 + 80) )
    __fastfail(3u);
  *(_QWORD *)v81 = v80;
  *((_QWORD *)v24 + 17) = v82;
  *v82 = v81;
  *((_QWORD *)v78 + 11) = v81;
  if ( v23 )
  {
    v83 = (char **)*((_QWORD *)v78 + 11);
    v84 = (char *)v24 + 152;
    if ( *v83 != v80 )
      __fastfail(3u);
    *(_QWORD *)v84 = v80;
    *((_QWORD *)v24 + 20) = v83;
    *v83 = v84;
    *((_QWORD *)v78 + 11) = v84;
    *((_BYTE *)v24 + 176) = 1;
  }
  for ( i = (__int128 *)v91; i != &v91; i = *(__int128 **)i )
  {
    v86 = *((_QWORD *)i + 9) == 0LL;
    *((_QWORD *)i - 1) = v78;
    if ( v86 )
    {
      v87 = *((_QWORD *)v78 + 12);
      if ( (struct VIDMM_VAD *)v87 != (struct VIDMM_VAD *)((char *)v78 + 96) )
        *((_QWORD *)i + 9) = *(_QWORD *)(v87 + 72);
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v112);
  *((_QWORD *)v24 + 8) = a5;
  *((_DWORD *)v24 + 8) = a4;
  *((_QWORD *)v24 + 3) = a2->Operations;
  a2->Operations = 0LL;
  *((_QWORD *)v24 + 9) = v7;
  *((_QWORD *)v24 + 11) = v8;
  *(_QWORD *)v24 = *((_QWORD *)v8 + 1);
  if ( (__int128 *)v91 == &v91 )
  {
    *((_QWORD *)v24 + 13) = (char *)v24 + 96;
    *((_QWORD *)v24 + 12) = (char *)v24 + 96;
  }
  else
  {
    *((_OWORD *)v24 + 6) = v91;
    *(_QWORD *)(*((_QWORD *)v24 + 12) + 8LL) = (char *)v24 + 96;
    **((_QWORD **)v24 + 13) = (char *)v24 + 96;
  }
  *((_QWORD *)&v91 + 1) = &v91;
  *(_QWORD *)&v91 = &v91;
  _InterlockedIncrement((volatile signed __int32 *)v7 + 8);
  for ( j = 0; j < *((_DWORD *)v24 + 8); ++j )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)v24 + 8) + 8LL * j) + 160LL));
  VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVa(
    this,
    **((struct _EPROCESS ***)v75 + 11),
    a2->NumOperations,
    v7,
    a2->FenceValue);
  memset(v113, 0, 0x80uLL);
  LODWORD(v113[5]) = 2;
  v113[3] = VIDMM_GLOBAL::VidMmiUpdateGpuVirtualAddress;
  v89 = *((_QWORD *)v8 + 1);
  LODWORD(v113[0]) = 2;
  v113[6] = v24;
  v113[4] = 0LL;
  VidSchSubmitGlobalCommand(*(_QWORD *)(*(_QWORD *)(v89 + 104) + 32LL), (__int64)v113);
  return 0LL;
}
