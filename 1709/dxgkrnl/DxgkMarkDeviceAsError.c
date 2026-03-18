/*
 * XREFs of DxgkMarkDeviceAsError @ 0x1C007DD60
 * Callers:
 *     ?VmBusMarkDeviceAsError@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0194180 (-VmBusMarkDeviceAsError@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002160 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?MarkDeviceAsError@DXGDEVICE@@QEAAXW4_VIDSCH_ERROR_CODE@@@Z @ 0x1C007DF24 (-MarkDeviceAsError@DXGDEVICE@@QEAAXW4_VIDSCH_ERROR_CODE@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendMarkDeviceAsError@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEBU_D3DKMT_MARKDEVICEASERROR@@@Z @ 0x1C0197178 (-VmBusSendMarkDeviceAsError@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEBU.c)
 */

__int64 __fastcall DxgkMarkDeviceAsError(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_MARKDEVICEASERROR *v3; // rbx
  bool v4; // r14
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r15
  __int64 v7; // rcx
  struct DXGDEVICE *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rax
  unsigned int v19; // ebx
  __int64 v20; // r8
  __int64 v21; // rcx
  bool v22; // zf
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD v25[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v26[8]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v27; // [rsp+38h] [rbp-30h]
  char v28; // [rsp+40h] [rbp-28h]
  struct DXGDEVICE *v29; // [rsp+78h] [rbp+10h] BYREF
  _D3DKMT_MARKDEVICEASERROR v30; // [rsp+80h] [rbp+18h] BYREF
  struct DXGDEVICE *v31; // [rsp+88h] [rbp+20h] BYREF

  v3 = (_D3DKMT_MARKDEVICEASERROR *)a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2131);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v18 = WdLogNewEntry5_WdError(v5);
    v19 = -1073741811;
    *(_QWORD *)(v18 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v18);
    v21 = qword_1C005F010;
    v22 = (qword_1C005F010 & 2) == 0;
LABEL_24:
    if ( !v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v21, &EventProfilerExit, v20, 2131);
    return v19;
  }
  if ( v4 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_D3DKMT_MARKDEVICEASERROR *)MmUserProbeAddress;
    v30 = *v3;
    LODWORD(v3) = v30.hDevice;
  }
  else
  {
    v3 = (_D3DKMT_MARKDEVICEASERROR *)*v3;
    v30 = (_D3DKMT_MARKDEVICEASERROR)v3;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v29, (unsigned int)v3, Current, &v31);
  v8 = v31;
  if ( !v31 )
  {
    v23 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v23 + 24) = (unsigned int)v3;
    v19 = -1073741811;
    *(_QWORD *)(v23 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v23);
LABEL_30:
    if ( v29 )
    {
      v21 = _InterlockedExchangeAdd64((volatile signed __int64 *)v29 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v21 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v29 + 2), v29);
    }
    v22 = (qword_1C005F010 & 2) == 0;
    goto LABEL_24;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v25, v31);
  v27 = *(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL);
  v9 = v27;
  v28 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v26);
  if ( *(_DWORD *)(v9 + 176) == 1 )
  {
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v8 + 2) + 16LL)) )
    {
      if ( !*((_BYTE *)v31 + 1693) )
      {
        DXGDEVICE::MarkDeviceAsError(v31, v30.Reason | 0x80000000);
        if ( v28 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v26);
        if ( v25[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v25);
        if ( v29 )
        {
          v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)v29 + 8, 0xFFFFFFFFFFFFFFFFuLL);
          if ( v15 == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v29 + 2), v29);
        }
        if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v15, &EventProfilerExit, v16, 2131);
        return 0LL;
      }
      v19 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMarkDeviceAsError(
              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v13 + 3888),
              (struct DXGPROCESS *)Current,
              v31,
              &v30);
    }
    else
    {
      v24 = WdLogNewEntry5_WdWarning(v13, v12, v14);
      v19 = -1073741811;
      *(_QWORD *)(v24 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v24);
    }
    if ( v28 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v26);
    if ( v25[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v25);
    goto LABEL_30;
  }
  if ( v28 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v26);
  if ( v25[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v25);
  if ( v29 )
  {
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)v29 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v10 == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v29 + 2), v29);
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v10, &EventProfilerExit, v11, 2131);
  return 3221226166LL;
}
