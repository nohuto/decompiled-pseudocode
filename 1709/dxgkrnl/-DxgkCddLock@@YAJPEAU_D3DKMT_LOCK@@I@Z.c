/*
 * XREFs of ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x1C00BAE30
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00087FC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008830 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0086DD0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0094290 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCddLock(struct _D3DKMT_LOCK *a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD **Current; // rax
  __int64 v5; // rcx
  struct _KTHREAD **v6; // rbx
  __int64 v7; // rcx
  struct DXGDEVICE *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // r14
  int v13; // eax
  __int64 v14; // r15
  unsigned int v15; // edi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  D3DKMT_HANDLE hAllocation; // r14d
  unsigned int v25; // ecx
  struct _KTHREAD *v26; // r8
  __int64 v27; // rdx
  int v28; // ecx
  __int64 v29; // rdx
  struct _EX_RUNDOWN_REF *v30; // rdx
  __int64 v31; // rcx
  _QWORD *v32; // rax
  struct DXGDEVICE *v33; // [rsp+30h] [rbp-59h] BYREF
  char v34[8]; // [rsp+38h] [rbp-51h] BYREF
  __int64 v35; // [rsp+40h] [rbp-49h]
  char v36; // [rsp+48h] [rbp-41h]
  _BYTE v37[16]; // [rsp+50h] [rbp-39h] BYREF
  char v38[8]; // [rsp+60h] [rbp-29h] BYREF
  char v39[32]; // [rsp+68h] [rbp-21h] BYREF
  char v40[56]; // [rsp+88h] [rbp-1h] BYREF
  struct _EX_RUNDOWN_REF *v41; // [rsp+100h] [rbp+77h] BYREF
  struct DXGDEVICE *v42; // [rsp+108h] [rbp+7Fh] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3006);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1, a2);
  v6 = Current;
  if ( Current )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v42, a1->hDevice, Current, &v33);
    v8 = v33;
    if ( v33 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v37, v33);
      v9 = *((_QWORD *)v8 + 2);
      v36 = 0;
      v35 = *(_QWORD *)(v9 + 16);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v38, (__int64)v8, 2, v10, 0);
      v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v38);
      v12 = v11;
      if ( v11 < 0 )
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdEvent();
        v23[3] = v12;
        v23[4] = v8;
        v23[5] = v6;
        WdLogEvent5_WdEvent(v23);
        v15 = v12;
      }
      else
      {
        v13 = DXGDEVICE::Lock((PERESOURCE *)v8, a1, (struct COREDEVICEACCESS *)v38);
        v14 = v13;
        if ( v13 < 0 )
        {
          hAllocation = a1->hAllocation;
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v6 + 25));
          v25 = (hAllocation >> 6) & 0xFFFFFF;
          if ( v25 < *((_DWORD *)v6 + 60)
            && (v26 = v6[28],
                v27 = v25,
                v28 = *((_DWORD *)v26 + 4 * v25 + 2),
                ((hAllocation >> 25) & 0x60) == (v28 & 0x60))
            && (v28 & 0x2000) == 0
            && (v28 & 0x1F) != 0
            && (v29 = 2 * v27, (*((_BYTE *)v26 + 8 * v29 + 8) & 0x1F) == 5) )
          {
            v30 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v26 + v29);
          }
          else
          {
            v30 = 0LL;
          }
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v41, v30);
          ExReleasePushLockSharedEx(v6 + 25, 0LL);
          KeLeaveCriticalRegion();
          v32 = (_QWORD *)WdLogNewEntry5_WdError(v31);
          v32[3] = v14;
          v32[4] = v8;
          v32[5] = v6;
          v32[6] = a1->hAllocation;
          v32[7] = v41;
          WdLogEvent5_WdError(v32);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v41);
        }
        v15 = v14;
      }
      COREACCESS::~COREACCESS((COREACCESS *)v40);
      COREACCESS::~COREACCESS((COREACCESS *)v39);
      if ( v36 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v37);
    }
    else
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v7);
      v15 = -1073741811;
      v22[3] = -1073741811LL;
      v22[4] = a1->hDevice;
      v22[5] = v6;
      WdLogEvent5_WdError(v22);
    }
    if ( v42 )
    {
      v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v16 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
    }
  }
  else
  {
    v15 = -1073741811;
    v19 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    *(_QWORD *)(v19 + 32) = PsGetCurrentProcess(v21, v20);
    WdLogEvent5_WdError(v19);
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v16, &EventProfilerExit, v17, 3006);
  return v15;
}
