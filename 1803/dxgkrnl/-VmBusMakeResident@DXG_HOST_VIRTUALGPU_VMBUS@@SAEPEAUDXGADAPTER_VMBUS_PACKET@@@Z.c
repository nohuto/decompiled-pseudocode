/*
 * XREFs of ?VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017FC20
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0001938 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C000AC00 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C0015164 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D3BC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C00E62E0 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00E8320 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusMakeResident(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  unsigned __int64 v5; // rdi
  unsigned int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rcx
  struct _KTHREAD **v9; // r8
  __int64 v10; // rcx
  DXGDEVICE *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r15
  unsigned int v17; // r14d
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // ecx
  struct _EX_RUNDOWN_REF *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  DXGDEVICE *v33; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v38[24]; // [rsp+70h] [rbp-98h] BYREF
  D3DDDI_MAKERESIDENT v39; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v40[8]; // [rsp+E8h] [rbp-20h] BYREF
  UINT64 PagingFenceValue; // [rsp+F0h] [rbp-18h] BYREF
  UINT64 NumBytesToTrim; // [rsp+F8h] [rbp-10h]
  __int64 v43; // [rsp+100h] [rbp-8h]

  v3 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU>((__int64)a1);
  if ( !v3 )
    return 0;
  v43 = 0LL;
  PagingFenceValue = 0LL;
  NumBytesToTrim = 0LL;
  v5 = *(unsigned int *)(v3 + 36);
  if ( (_DWORD)v5 && ((unsigned __int64)*((unsigned int *)a1 + 20) - 44) / v5 >= 4 )
  {
    v6 = *(_DWORD *)(v3 + 24);
    if ( v6 )
    {
      if ( (_DWORD)v5 != 1 )
      {
        v7 = WdLogNewEntry5_WdAssertion(v2);
        *(_QWORD *)(v7 + 24) = 3239LL;
        WdLogEvent5_WdAssertion(v7);
        LODWORD(v43) = -1073741811;
LABEL_34:
        v32 = WdLogNewEntry5_WdError(v8);
        *(_QWORD *)(v32 + 24) = (int)v43;
        WdLogEvent5_WdError(v32);
        return 0;
      }
      v9 = (struct _KTHREAD **)*((_QWORD *)a1 + 6);
      v33 = 0LL;
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v34, v6, v9, &v33);
      v11 = v33;
      if ( !v33 )
      {
        v12 = WdLogNewEntry5_WdError(v10);
        *(_QWORD *)(v12 + 24) = *(unsigned int *)(v3 + 24);
        WdLogEvent5_WdError(v12);
        LODWORD(v43) = -1073741811;
LABEL_10:
        ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v34);
        goto LABEL_33;
      }
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v38, v33);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)&v39, (__int64)v11, 0, v13, 0);
      LODWORD(v43) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)&v39);
      if ( (int)v43 < 0 )
      {
        v15 = WdLogNewEntry5_WdAssertion(v14);
        *(_QWORD *)(v15 + 24) = (int)v43;
        WdLogEvent5_WdAssertion(v15);
LABEL_13:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v39);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v38);
        goto LABEL_10;
      }
      if ( !DXGDEVICE::UmdManagesResidency(v11) )
        goto LABEL_13;
      v16 = *((_QWORD *)a1 + 6);
      v17 = *(_DWORD *)(v3 + 40);
      v35 = 0LL;
      v37 = 0LL;
      v18 = *((_QWORD *)v11 + 2);
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v16 + 208));
      v19 = (v17 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v19 < *(_DWORD *)(v16 + 248)
        && (v20 = *(_QWORD *)(v16 + 232),
            v21 = *(_DWORD *)(v20 + 16 * v19 + 8),
            ((v17 >> 25) & 0x60) == (*(_BYTE *)(v20 + 16 * v19 + 8) & 0x60))
        && (v21 & 0x2000) == 0
        && (v21 & 0x1F) == 5 )
      {
        v22 = *(struct _EX_RUNDOWN_REF **)(v20 + 16LL * (unsigned int)v19);
      }
      else
      {
        v22 = 0LL;
      }
      DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v33, v22);
      ExReleasePushLockSharedEx(v16 + 208, 0LL);
      KeLeaveCriticalRegion();
      if ( v33 )
      {
        v25 = *(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL);
        if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v33 + 1) + 16LL) + 16LL) == v25 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v18 + 544) + 8LL)
                                                                       + 976LL))(
            *((_QWORD *)v11 + 76),
            0LL,
            &v35,
            &v37);
          v36 = 0LL;
          v27 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, __int64, int, __int64 *, _BYTE *))(*(_QWORD *)(*(_QWORD *)(v18 + 544) + 8LL) + 768LL))(
                  *(_QWORD *)(v18 + 552),
                  v35,
                  (char *)v33 + 24,
                  1LL,
                  3,
                  &v36,
                  v40);
          LODWORD(v43) = v27;
          if ( v27 >= 0 )
          {
            if ( v27 == 259 )
            {
              (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v18 + 544) + 8LL)
                                                                            + 984LL))(
                *(_QWORD *)(v18 + 552),
                &v37,
                &v36,
                1LL);
              LODWORD(v43) = 0;
            }
          }
          else
          {
            v29 = WdLogNewEntry5_WdAssertion(v28);
            *(_QWORD *)(v29 + 24) = (int)v43;
            WdLogEvent5_WdAssertion(v29);
          }
          goto LABEL_24;
        }
        v26 = (_QWORD *)WdLogNewEntry5_WdError(v25);
        v26[3] = v11;
        v26[4] = v33;
        v26[5] = -1073741811LL;
        WdLogEvent5_WdError(v26);
      }
      else
      {
        v24 = WdLogNewEntry5_WdAssertion(v23);
        *(_QWORD *)(v24 + 24) = *(unsigned int *)(v3 + 40);
        WdLogEvent5_WdAssertion(v24);
      }
      LODWORD(v43) = -1073741811;
LABEL_24:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v33);
      goto LABEL_13;
    }
    memset(&v39, 0, sizeof(v39));
    v39.Flags.Value = *(_DWORD *)(v3 + 32);
    v39.NumAllocations = v5;
    v39.AllocationList = (const D3DKMT_HANDLE *)(v3 + 40);
    v39.hPagingQueue = *(_DWORD *)(v3 + 28);
    LODWORD(v43) = DxgkMakeResidentInternal(&v39, 0, v30);
    NumBytesToTrim = v39.NumBytesToTrim;
    PagingFenceValue = v39.PagingFenceValue;
  }
  else
  {
    v31 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v31 + 24) = *((unsigned int *)a1 + 20);
    WdLogEvent5_WdError(v31);
    LODWORD(v43) = -1073741811;
  }
LABEL_33:
  if ( (int)v43 < 0 )
    goto LABEL_34;
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &PagingFenceValue, 0x18u);
  return 1;
}
