/*
 * XREFs of ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017D240
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000DC30 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C0015164 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00166A0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00166DC (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEALLOCATION@@@@YAPEAUDXGKVMB_COMMAND_CREATEALLOCATION@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D31C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEALLOCATION@@@@YAPEAUDXGKVMB_COMMAND_CREATEALLOCATIO.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C00E5230 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00E8320 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C010EEAC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateAllocation(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // si
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r14
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned int v14; // r13d
  int v15; // edx
  __int64 v16; // rcx
  unsigned int v17; // edi
  unsigned int v18; // edx
  unsigned int v19; // ebx
  unsigned int v20; // r11d
  SIZE_T v21; // rax
  __int64 v22; // rcx
  D3DDDI_ALLOCATIONINFO *v23; // r12
  SIZE_T v24; // rax
  _DWORD *v25; // r15
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r8
  UINT v31; // ecx
  __int64 v32; // rcx
  __int64 v33; // rdx
  UINT v34; // eax
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rbx
  char Flags; // al
  __int64 v40; // rax
  unsigned int v41; // r13d
  char *v42; // r12
  DXGPUSHLOCK *v43; // rdx
  unsigned int v44; // ebx
  __int64 v45; // rax
  __int64 v46; // r8
  int v47; // ecx
  struct _EX_RUNDOWN_REF *v48; // rdx
  __int64 v49; // rdi
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // r9
  __int64 v51; // rdx
  struct _DXGKARG_DESCRIBEALLOCATION *v52; // rdx
  __int64 v53; // r8
  struct DXGDEVICE *Count; // rbx
  __int64 v55; // r9
  __int64 v56; // rdi
  __int64 v57; // rcx
  int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // rax
  unsigned __int64 *v62; // [rsp+40h] [rbp-C0h]
  struct DXGPROCESS *v63; // [rsp+48h] [rbp-B8h]
  __int64 v64; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v65; // [rsp+58h] [rbp-A8h] BYREF
  DXGPUSHLOCK *v66; // [rsp+60h] [rbp-A0h]
  __int64 v67; // [rsp+68h] [rbp-98h]
  D3DDDI_ALLOCATIONINFO *v68; // [rsp+70h] [rbp-90h]
  struct _D3DKMT_CREATEALLOCATION v69; // [rsp+80h] [rbp-80h] BYREF
  char v70[8]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v71[24]; // [rsp+D8h] [rbp-28h] BYREF
  char v72[8]; // [rsp+F0h] [rbp-10h] BYREF
  char v73[32]; // [rsp+F8h] [rbp-8h] BYREF
  char v74[120]; // [rsp+118h] [rbp+18h] BYREF
  struct _EX_RUNDOWN_REF *v76; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v77; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v78; // [rsp+1B8h] [rbp+B8h]

  v2 = 0;
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEALLOCATION>((__int64)a1);
  if ( !v5 )
    return 0;
  Current = DXGPROCESS::GetCurrent(v4, v3);
  v9 = *(unsigned int *)(v5 + 40);
  v63 = Current;
  v67 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL);
  if ( !(_DWORD)v9 )
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = 770LL;
LABEL_5:
    WdLogEvent5_WdError(v10);
    return 0;
  }
  v11 = 12 * v9;
  if ( 12 * v9 > 0xFFFFFFFF )
  {
    v10 = WdLogNewEntry5_WdError(0xFFFFFFFFLL);
    *(_QWORD *)(v10 + 24) = 776LL;
    goto LABEL_5;
  }
  v12 = *((unsigned int *)a1 + 20);
  if ( v12 - 64 < (unsigned __int64)v11 )
  {
    v10 = WdLogNewEntry5_WdError(v12 - 64);
    *(_QWORD *)(v10 + 24) = 782LL;
    goto LABEL_5;
  }
  v13 = *(unsigned int *)(v5 + 32);
  v14 = v11 + 64;
  if ( (unsigned int)v12 - (v11 + 64) < (unsigned int)v13 )
  {
    v10 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v10 + 24) = 788LL;
    goto LABEL_5;
  }
  v15 = v13 + v14;
  v16 = *(unsigned int *)(v5 + 36);
  LODWORD(v76) = v15;
  if ( (int)v12 - v15 < (unsigned int)v16 )
  {
    v10 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v10 + 24) = 794LL;
    goto LABEL_5;
  }
  v17 = v16 + v15;
  v18 = 0;
  v19 = v17;
  do
  {
    v20 = *(_DWORD *)(v5 + 12LL * v18 + 68);
    if ( (unsigned int)v12 - v19 < v20 )
    {
      v10 = WdLogNewEntry5_WdError(3LL * v18);
      *(_QWORD *)(v10 + 24) = 805LL;
      goto LABEL_5;
    }
    v19 += v20;
    ++v18;
  }
  while ( v18 < (unsigned int)v9 );
  v21 = 96 * v9;
  if ( !is_mul_ok(v9, 0x60uLL) )
    v21 = -1LL;
  v68 = (D3DDDI_ALLOCATIONINFO *)operator new(v21, 0x4B677844u, 1, PagedPool);
  v23 = v68;
  if ( !v68 )
  {
    v10 = WdLogNewEntry5_WdError(v22);
    *(_QWORD *)(v10 + 24) = 816LL;
    goto LABEL_5;
  }
  v24 = 8LL * *(unsigned int *)(v5 + 40);
  v25 = 0LL;
  if ( !is_mul_ok(*(unsigned int *)(v5 + 40), 8uLL) )
    v24 = -1LL;
  v62 = (unsigned __int64 *)operator new(v24, 0x4B677844u, 1, PagedPool);
  if ( v62 )
  {
    LODWORD(v77) = 72 * *(_DWORD *)(v5 + 40) + 16;
    v78 = v19 + v77 - v17;
    v25 = operator new(v78, 0x4B677844u, 1, (POOL_TYPE)512);
    if ( v25 )
    {
      memset(&v69, 0, sizeof(v69));
      v30 = 0LL;
      v31 = *(_DWORD *)(v5 + 40);
      v69.hDevice = *(_DWORD *)(v5 + 24);
      v69.hResource = *(_DWORD *)(v5 + 28);
      v69.NumAllocations = v31;
      v69.pPrivateRuntimeData = (const void *)(v5 + v14);
      v69.PrivateRuntimeDataSize = *(_DWORD *)(v5 + 32);
      v69.pAllocationInfo = v68;
      v69.pStandardAllocation = (D3DKMT_CREATESTANDARDALLOCATION *)(v5 + (unsigned int)v76);
      v69.PrivateDriverDataSize = *(_DWORD *)(v5 + 36);
      v69.Flags = *(D3DKMT_CREATEALLOCATIONFLAGS *)(v5 + 44);
      v69.hPrivateRuntimeResourceHandle = *(HANDLE *)(v5 + 48);
      if ( v31 )
      {
        do
        {
          v32 = (unsigned int)v30;
          if ( (*(_DWORD *)(v5 + 44) & 0x20) != 0 )
            *((_QWORD *)&v23->pSystemMem + 12 * (unsigned int)v30) = 1LL;
          v33 = 3LL * (unsigned int)v30;
          v30 = (unsigned int)(v30 + 1);
          v34 = *(_DWORD *)(v5 + 12 * v32 + 64);
          v35 = 96 * v32;
          *(UINT *)((char *)&v23->Flags.Value + v35) = v34;
          *(UINT *)((char *)&v23->PrivateDriverDataSize + v35) = *(_DWORD *)(v5 + 4 * v33 + 68);
          *(void **)((char *)&v23->pPrivateDriverData + v35) = (void *)(v5 + v17);
          *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v23->VidPnSourceId + v35) = *(_DWORD *)(v5 + 4 * v33 + 72);
          v17 += *(_DWORD *)(v5 + 4 * v33 + 68);
        }
        while ( (unsigned int)v30 < *(_DWORD *)(v5 + 40) );
      }
      v36 = DxgkCreateAllocationInternal(&v69, v62, v30);
      v38 = v36;
      if ( v36 >= 0 )
      {
        Flags = (char)v69.Flags;
        *v25 = v69.Flags;
        if ( (Flags & 0x40) != 0 )
        {
          if ( v69.hGlobalShare )
          {
            v40 = WdLogNewEntry5_WdAssertion(v37);
            *(_QWORD *)(v40 + 24) = 871LL;
            WdLogEvent5_WdAssertion(v40);
          }
        }
        else
        {
          v25[2] = v69.hGlobalShare;
        }
        v41 = 0;
        v25[1] = v69.hResource;
        if ( *(_DWORD *)(v5 + 40) )
        {
          v42 = (char *)v25 + (unsigned int)v77;
          v43 = (struct DXGPROCESS *)((char *)v63 + 208);
          v66 = (struct DXGPROCESS *)((char *)v63 + 208);
          do
          {
            v77 = 96LL * v41;
            v44 = *(D3DKMT_HANDLE *)((char *)&v69.pAllocationInfo->hAllocation + v77);
            DXGPUSHLOCK::AcquireShared(v43);
            v45 = (v44 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v45 < *((_DWORD *)v63 + 62)
              && (v46 = *((_QWORD *)v63 + 29),
                  v47 = *(_DWORD *)(v46 + 16 * v45 + 8),
                  ((v44 >> 25) & 0x60) == (*(_BYTE *)(v46 + 16 * v45 + 8) & 0x60))
              && (v47 & 0x2000) == 0
              && (v47 & 0x1F) == 5 )
            {
              v48 = *(struct _EX_RUNDOWN_REF **)(v46 + 16LL * (unsigned int)v45);
            }
            else
            {
              v48 = 0LL;
            }
            DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v76, v48);
            ExReleasePushLockSharedEx(v66, 0LL);
            KeLeaveCriticalRegion();
            v49 = 9LL * v41;
            pAllocationInfo = v69.pAllocationInfo;
            v51 = v77;
            v25[2 * v49 + 6] = *(_DWORD *)(v76[6].Count + 4);
            v25[2 * v49 + 4] = *(D3DKMT_HANDLE *)((char *)&pAllocationInfo->hAllocation + v51);
            v25[2 * v49 + 5] = *(_DWORD *)(v5 + 12LL * v41 + 68);
            *(_QWORD *)&v25[2 * v49 + 8] = v62[v41];
            memmove(
              v42,
              *(const void **)((char *)&pAllocationInfo->pPrivateDriverData + v51),
              *(unsigned int *)(v5 + 12LL * v41 + 68));
            v42 += *(unsigned int *)(v5 + 12LL * v41 + 68);
            v52 = (struct _DXGKARG_DESCRIBEALLOCATION *)&v25[18 * v41 + 10];
            v52->hAllocation = *(HANDLE *)(v76[6].Count + 16);
            ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v67 + 2464), v52, v53);
            if ( *(_BYTE *)(v5 + 56) )
            {
              Count = (struct DXGDEVICE *)v76[1].Count;
              DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
                (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v71,
                Count);
              COREDEVICEACCESS::COREDEVICEACCESS((__int64)v72, (__int64)Count, 0, v55, 0);
              if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v72) >= 0
                && DXGDEVICE::UmdManagesResidency(Count) )
              {
                v56 = *((_QWORD *)Count + 2);
                v57 = *((_QWORD *)Count + 76);
                v77 = 0LL;
                v65 = 0LL;
                (*(void (__fastcall **)(__int64, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v56 + 544) + 8LL)
                                                                              + 976LL))(
                  v57,
                  0LL,
                  &v77,
                  &v65);
                v64 = 0LL;
                v58 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, char *))(*(_QWORD *)(*(_QWORD *)(v56 + 544) + 8LL) + 768LL))(
                        *(_QWORD *)(v56 + 552),
                        v77,
                        v76 + 3,
                        1LL,
                        3,
                        &v64,
                        v70);
                v60 = v58;
                if ( v58 >= 0 )
                {
                  if ( v58 == 259 )
                    (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v56 + 544)
                                                                                              + 8LL)
                                                                                  + 984LL))(
                      *(_QWORD *)(v56 + 552),
                      &v65,
                      &v64,
                      1LL);
                }
                else
                {
                  v61 = WdLogNewEntry5_WdAssertion(v59);
                  *(_QWORD *)(v61 + 24) = v60;
                  WdLogEvent5_WdAssertion(v61);
                }
              }
              COREACCESS::~COREACCESS((COREACCESS *)v74);
              COREACCESS::~COREACCESS((COREACCESS *)v73);
              DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v71);
            }
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v76);
            v43 = v66;
            ++v41;
          }
          while ( v41 < *(_DWORD *)(v5 + 40) );
          v23 = v68;
        }
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), v25, v78);
        v2 = 1;
        goto LABEL_58;
      }
      v29 = WdLogNewEntry5_WdError(v37);
      *(_QWORD *)(v29 + 24) = v38;
      *(_QWORD *)(v29 + 32) = 949LL;
    }
    else
    {
      v29 = WdLogNewEntry5_WdError(v28);
      *(_QWORD *)(v29 + 24) = 834LL;
    }
    WdLogEvent5_WdError(v29);
  }
  else
  {
    v27 = WdLogNewEntry5_WdLowResource(v26);
    *(_QWORD *)(v27 + 24) = 824LL;
    WdLogEvent5_WdLowResource(v27);
  }
LABEL_58:
  operator delete[](v23);
  operator delete[](v62);
  operator delete[](v25);
  return v2;
}
