/*
 * XREFs of ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x1C00D37A0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0009964 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009998 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00E8320 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E8760 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r14
  int v15; // eax
  unsigned int v16; // edi
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  D3DKMT_HANDLE hAllocation; // r15d
  unsigned int v26; // ecx
  struct _KTHREAD *v27; // r8
  __int64 v28; // rdx
  int v29; // ecx
  __int64 v30; // rdx
  struct DXGALLOCATION *v31; // rdx
  __int64 v32; // rcx
  _QWORD *v33; // rax
  int v34; // [rsp+30h] [rbp-69h] BYREF
  __int64 v35; // [rsp+38h] [rbp-61h]
  struct DXGDEVICE *v36; // [rsp+40h] [rbp-59h] BYREF
  char v37[8]; // [rsp+48h] [rbp-51h] BYREF
  __int64 v38; // [rsp+50h] [rbp-49h]
  char v39; // [rsp+58h] [rbp-41h]
  _BYTE v40[16]; // [rsp+60h] [rbp-39h] BYREF
  char v41[8]; // [rsp+70h] [rbp-29h] BYREF
  char v42[32]; // [rsp+78h] [rbp-21h] BYREF
  char v43[56]; // [rsp+98h] [rbp-1h] BYREF
  __int64 v44; // [rsp+110h] [rbp+77h] BYREF
  struct DXGDEVICE *v45; // [rsp+118h] [rbp+7Fh] BYREF

  v35 = 0LL;
  v34 = 3006;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3006);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v34, 3006);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v6 = Current;
  if ( Current )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v45, a1->hDevice, Current, &v36);
    v8 = v36;
    if ( v36 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v40, v36);
      v9 = *((_QWORD *)v8 + 2);
      v39 = 0;
      v38 = *(_QWORD *)(v9 + 16);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v37);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v41, (__int64)v8, 2, v10, 0);
      v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v41);
      v14 = v11;
      if ( v11 < 0 )
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdEvent(v13, v12);
        v24[3] = v14;
        v24[4] = v8;
        v24[5] = v6;
        WdLogEvent5_WdEvent(v24);
      }
      else
      {
        v15 = DXGDEVICE::Lock(v8, a1, (struct COREDEVICEACCESS *)v41);
        v14 = v15;
        if ( v15 < 0 )
        {
          hAllocation = a1->hAllocation;
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v6 + 26));
          v26 = (hAllocation >> 6) & 0xFFFFFF;
          if ( v26 < *((_DWORD *)v6 + 62)
            && (v27 = v6[29],
                v28 = v26,
                v29 = *((_DWORD *)v27 + 4 * v26 + 2),
                ((hAllocation >> 25) & 0x60) == (v29 & 0x60))
            && (v29 & 0x2000) == 0
            && (v29 & 0x1F) != 0
            && (v30 = 2 * v28, (v29 & 0x1F) == 5) )
          {
            v31 = (struct DXGALLOCATION *)*((_QWORD *)v27 + v30);
          }
          else
          {
            v31 = 0LL;
          }
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v44, v31);
          ExReleasePushLockSharedEx(v6 + 26, 0LL);
          KeLeaveCriticalRegion();
          v33 = (_QWORD *)WdLogNewEntry5_WdError(v32);
          v33[3] = v14;
          v33[4] = v8;
          v33[5] = v6;
          v33[6] = a1->hAllocation;
          v33[7] = v44;
          WdLogEvent5_WdError(v33);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v44);
        }
      }
      v16 = v14;
      COREACCESS::~COREACCESS((COREACCESS *)v43);
      COREACCESS::~COREACCESS((COREACCESS *)v42);
      if ( v39 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v37);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v40);
    }
    else
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdError(v7);
      v16 = -1073741811;
      v23[3] = -1073741811LL;
      v23[4] = a1->hDevice;
      v23[5] = v6;
      WdLogEvent5_WdError(v23);
    }
    if ( v45 && _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
  }
  else
  {
    v16 = -1073741811;
    v20 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    *(_QWORD *)(v20 + 32) = PsGetCurrentProcess(v22, v21);
    WdLogEvent5_WdError(v20);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v17, &EventProfilerExit, v18, v34);
  return v16;
}
