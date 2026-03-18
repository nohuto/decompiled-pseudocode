/*
 * XREFs of ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01908C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0008CE8 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0008DD0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B4D4C (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusBlt(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v4; // r12
  unsigned __int64 v5; // rax
  unsigned int v6; // eax
  __int64 v7; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGPROCESS *v13; // rax
  __int64 v14; // rcx
  struct DXGCONTEXT *v15; // r15
  __int64 v16; // rax
  __int64 v17; // r9
  unsigned int v18; // r9d
  unsigned int v19; // r8d
  struct tagRECT v20; // xmm1
  unsigned int v21; // edx
  int v22; // eax
  char *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v27; // [rsp+38h] [rbp-C8h]
  _QWORD v28[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v29[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h]
  char v31; // [rsp+70h] [rbp-90h]
  _BYTE v32[24]; // [rsp+78h] [rbp-88h] BYREF
  struct tagRECT v33; // [rsp+90h] [rbp-70h] BYREF
  struct tagRECT v34; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v35[8]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v36[32]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v37[104]; // [rsp+D8h] [rbp-28h] BYREF
  int v38; // [rsp+150h] [rbp+50h] BYREF
  struct DXGDEVICE *v39; // [rsp+158h] [rbp+58h] BYREF
  struct DXGDEVICE *v40; // [rsp+160h] [rbp+60h] BYREF
  struct DXGCONTEXT *v41; // [rsp+168h] [rbp+68h] BYREF

  v1 = *((_QWORD *)a1 + 5);
  v2 = *((_QWORD *)a1 + 9);
  v38 = 0;
  v4 = *(_QWORD *)(v1 + 16);
  v5 = 16LL * *(unsigned int *)(v2 + 72);
  if ( v5 > 0xFFFFFFFF
    || (v6 = v5 + 80, (unsigned int)(16 * *(_DWORD *)(v2 + 72)) >= 0xFFFFFFB0)
    || (v7 = v6 + *(_DWORD *)(v2 + 76), (unsigned int)v7 < v6)
    || (unsigned int)v7 > *((_DWORD *)a1 + 20) )
  {
    v38 = -1073741811;
  }
  else
  {
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v7, (unsigned int)v7);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v39, *(_DWORD *)(v2 + 24), Current, &v40);
    if ( v40 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v28, v40);
      v13 = DXGPROCESS::GetCurrent(v12, v11);
      DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v32, *(_DWORD *)(v2 + 28), v13, &v41, 0);
      v15 = v41;
      if ( v41 )
      {
        DXGPUSHLOCK::AcquireExclusive((struct DXGCONTEXT *)((char *)v41 + 408));
        v30 = v4;
        v31 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v35, (__int64)v40, 0, v17, 0);
        v38 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v35);
        if ( v38 >= 0 )
        {
          v19 = *(_DWORD *)(v2 + 36);
          v20 = *(struct tagRECT *)(v2 + 40);
          v21 = *(_DWORD *)(v2 + 32);
          v27 = *(_DWORD *)(v2 + 72);
          v33 = *(struct tagRECT *)(v2 + 56);
          v34 = v20;
          v22 = DXGCONTEXT::BltFromVm(
                  v15,
                  v21,
                  v19,
                  v18,
                  &v41,
                  &v34,
                  &v33,
                  v27,
                  (const struct tagRECT *)(v2 + 80),
                  (struct COREDEVICEACCESS *)v35);
          v23 = (char *)v41 + 408;
          v38 = v22;
          *((_QWORD *)v41 + 52) = 0LL;
          ExReleasePushLockExclusiveEx(v23, 0LL);
          KeLeaveCriticalRegion();
          if ( v38 < 0 )
          {
            v25 = WdLogNewEntry5_WdAssertion(v24);
            *(_QWORD *)(v25 + 24) = v38;
            WdLogEvent5_WdAssertion(v25);
          }
        }
        else
        {
          *((_QWORD *)v15 + 52) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v15 + 408, 0LL);
          KeLeaveCriticalRegion();
        }
        COREACCESS::~COREACCESS((COREACCESS *)v37);
        COREACCESS::~COREACCESS((COREACCESS *)v36);
        if ( v31 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
      }
      else
      {
        v16 = WdLogNewEntry5_WdAssertion(v14);
        *(_QWORD *)(v16 + 24) = *(unsigned int *)(v2 + 24);
        WdLogEvent5_WdAssertion(v16);
        v38 = -1073741811;
      }
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v32);
      if ( v28[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v28);
    }
    else
    {
      v10 = WdLogNewEntry5_WdAssertion(v9);
      *(_QWORD *)(v10 + 24) = *(unsigned int *)(v2 + 24);
      WdLogEvent5_WdAssertion(v10);
      v38 = -1073741811;
    }
    if ( v39 && _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v39 + 2), v39);
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v38, 4u);
  return 1;
}
