/*
 * XREFs of ?VmBusCreateAllocation@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002BC70
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0004DF0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0004E20 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000529C (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00A5924 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00CCDB0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00CFC9C (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C00DD060 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 */

char __fastcall VmBusCreateAllocation(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // r14
  char v3; // si
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // rcx
  unsigned int v18; // edi
  __int64 v19; // rdx
  unsigned __int128 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  D3DDDI_ALLOCATIONINFO *v23; // r12
  unsigned __int128 v24; // rax
  D3DKMT_CREATEALLOCATIONFLAGS *v25; // r15
  unsigned int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned int v29; // r13d
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned int v33; // r8d
  UINT v34; // ecx
  __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rbx
  unsigned int v41; // r13d
  DXGPUSHLOCK *v42; // rdx
  char *v43; // r12
  unsigned int v44; // ebx
  unsigned int v45; // ecx
  __int64 v46; // r8
  int v47; // edx
  struct DXGALLOCATION *v48; // rdx
  __int64 v49; // rdi
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // r9
  __int64 v51; // rdx
  struct _DXGKARG_DESCRIBEALLOCATION *v52; // rdx
  struct DXGDEVICE *v53; // rbx
  __int64 v54; // r9
  __int64 v55; // rdi
  __int64 v56; // rcx
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rbx
  __int64 v63; // rax
  unsigned int v64; // [rsp+40h] [rbp-C0h]
  unsigned __int64 *v65; // [rsp+48h] [rbp-B8h]
  struct DXGPROCESS *v66; // [rsp+50h] [rbp-B0h]
  __int64 v67; // [rsp+58h] [rbp-A8h] BYREF
  DXGPUSHLOCK *v68; // [rsp+60h] [rbp-A0h]
  __int64 v69; // [rsp+68h] [rbp-98h]
  D3DDDI_ALLOCATIONINFO *v70; // [rsp+70h] [rbp-90h]
  struct _D3DKMT_CREATEALLOCATION v71; // [rsp+80h] [rbp-80h] BYREF
  char v72[8]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v73[24]; // [rsp+D8h] [rbp-28h] BYREF
  char v74[8]; // [rsp+F0h] [rbp-10h] BYREF
  char v75[32]; // [rsp+F8h] [rbp-8h] BYREF
  char v76[120]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v78; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v79; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v80; // [rsp+1B8h] [rbp+B8h] BYREF

  v1 = *((_QWORD *)a1 + 9);
  v3 = 0;
  Current = DXGPROCESS::GetCurrent();
  v7 = *(unsigned int *)(v1 + 32);
  v66 = Current;
  v69 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 8LL);
  if ( !(_DWORD)v7 )
  {
    v8 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v8 + 24) = 4749LL;
LABEL_3:
    WdLogEvent5_WdError(v8);
    return 0;
  }
  v10 = 12 * v7;
  if ( 12 * v7 > 0xFFFFFFFF )
  {
    v8 = WdLogNewEntry5_WdError(v6, v10);
    *(_QWORD *)(v8 + 24) = 4755LL;
    goto LABEL_3;
  }
  v11 = *((unsigned int *)a1 + 20);
  if ( v11 - 56 < (unsigned __int64)(unsigned int)v10 )
  {
    v8 = WdLogNewEntry5_WdError(v11 - 56, v10);
    *(_QWORD *)(v8 + 24) = 4761LL;
    goto LABEL_3;
  }
  v12 = *(unsigned int *)(v1 + 24);
  v13 = (unsigned int)(v10 + 56);
  LODWORD(v78) = v13;
  if ( (int)v11 - (int)v13 < (unsigned int)v12 )
  {
    v8 = WdLogNewEntry5_WdError(v12, v13);
    *(_QWORD *)(v8 + 24) = 4767LL;
    goto LABEL_3;
  }
  v14 = (unsigned int)(v12 + v13);
  v15 = *(unsigned int *)(v1 + 28);
  LODWORD(v79) = v14;
  if ( (int)v11 - (int)v14 < (unsigned int)v15 )
  {
    v8 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v8 + 24) = 4773LL;
    goto LABEL_3;
  }
  v16 = v15 + v14;
  v17 = 0LL;
  v18 = v16;
  v19 = *(unsigned int *)(v1 + 60);
  do
  {
    if ( (unsigned int)v11 - v18 < (unsigned int)v19 )
    {
      v8 = WdLogNewEntry5_WdError(v17, v19);
      *(_QWORD *)(v8 + 24) = 4784LL;
      goto LABEL_3;
    }
    v18 += v19;
    v17 = (unsigned int)(v17 + 1);
  }
  while ( (unsigned int)v17 < (unsigned int)v7 );
  v20 = v7 * (unsigned __int128)0x60uLL;
  if ( !is_mul_ok(v7, 0x60uLL) )
    *(_QWORD *)&v20 = -1LL;
  v70 = (D3DDDI_ALLOCATIONINFO *)operator new(v20, DWORD2(v20), 1, PagedPool);
  v23 = v70;
  if ( !v70 )
  {
    v8 = WdLogNewEntry5_WdError(v22, v21);
    *(_QWORD *)(v8 + 24) = 4795LL;
    goto LABEL_3;
  }
  v24 = *(unsigned int *)(v1 + 32) * (unsigned __int128)8uLL;
  v25 = 0LL;
  if ( !is_mul_ok(*(unsigned int *)(v1 + 32), 8uLL) )
    *(_QWORD *)&v24 = -1LL;
  v65 = (unsigned __int64 *)operator new(v24, DWORD2(v24), 1, PagedPool);
  if ( v65 )
  {
    LODWORD(v80) = 72 * *(_DWORD *)(v1 + 32) + 16;
    v29 = v18 + v80 - v16;
    v64 = v29;
    v25 = (D3DKMT_CREATEALLOCATIONFLAGS *)operator new(v29, v26, 1, (enum _POOL_TYPE)512);
    if ( v25 )
    {
      memset(&v71, 0, sizeof(v71));
      v33 = 0;
      v34 = *(_DWORD *)(v1 + 32);
      v71.hDevice = *(_DWORD *)(v1 + 16);
      v71.hResource = *(_DWORD *)(v1 + 20);
      v71.NumAllocations = v34;
      v71.pPrivateRuntimeData = (const void *)(v1 + (unsigned int)v78);
      v71.PrivateRuntimeDataSize = *(_DWORD *)(v1 + 24);
      v71.pAllocationInfo = v70;
      v71.pStandardAllocation = (D3DKMT_CREATESTANDARDALLOCATION *)(v1 + (unsigned int)v79);
      v71.PrivateDriverDataSize = *(_DWORD *)(v1 + 28);
      v71.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)(v1 + 36) & 0xFFFFFFBF);
      v71.hPrivateRuntimeResourceHandle = *(HANDLE *)(v1 + 40);
      if ( v34 )
      {
        do
        {
          v35 = v33++;
          v36 = 96 * v35;
          *(UINT *)((char *)&v23->Flags.Value + v36) = *(_DWORD *)(v1 + 12 * v35 + 56);
          *(UINT *)((char *)&v23->PrivateDriverDataSize + v36) = *(_DWORD *)(v1 + 12 * v35 + 60);
          *(void **)((char *)&v23->pPrivateDriverData + v36) = (void *)(v1 + v16);
          *(const void **)((char *)&v23->pSystemMem + v36) = 0LL;
          *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v23->VidPnSourceId + v36) = *(_DWORD *)(v1 + 12 * v35 + 64);
          v16 += *(_DWORD *)(v1 + 12 * v35 + 60);
        }
        while ( v33 < *(_DWORD *)(v1 + 32) );
      }
      v37 = DxgkCreateAllocationInternal(&v71, v65);
      v40 = v37;
      if ( v37 >= 0 )
      {
        *v25 = v71.Flags;
        v25[2] = (D3DKMT_CREATEALLOCATIONFLAGS)v71.hGlobalShare;
        v25[1] = (D3DKMT_CREATEALLOCATIONFLAGS)v71.hResource;
        if ( *(_DWORD *)(v1 + 32) )
        {
          v41 = 0;
          v42 = (struct DXGPROCESS *)((char *)v66 + 168);
          v43 = (char *)v25 + (unsigned int)v80;
          v68 = (struct DXGPROCESS *)((char *)v66 + 168);
          do
          {
            v79 = 96LL * v41;
            v44 = *(D3DKMT_HANDLE *)((char *)&v71.pAllocationInfo->hAllocation + v79);
            DXGPUSHLOCK::AcquireShared(v42);
            v45 = (v44 >> 6) & 0xFFFFFF;
            if ( v45 < *((_DWORD *)v66 + 52)
              && (v46 = *((_QWORD *)v66 + 24),
                  v47 = *(_DWORD *)(v46 + 16LL * v45 + 8),
                  ((v44 >> 26) & 0x30) == (*(_BYTE *)(v46 + 16LL * v45 + 8) & 0x30))
              && (v47 & 0x1000) == 0
              && (v47 & 0xF) != 0
              && (*(_BYTE *)(v46 + 16LL * v45 + 8) & 0xF) == 5 )
            {
              v48 = *(struct DXGALLOCATION **)(v46 + 16LL * v45);
            }
            else
            {
              v48 = 0LL;
            }
            DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v78, v48);
            ExReleasePushLockSharedEx(v68, 0LL);
            KeLeaveCriticalRegion();
            v49 = 9LL * v41;
            pAllocationInfo = v71.pAllocationInfo;
            v51 = v79;
            v25[2 * v49 + 6] = *(D3DKMT_CREATEALLOCATIONFLAGS *)(*(_QWORD *)(v78 + 48) + 4LL);
            v25[2 * v49 + 4] = *(D3DKMT_CREATEALLOCATIONFLAGS *)((char *)&pAllocationInfo->hAllocation + v51);
            v25[2 * v49 + 5] = *(D3DKMT_CREATEALLOCATIONFLAGS *)(v1 + 12LL * v41 + 60);
            *(_QWORD *)&v25[2 * v49 + 8] = v65[v41];
            memmove(
              v43,
              *(const void **)((char *)&pAllocationInfo->pPrivateDriverData + v51),
              *(unsigned int *)(v1 + 12LL * v41 + 60));
            v43 += *(unsigned int *)(v1 + 12LL * v41 + 60);
            v52 = (struct _DXGKARG_DESCRIBEALLOCATION *)&v25[18 * v41 + 10];
            v52->hAllocation = *(HANDLE *)(*(_QWORD *)(v78 + 48) + 16LL);
            ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v69 + 2288), v52);
            if ( *(_BYTE *)(v1 + 48) )
            {
              v53 = *(struct DXGDEVICE **)(v78 + 8);
              DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
                (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v73,
                v53);
              COREDEVICEACCESS::COREDEVICEACCESS((__int64)v74, (__int64)v53, 0LL, v54, 0);
              if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v74) >= 0
                && DXGDEVICE::UmdManagesResidency(v53) )
              {
                v55 = *((_QWORD *)v53 + 2);
                v56 = *((_QWORD *)v53 + 74);
                v79 = 0LL;
                v67 = 0LL;
                (*(void (__fastcall **)(__int64, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v55 + 432) + 8LL)
                                                                              + 960LL))(
                  v56,
                  0LL,
                  &v79,
                  &v67);
                v80 = 0LL;
                v57 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, int, __int64 *, char *))(*(_QWORD *)(*(_QWORD *)(v55 + 432) + 8LL) + 768LL))(
                        *(_QWORD *)(v55 + 440),
                        v79,
                        v78 + 24,
                        1LL,
                        3,
                        &v80,
                        v72);
                v62 = v57;
                if ( v57 >= 0 )
                {
                  if ( v57 == 259 )
                    (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v55 + 432)
                                                                                              + 8LL)
                                                                                  + 968LL))(
                      *(_QWORD *)(v55 + 440),
                      &v67,
                      &v80,
                      1LL);
                }
                else
                {
                  v63 = WdLogNewEntry5_WdAssertion(v59, v58, v60, v61);
                  *(_QWORD *)(v63 + 24) = v62;
                  WdLogEvent5_WdAssertion(v63);
                }
              }
              COREACCESS::~COREACCESS((COREACCESS *)v76);
              COREACCESS::~COREACCESS((COREACCESS *)v75);
              DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v73);
            }
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v78);
            v42 = v68;
            ++v41;
          }
          while ( v41 < *(_DWORD *)(v1 + 32) );
          v23 = v70;
          v29 = v64;
        }
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), v25, v29);
        v3 = 1;
        goto LABEL_52;
      }
      v32 = WdLogNewEntry5_WdError(v39, v38);
      *(_QWORD *)(v32 + 24) = v40;
      *(_QWORD *)(v32 + 32) = 4919LL;
    }
    else
    {
      v32 = WdLogNewEntry5_WdError(v31, v30);
      *(_QWORD *)(v32 + 24) = 4813LL;
    }
    WdLogEvent5_WdError(v32);
  }
  else
  {
    v28 = WdLogNewEntry5_WdLowResource(v27);
    *(_QWORD *)(v28 + 24) = 4803LL;
    WdLogEvent5_WdLowResource(v28);
  }
LABEL_52:
  operator delete[](v23);
  operator delete[](v65);
  operator delete[](v25);
  return v3;
}
