/*
 * XREFs of ?VmBusBlt@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002B310
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0004CAC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004D98 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C019E3EC (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 */

unsigned __int8 __fastcall VmBusBlt(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v4; // r12
  unsigned __int64 v5; // rax
  unsigned int v6; // eax
  unsigned int v7; // ecx
  struct _KTHREAD **Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  struct DXGPROCESS *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct DXGCONTEXT *v19; // r15
  __int64 v20; // rax
  __int64 v21; // r9
  unsigned int v22; // r9d
  unsigned int v23; // r8d
  struct tagRECT v24; // xmm1
  unsigned int v25; // edx
  int v26; // eax
  char *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  unsigned int v34; // [rsp+38h] [rbp-C8h]
  _QWORD v35[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v36[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+68h] [rbp-98h]
  char v38; // [rsp+70h] [rbp-90h]
  _BYTE v39[24]; // [rsp+78h] [rbp-88h] BYREF
  struct tagRECT v40; // [rsp+90h] [rbp-70h] BYREF
  struct tagRECT v41; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v42[8]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v43[32]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v44[104]; // [rsp+D8h] [rbp-28h] BYREF
  int v45; // [rsp+150h] [rbp+50h] BYREF
  struct DXGDEVICE *v46; // [rsp+158h] [rbp+58h] BYREF
  struct DXGDEVICE *v47; // [rsp+160h] [rbp+60h] BYREF
  struct DXGCONTEXT *v48; // [rsp+168h] [rbp+68h] BYREF

  v1 = *((_QWORD *)a1 + 5);
  v2 = *((_QWORD *)a1 + 9);
  v45 = 0;
  v4 = *(_QWORD *)(v1 + 8);
  v5 = 16LL * *(unsigned int *)(v2 + 64);
  if ( v5 > 0xFFFFFFFF
    || (v6 = v5 + 72, v6 < 0x48)
    || (v7 = v6 + *(_DWORD *)(v2 + 68), v7 < v6)
    || v7 > *((_DWORD *)a1 + 20) )
  {
    v45 = -1073741811;
  }
  else
  {
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v46, *(unsigned int *)(v2 + 16), Current, &v47);
    if ( v47 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v35, v47);
      v14 = DXGPROCESS::GetCurrent();
      DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v39, *(_DWORD *)(v2 + 20), v14, &v48, 0);
      v19 = v48;
      if ( v48 )
      {
        DXGPUSHLOCK::AcquireExclusive((struct DXGCONTEXT *)((char *)v48 + 376));
        v37 = v4;
        v38 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v42, (__int64)v47, 0LL, v21, 0);
        v45 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v42);
        if ( v45 >= 0 )
        {
          v23 = *(_DWORD *)(v2 + 28);
          v24 = *(struct tagRECT *)(v2 + 32);
          v25 = *(_DWORD *)(v2 + 24);
          v34 = *(_DWORD *)(v2 + 64);
          v40 = *(struct tagRECT *)(v2 + 48);
          v41 = v24;
          v26 = DXGCONTEXT::BltFromVm(
                  v19,
                  v25,
                  v23,
                  v22,
                  &v48,
                  &v41,
                  &v40,
                  v34,
                  (const struct tagRECT *)(v2 + 72),
                  (struct COREDEVICEACCESS *)v42);
          v27 = (char *)v48 + 376;
          v45 = v26;
          *((_QWORD *)v48 + 48) = 0LL;
          ExReleasePushLockExclusiveEx(v27, 0LL);
          KeLeaveCriticalRegion();
          if ( v45 < 0 )
          {
            v32 = WdLogNewEntry5_WdAssertion(v29, v28, v30, v31);
            *(_QWORD *)(v32 + 24) = v45;
            WdLogEvent5_WdAssertion(v32);
          }
        }
        else
        {
          *((_QWORD *)v19 + 48) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v19 + 376, 0LL);
          KeLeaveCriticalRegion();
        }
        COREACCESS::~COREACCESS((COREACCESS *)v44);
        COREACCESS::~COREACCESS((COREACCESS *)v43);
        if ( v38 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
      }
      else
      {
        v20 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
        *(_QWORD *)(v20 + 24) = *(unsigned int *)(v2 + 16);
        WdLogEvent5_WdAssertion(v20);
        v45 = -1073741811;
      }
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v39);
      if ( v35[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v35);
    }
    else
    {
      v13 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
      *(_QWORD *)(v13 + 24) = *(unsigned int *)(v2 + 16);
      WdLogEvent5_WdAssertion(v13);
      v45 = -1073741811;
    }
    if ( v46 && _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46 + 2), v46);
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v45, 4u);
  return 1;
}
