/*
 * XREFs of ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017BE90
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0016BF4 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0016D0C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D2F4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B0B9C (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusBlt(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r12
  unsigned __int64 v6; // rax
  unsigned int v7; // eax
  __int64 v8; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _KTHREAD **v14; // rax
  __int64 v15; // rcx
  struct DXGCONTEXT *v16; // r15
  __int64 v17; // rax
  __int64 v18; // r9
  unsigned int v19; // r9d
  unsigned int v20; // r8d
  struct tagRECT v21; // xmm1
  unsigned int v22; // edx
  int v23; // eax
  char *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned int v28; // [rsp+38h] [rbp-C8h]
  struct DXGCONTEXT *v29; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v30[2]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v31[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v32; // [rsp+70h] [rbp-90h]
  char v33; // [rsp+78h] [rbp-88h]
  _BYTE v34[16]; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT v35; // [rsp+90h] [rbp-70h] BYREF
  struct tagRECT v36; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v37[8]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v38[32]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v39[104]; // [rsp+D8h] [rbp-28h] BYREF
  int v40; // [rsp+158h] [rbp+58h] BYREF
  struct DXGDEVICE *v41; // [rsp+160h] [rbp+60h] BYREF
  struct DXGDEVICE *v42; // [rsp+168h] [rbp+68h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_BLT>((__int64)a1);
  v3 = v2;
  if ( v2 )
  {
    v4 = *((_QWORD *)a1 + 5);
    v40 = 0;
    v5 = *(_QWORD *)(v4 + 16);
    v6 = 16LL * *(unsigned int *)(v3 + 72);
    if ( v6 > 0xFFFFFFFF
      || (v7 = v6 + 80, (unsigned int)(16 * *(_DWORD *)(v3 + 72)) >= 0xFFFFFFB0)
      || (v8 = *(_DWORD *)(v3 + 76) + v7, (unsigned int)v8 < v7)
      || (unsigned int)v8 > *((_DWORD *)a1 + 20) )
    {
      v40 = -1073741811;
    }
    else
    {
      Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v8, (unsigned int)v8);
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v41, *(_DWORD *)(v3 + 24), Current, &v42);
      if ( v42 )
      {
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30, v42);
        v14 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v13, v12);
        DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v34, *(_DWORD *)(v3 + 28), v14, &v29, 0);
        v16 = v29;
        if ( v29 )
        {
          DXGPUSHLOCK::AcquireExclusive((struct DXGCONTEXT *)((char *)v29 + 408));
          v32 = v5;
          v33 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v31);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v37, (__int64)v42, 0, v18, 0);
          v40 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v37);
          if ( v40 >= 0 )
          {
            v20 = *(_DWORD *)(v3 + 36);
            v21 = *(struct tagRECT *)(v3 + 40);
            v22 = *(_DWORD *)(v3 + 32);
            v28 = *(_DWORD *)(v3 + 72);
            v35 = *(struct tagRECT *)(v3 + 56);
            v36 = v21;
            v23 = DXGCONTEXT::BltFromVm(
                    v16,
                    v22,
                    v20,
                    v19,
                    &v29,
                    &v36,
                    &v35,
                    v28,
                    (const struct tagRECT *)(v3 + 80),
                    (struct COREDEVICEACCESS *)v37);
            v24 = (char *)v29 + 408;
            v40 = v23;
            *((_QWORD *)v29 + 52) = 0LL;
            ExReleasePushLockExclusiveEx(v24, 0LL);
            KeLeaveCriticalRegion();
            if ( v40 < 0 )
            {
              v26 = WdLogNewEntry5_WdAssertion(v25);
              *(_QWORD *)(v26 + 24) = v40;
              WdLogEvent5_WdAssertion(v26);
            }
          }
          else
          {
            *((_QWORD *)v16 + 52) = 0LL;
            ExReleasePushLockExclusiveEx((char *)v16 + 408, 0LL);
            KeLeaveCriticalRegion();
          }
          COREACCESS::~COREACCESS((COREACCESS *)v39);
          COREACCESS::~COREACCESS((COREACCESS *)v38);
          if ( v33 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v31);
        }
        else
        {
          v17 = WdLogNewEntry5_WdAssertion(v15);
          *(_QWORD *)(v17 + 24) = *(unsigned int *)(v3 + 24);
          WdLogEvent5_WdAssertion(v17);
          v40 = -1073741811;
        }
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v34);
        if ( v30[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
      }
      else
      {
        v11 = WdLogNewEntry5_WdAssertion(v10);
        *(_QWORD *)(v11 + 24) = *(unsigned int *)(v3 + 24);
        WdLogEvent5_WdAssertion(v11);
        v40 = -1073741811;
      }
      if ( v41 && _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v41 + 2), v41);
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v40, 4u);
    LOBYTE(v2) = 1;
  }
  return v2;
}
