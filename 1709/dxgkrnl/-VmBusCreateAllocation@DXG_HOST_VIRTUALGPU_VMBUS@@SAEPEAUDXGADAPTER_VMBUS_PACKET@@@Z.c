/*
 * XREFs of ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0191640
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C0003F38 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00040D4 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0004104 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00833BC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0086DD0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C008F820 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00F925C (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateAllocation(struct DXGADAPTER_VMBUS_PACKET *a1, __int64 a2)
{
  __int64 v2; // rsi
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // r9
  __int64 v7; // rax
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned int v12; // r12d
  unsigned int v13; // r13d
  __int64 v14; // rcx
  unsigned int v15; // edi
  __int64 v16; // rcx
  unsigned int v17; // ebx
  unsigned int v18; // edx
  SIZE_T v19; // rax
  __int64 v20; // rcx
  D3DDDI_ALLOCATIONINFO *v21; // r15
  _DWORD *v22; // r14
  SIZE_T v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  char v26; // bl
  __int64 v27; // rcx
  __int64 v28; // rax
  UINT v29; // ecx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rbx
  unsigned int v36; // r12d
  DXGPUSHLOCK *v37; // rcx
  __int64 v38; // r13
  unsigned int v39; // ebx
  __int64 v40; // rax
  __int64 v41; // r8
  int v42; // edx
  struct _EX_RUNDOWN_REF *v43; // rdx
  __int64 v44; // rdi
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // rdx
  const void *v46; // rdx
  char *v47; // r13
  struct _DXGKARG_DESCRIBEALLOCATION *v48; // rdx
  __int64 v49; // r8
  struct DXGDEVICE *Count; // rbx
  __int64 v51; // r9
  __int64 v52; // rdi
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned __int64 *P; // [rsp+40h] [rbp-C0h]
  struct DXGPROCESS *v60; // [rsp+48h] [rbp-B8h]
  __int64 v61; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v62; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v63; // [rsp+60h] [rbp-A0h] BYREF
  DXGPUSHLOCK *v64; // [rsp+68h] [rbp-98h]
  __int64 v65; // [rsp+70h] [rbp-90h]
  D3DDDI_ALLOCATIONINFO *v66; // [rsp+78h] [rbp-88h]
  struct _D3DKMT_CREATEALLOCATION v67; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v68[8]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v69[24]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v70[8]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v71[32]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v72[120]; // [rsp+118h] [rbp+18h] BYREF
  struct _EX_RUNDOWN_REF *v74; // [rsp+1A8h] [rbp+A8h] BYREF
  void *v75; // [rsp+1B0h] [rbp+B0h]
  unsigned int v76; // [rsp+1B8h] [rbp+B8h]

  v2 = *((_QWORD *)a1 + 9);
  LOBYTE(v74) = 0;
  Current = DXGPROCESS::GetCurrent((__int64)a1, a2);
  v6 = *(unsigned int *)(v2 + 40);
  v60 = Current;
  v65 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL);
  if ( !(_DWORD)v6 )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = 697LL;
LABEL_3:
    WdLogEvent5_WdError(v7);
    return 0;
  }
  v9 = 12 * v6;
  if ( 12 * v6 > 0xFFFFFFFF )
  {
    v7 = WdLogNewEntry5_WdError(0xFFFFFFFFLL);
    *(_QWORD *)(v7 + 24) = 703LL;
    goto LABEL_3;
  }
  v10 = *((unsigned int *)a1 + 20);
  if ( v10 - 64 < (unsigned __int64)v9 )
  {
    v7 = WdLogNewEntry5_WdError(v10 - 64);
    *(_QWORD *)(v7 + 24) = 709LL;
    goto LABEL_3;
  }
  v11 = *(unsigned int *)(v2 + 32);
  v12 = v9 + 64;
  if ( (unsigned int)v10 - (v9 + 64) < (unsigned int)v11 )
  {
    v7 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v7 + 24) = 715LL;
    goto LABEL_3;
  }
  v13 = v11 + v12;
  v14 = *(unsigned int *)(v2 + 36);
  if ( (unsigned int)v10 - v13 < (unsigned int)v14 )
  {
    v7 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v7 + 24) = 721LL;
    goto LABEL_3;
  }
  v15 = v14 + v13;
  v16 = 0LL;
  v17 = v15;
  v18 = *(_DWORD *)(v2 + 68);
  do
  {
    if ( (unsigned int)v10 - v17 < v18 )
    {
      v7 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v7 + 24) = 732LL;
      goto LABEL_3;
    }
    v17 += v18;
    v16 = (unsigned int)(v16 + 1);
  }
  while ( (unsigned int)v16 < (unsigned int)v6 );
  v19 = 96 * v6;
  if ( !is_mul_ok(v6, 0x60uLL) )
    v19 = -1LL;
  v66 = (D3DDDI_ALLOCATIONINFO *)operator new(v19, 0x4B677844u, 1, PagedPool);
  v21 = v66;
  if ( !v66 )
  {
    v7 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v7 + 24) = 743LL;
    goto LABEL_3;
  }
  v22 = 0LL;
  v23 = 8LL * *(unsigned int *)(v2 + 40);
  if ( !is_mul_ok(*(unsigned int *)(v2 + 40), 8uLL) )
    v23 = -1LL;
  P = (unsigned __int64 *)operator new(v23, 0x4B677844u, 1, PagedPool);
  if ( P )
  {
    LODWORD(v75) = 72 * *(_DWORD *)(v2 + 40) + 16;
    v76 = v17 + (_DWORD)v75 - v15;
    v22 = operator new(v76, 0x4B677844u, 1, (POOL_TYPE)512);
    if ( v22 )
    {
      memset(&v67, 0, sizeof(v67));
      v29 = *(_DWORD *)(v2 + 40);
      v67.hDevice = *(_DWORD *)(v2 + 24);
      v67.hResource = *(_DWORD *)(v2 + 28);
      v67.NumAllocations = v29;
      v67.pPrivateRuntimeData = (const void *)(v2 + v12);
      v67.PrivateRuntimeDataSize = *(_DWORD *)(v2 + 32);
      v67.pAllocationInfo = v66;
      v67.pStandardAllocation = (D3DKMT_CREATESTANDARDALLOCATION *)(v2 + v13);
      v30 = 0LL;
      v67.PrivateDriverDataSize = *(_DWORD *)(v2 + 36);
      v67.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)(v2 + 44) & 0xFFFFFFBF);
      v67.hPrivateRuntimeResourceHandle = *(HANDLE *)(v2 + 48);
      if ( v29 )
      {
        do
        {
          if ( (*(_DWORD *)(v2 + 44) & 0x20) != 0 )
            *((_QWORD *)&v21->pSystemMem + 12 * (unsigned int)v30) = 1LL;
          v31 = (unsigned int)v30;
          v30 = (unsigned int)(v30 + 1);
          v32 = 96 * v31;
          *(UINT *)((char *)&v21->Flags.Value + v32) = *(_DWORD *)(v2 + 12 * v31 + 64);
          *(UINT *)((char *)&v21->PrivateDriverDataSize + v32) = *(_DWORD *)(v2 + 12 * v31 + 68);
          *(void **)((char *)&v21->pPrivateDriverData + v32) = (void *)(v2 + v15);
          *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v21->VidPnSourceId + v32) = *(_DWORD *)(v2 + 12 * v31 + 72);
          v15 += *(_DWORD *)(v2 + 12 * v31 + 68);
        }
        while ( (unsigned int)v30 < *(_DWORD *)(v2 + 40) );
      }
      v33 = DxgkCreateAllocationInternal(&v67, P, v30);
      v35 = v33;
      if ( v33 < 0 )
      {
        v58 = WdLogNewEntry5_WdError(v34);
        *(_QWORD *)(v58 + 24) = v35;
        *(_QWORD *)(v58 + 32) = 870LL;
        WdLogEvent5_WdError(v58);
        v26 = 0;
      }
      else
      {
        v36 = 0;
        *v22 = v67.Flags;
        v22[2] = v67.hGlobalShare;
        v22[1] = v67.hResource;
        v75 = (char *)v22 + (unsigned int)v75;
        if ( *(_DWORD *)(v2 + 40) )
        {
          v37 = (struct DXGPROCESS *)((char *)v60 + 200);
          v64 = (struct DXGPROCESS *)((char *)v60 + 200);
          do
          {
            v38 = 96LL * v36;
            v39 = *(D3DKMT_HANDLE *)((char *)&v67.pAllocationInfo->hAllocation + v38);
            DXGPUSHLOCK::AcquireShared(v37);
            v40 = (v39 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v40 < *((_DWORD *)v60 + 60)
              && (v41 = *((_QWORD *)v60 + 28),
                  v42 = *(_DWORD *)(v41 + 16 * v40 + 8),
                  ((v39 >> 25) & 0x60) == (*(_BYTE *)(v41 + 16 * v40 + 8) & 0x60))
              && (v42 & 0x2000) == 0
              && (v42 & 0x1F) != 0
              && (*(_BYTE *)(v41 + 16LL * (unsigned int)v40 + 8) & 0x1F) == 5 )
            {
              v43 = *(struct _EX_RUNDOWN_REF **)(v41 + 16LL * (unsigned int)v40);
            }
            else
            {
              v43 = 0LL;
            }
            DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v74, v43);
            ExReleasePushLockSharedEx(v64, 0LL);
            KeLeaveCriticalRegion();
            v44 = 9LL * v36;
            pAllocationInfo = v67.pAllocationInfo;
            v22[2 * v44 + 6] = *(_DWORD *)(v74[6].Count + 4);
            v22[2 * v44 + 4] = *(&pAllocationInfo->hAllocation + 24 * v36);
            v22[2 * v44 + 5] = *(_DWORD *)(v2 + 12LL * v36 + 68);
            *(_QWORD *)&v22[2 * v44 + 8] = P[v36];
            v46 = *(void **)((char *)&pAllocationInfo->pPrivateDriverData + v38);
            v47 = (char *)v75;
            memmove(v75, v46, *(unsigned int *)(v2 + 12LL * v36 + 68));
            v48 = (struct _DXGKARG_DESCRIBEALLOCATION *)&v22[18 * v36 + 10];
            v75 = &v47[*(unsigned int *)(v2 + 12LL * v36 + 68)];
            v48->hAllocation = *(HANDLE *)(v74[6].Count + 16);
            ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v65 + 2312), v48, v49);
            if ( *(_BYTE *)(v2 + 56) )
            {
              Count = (struct DXGDEVICE *)v74[1].Count;
              DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
                (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v69,
                Count);
              COREDEVICEACCESS::COREDEVICEACCESS((__int64)v70, (__int64)Count, 0, v51, 0);
              if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v70) >= 0
                && DXGDEVICE::UmdManagesResidency(Count) )
              {
                v52 = *((_QWORD *)Count + 2);
                v53 = *((_QWORD *)Count + 74);
                v61 = 0LL;
                v63 = 0LL;
                (*(void (__fastcall **)(__int64, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v52 + 528) + 8LL)
                                                                              + 960LL))(
                  v53,
                  0LL,
                  &v61,
                  &v63);
                v62 = 0LL;
                v54 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, _BYTE *))(*(_QWORD *)(*(_QWORD *)(v52 + 528) + 8LL) + 768LL))(
                        *(_QWORD *)(v52 + 536),
                        v61,
                        v74 + 3,
                        1LL,
                        3,
                        &v62,
                        v68);
                v56 = v54;
                if ( v54 >= 0 )
                {
                  if ( v54 == 259 )
                    (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v52 + 528)
                                                                                              + 8LL)
                                                                                  + 968LL))(
                      *(_QWORD *)(v52 + 536),
                      &v63,
                      &v62,
                      1LL);
                }
                else
                {
                  v57 = WdLogNewEntry5_WdAssertion(v55);
                  *(_QWORD *)(v57 + 24) = v56;
                  WdLogEvent5_WdAssertion(v57);
                }
              }
              COREACCESS::~COREACCESS((COREACCESS *)v72);
              COREACCESS::~COREACCESS((COREACCESS *)v71);
              DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v69);
            }
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v74);
            v37 = v64;
            ++v36;
          }
          while ( v36 < *(_DWORD *)(v2 + 40) );
          v21 = v66;
        }
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), v22, v76);
        v26 = 1;
      }
    }
    else
    {
      v28 = WdLogNewEntry5_WdError(v27);
      *(_QWORD *)(v28 + 24) = 761LL;
      WdLogEvent5_WdError(v28);
      v26 = (char)v74;
    }
  }
  else
  {
    v25 = WdLogNewEntry5_WdLowResource(v24);
    *(_QWORD *)(v25 + 24) = 751LL;
    WdLogEvent5_WdLowResource(v25);
    v26 = 0;
  }
  ExFreePoolWithTag(v21, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v22 )
    ExFreePoolWithTag(v22, 0);
  return v26;
}
