/*
 * XREFs of DxgkSetGammaRamp @ 0x1C018E900
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     DxgkLogCodePointPacket @ 0x1C000735C (DxgkLogCodePointPacket.c)
 *     ??0DXGK_GAMMA_RAMP@@QEAA@XZ @ 0x1C000BB18 (--0DXGK_GAMMA_RAMP@@QEAA@XZ.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C000BB4C (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0014AF8 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0014BAC (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001569C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0019B40 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?SetDeviceGammaRamp@DXGDEVICE@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C002F7CC (-SetDeviceGammaRamp@DXGDEVICE@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00E1C6C (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
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
  bool v14; // zf
  __int64 v15; // r15
  __int64 v16; // rax
  signed int updated; // edi
  enum _D3DDDI_GAMMARAMP_TYPE v18; // r13d
  unsigned int v19; // r12d
  _QWORD *v20; // rax
  bool v21; // zf
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // rax
  __int64 v29; // r14
  _QWORD *v30; // rax
  DXGK_GAMMA_RAMP *v31; // rax
  __int64 v32; // rcx
  size_t *v33; // rbx
  __int64 v34; // rax
  void *v35; // rcx
  const void *v36; // rdx
  char *v37; // r9
  unsigned int VidPnSourceOwnerType; // eax
  struct _KTHREAD **v39; // r13
  char v40; // al
  _QWORD v41[3]; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v42[4]; // [rsp+48h] [rbp-C0h]
  void *Src[2]; // [rsp+58h] [rbp-B0h]
  _BYTE v44[152]; // [rsp+70h] [rbp-98h] BYREF
  struct DXGDEVICE *v45; // [rsp+118h] [rbp+10h] BYREF
  struct _KTHREAD **v46; // [rsp+120h] [rbp+18h]
  struct DXGDEVICE *v47; // [rsp+128h] [rbp+20h] BYREF

  v2 = (_OWORD *)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  v46 = Current;
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
  *(_OWORD *)v42 = *v2;
  *(_OWORD *)Src = v2[1];
  v8 = v42[0];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v45, v42[0], Current, &v47);
  v12 = v47;
  if ( !v47 )
  {
    v13 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v13 + 24) = v42[0];
    v6 = -1073741811;
    *(_QWORD *)(v13 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v13);
LABEL_8:
    if ( !v45 )
      return v6;
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_10:
    if ( v14 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
    return v6;
  }
  v15 = *((_QWORD *)v47 + 211);
  if ( !v15 )
  {
    v16 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v16 + 24) = v42[0];
    v6 = -1073741637;
    *(_QWORD *)(v16 + 32) = -1073741637LL;
    WdLogEvent5_WdWarning(v16);
    if ( !v45 )
      return v6;
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
    goto LABEL_10;
  }
  updated = 0;
  v18 = v42[2];
  v19 = (unsigned int)Src[1];
  v6 = -1073741811;
  if ( v42[2] == 2 )
  {
    updated = (*(_DWORD *)(v15 + 1816) & 1) == 0 ? 0xC000000D : 0;
    if ( LODWORD(Src[1]) != 1536 )
      updated = -1073741811;
  }
  else if ( v42[2] != 3 || LODWORD(Src[1]) != 12324 )
  {
    updated = -1073741811;
  }
  if ( updated < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v42[2] - 2, v9, v11);
    v20[3] = (int)v42[2];
    v20[4] = v8;
    v20[5] = updated;
    WdLogEvent5_WdWarning(v20);
    if ( !v45 )
      return (unsigned int)updated;
    v21 = _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_25:
    if ( v21 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
    return (unsigned int)updated;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v41, v47);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v44, (__int64)v12, 1, v22, 0);
  if ( *(_BYTE *)(*(_QWORD *)(v15 + 2456) + 134LL) )
    v23 = COREDEVICEACCESS::AcquireExclusive((__int64)v44);
  else
    v23 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v44);
  updated = v23;
  if ( v23 < 0 )
  {
LABEL_32:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
    if ( v41[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v41);
    if ( !v45 )
      return (unsigned int)updated;
    v21 = _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
    goto LABEL_25;
  }
  v26 = *(unsigned int *)(*(_QWORD *)(v15 + 2456) + 80LL);
  v27 = *((_DWORD *)v12 + 424);
  if ( (_DWORD)v26 != v27 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v26);
    *(_QWORD *)(v28 + 24) = 4062LL;
    WdLogEvent5_WdAssertion(v28);
    v27 = *((_DWORD *)v12 + 424);
  }
  v29 = v42[1];
  if ( v27 <= v42[1] )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v24, v25);
    v30[3] = v12;
    v30[4] = v29;
    v30[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v30);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
    if ( v41[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v41);
    goto LABEL_8;
  }
  v31 = (DXGK_GAMMA_RAMP *)operator new[](0x28uLL, 0x4B677844u, PagedPool);
  if ( v31 )
    v33 = (size_t *)DXGK_GAMMA_RAMP::DXGK_GAMMA_RAMP(v31);
  else
    v33 = 0LL;
  v41[2] = v33;
  if ( v33 )
  {
    updated = DXGK_GAMMA_RAMP::Initialize(v33, v18, 0LL);
    if ( updated < 0 )
    {
LABEL_52:
      ReferenceCounted::Release((ReferenceCounted *)v33);
      goto LABEL_32;
    }
    v35 = (void *)v33[4];
    v36 = Src[0];
    v37 = (char *)Src[0] + v19;
    if ( v37 < Src[0] || (unsigned __int64)v37 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v35, v36, v19);
    DXGDEVICE::SetDeviceGammaRamp(v12, v29, (const struct DXGK_GAMMA_RAMP *)v33);
    if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v15 + 2456), v12, v29) )
    {
      if ( ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(DXGADAPTER ***)(v15 + 2456), v12, v29) )
      {
        VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(DXGADAPTER ***)(v15 + 2456), v29);
        v39 = v46;
        if ( VidPnSourceOwnerType <= 1 && !(unsigned int)_guard_dispatch_icall_fptr() )
        {
LABEL_62:
          updated = ADAPTER_DISPLAY::UpdateGammaRamp(*(DXGADAPTER ***)(v15 + 2456), v29);
          if ( updated < 0 )
            DXGDEVICE::SetDeviceGammaRamp(v12, v29, 0LL);
        }
      }
      else
      {
        v39 = v46;
      }
      v40 = *((_BYTE *)v39 + 324);
      *((_BYTE *)v39 + 324) = 1;
      if ( !v40 )
        DxgkLogCodePointPacket(0x5Eu, 3u, updated, 0, *(_QWORD *)(v15 + 268));
      goto LABEL_52;
    }
    v39 = v46;
    goto LABEL_62;
  }
  v34 = WdLogNewEntry5_WdLowResource(v32);
  *(_QWORD *)(v34 + 24) = v12;
  WdLogEvent5_WdLowResource(v34);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
  if ( v41[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v41);
  if ( v45 && _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
  return 3221225495LL;
}
