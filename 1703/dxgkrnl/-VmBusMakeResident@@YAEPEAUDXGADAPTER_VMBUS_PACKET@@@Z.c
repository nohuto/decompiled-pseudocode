/*
 * XREFs of ?VmBusMakeResident@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002DA50
 * Callers:
 *     <none>
 * Callees:
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000529C (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00053F0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C000D728 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C00CAEC0 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00CCDB0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

unsigned __int8 __fastcall VmBusMakeResident(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int *v4; // rbx
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _KTHREAD **v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  DXGDEVICE *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // r15
  unsigned int v23; // r14d
  __int64 v24; // r13
  unsigned int v25; // ecx
  __int64 v26; // r8
  int v27; // edx
  struct DXGALLOCATION *v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  DXGDEVICE *v46; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v47; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v48; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v49; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v50; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v51[24]; // [rsp+70h] [rbp-98h] BYREF
  D3DDDI_MAKERESIDENT v52; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v53[8]; // [rsp+E8h] [rbp-20h] BYREF
  UINT64 PagingFenceValue; // [rsp+F0h] [rbp-18h] BYREF
  UINT64 NumBytesToTrim; // [rsp+F8h] [rbp-10h]
  __int64 v56; // [rsp+100h] [rbp-8h]

  v4 = (unsigned int *)*((_QWORD *)a1 + 9);
  PagingFenceValue = 0LL;
  NumBytesToTrim = 0LL;
  v56 = 3221225485LL;
  v6 = v4[7];
  if ( (_DWORD)v6
    && (a2 = ((unsigned __int64)*((unsigned int *)a1 + 20) - 36) % v6,
        ((unsigned __int64)*((unsigned int *)a1 + 20) - 36) / v6 >= 4) )
  {
    v7 = v4[4];
    if ( (_DWORD)v7 )
    {
      if ( (_DWORD)v6 != 1 )
      {
        v8 = WdLogNewEntry5_WdAssertion(a1, v7, a3, a4);
        *(_QWORD *)(v8 + 24) = 6445LL;
        WdLogEvent5_WdAssertion(v8);
        goto LABEL_32;
      }
      v11 = (struct _KTHREAD **)*((_QWORD *)a1 + 6);
      v46 = 0LL;
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v47, v7, v11, &v46);
      v14 = v46;
      if ( !v46 )
      {
        v15 = WdLogNewEntry5_WdError(v13, v12);
        *(_QWORD *)(v15 + 24) = v4[4];
        WdLogEvent5_WdError(v15);
LABEL_8:
        DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v47);
        goto LABEL_32;
      }
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v51, v46);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)&v52, (__int64)v14, 0LL, v16, 0);
      LODWORD(v56) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)&v52);
      if ( (int)v56 < 0 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
        *(_QWORD *)(v21 + 24) = (int)v56;
        WdLogEvent5_WdAssertion(v21);
LABEL_11:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v52);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v51);
        goto LABEL_8;
      }
      if ( !DXGDEVICE::UmdManagesResidency(v14) )
        goto LABEL_11;
      v22 = *((_QWORD *)a1 + 6);
      v23 = v4[8];
      v48 = 0LL;
      v50 = 0LL;
      v24 = *((_QWORD *)v14 + 2);
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v22 + 168));
      v25 = (v23 >> 6) & 0xFFFFFF;
      if ( v25 < *(_DWORD *)(v22 + 208)
        && (v26 = *(_QWORD *)(v22 + 192),
            v27 = *(_DWORD *)(v26 + 16LL * v25 + 8),
            ((v23 >> 26) & 0x30) == (*(_BYTE *)(v26 + 16LL * v25 + 8) & 0x30))
        && (v27 & 0x1000) == 0
        && (v27 & 0xF) != 0
        && (*(_BYTE *)(v26 + 16LL * v25 + 8) & 0xF) == 5 )
      {
        v28 = *(struct DXGALLOCATION **)(v26 + 16LL * v25);
      }
      else
      {
        v28 = 0LL;
      }
      DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v46, v28);
      ExReleasePushLockSharedEx(v22 + 168, 0LL);
      KeLeaveCriticalRegion();
      if ( v46 )
      {
        v34 = *(_QWORD *)(*((_QWORD *)v46 + 1) + 16LL);
        v35 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL);
        if ( *(_QWORD *)(v34 + 16) == v35 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v24 + 432) + 8LL)
                                                                       + 960LL))(
            *((_QWORD *)v14 + 74),
            0LL,
            &v48,
            &v50);
          v49 = 0LL;
          v37 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, __int64, int, __int64 *, _BYTE *))(*(_QWORD *)(*(_QWORD *)(v24 + 432) + 8LL) + 768LL))(
                  *(_QWORD *)(v24 + 440),
                  v48,
                  (char *)v46 + 24,
                  1LL,
                  3,
                  &v49,
                  v53);
          LODWORD(v56) = v37;
          if ( v37 >= 0 )
          {
            if ( v37 == 259 )
            {
              (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v24 + 432) + 8LL)
                                                                            + 968LL))(
                *(_QWORD *)(v24 + 440),
                &v50,
                &v49,
                1LL);
              LODWORD(v56) = 0;
            }
          }
          else
          {
            v42 = WdLogNewEntry5_WdAssertion(v39, v38, v40, v41);
            *(_QWORD *)(v42 + 24) = (int)v56;
            WdLogEvent5_WdAssertion(v42);
          }
          goto LABEL_23;
        }
        v36 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34);
        v36[3] = v14;
        v36[4] = v46;
        v36[5] = -1073741811LL;
        WdLogEvent5_WdError(v36);
      }
      else
      {
        v33 = WdLogNewEntry5_WdAssertion(v30, v29, v31, v32);
        *(_QWORD *)(v33 + 24) = v4[8];
        WdLogEvent5_WdAssertion(v33);
      }
      LODWORD(v56) = -1073741811;
LABEL_23:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v46);
      goto LABEL_11;
    }
    memset(&v52, 0, sizeof(v52));
    v52.Flags.Value = v4[6];
    v52.NumAllocations = v6;
    v52.AllocationList = v4 + 8;
    v52.hPagingQueue = v4[5];
    LODWORD(v56) = DxgkMakeResidentInternal(&v52, 0);
    NumBytesToTrim = v52.NumBytesToTrim;
    PagingFenceValue = v52.PagingFenceValue;
  }
  else
  {
    v43 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v43 + 24) = *((unsigned int *)a1 + 20);
    WdLogEvent5_WdError(v43);
  }
LABEL_32:
  if ( (int)v56 >= 0 )
  {
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &PagingFenceValue, 0x18u);
    return 1;
  }
  else
  {
    v44 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v44 + 24) = (int)v56;
    WdLogEvent5_WdError(v44);
    return 0;
  }
}
