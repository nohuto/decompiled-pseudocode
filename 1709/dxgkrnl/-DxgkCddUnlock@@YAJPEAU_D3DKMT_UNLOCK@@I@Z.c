/*
 * XREFs of ?DxgkCddUnlock@@YAJPEAU_D3DKMT_UNLOCK@@I@Z @ 0x1C00BAD10
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00087FC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008830 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0094B50 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCddUnlock(struct _D3DKMT_UNLOCK *a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD **Current; // rax
  __int64 v5; // rcx
  struct _KTHREAD **v6; // rbx
  __int64 v7; // rcx
  DXGDEVICE *v8; // rdi
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rsi
  unsigned int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  _BYTE v22[16]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v23[8]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v24[32]; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v25[56]; // [rsp+68h] [rbp-40h] BYREF
  struct DXGDEVICE *v26; // [rsp+C0h] [rbp+18h] BYREF
  struct DXGDEVICE *v27; // [rsp+C8h] [rbp+20h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3007);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1, a2);
  v6 = Current;
  if ( Current )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v26, a1->hDevice, Current, &v27);
    v8 = v27;
    if ( v27 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v22, v27);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v23, (__int64)v8, 2, v9, 0);
      if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v23) < 0 )
      {
        v13 = 0;
      }
      else
      {
        v10 = DXGDEVICE::Unlock(v8, a1, 0LL);
        v12 = v10;
        if ( v10 < 0 )
        {
          v21 = (_QWORD *)WdLogNewEntry5_WdError(v11);
          v21[3] = v12;
          v21[4] = v8;
          v21[5] = v6;
          WdLogEvent5_WdError(v21);
        }
        v13 = v12;
      }
      COREACCESS::~COREACCESS((COREACCESS *)v25);
      COREACCESS::~COREACCESS((COREACCESS *)v24);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v22);
    }
    else
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v7);
      v13 = -1073741811;
      v20[3] = -1073741811LL;
      v20[4] = a1->hDevice;
      v20[5] = v6;
      WdLogEvent5_WdError(v20);
    }
    if ( v26 )
    {
      v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)v26 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v14 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v26 + 2), v26);
    }
  }
  else
  {
    v13 = -1073741811;
    v17 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    *(_QWORD *)(v17 + 32) = PsGetCurrentProcess(v19, v18);
    WdLogEvent5_WdError(v17);
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v14, &EventProfilerExit, v15, 3007);
  return v13;
}
