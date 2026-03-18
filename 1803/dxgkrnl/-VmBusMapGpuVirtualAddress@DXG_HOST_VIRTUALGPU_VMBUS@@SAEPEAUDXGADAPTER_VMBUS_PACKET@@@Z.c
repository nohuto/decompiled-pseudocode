/*
 * XREFs of ?VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0180050
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C000AC00 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00166A0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00166DC (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D434 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_MAPGPUVIRTU.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00962E0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     DxgkMapGpuVirtualAddress @ 0x1C00C8360 (DxgkMapGpuVirtualAddress.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00E8320 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusMapGpuVirtualAddress(struct VMBPACKETCOMPLETION__ **a1)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rdx
  _BOOL8 v6; // rcx
  __int64 v7; // rax
  struct _KTHREAD **Current; // rax
  __int64 v9; // rcx
  struct DXGDEVICE *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r8
  struct VMBPACKETCOMPLETION__ *v15; // r15
  unsigned int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // ecx
  struct _EX_RUNDOWN_REF *v20; // rdx
  __int64 v21; // rcx
  struct DXGDEVICE *v22; // rbx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  int v29; // [rsp+28h] [rbp-99h]
  struct DXGDEVICE *v30; // [rsp+48h] [rbp-79h] BYREF
  _BYTE v31[8]; // [rsp+50h] [rbp-71h] BYREF
  struct _EX_RUNDOWN_REF *v32; // [rsp+58h] [rbp-69h] BYREF
  _BYTE v33[24]; // [rsp+60h] [rbp-61h] BYREF
  _BYTE v34[96]; // [rsp+78h] [rbp-49h] BYREF
  __int64 v35; // [rsp+D8h] [rbp+17h] BYREF
  __int64 v36; // [rsp+E0h] [rbp+1Fh]
  __int64 v37; // [rsp+E8h] [rbp+27h]

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS>((__int64)a1);
  v4 = v2;
  if ( v2 )
  {
    v35 = 0LL;
    v36 = 0LL;
    v37 = 0LL;
    v5 = *(unsigned int *)(v2 + 128);
    v6 = (_DWORD)v5 == 0;
    if ( v6 == (*(_DWORD *)(v2 + 24) == 0) )
    {
      LODWORD(v37) = -1073741811;
      v7 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v7 + 24) = 3546LL;
LABEL_30:
      WdLogEvent5_WdAssertion(v7);
      goto LABEL_31;
    }
    if ( (_DWORD)v5 )
    {
      v30 = 0LL;
      Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5);
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v31, *(_DWORD *)(v4 + 128), Current, &v30);
      v10 = v30;
      if ( *(_DWORD *)(v4 + 128) && !v30 )
      {
        LODWORD(v37) = -1073741811;
        v11 = WdLogNewEntry5_WdAssertion(v9);
        *(_QWORD *)(v11 + 24) = (int)v37;
        *(_QWORD *)(v11 + 32) = *(unsigned int *)(v4 + 128);
        WdLogEvent5_WdAssertion(v11);
LABEL_8:
        ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v31);
LABEL_31:
        VmBusCompletePacket(a1[8], &v35, 0x18u);
        LOBYTE(v2) = 1;
        return v2;
      }
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
        (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v33,
        v30);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v34, (__int64)v10, 0, v12, 0);
      LODWORD(v37) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v34);
      if ( (int)v37 < 0 )
      {
LABEL_10:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v33);
        goto LABEL_8;
      }
      v13 = *(_QWORD *)(v4 + 80);
      v14 = 0LL;
      v30 = 0LL;
      if ( (v13 & 4) == 0 && (v13 & 8) == 0 )
      {
        v15 = a1[6];
        v16 = *(_DWORD *)(v4 + 56);
        DXGPUSHLOCK::AcquireShared((struct VMBPACKETCOMPLETION__ *)((char *)v15 + 208));
        v17 = (v16 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v17 < *((_DWORD *)v15 + 62)
          && (v18 = *((_QWORD *)v15 + 29),
              v19 = *(_DWORD *)(v18 + 16 * v17 + 8),
              ((v16 >> 25) & 0x60) == (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60))
          && (v19 & 0x2000) == 0
          && (v19 & 0x1F) == 5 )
        {
          v20 = *(struct _EX_RUNDOWN_REF **)(v18 + 16LL * (unsigned int)v17);
        }
        else
        {
          v20 = 0LL;
        }
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v32, v20);
        ExReleasePushLockSharedEx((char *)v15 + 208, 0LL);
        KeLeaveCriticalRegion();
        DXGALLOCATIONREFERENCE::MoveAssign(&v30, (struct DXGALLOCATION **)&v32);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v32);
        v22 = v30;
        if ( !v30 )
        {
          v23 = (_QWORD *)WdLogNewEntry5_WdError(v21);
          v23[3] = -1073741811LL;
          v23[4] = *(unsigned int *)(v4 + 56);
          v23[5] = a1[6];
          WdLogEvent5_WdError(v23);
LABEL_21:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v30);
          goto LABEL_10;
        }
        v24 = *(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL);
        if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v30 + 1) + 16LL) + 16LL) != v24 )
        {
          v25 = (_QWORD *)WdLogNewEntry5_WdError(v24);
          v25[3] = v10;
          v25[4] = v22;
          v25[5] = -1073741811LL;
          WdLogEvent5_WdError(v25);
          LODWORD(v37) = -1073741811;
          goto LABEL_21;
        }
        v14 = *((_QWORD *)v30 + 3);
      }
      LOBYTE(v29) = 0;
      LODWORD(v37) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int, _DWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 544LL) + 8LL)
                                                                                              + 792LL))(
                       *(_QWORD *)(*((_QWORD *)v10 + 2) + 552LL),
                       0LL,
                       v14,
                       v4 + 24,
                       v29,
                       0);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v30);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v33);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v31);
      v26 = v37;
    }
    else
    {
      v26 = DxgkMapGpuVirtualAddress(v2 + 24, v5, v3);
      LODWORD(v37) = v26;
    }
    v36 = *(_QWORD *)(v4 + 120);
    v27 = *(_QWORD *)(v4 + 112);
    v35 = v27;
    if ( v26 >= 0 && v27 )
      goto LABEL_31;
    v7 = WdLogNewEntry5_WdAssertion(v27);
    *(_QWORD *)(v7 + 24) = (int)v37;
    *(_QWORD *)(v7 + 32) = v35;
    goto LABEL_30;
  }
  return v2;
}
