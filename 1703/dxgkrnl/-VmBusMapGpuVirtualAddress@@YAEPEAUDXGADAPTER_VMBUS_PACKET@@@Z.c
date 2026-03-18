/*
 * XREFs of ?VmBusMapGpuVirtualAddress@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002DE60
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0004DF0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0004E20 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00053F0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00871E4 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     DxgkMapGpuVirtualAddress @ 0x1C0092C50 (DxgkMapGpuVirtualAddress.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00CCDB0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0100FA0 (--0DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

unsigned __int8 __fastcall VmBusMapGpuVirtualAddress(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  _BOOL8 v7; // rcx
  __int64 v8; // rax
  struct _KTHREAD **Current; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGDEVICE *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r15
  unsigned int v20; // ebx
  unsigned int v21; // ecx
  __int64 v22; // r8
  int v23; // edx
  struct DXGALLOCATION *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct DXGDEVICE *v27; // rbx
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // eax
  __int64 v36; // rcx
  int v38; // [rsp+28h] [rbp-99h]
  struct DXGDEVICE *v39; // [rsp+48h] [rbp-79h] BYREF
  _BYTE v40[8]; // [rsp+50h] [rbp-71h] BYREF
  _BYTE v41[8]; // [rsp+58h] [rbp-69h] BYREF
  _BYTE v42[24]; // [rsp+60h] [rbp-61h] BYREF
  _BYTE v43[96]; // [rsp+78h] [rbp-49h] BYREF
  _QWORD v44[2]; // [rsp+D8h] [rbp+17h] BYREF
  int v45; // [rsp+E8h] [rbp+27h]

  v4 = *((_QWORD *)a1 + 9);
  v6 = *(unsigned int *)(v4 + 120);
  v7 = *(_DWORD *)(v4 + 16) == 0;
  if ( ((_DWORD)v6 == 0) == v7 )
  {
    v45 = -1073741811;
    v8 = WdLogNewEntry5_WdAssertion(v7, v6, a3, a4);
    *(_QWORD *)(v8 + 24) = 6752LL;
LABEL_30:
    WdLogEvent5_WdAssertion(v8);
    goto LABEL_31;
  }
  if ( (_DWORD)v6 )
  {
    v39 = 0LL;
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v40, *(unsigned int *)(v4 + 120), Current, &v39);
    v14 = v39;
    if ( *(_DWORD *)(v4 + 120) && !v39 )
    {
      v45 = -1073741811;
      v15 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
      *(_QWORD *)(v15 + 24) = v45;
      *(_QWORD *)(v15 + 32) = *(unsigned int *)(v4 + 120);
      WdLogEvent5_WdAssertion(v15);
LABEL_7:
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v40);
      goto LABEL_31;
    }
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v42,
      v39);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v43, (__int64)v14, 0LL, v16, 0);
    v45 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v43);
    if ( v45 < 0 )
    {
LABEL_9:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v42);
      goto LABEL_7;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v39);
    v17 = *(_QWORD *)(v4 + 72);
    v18 = 0LL;
    if ( (v17 & 4) == 0 && (v17 & 8) == 0 )
    {
      v19 = *((_QWORD *)a1 + 6);
      v20 = *(_DWORD *)(v4 + 48);
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v19 + 168));
      v21 = (v20 >> 6) & 0xFFFFFF;
      if ( v21 < *(_DWORD *)(v19 + 208)
        && (v22 = *(_QWORD *)(v19 + 192),
            v23 = *(_DWORD *)(v22 + 16LL * v21 + 8),
            ((v20 >> 26) & 0x30) == (*(_BYTE *)(v22 + 16LL * v21 + 8) & 0x30))
        && (v23 & 0x1000) == 0
        && (v23 & 0xF) != 0
        && (*(_BYTE *)(v22 + 16LL * v21 + 8) & 0xF) == 5 )
      {
        v24 = *(struct DXGALLOCATION **)(v22 + 16LL * v21);
      }
      else
      {
        v24 = 0LL;
      }
      DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v41, v24);
      ExReleasePushLockSharedEx(v19 + 168, 0LL);
      KeLeaveCriticalRegion();
      DXGALLOCATIONREFERENCE::MoveAssign(&v39, v41);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v41);
      v27 = v39;
      if ( !v39 )
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25);
        v28[3] = -1073741811LL;
        v28[4] = *(unsigned int *)(v4 + 48);
        v28[5] = *((_QWORD *)a1 + 6);
        WdLogEvent5_WdError(v28);
LABEL_21:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v39);
        goto LABEL_9;
      }
      v29 = *(_QWORD *)(*((_QWORD *)v39 + 1) + 16LL);
      v30 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL);
      if ( *(_QWORD *)(v29 + 16) != v30 )
      {
        v31 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
        v31[3] = v14;
        v31[4] = v27;
        v31[5] = -1073741811LL;
        WdLogEvent5_WdError(v31);
        v45 = -1073741811;
        goto LABEL_21;
      }
      v18 = *((_QWORD *)v39 + 3);
    }
    LOBYTE(v38) = 0;
    v45 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int, _DWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 432LL)
                                                                                               + 8LL)
                                                                                   + 792LL))(
            *(_QWORD *)(*((_QWORD *)v14 + 2) + 440LL),
            0LL,
            v18,
            v4 + 16,
            v38,
            0);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v39);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v42);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v40);
    v35 = v45;
  }
  else
  {
    v35 = DxgkMapGpuVirtualAddress(v4 + 16);
    v45 = v35;
  }
  v44[1] = *(_QWORD *)(v4 + 112);
  v36 = *(_QWORD *)(v4 + 104);
  v44[0] = v36;
  if ( v35 < 0 || !v36 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v36, v32, v33, v34);
    *(_QWORD *)(v8 + 24) = v45;
    *(_QWORD *)(v8 + 32) = v44[0];
    goto LABEL_30;
  }
LABEL_31:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), v44, 0x18u);
  return 1;
}
