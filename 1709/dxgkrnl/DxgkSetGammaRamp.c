/*
 * XREFs of DxgkSetGammaRamp @ 0x1C01A0AC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001CA0 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0003A8C (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C0004090 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000757C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0007858 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000790C (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C0009664 (DxgkLogCodePointPacket.c)
 *     ??0DXGK_GAMMA_RAMP@@QEAA@XZ @ 0x1C00153D0 (--0DXGK_GAMMA_RAMP@@QEAA@XZ.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C00154C8 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?SetDeviceGammaRamp@DXGDEVICE@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00157E4 (-SetDeviceGammaRamp@DXGDEVICE@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0079574 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DxgkSetGammaRamp(__int64 a1, __int64 a2)
{
  _OWORD *v2; // rbx
  struct _KTHREAD **Current; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGDEVICE *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  signed int updated; // edi
  unsigned int v17; // r13d
  unsigned int v18; // r12d
  _QWORD *v19; // rax
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r14
  _QWORD *v27; // rax
  DXGK_GAMMA_RAMP *v28; // rax
  __int64 v29; // rcx
  DXGK_GAMMA_RAMP *v30; // rbx
  __int64 v31; // rax
  void *v32; // rcx
  const void *v33; // rdx
  char *v34; // r9
  struct _KTHREAD **v35; // r13
  char v36; // al
  _BYTE v37[16]; // [rsp+30h] [rbp-D8h] BYREF
  ReferenceCounted *v38; // [rsp+40h] [rbp-C8h]
  unsigned int v39[4]; // [rsp+48h] [rbp-C0h]
  void *Src[2]; // [rsp+58h] [rbp-B0h]
  _BYTE v41[152]; // [rsp+70h] [rbp-98h] BYREF
  struct _KTHREAD **v42; // [rsp+118h] [rbp+10h]
  char v43; // [rsp+120h] [rbp+18h] BYREF
  struct DXGDEVICE *v44; // [rsp+128h] [rbp+20h] BYREF

  v2 = (_OWORD *)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  v42 = Current;
  if ( !Current )
  {
    v5 = WdLogNewEntry5_WdError(v4);
    v6 = -1073741811;
    *(_QWORD *)(v5 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v5);
    return v6;
  }
  if ( (unsigned __int64)v2 >= MmUserProbeAddress )
    v2 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v39 = *v2;
  *(_OWORD *)Src = v2[1];
  v8 = v39[0];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v43, v39[0], Current, &v44);
  v12 = v44;
  if ( !v44 )
  {
    v13 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v13 + 24) = v39[0];
    v6 = -1073741811;
    *(_QWORD *)(v13 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v13);
LABEL_36:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v43);
    return v6;
  }
  v14 = *((_QWORD *)v44 + 209);
  if ( !v14 )
  {
    v15 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v15 + 24) = v39[0];
    v6 = -1073741637;
    *(_QWORD *)(v15 + 32) = -1073741637LL;
    WdLogEvent5_WdWarning(v15);
    goto LABEL_36;
  }
  updated = 0;
  v17 = v39[2];
  v18 = (unsigned int)Src[1];
  v6 = -1073741811;
  if ( v39[2] == 2 )
  {
    updated = (*(_DWORD *)(v14 + 1680) & 1) == 0 ? 0xC000000D : 0;
    if ( LODWORD(Src[1]) != 1536 )
      updated = -1073741811;
  }
  else if ( v39[2] != 3 || LODWORD(Src[1]) != 12324 )
  {
    updated = -1073741811;
  }
  if ( updated < 0 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v39[2] - 2, v9, v11);
    v19[3] = (int)v39[2];
    v19[4] = v8;
    v19[5] = updated;
    WdLogEvent5_WdWarning(v19);
LABEL_35:
    v6 = updated;
    goto LABEL_36;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37, v44);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v41, (__int64)v12, 1, v20, 0);
  if ( *(_BYTE *)(*(_QWORD *)(v14 + 2304) + 134LL) )
    v21 = COREDEVICEACCESS::AcquireExclusive((__int64)v41, 1LL);
  else
    v21 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v41);
  updated = v21;
  if ( v21 < 0 )
  {
LABEL_34:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v41);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37);
    goto LABEL_35;
  }
  v24 = *(unsigned int *)(*(_QWORD *)(v14 + 2304) + 80LL);
  if ( (_DWORD)v24 != *((_DWORD *)v12 + 420) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v24);
    *(_QWORD *)(v25 + 24) = 3934LL;
    WdLogEvent5_WdAssertion(v25);
  }
  v26 = v39[1];
  if ( *((_DWORD *)v12 + 420) <= v39[1] )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v22, v23);
    v27[3] = v12;
    v27[4] = v26;
    v27[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v27);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v41);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37);
    goto LABEL_36;
  }
  v28 = (DXGK_GAMMA_RAMP *)operator new(0x28uLL, 0x4B677844u, PagedPool);
  if ( v28 )
    v30 = DXGK_GAMMA_RAMP::DXGK_GAMMA_RAMP(v28);
  else
    v30 = 0LL;
  v38 = v30;
  if ( !v30 )
  {
    v31 = WdLogNewEntry5_WdLowResource(v29);
    *(_QWORD *)(v31 + 24) = v12;
    WdLogEvent5_WdLowResource(v31);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v41);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37);
    v6 = -1073741801;
    goto LABEL_36;
  }
  updated = DXGK_GAMMA_RAMP::Initialize((size_t *)v30, v17, 0LL);
  if ( updated < 0 )
  {
    ReferenceCounted::Release(v30);
    goto LABEL_34;
  }
  v32 = (void *)*((_QWORD *)v30 + 4);
  v33 = Src[0];
  v34 = (char *)Src[0] + v18;
  if ( v34 < Src[0] || (unsigned __int64)v34 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v32, v33, v18);
  DXGDEVICE::SetDeviceGammaRamp(v12, v26, v30);
  if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v14 + 2304), v12, v26) )
  {
    v35 = v42;
    goto LABEL_46;
  }
  if ( ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(DXGADAPTER ***)(v14 + 2304), v12, v26) )
  {
    v35 = v42;
    if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(DXGADAPTER ***)(v14 + 2304), v26) <= 1
      && !(unsigned int)_guard_dispatch_icall_fptr() )
    {
LABEL_46:
      updated = ADAPTER_DISPLAY::UpdateGammaRamp(*(DXGADAPTER ***)(v14 + 2304), v26);
      if ( updated < 0 )
        DXGDEVICE::SetDeviceGammaRamp(v12, v26, 0LL);
    }
  }
  else
  {
    v35 = v42;
  }
  v36 = *((_BYTE *)v35 + 308);
  *((_BYTE *)v35 + 308) = 1;
  if ( !v36 )
    DxgkLogCodePointPacket(0x5Eu, 3u, updated, 0, *(_QWORD *)(v14 + 268));
  ReferenceCounted::Release(v30);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v41);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v43);
  return (unsigned int)updated;
}
