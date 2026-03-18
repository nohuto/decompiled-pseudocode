/*
 * XREFs of ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1C00A4D40
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C000D830 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D864 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C00C1704 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkCddUnlock(struct _D3DKMT_UNLOCK *a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD **Current; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KTHREAD **v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGDEVICE *v10; // rdi
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  unsigned int v16; // edi
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rbx
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  _BYTE v23[16]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v24[8]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v25[32]; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v26[56]; // [rsp+68h] [rbp-40h] BYREF
  struct DXGDEVICE *v27; // [rsp+C0h] [rbp+18h] BYREF
  struct DXGDEVICE *v28; // [rsp+C8h] [rbp+20h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 3007);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v7 = Current;
  if ( Current )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v27, a1->hDevice, Current, &v28);
    v10 = v28;
    if ( v28 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v23, v28);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v24, (__int64)v10, 2LL, v11, 0);
      if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v24) < 0 )
      {
        v16 = 0;
      }
      else
      {
        v12 = DXGDEVICE::Unlock(v10, a1, 0);
        v15 = v12;
        if ( v12 < 0 )
        {
          v22 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
          v22[3] = v15;
          v22[4] = v10;
          v22[5] = v7;
          WdLogEvent5_WdError(v22);
        }
        v16 = v15;
      }
      COREACCESS::~COREACCESS((COREACCESS *)v26);
      COREACCESS::~COREACCESS((COREACCESS *)v25);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v23);
    }
    else
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
      v16 = -1073741811;
      v21[3] = -1073741811LL;
      v21[4] = a1->hDevice;
      v21[5] = v7;
      WdLogEvent5_WdError(v21);
    }
    if ( v27 )
    {
      v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)v27 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v17 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v27 + 2), v27);
    }
  }
  else
  {
    v16 = -1073741811;
    v20 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    *(_QWORD *)(v20 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v20);
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v17, &EventProfilerExit, v18, 3007);
  return v16;
}
