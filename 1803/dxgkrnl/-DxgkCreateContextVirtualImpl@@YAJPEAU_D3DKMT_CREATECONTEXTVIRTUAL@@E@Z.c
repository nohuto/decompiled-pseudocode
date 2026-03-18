/*
 * XREFs of ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1C00A12D8
 * Callers:
 *     DxgkCreateContextVirtualInternal @ 0x1C009E810 (DxgkCreateContextVirtualInternal.c)
 *     DxgkCreateContextVirtual @ 0x1C00A12C0 (DxgkCreateContextVirtual.c)
 *     ?VmBusCreateContextVirtual@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017D8C0 (-VmBusCreateContextVirtual@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001A40 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C0001DC4 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0015AA8 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?GetBitCount@@YAII@Z @ 0x1C00A2560 (-GetBitCount@@YAII@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00E84EC (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 */

__int64 __fastcall DxgkCreateContextVirtualImpl(struct _D3DKMT_CREATECONTEXTVIRTUAL *a1, char a2, __int64 a3)
{
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r8
  struct _D3DKMT_CREATECONTEXTVIRTUAL *v7; // rax
  __int128 v8; // xmm1
  __int64 v9; // xmm0_8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGDEVICE *v13; // r13
  __int64 v14; // r10
  unsigned int v15; // r9d
  __int64 v16; // rdi
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r15
  unsigned int v21; // r9d
  __int64 v22; // r10
  ADAPTER_RENDER *v23; // r11
  __int64 Value; // rcx
  PVOID v25; // r15
  PVOID v26; // rdi
  unsigned int v27; // r12d
  __int64 v28; // r9
  int v29; // r13d
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  ULONG64 v33; // rcx
  unsigned int v34; // r9d
  unsigned int v35; // r8d
  struct _D3DDDI_CREATECONTEXTFLAGS v36; // ecx
  int v37; // r8d
  _DWORD *p_hContext; // rdx
  ULONG64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rax
  _QWORD *v47; // rax
  unsigned int v48; // edi
  _QWORD *v49; // rax
  struct DXGDEVICE *v50; // [rsp+50h] [rbp-128h] BYREF
  int v51; // [rsp+58h] [rbp-120h] BYREF
  __int64 v52; // [rsp+60h] [rbp-118h]
  unsigned int v53; // [rsp+68h] [rbp-110h]
  unsigned int v54; // [rsp+6Ch] [rbp-10Ch]
  DXGDEVICE *v55; // [rsp+70h] [rbp-108h]
  PVOID v56; // [rsp+78h] [rbp-100h]
  struct DXGCONTEXT *v57; // [rsp+80h] [rbp-F8h] BYREF
  struct DXGDEVICE *v58; // [rsp+88h] [rbp-F0h] BYREF
  int v59; // [rsp+90h] [rbp-E8h]
  unsigned int v60[4]; // [rsp+98h] [rbp-E0h]
  void *Src[2]; // [rsp+A8h] [rbp-D0h]
  __int64 v62; // [rsp+B8h] [rbp-C0h]
  unsigned int v63; // [rsp+C0h] [rbp-B8h]
  struct DXGDEVICE *v64; // [rsp+C8h] [rbp-B0h] BYREF
  int v65; // [rsp+D0h] [rbp-A8h]
  __int64 v66; // [rsp+D8h] [rbp-A0h]
  DXGADAPTER *v67; // [rsp+E0h] [rbp-98h]
  _BYTE v68[136]; // [rsp+F0h] [rbp-88h] BYREF
  struct _D3DDDI_CREATECONTEXTFLAGS v71; // [rsp+190h] [rbp+18h]
  unsigned int v72; // [rsp+198h] [rbp+20h]

  v52 = 0LL;
  v51 = 2039;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2039);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v51, 2039);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v43 = WdLogNewEntry5_WdError(v5);
    v48 = -1073741811;
    *(_QWORD *)(v43 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v43);
LABEL_60:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v44, &EventProfilerExit, v45, v51);
    return v48;
  }
  if ( a2 )
  {
    v7 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v7 = (struct _D3DKMT_CREATECONTEXTVIRTUAL *)MmUserProbeAddress;
    *(_OWORD *)v60 = *(_OWORD *)&v7->hDevice;
    v8 = *(_OWORD *)&v7->pPrivateDriverData;
    v9 = *(_QWORD *)&v7->hContext;
  }
  else
  {
    *(_OWORD *)v60 = *(_OWORD *)&a1->hDevice;
    v8 = *(_OWORD *)&a1->pPrivateDriverData;
    v9 = *(_QWORD *)&a1->hContext;
  }
  v62 = v9;
  *(_OWORD *)Src = v8;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v50, v60[0], Current, &v64);
  v13 = v64;
  v55 = v64;
  if ( !v64 )
  {
    v46 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v46 + 24) = v60[0];
    v48 = -1073741811;
    *(_QWORD *)(v46 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v46);
LABEL_65:
    if ( v50 && _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
    goto LABEL_60;
  }
  v14 = *(_QWORD *)(*((_QWORD *)v64 + 2) + 16LL);
  v15 = 0;
  v16 = v60[2];
  v72 = v60[2];
  v17 = v60[2];
  while ( 1 )
  {
    v17 >>= 1;
    if ( !v17 )
      break;
    ++v15;
  }
  if ( v15 >= *(_DWORD *)(v14 + 248) )
    goto LABEL_69;
  v18 = 352LL * v15;
  v19 = *(unsigned __int16 *)(v18 + *(_QWORD *)(v14 + 2360));
  v20 = v60[1];
  v53 = v60[1];
  if ( v60[1] >= (unsigned int)v19 )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v19, v12);
    v47[3] = v20;
    goto LABEL_71;
  }
  if ( GetBitCount(v60[2]) > 1 )
  {
LABEL_69:
    v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
    v47[3] = v16;
LABEL_71:
    v48 = -1073741811;
    v47[4] = -1073741811LL;
    goto LABEL_73;
  }
  Value = v60[3];
  v71.0 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v60[3];
  if ( (v60[3] & 8) == 0 )
  {
    if ( (*(_DWORD *)(v22 + 1836) & 0x20) == 0 || !ADAPTER_RENDER::NodeSupportsGpuVa(v23, v21, v20) )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdWarning(Value, v10, v12);
      v48 = -1073741811;
      v47[3] = -1073741811LL;
      v47[4] = 297LL;
      goto LABEL_73;
    }
    Value = v71.Value;
  }
  v54 = *(_DWORD *)(v22 + 1664);
  v63 = v54;
  if ( v54 >= 0x7008 && (Value & 0xFFFFFFE0) != 0 )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdWarning(Value, v10, v12);
    v48 = -1073741811;
    v47[3] = -1073741811LL;
    v47[4] = 307LL;
LABEL_73:
    WdLogEvent5_WdWarning(v47);
    goto LABEL_65;
  }
  v25 = 0LL;
  v56 = 0LL;
  v26 = Src[0];
  v27 = (unsigned int)Src[1];
  if ( Src[0] )
  {
    if ( LODWORD(Src[1]) )
      goto LABEL_21;
LABEL_72:
    v47 = (_QWORD *)WdLogNewEntry5_WdWarning(Value, v10, v12);
    v47[3] = v26;
    v47[4] = v27;
    v48 = -1073741811;
    v47[5] = -1073741811LL;
    goto LABEL_73;
  }
  if ( LODWORD(Src[1]) )
    goto LABEL_72;
LABEL_21:
  v58 = v13;
  v59 = 0;
  DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v58);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v68, (__int64)v13, 0, v28, 0);
  v29 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v68);
  if ( v29 >= 0 )
  {
    if ( v26 )
    {
      if ( a2 )
      {
        v57 = (struct DXGCONTEXT *)v27;
        v25 = operator new[](v27, 0x4B677844u, PagedPool);
        v56 = v25;
        if ( !v25 )
        {
          v49 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32);
          v49[3] = v55;
          v49[4] = v57;
          v48 = -1073741801;
          v49[5] = -1073741801LL;
          WdLogEvent5_WdWarning(v49);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v68);
          if ( v58 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v58);
          goto LABEL_65;
        }
        v33 = (ULONG64)v26 + v27;
        if ( v33 < (unsigned __int64)v26 || v33 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v25, v26, v27);
        v34 = v72;
        v35 = v53;
        v36.0 = v71.0;
LABEL_29:
        v57 = 0LL;
        v29 = DXGDEVICE::CreateContext(v55, &v57, v35, v34, v36, v25, v27, SHIDWORD(Src[1]), 1u);
        if ( v29 >= 0 )
        {
          v37 = *((_DWORD *)v57 + 6);
          v65 = v37;
          p_hContext = &a1->hContext;
          if ( a2 )
          {
            if ( (unsigned __int64)p_hContext >= MmUserProbeAddress )
              p_hContext = (_DWORD *)MmUserProbeAddress;
            *p_hContext = v37;
            if ( v27 )
            {
              v66 = *((_QWORD *)v55 + 2);
              v67 = *(DXGADAPTER **)(v66 + 16);
              if ( DXGADAPTER::IsDxgmms2(v67) )
              {
                if ( v54 >= 0x7008 )
                {
                  v39 = (ULONG64)v26 + v27;
                  if ( v39 > MmUserProbeAddress || v39 <= (unsigned __int64)v26 )
                    *(_BYTE *)MmUserProbeAddress = 0;
                  memmove(v26, v25, v27);
                }
              }
            }
          }
          else
          {
            *p_hContext = v37;
          }
        }
        if ( v25 != v26 )
          operator delete[](v25);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v68);
        if ( v58 && v59 )
        {
          ExReleaseResourceLite(*((PERESOURCE *)v58 + 13));
          KeLeaveCriticalRegion();
        }
        if ( !v50 )
          goto LABEL_50;
        goto LABEL_48;
      }
      v25 = v26;
      v56 = v26;
    }
    v36.0 = v71.0;
    v35 = v53;
    v34 = v72;
    goto LABEL_29;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v68);
  if ( v58 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v58);
  if ( !v50 )
    goto LABEL_50;
LABEL_48:
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
LABEL_50:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v40, &EventProfilerExit, v41, v51);
  return (unsigned int)v29;
}
