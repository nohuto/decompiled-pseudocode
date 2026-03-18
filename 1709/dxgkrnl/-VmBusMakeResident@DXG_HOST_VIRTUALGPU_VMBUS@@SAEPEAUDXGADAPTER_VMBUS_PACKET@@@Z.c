/*
 * XREFs of ?VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0193A10
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0003A8C (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C0003F38 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C0004090 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C0084ED0 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0086DD0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusMakeResident(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  unsigned int *v1; // rbx
  unsigned __int64 v3; // rdi
  unsigned int v4; // edx
  __int64 v5; // rax
  __int64 v6; // rcx
  struct _KTHREAD **v7; // r8
  __int64 v8; // rcx
  DXGDEVICE *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r15
  unsigned int v15; // r14d
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // edx
  struct _EX_RUNDOWN_REF *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  DXGDEVICE *v32; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v37[24]; // [rsp+70h] [rbp-98h] BYREF
  D3DDDI_MAKERESIDENT v38; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v39[8]; // [rsp+E8h] [rbp-20h] BYREF
  UINT64 PagingFenceValue; // [rsp+F0h] [rbp-18h] BYREF
  UINT64 NumBytesToTrim; // [rsp+F8h] [rbp-10h]
  __int64 v42; // [rsp+100h] [rbp-8h]

  v1 = (unsigned int *)*((_QWORD *)a1 + 9);
  PagingFenceValue = 0LL;
  NumBytesToTrim = 0LL;
  v42 = 0LL;
  v3 = v1[9];
  if ( (_DWORD)v3 && ((unsigned __int64)*((unsigned int *)a1 + 20) - 44) / v3 >= 4 )
  {
    v4 = v1[6];
    if ( v4 )
    {
      if ( (_DWORD)v3 != 1 )
      {
        v5 = WdLogNewEntry5_WdAssertion(a1);
        *(_QWORD *)(v5 + 24) = 2805LL;
        WdLogEvent5_WdAssertion(v5);
        LODWORD(v42) = -1073741811;
LABEL_33:
        v30 = WdLogNewEntry5_WdError(v6);
        *(_QWORD *)(v30 + 24) = (int)v42;
        WdLogEvent5_WdError(v30);
        return 0;
      }
      v7 = (struct _KTHREAD **)*((_QWORD *)a1 + 6);
      v32 = 0LL;
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v33, v4, v7, &v32);
      v9 = v32;
      if ( !v32 )
      {
        v10 = WdLogNewEntry5_WdError(v8);
        *(_QWORD *)(v10 + 24) = v1[6];
        WdLogEvent5_WdError(v10);
        LODWORD(v42) = -1073741811;
LABEL_8:
        ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v33);
        goto LABEL_32;
      }
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37, v32);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)&v38, (__int64)v9, 0, v11, 0);
      LODWORD(v42) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)&v38);
      if ( (int)v42 < 0 )
      {
        v13 = WdLogNewEntry5_WdAssertion(v12);
        *(_QWORD *)(v13 + 24) = (int)v42;
        WdLogEvent5_WdAssertion(v13);
LABEL_11:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v38);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37);
        goto LABEL_8;
      }
      if ( !DXGDEVICE::UmdManagesResidency(v9) )
        goto LABEL_11;
      v14 = *((_QWORD *)a1 + 6);
      v15 = v1[10];
      v34 = 0LL;
      v36 = 0LL;
      v16 = *((_QWORD *)v9 + 2);
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v14 + 200));
      v17 = (v15 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v17 < *(_DWORD *)(v14 + 240)
        && (v18 = *(_QWORD *)(v14 + 224),
            v19 = *(_DWORD *)(v18 + 16 * v17 + 8),
            ((v15 >> 25) & 0x60) == (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60))
        && (v19 & 0x2000) == 0
        && (v19 & 0x1F) != 0
        && (*(_BYTE *)(v18 + 16LL * (unsigned int)v17 + 8) & 0x1F) == 5 )
      {
        v20 = *(struct _EX_RUNDOWN_REF **)(v18 + 16LL * (unsigned int)v17);
      }
      else
      {
        v20 = 0LL;
      }
      DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v32, v20);
      ExReleasePushLockSharedEx(v14 + 200, 0LL);
      KeLeaveCriticalRegion();
      if ( v32 )
      {
        v23 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL);
        if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v32 + 1) + 16LL) + 16LL) == v23 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v16 + 528) + 8LL)
                                                                       + 960LL))(
            *((_QWORD *)v9 + 74),
            0LL,
            &v34,
            &v36);
          v35 = 0LL;
          v25 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, __int64, int, __int64 *, _BYTE *))(*(_QWORD *)(*(_QWORD *)(v16 + 528) + 8LL) + 768LL))(
                  *(_QWORD *)(v16 + 536),
                  v34,
                  (char *)v32 + 24,
                  1LL,
                  3,
                  &v35,
                  v39);
          LODWORD(v42) = v25;
          if ( v25 >= 0 )
          {
            if ( v25 == 259 )
            {
              (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v16 + 528) + 8LL)
                                                                            + 968LL))(
                *(_QWORD *)(v16 + 536),
                &v36,
                &v35,
                1LL);
              LODWORD(v42) = 0;
            }
          }
          else
          {
            v27 = WdLogNewEntry5_WdAssertion(v26);
            *(_QWORD *)(v27 + 24) = (int)v42;
            WdLogEvent5_WdAssertion(v27);
          }
          goto LABEL_23;
        }
        v24 = (_QWORD *)WdLogNewEntry5_WdError(v23);
        v24[3] = v9;
        v24[4] = v32;
        v24[5] = -1073741811LL;
        WdLogEvent5_WdError(v24);
      }
      else
      {
        v22 = WdLogNewEntry5_WdAssertion(v21);
        *(_QWORD *)(v22 + 24) = v1[10];
        WdLogEvent5_WdAssertion(v22);
      }
      LODWORD(v42) = -1073741811;
LABEL_23:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v32);
      goto LABEL_11;
    }
    memset(&v38, 0, sizeof(v38));
    v38.Flags.Value = v1[8];
    v38.NumAllocations = v3;
    v38.AllocationList = v1 + 10;
    v38.hPagingQueue = v1[7];
    LODWORD(v42) = DxgkMakeResidentInternal(&v38, 0, v28);
    NumBytesToTrim = v38.NumBytesToTrim;
    PagingFenceValue = v38.PagingFenceValue;
  }
  else
  {
    v29 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v29 + 24) = *((unsigned int *)a1 + 20);
    WdLogEvent5_WdError(v29);
    LODWORD(v42) = -1073741811;
  }
LABEL_32:
  if ( (int)v42 < 0 )
    goto LABEL_33;
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &PagingFenceValue, 0x18u);
  return 1;
}
