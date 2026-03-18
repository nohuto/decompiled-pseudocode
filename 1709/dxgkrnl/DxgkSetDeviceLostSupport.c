/*
 * XREFs of DxgkSetDeviceLostSupport @ 0x1C01A08C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetDeviceLostSupport(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rdi
  __int64 v4; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  bool v9; // zf
  __int64 v11; // rcx
  struct DXGDEVICE *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD v16[3]; // [rsp+20h] [rbp-18h] BYREF
  struct DXGDEVICE *v17; // [rsp+48h] [rbp+10h] BYREF
  __int64 v18; // [rsp+50h] [rbp+18h]
  struct DXGDEVICE *v19; // [rsp+58h] [rbp+20h] BYREF

  v3 = (__int64 *)a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2155);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    v8 = qword_1C005F010;
    v9 = (qword_1C005F010 & 2) == 0;
LABEL_6:
    if ( !v9 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v8, &EventProfilerExit, v7, 2155);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v18 = *v3;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v17, v18, Current, &v19);
  v12 = v19;
  if ( !v19 )
  {
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = (unsigned int)v18;
    WdLogEvent5_WdError(v13);
    if ( v17 )
    {
      v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)v17 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v8 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v17 + 2), v17);
    }
    v9 = (qword_1C005F010 & 2) == 0;
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v16, v19);
  *((_BYTE *)v12 + 1731) = BYTE4(v18);
  if ( v16[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v16);
  if ( v17 )
  {
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)v17 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v14 == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v17 + 2), v17);
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v14, &EventProfilerExit, v15, 2155);
  return 0LL;
}
