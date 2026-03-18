/*
 * XREFs of DxgkMarkDeviceAsError @ 0x1C008B7C0
 * Callers:
 *     ?VmBusMarkDeviceAsError@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002E1A0 (-VmBusMarkDeviceAsError@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0005D94 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?VmBusSendMarkDeviceAsError@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEBU_D3DKMT_MARKDEVICEASERROR@@@Z @ 0x1C0030C90 (-VmBusSendMarkDeviceAsError@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEBU_D3DKMT_MARKDEVI.c)
 *     ?MarkDeviceAsError@DXGDEVICE@@QEAAXW4_VIDSCH_ERROR_CODE@@@Z @ 0x1C008B980 (-MarkDeviceAsError@DXGDEVICE@@QEAAXW4_VIDSCH_ERROR_CODE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkMarkDeviceAsError(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_MARKDEVICEASERROR *v3; // rbx
  bool v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KTHREAD **Current; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGDEVICE *v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  DXGADAPTER *v18; // r10
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rax
  unsigned int v23; // ebx
  __int64 v24; // r8
  __int64 v25; // rcx
  bool v26; // zf
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD v29[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v30[8]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v31; // [rsp+38h] [rbp-30h]
  char v32; // [rsp+40h] [rbp-28h]
  struct DXGDEVICE *v33; // [rsp+78h] [rbp+10h] BYREF
  _D3DKMT_MARKDEVICEASERROR v34; // [rsp+80h] [rbp+18h] BYREF
  struct DXGDEVICE *v35; // [rsp+88h] [rbp+20h] BYREF

  v3 = (_D3DKMT_MARKDEVICEASERROR *)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2131);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v22 = WdLogNewEntry5_WdError(v6, v5);
    v23 = -1073741811;
    *(_QWORD *)(v22 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v22);
    v25 = qword_1C006E790;
    v26 = (qword_1C006E790 & 2) == 0;
LABEL_24:
    if ( !v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v25, &EventProfilerExit, v24, 2131);
    return v23;
  }
  if ( v4 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_D3DKMT_MARKDEVICEASERROR *)MmUserProbeAddress;
    v34 = *v3;
    LODWORD(v3) = v34.hDevice;
  }
  else
  {
    v3 = (_D3DKMT_MARKDEVICEASERROR *)*v3;
    v34 = (_D3DKMT_MARKDEVICEASERROR)v3;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v33, (unsigned int)v3, Current, &v35);
  v10 = v35;
  if ( !v35 )
  {
    v27 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v27 + 24) = (unsigned int)v3;
    v23 = -1073741811;
    *(_QWORD *)(v27 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v27);
LABEL_30:
    if ( v33 )
    {
      v25 = _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v25 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v33 + 2), v33);
    }
    v26 = (qword_1C006E790 & 2) == 0;
    goto LABEL_24;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29, v35);
  v31 = *(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL);
  v11 = v31;
  v32 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
  if ( *(_DWORD *)(v11 + 176) == 1 )
  {
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v10 + 2) + 16LL)) )
    {
      if ( !*((_BYTE *)v35 + 1821) )
      {
        DXGDEVICE::MarkDeviceAsError(v35, v34.Reason | 0x80000000);
        if ( v32 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
        if ( v29[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
        if ( v33 )
        {
          v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 8, 0xFFFFFFFFFFFFFFFFuLL);
          if ( v19 == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v33 + 2), v33);
        }
        if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v19, &EventProfilerExit, v20, 2131);
        return 0LL;
      }
      v23 = DXGADAPTER::VmBusSendMarkDeviceAsError(v18, (struct DXGPROCESS *)Current, v35, &v34);
    }
    else
    {
      v28 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
      v23 = -1073741811;
      *(_QWORD *)(v28 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v28);
    }
    if ( v32 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
    if ( v29[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
    goto LABEL_30;
  }
  if ( v32 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
  if ( v29[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
  if ( v33 )
  {
    v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v12 == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v33 + 2), v33);
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v12, &EventProfilerExit, v13, 2131);
  return 3221226166LL;
}
