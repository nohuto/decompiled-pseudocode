/*
 * XREFs of DxgkCreateContextVirtual @ 0x1C0090D00
 * Callers:
 *     ?VmBusCreateContextVirtual@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0191CA0 (-VmBusCreateContextVirtual@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C00013D4 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002160 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AD4 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetBitCount@@YAII@Z @ 0x1C0090CE4 (-GetBitCount@@YAII@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C0094048 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DxgkCreateContextVirtual(ULONG64 a1, __int64 a2, __int64 a3)
{
  bool v4; // r12
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r8
  ULONG64 v7; // rax
  __int128 v8; // xmm1
  __int64 v9; // xmm0_8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r12
  unsigned int v18; // r9d
  ADAPTER_RENDER *v19; // r10
  __int64 v20; // r11
  __int64 Value; // rcx
  void *v22; // r12
  void *v23; // rdi
  unsigned int v24; // r13d
  __int64 v25; // r9
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  ULONG64 v30; // rcx
  unsigned int v31; // r9d
  unsigned int v32; // r8d
  struct _D3DDDI_CREATECONTEXTFLAGS v33; // edx
  int v34; // r8d
  _DWORD *v35; // rdx
  ULONG64 v36; // rcx
  unsigned int v37; // r13d
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // rcx
  bool v44; // zf
  __int64 v45; // rax
  _QWORD *v46; // rax
  unsigned int v47; // edi
  __int64 v48; // r8
  struct DXGDEVICE *v49; // rcx
  _QWORD *v50; // rax
  struct DXGDEVICE *v51; // [rsp+50h] [rbp-118h] BYREF
  unsigned int v52; // [rsp+58h] [rbp-110h]
  unsigned int v53; // [rsp+5Ch] [rbp-10Ch]
  unsigned int v54; // [rsp+60h] [rbp-108h]
  DXGDEVICE *v55; // [rsp+68h] [rbp-100h]
  void *v56; // [rsp+70h] [rbp-F8h]
  struct DXGCONTEXT *v57; // [rsp+78h] [rbp-F0h] BYREF
  __int64 v58; // [rsp+80h] [rbp-E8h] BYREF
  int v59; // [rsp+88h] [rbp-E0h]
  unsigned int v60[4]; // [rsp+90h] [rbp-D8h]
  void *Src[2]; // [rsp+A0h] [rbp-C8h]
  __int64 v62; // [rsp+B0h] [rbp-B8h]
  unsigned int v63; // [rsp+B8h] [rbp-B0h]
  struct DXGDEVICE *v64; // [rsp+C0h] [rbp-A8h] BYREF
  int v65; // [rsp+C8h] [rbp-A0h]
  __int64 v66; // [rsp+D0h] [rbp-98h]
  DXGADAPTER *v67; // [rsp+D8h] [rbp-90h]
  _BYTE v68[136]; // [rsp+E0h] [rbp-88h] BYREF
  bool v70; // [rsp+178h] [rbp+10h]
  int v71; // [rsp+180h] [rbp+18h]
  struct _D3DDDI_CREATECONTEXTFLAGS v72; // [rsp+188h] [rbp+20h]

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2039);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v70 = v4;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v41 = WdLogNewEntry5_WdError(v5);
    v47 = -1073741811;
    *(_QWORD *)(v41 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v41);
    goto LABEL_62;
  }
  if ( v4 )
  {
    v7 = a1;
    if ( a1 >= MmUserProbeAddress )
      v7 = MmUserProbeAddress;
    *(_OWORD *)v60 = *(_OWORD *)v7;
    v8 = *(_OWORD *)(v7 + 16);
    v9 = *(_QWORD *)(v7 + 32);
  }
  else
  {
    *(_OWORD *)v60 = *(_OWORD *)a1;
    v8 = *(_OWORD *)(a1 + 16);
    v9 = *(_QWORD *)(a1 + 32);
  }
  v62 = v9;
  *(_OWORD *)Src = v8;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v51, v60[0], Current, &v64);
  v55 = v64;
  if ( !v64 )
  {
    v45 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v45 + 24) = v60[0];
    v47 = -1073741811;
    *(_QWORD *)(v45 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v45);
    goto LABEL_72;
  }
  v12 = *(_QWORD *)(*((_QWORD *)v64 + 2) + 16LL);
  v13 = 0LL;
  v14 = v60[2];
  v52 = v60[2];
  v15 = v60[2];
  while ( 1 )
  {
    v15 >>= 1;
    if ( !v15 )
      break;
    v13 = (unsigned int)(v13 + 1);
  }
  if ( (unsigned int)v13 >= *(_DWORD *)(v12 + 248) )
    goto LABEL_69;
  v16 = *(unsigned __int16 *)(*(_QWORD *)(v12 + 2216) + 48 * v13);
  v17 = v60[1];
  v53 = v60[1];
  if ( v60[1] >= (unsigned int)v16 )
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v10, v12);
    v46[3] = v17;
    goto LABEL_70;
  }
  if ( (unsigned int)GetBitCount(v60[2]) > 1 )
  {
LABEL_69:
    v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
    v46[3] = v14;
LABEL_70:
    v47 = -1073741811;
    v46[4] = -1073741811LL;
    goto LABEL_71;
  }
  Value = v60[3];
  v72.0 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v60[3];
  if ( (v60[3] & 8) == 0 )
  {
    if ( (*(_DWORD *)(v12 + 1700) & 0x20) == 0 || !ADAPTER_RENDER::NodeSupportsGpuVa(v19, v18, v17) )
    {
      v46 = (_QWORD *)WdLogNewEntry5_WdWarning(Value, v10, v12);
      v47 = -1073741811;
      v46[3] = -1073741811LL;
      v46[4] = 296LL;
      goto LABEL_71;
    }
    Value = v72.Value;
  }
  v54 = *(_DWORD *)(*((_QWORD *)v19 + 2) + 1528LL);
  v63 = v54;
  if ( v54 >= 0x7008 && (Value & 0xFFFFFFE0) != 0 )
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdWarning(Value, v10, v12);
    v47 = -1073741811;
    v46[3] = -1073741811LL;
    v46[4] = 306LL;
LABEL_71:
    WdLogEvent5_WdWarning(v46);
LABEL_72:
    if ( v51 )
    {
      v43 = _InterlockedExchangeAdd64((volatile signed __int64 *)v51 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v43 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v51 + 2), v51);
    }
    v44 = (qword_1C005F010 & 2) == 0;
    goto LABEL_64;
  }
  v22 = 0LL;
  v56 = 0LL;
  v23 = Src[0];
  v24 = (unsigned int)Src[1];
  if ( Src[0] )
  {
    if ( LODWORD(Src[1]) )
      goto LABEL_21;
LABEL_78:
    v46 = (_QWORD *)WdLogNewEntry5_WdWarning(Value, v10, v12);
    v46[3] = v23;
    v46[4] = v24;
    v47 = -1073741811;
    v46[5] = -1073741811LL;
    goto LABEL_71;
  }
  if ( LODWORD(Src[1]) )
    goto LABEL_78;
LABEL_21:
  v58 = v20;
  v59 = 0;
  DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v58);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v68, (__int64)v55, 0, v25, 0);
  v26 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v68);
  v71 = v26;
  if ( v26 >= 0 )
  {
    if ( v23 )
    {
      if ( v70 )
      {
        v57 = (struct DXGCONTEXT *)v24;
        v22 = operator new(v24, 0x4B677844u, PagedPool);
        v56 = v22;
        if ( v22 )
        {
          v30 = (ULONG64)v23 + v24;
          if ( v30 < (unsigned __int64)v23 || v30 > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v22, v23, v24);
          v26 = v71;
          v31 = v52;
          v32 = v53;
          v33.0 = v72.0;
          goto LABEL_29;
        }
        v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29);
        v50[3] = v55;
        v50[4] = v57;
        v47 = -1073741801;
        v50[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v50);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v68);
        if ( v58 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v58);
        if ( v51 && _InterlockedExchangeAdd64((volatile signed __int64 *)v51 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v51 + 2), v51);
LABEL_62:
        v43 = qword_1C005F010;
        v44 = (qword_1C005F010 & 2) == 0;
LABEL_64:
        if ( !v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v43, &EventProfilerExit, v42, 2039);
        return v47;
      }
      v22 = v23;
      v56 = v23;
    }
    v33.0 = v72.0;
    v32 = v53;
    v31 = v52;
LABEL_29:
    v57 = 0LL;
    if ( v26 < 0 || (v71 = DXGDEVICE::CreateContext(v55, &v57, v32, v31, v33, v22, v24, SHIDWORD(Src[1]), 1u), v71 < 0) )
    {
      v37 = v71;
    }
    else
    {
      v34 = *((_DWORD *)v57 + 6);
      v65 = v34;
      if ( v70 )
      {
        v35 = (_DWORD *)(a1 + 32);
        if ( a1 + 32 >= MmUserProbeAddress )
          v35 = (_DWORD *)MmUserProbeAddress;
        *v35 = v34;
        if ( v24 )
        {
          v66 = *((_QWORD *)v55 + 2);
          v67 = *(DXGADAPTER **)(v66 + 16);
          if ( DXGADAPTER::IsDxgmms2(v67) )
          {
            if ( v54 >= 0x7008 )
            {
              v36 = (ULONG64)v23 + v24;
              if ( v36 > MmUserProbeAddress || v36 <= (unsigned __int64)v23 )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v23, v22, v24);
            }
          }
        }
      }
      else
      {
        *(_DWORD *)(a1 + 32) = v34;
      }
      v37 = v71;
    }
    if ( v22 != v23 && v22 )
      ExFreePoolWithTag(v22, 0);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v68);
    v39 = v58;
    if ( v58 && v59 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v58 + 104));
      KeLeaveCriticalRegion();
    }
    if ( v51 )
    {
      v39 = _InterlockedExchangeAdd64((volatile signed __int64 *)v51 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v39 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v51 + 2), v51);
    }
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v39, &EventProfilerExit, v38, 2039);
    return v37;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v68);
  if ( v58 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v58);
  v49 = v51;
  if ( v51 && _InterlockedExchangeAdd64((volatile signed __int64 *)v51 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v51 + 2), v51);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)v49, &EventProfilerExit, v48, 2039);
  return (unsigned int)v71;
}
