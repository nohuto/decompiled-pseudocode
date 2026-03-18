/*
 * XREFs of ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x1C00A4090
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C000D830 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D864 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C12EC (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00CCDB0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkCddLock(struct _D3DKMT_LOCK *a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD **Current; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KTHREAD **v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGDEVICE *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // r14
  int v15; // eax
  __int64 v16; // r15
  unsigned int v17; // edi
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rbx
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  D3DKMT_HANDLE hAllocation; // r14d
  unsigned int v25; // ecx
  struct _KTHREAD *v26; // r8
  int v27; // edx
  struct DXGALLOCATION *v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rax
  struct DXGDEVICE *v32; // [rsp+30h] [rbp-59h] BYREF
  char v33[8]; // [rsp+38h] [rbp-51h] BYREF
  __int64 v34; // [rsp+40h] [rbp-49h]
  char v35; // [rsp+48h] [rbp-41h]
  _BYTE v36[16]; // [rsp+50h] [rbp-39h] BYREF
  char v37[8]; // [rsp+60h] [rbp-29h] BYREF
  char v38[32]; // [rsp+68h] [rbp-21h] BYREF
  char v39[56]; // [rsp+88h] [rbp-1h] BYREF
  __int64 v40; // [rsp+100h] [rbp+77h] BYREF
  struct DXGDEVICE *v41; // [rsp+108h] [rbp+7Fh] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 3006);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v7 = Current;
  if ( Current )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v41, a1->hDevice, Current, &v32);
    v10 = v32;
    if ( v32 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v36, v32);
      v11 = *((_QWORD *)v10 + 2);
      v35 = 0;
      v34 = *(_QWORD *)(v11 + 16);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v37, (__int64)v10, 2LL, v12, 0);
      v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v37);
      v14 = v13;
      if ( v13 < 0 )
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdEvent();
        v23[3] = v14;
        v23[4] = v10;
        v23[5] = v7;
        WdLogEvent5_WdEvent(v23);
        v17 = v14;
      }
      else
      {
        v15 = DXGDEVICE::Lock(v10, a1, (struct COREDEVICEACCESS *)v37);
        v16 = v15;
        if ( v15 < 0 )
        {
          hAllocation = a1->hAllocation;
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v7 + 21));
          v25 = (hAllocation >> 6) & 0xFFFFFF;
          if ( v25 < *((_DWORD *)v7 + 52)
            && (v26 = v7[24],
                v27 = *((_DWORD *)v26 + 4 * v25 + 2),
                ((hAllocation >> 26) & 0x30) == (*((_BYTE *)v26 + 16 * v25 + 8) & 0x30))
            && (v27 & 0x1000) == 0
            && (v27 & 0xF) != 0
            && (*((_BYTE *)v26 + 16 * v25 + 8) & 0xF) == 5 )
          {
            v28 = (struct DXGALLOCATION *)*((_QWORD *)v26 + 2 * v25);
          }
          else
          {
            v28 = 0LL;
          }
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v40, v28);
          ExReleasePushLockSharedEx(v7 + 21, 0LL);
          KeLeaveCriticalRegion();
          v31 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
          v31[3] = v16;
          v31[4] = v10;
          v31[5] = v7;
          v31[6] = a1->hAllocation;
          v31[7] = v40;
          WdLogEvent5_WdError(v31);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v40);
        }
        v17 = v16;
      }
      COREACCESS::~COREACCESS((COREACCESS *)v39);
      COREACCESS::~COREACCESS((COREACCESS *)v38);
      if ( v35 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v36);
    }
    else
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
      v17 = -1073741811;
      v22[3] = -1073741811LL;
      v22[4] = a1->hDevice;
      v22[5] = v7;
      WdLogEvent5_WdError(v22);
    }
    if ( v41 )
    {
      v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v18 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v41 + 2), v41);
    }
  }
  else
  {
    v17 = -1073741811;
    v21 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    *(_QWORD *)(v21 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v21);
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v18, &EventProfilerExit, v19, 3006);
  return v17;
}
