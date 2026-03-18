/*
 * XREFs of ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1C00D3660
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0009964 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009998 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C00E9030 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 */

__int64 __fastcall DxgkCddUnlock(struct _D3DKMT_UNLOCK *a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD **Current; // rax
  __int64 v5; // rcx
  struct _KTHREAD **v6; // rsi
  __int64 v7; // rcx
  DXGDEVICE *v8; // rbx
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  int v21; // [rsp+30h] [rbp-39h] BYREF
  __int64 v22; // [rsp+38h] [rbp-31h]
  _BYTE v23[16]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v24[8]; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v25[32]; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v26[56]; // [rsp+78h] [rbp+Fh] BYREF
  struct DXGDEVICE *v27; // [rsp+E0h] [rbp+77h] BYREF
  struct DXGDEVICE *v28; // [rsp+E8h] [rbp+7Fh] BYREF

  v22 = 0LL;
  v21 = 3007;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3007);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v21, 3007);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v6 = Current;
  if ( Current )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v27, a1->hDevice, Current, &v28);
    v8 = v28;
    if ( v28 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v23, v28);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v24, (__int64)v8, 2, v9, 0);
      if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v24) < 0 )
      {
        LODWORD(v12) = 0;
      }
      else
      {
        v10 = DXGDEVICE::Unlock(v8, a1, 0);
        v12 = v10;
        if ( v10 < 0 )
        {
          v20 = (_QWORD *)WdLogNewEntry5_WdError(v11);
          v20[3] = v12;
          v20[4] = v8;
          v20[5] = v6;
          WdLogEvent5_WdError(v20);
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v26);
      COREACCESS::~COREACCESS((COREACCESS *)v25);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v23);
    }
    else
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdError(v7);
      LODWORD(v12) = -1073741811;
      v19[3] = -1073741811LL;
      v19[4] = a1->hDevice;
      v19[5] = v6;
      WdLogEvent5_WdError(v19);
    }
    if ( v27 && _InterlockedExchangeAdd64((volatile signed __int64 *)v27 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v27 + 2), v27);
  }
  else
  {
    LODWORD(v12) = -1073741811;
    v16 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v16 + 24) = -1073741811LL;
    *(_QWORD *)(v16 + 32) = PsGetCurrentProcess(v18, v17);
    WdLogEvent5_WdError(v16);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v13, &EventProfilerExit, v14, v21);
  return (unsigned int)v12;
}
