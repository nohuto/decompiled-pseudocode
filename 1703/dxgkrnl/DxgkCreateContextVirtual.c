/*
 * XREFs of DxgkCreateContextVirtual @ 0x1C00FC280
 * Callers:
 *     ?VmBusCreateContextVirtual@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002C2B0 (-VmBusCreateContextVirtual@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C0005528 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0005D94 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D648 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00C116C (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetBitCount@@YAII@Z @ 0x1C00FD524 (-GetBitCount@@YAII@Z.c)
 */

__int64 __fastcall DxgkCreateContextVirtual(ULONG64 a1, __int64 a2, __int64 a3)
{
  bool v4; // r12
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **Current; // r8
  ULONG64 v9; // rax
  __int128 v10; // xmm1
  __int64 v11; // xmm0_8
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGDEVICE *v14; // r8
  __int64 v15; // r11
  __int64 v16; // r9
  __int64 v17; // rdi
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r12
  ADAPTER_RENDER *v21; // r10
  __int64 v22; // r11
  __int64 Value; // rcx
  _QWORD *v24; // r12
  _QWORD *v25; // rdi
  unsigned int v26; // r13d
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  ULONG64 v33; // rcx
  __int64 v34; // r9
  __int64 v35; // r8
  struct _D3DDDI_CREATECONTEXTFLAGS v36; // edx
  int v37; // r8d
  _DWORD *v38; // rdx
  ULONG64 v39; // rcx
  unsigned int v40; // r13d
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v44; // rax
  __int64 v45; // r8
  __int64 v46; // rcx
  bool v47; // zf
  __int64 v48; // rax
  _QWORD *v49; // rax
  unsigned int v50; // edi
  __int64 v51; // r8
  struct DXGDEVICE *v52; // rcx
  _QWORD *v53; // rax
  struct DXGDEVICE *v54; // [rsp+50h] [rbp-118h] BYREF
  unsigned int v55; // [rsp+58h] [rbp-110h]
  unsigned int v56; // [rsp+5Ch] [rbp-10Ch]
  DXGDEVICE *v57; // [rsp+60h] [rbp-108h]
  unsigned int v58; // [rsp+68h] [rbp-100h]
  _QWORD *v59; // [rsp+70h] [rbp-F8h]
  struct DXGCONTEXT *v60; // [rsp+78h] [rbp-F0h] BYREF
  struct DXGDEVICE *v61; // [rsp+80h] [rbp-E8h] BYREF
  int v62; // [rsp+88h] [rbp-E0h]
  unsigned int v63[4]; // [rsp+90h] [rbp-D8h]
  void *Src[2]; // [rsp+A0h] [rbp-C8h]
  __int64 v65; // [rsp+B0h] [rbp-B8h]
  unsigned int v66; // [rsp+B8h] [rbp-B0h]
  struct DXGDEVICE *v67; // [rsp+C0h] [rbp-A8h] BYREF
  int v68; // [rsp+C8h] [rbp-A0h]
  int v69; // [rsp+CCh] [rbp-9Ch]
  __int64 v70; // [rsp+D0h] [rbp-98h]
  DXGADAPTER *v71; // [rsp+D8h] [rbp-90h]
  _BYTE v72[136]; // [rsp+E0h] [rbp-88h] BYREF
  bool v74; // [rsp+178h] [rbp+10h]
  int v75; // [rsp+180h] [rbp+18h]
  struct _D3DDDI_CREATECONTEXTFLAGS v76; // [rsp+188h] [rbp+20h]

  v68 = 2039;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2039);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v74 = v4;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5);
  if ( !Current )
  {
    v44 = WdLogNewEntry5_WdError(v7, v6);
    v50 = -1073741811;
    *(_QWORD *)(v44 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v44);
    goto LABEL_62;
  }
  if ( v4 )
  {
    v9 = a1;
    if ( a1 >= MmUserProbeAddress )
      v9 = MmUserProbeAddress;
    *(_OWORD *)v63 = *(_OWORD *)v9;
    v10 = *(_OWORD *)(v9 + 16);
    v11 = *(_QWORD *)(v9 + 32);
  }
  else
  {
    *(_OWORD *)v63 = *(_OWORD *)a1;
    v10 = *(_OWORD *)(a1 + 16);
    v11 = *(_QWORD *)(a1 + 32);
  }
  v65 = v11;
  *(_OWORD *)Src = v10;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v54, v63[0], Current, &v67);
  v14 = v67;
  v57 = v67;
  if ( !v67 )
  {
    v48 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v48 + 24) = v63[0];
    v50 = -1073741811;
    *(_QWORD *)(v48 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v48);
    goto LABEL_72;
  }
  v15 = *(_QWORD *)(*((_QWORD *)v67 + 2) + 16LL);
  v16 = 0LL;
  v17 = v63[2];
  v55 = v63[2];
  v18 = v63[2];
  while ( 1 )
  {
    v18 >>= 1;
    if ( !v18 )
      break;
    v16 = (unsigned int)(v16 + 1);
  }
  if ( (unsigned int)v16 >= *(_DWORD *)(v15 + 248) )
    goto LABEL_69;
  v19 = *(unsigned __int16 *)(*(_QWORD *)(v15 + 2192) + 48 * v16);
  v20 = v63[1];
  v56 = v63[1];
  if ( v63[1] >= (unsigned int)v19 )
  {
    v49 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v12, v67, v16);
    v49[3] = v20;
    goto LABEL_70;
  }
  if ( GetBitCount(v63[2]) > 1 )
  {
LABEL_69:
    v49 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14, v16);
    v49[3] = v17;
LABEL_70:
    v50 = -1073741811;
    v49[4] = -1073741811LL;
    goto LABEL_71;
  }
  Value = v63[3];
  v76.0 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v63[3];
  if ( (v63[3] & 8) == 0 )
  {
    if ( (*(_DWORD *)(v22 + 1676) & 0x20) == 0 || !ADAPTER_RENDER::NodeSupportsGpuVa(v21, v16, v20) )
    {
      v49 = (_QWORD *)WdLogNewEntry5_WdWarning(Value, v12, v14, v16);
      v50 = -1073741811;
      v49[3] = -1073741811LL;
      v49[4] = 296LL;
      goto LABEL_71;
    }
    v14 = v57;
    Value = v76.Value;
  }
  v58 = *(_DWORD *)(v22 + 1504);
  v66 = v58;
  if ( v58 >= 0x7008 && (Value & 0xFFFFFFF0) != 0 )
  {
    v49 = (_QWORD *)WdLogNewEntry5_WdWarning(Value, v12, v14, v16);
    v50 = -1073741811;
    v49[3] = -1073741811LL;
    v49[4] = 306LL;
LABEL_71:
    WdLogEvent5_WdWarning(v49);
LABEL_72:
    if ( v54 )
    {
      v46 = _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v46 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v54 + 2), v54);
    }
    v47 = (qword_1C006E790 & 2) == 0;
    goto LABEL_64;
  }
  v24 = 0LL;
  v59 = 0LL;
  v25 = Src[0];
  v26 = (unsigned int)Src[1];
  if ( Src[0] )
  {
    if ( LODWORD(Src[1]) )
      goto LABEL_21;
LABEL_78:
    v49 = (_QWORD *)WdLogNewEntry5_WdWarning(Value, v12, v14, v16);
    v49[3] = v25;
    v49[4] = v26;
    v50 = -1073741811;
    v49[5] = -1073741811LL;
    goto LABEL_71;
  }
  if ( LODWORD(Src[1]) )
    goto LABEL_78;
LABEL_21:
  v61 = v14;
  v62 = 0;
  DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v61);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v72, (__int64)v57, 0LL, v27, 0);
  v28 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v72);
  v75 = v28;
  if ( v28 >= 0 )
  {
    if ( v25 )
    {
      if ( v74 )
      {
        v60 = (struct DXGCONTEXT *)v26;
        v24 = operator new(v26, 0x4B677844u, PagedPool);
        v59 = v24;
        if ( v24 )
        {
          v33 = (ULONG64)v25 + v26;
          if ( v33 < (unsigned __int64)v25 || v33 > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v24, v25, v26);
          v28 = v75;
          v34 = v55;
          v35 = v56;
          v36.0 = v76.0;
          goto LABEL_29;
        }
        v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29, v31, v32);
        v53[3] = v57;
        v53[4] = v60;
        v50 = -1073741801;
        v53[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v53);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v72);
        if ( v61 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v61);
        if ( v54 && _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v54 + 2), v54);
LABEL_62:
        v46 = qword_1C006E790;
        v47 = (qword_1C006E790 & 2) == 0;
LABEL_64:
        if ( !v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v46, &EventProfilerExit, v45, 2039);
        return v50;
      }
      v24 = v25;
      v59 = v25;
    }
    v36.0 = v76.0;
    v35 = v56;
    v34 = v55;
LABEL_29:
    v60 = 0LL;
    if ( v28 < 0 || (v75 = DXGDEVICE::CreateContext(v57, &v60, v35, v34, v36, v24, v26, SHIDWORD(Src[1]), 1), v75 < 0) )
    {
      v40 = v75;
    }
    else
    {
      v37 = *((_DWORD *)v60 + 6);
      v69 = v37;
      if ( v74 )
      {
        v38 = (_DWORD *)(a1 + 32);
        if ( a1 + 32 >= MmUserProbeAddress )
          v38 = (_DWORD *)MmUserProbeAddress;
        *v38 = v37;
        if ( v26 )
        {
          v70 = *((_QWORD *)v57 + 2);
          v71 = *(DXGADAPTER **)(v70 + 16);
          if ( DXGADAPTER::IsDxgmms2(v71) )
          {
            if ( v58 >= 0x7008 )
            {
              v39 = (ULONG64)v25 + v26;
              if ( v39 > MmUserProbeAddress || v39 <= (unsigned __int64)v25 )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v25, v24, v26);
            }
          }
        }
      }
      else
      {
        *(_DWORD *)(a1 + 32) = v37;
      }
      v40 = v75;
    }
    if ( v24 != v25 && v24 )
      ExFreePoolWithTag(v24, 0);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v72);
    v42 = (__int64)v61;
    if ( v61 && v62 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v61 + 13));
      KeLeaveCriticalRegion();
    }
    if ( v54 )
    {
      v42 = _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v42 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v54 + 2), v54);
    }
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v42, &EventProfilerExit, v41, 2039);
    return v40;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v72);
  if ( v61 )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v61);
  v52 = v54;
  if ( v54 && _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v54 + 2), v54);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v52, &EventProfilerExit, v51, 2039);
  return (unsigned int)v75;
}
