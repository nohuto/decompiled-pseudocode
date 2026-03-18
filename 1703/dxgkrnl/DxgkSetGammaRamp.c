/*
 * XREFs of DxgkSetGammaRamp @ 0x1C018BE70
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0005AB8 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000B47C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000B6D4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000B788 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C00E6CD4 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?UpdateGammaRamp@DXGDEVICE@@QEAAXIW4_D3DDDI_GAMMARAMP_TYPE@@IPEAX@Z @ 0x1C01896A4 (-UpdateGammaRamp@DXGDEVICE@@QEAAXIW4_D3DDDI_GAMMARAMP_TYPE@@IPEAX@Z.c)
 */

__int64 __fastcall DxgkSetGammaRamp(__int64 a1)
{
  _OWORD *v1; // rbx
  struct _KTHREAD **Current; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGDEVICE *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  signed int v16; // edi
  enum _D3DDDI_GAMMARAMP_TYPE v17; // r13d
  unsigned int v18; // r12d
  _QWORD *v19; // rax
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // r14d
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdi
  _QWORD *v28; // rax
  bool v29; // zf
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  PVOID v33; // r9
  __int64 v34; // rax
  const void *v35; // rdx
  _QWORD v36[2]; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v37[4]; // [rsp+40h] [rbp-C8h]
  size_t Size[2]; // [rsp+50h] [rbp-B8h]
  struct _KTHREAD **v39; // [rsp+60h] [rbp-A8h]
  _BYTE v40[152]; // [rsp+70h] [rbp-98h] BYREF
  struct DXGDEVICE *v41; // [rsp+118h] [rbp+10h] BYREF
  struct DXGDEVICE *v42; // [rsp+120h] [rbp+18h] BYREF
  PVOID P; // [rsp+128h] [rbp+20h]

  v1 = (_OWORD *)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  v39 = Current;
  if ( !Current )
  {
    v4 = WdLogNewEntry5_WdError(v3, 0LL);
    v5 = -1073741811;
    *(_QWORD *)(v4 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v4);
    return v5;
  }
  if ( (unsigned __int64)v1 >= MmUserProbeAddress )
    v1 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v37 = *v1;
  *(_OWORD *)Size = v1[1];
  v7 = v37[0];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v41, v37[0], Current, &v42);
  v12 = v42;
  if ( !v42 )
  {
    v13 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v13 + 24) = v37[0];
    v5 = -1073741811;
    *(_QWORD *)(v13 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v13);
    goto LABEL_8;
  }
  v14 = *((_QWORD *)v42 + 225);
  if ( !v14 )
  {
    v15 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    *(_QWORD *)(v15 + 24) = v37[0];
    v5 = -1073741637;
    *(_QWORD *)(v15 + 32) = -1073741637LL;
    WdLogEvent5_WdWarning(v15);
    goto LABEL_13;
  }
  v16 = 0;
  v17 = v37[2];
  v18 = Size[1];
  v5 = -1073741811;
  if ( v37[2] == 2 )
  {
    v16 = (*(_DWORD *)(v14 + 1656) & 1) == 0 ? 0xC000000D : 0;
    if ( LODWORD(Size[1]) != 1536 )
      v16 = -1073741811;
  }
  else if ( v37[2] != 3 || LODWORD(Size[1]) != 12324 )
  {
    v16 = -1073741811;
  }
  if ( v16 >= 0 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v36, v42);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v40, (__int64)v12, 1LL, v20, 0);
    v24 = COREDEVICEACCESS::AcquireExclusive((__int64)v40, 1LL);
    if ( (v24 & 0x80000000) != 0 )
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v40);
      if ( v36[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v36);
      if ( !v41 )
        return v24;
      goto LABEL_31;
    }
    v25 = *(unsigned int *)(*(_QWORD *)(v14 + 2280) + 80LL);
    if ( (_DWORD)v25 != *((_DWORD *)v12 + 452) )
    {
      v26 = WdLogNewEntry5_WdAssertion(v25, v21, v22, v23);
      *(_QWORD *)(v26 + 24) = 3882LL;
      WdLogEvent5_WdAssertion(v26);
    }
    v27 = v37[1];
    if ( *((_DWORD *)v12 + 452) > v37[1] )
    {
      v33 = operator new(v18, 0x4B677844u, PagedPool);
      P = v33;
      if ( !v33 )
      {
        v34 = WdLogNewEntry5_WdWarning(v31, v30, v32, 0LL);
        *(_QWORD *)(v34 + 24) = v12;
        v5 = -1073741801;
        *(_QWORD *)(v34 + 32) = -1073741801LL;
        WdLogEvent5_WdWarning(v34);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v40);
        if ( v36[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v36);
LABEL_13:
        if ( !v41 )
          return v5;
        goto LABEL_9;
      }
      v35 = (const void *)Size[0];
      if ( v18 + Size[0] < Size[0] || v18 + Size[0] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v33, v35, v18);
      DXGDEVICE::UpdateGammaRamp(v12, v27, v17, v18, P);
      if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v14 + 2280), v12, v27)
        && (!ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(*(DXGADAPTER ***)(v14 + 2280), v12, v27)
         || (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(DXGADAPTER ***)(v14 + 2280), v27) > 1
         || (unsigned int)_guard_dispatch_icall_fptr()) )
      {
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v40);
        if ( v36[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v36);
        if ( !v41 )
          return v24;
LABEL_31:
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v41 + 2), v41);
        return v24;
      }
      v5 = ADAPTER_DISPLAY::SetGammaRamp(*(PERESOURCE ***)(v14 + 2280), v27, v12);
      if ( (v5 & 0x80000000) != 0 )
        DXGDEVICE::UpdateGammaRamp(v12, v27, D3DDDI_GAMMARAMP_UNINITIALIZED, 0, 0LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v40);
      v29 = v36[0] == 0LL;
    }
    else
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v21, v22, v23);
      v28[3] = v12;
      v28[4] = v27;
      v28[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v28);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v40);
      v29 = v36[0] == 0LL;
    }
    if ( !v29 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v36);
LABEL_8:
    if ( !v41 )
      return v5;
LABEL_9:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v41 + 2), v41);
    return v5;
  }
  v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v37[2] - 2, v8, v10, v11);
  v19[3] = (int)v37[2];
  v19[4] = v7;
  v19[5] = v16;
  WdLogEvent5_WdWarning(v19);
  if ( v41 && _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v41 + 2), v41);
  return (unsigned int)v16;
}
