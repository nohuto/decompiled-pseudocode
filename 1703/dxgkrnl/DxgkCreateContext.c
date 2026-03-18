/*
 * XREFs of DxgkCreateContext @ 0x1C01845C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00C116C (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetBitCount@@YAII@Z @ 0x1C00FD524 (-GetBitCount@@YAII@Z.c)
 */

__int64 __fastcall DxgkCreateContext(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v7; // rax
  unsigned int v8; // edi
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  _OWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGDEVICE *v17; // r13
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rdi
  _QWORD *v22; // rax
  int v23; // r8d
  struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F Value; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // r12d
  __int64 v38; // r8
  struct DXGDEVICE *v39; // rcx
  bool v40; // zf
  _QWORD *v41; // rdi
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  _QWORD *v47; // rax
  size_t v48; // r8
  __int64 v49; // r8
  int v50; // r9d
  int v51; // r10d
  int v52; // r11d
  _DWORD *v53; // rdx
  _QWORD *v54; // rdx
  _QWORD *v55; // rdx
  _QWORD *v56; // rdx
  _DWORD *v57; // rdx
  _QWORD *v58; // rdx
  _DWORD *v59; // rdx
  struct DXGDEVICE *v60; // [rsp+50h] [rbp-158h] BYREF
  _QWORD v61[2]; // [rsp+58h] [rbp-150h] BYREF
  size_t Size; // [rsp+68h] [rbp-140h]
  struct DXGDEVICE *v63; // [rsp+70h] [rbp-138h] BYREF
  _QWORD *v64; // [rsp+78h] [rbp-130h]
  struct DXGCONTEXT *v65; // [rsp+80h] [rbp-128h] BYREF
  struct _D3DDDI_CREATECONTEXTFLAGS v66[4]; // [rsp+90h] [rbp-118h]
  enum _D3DKMT_CLIENTHINT v67[4]; // [rsp+A0h] [rbp-108h]
  __int128 v68; // [rsp+B0h] [rbp-F8h]
  __int128 v69; // [rsp+C0h] [rbp-E8h]
  __int128 v70; // [rsp+D0h] [rbp-D8h]
  __int128 v71; // [rsp+E0h] [rbp-C8h]
  int v72; // [rsp+F0h] [rbp-B8h]
  __int64 v73; // [rsp+F8h] [rbp-B0h]
  __int64 v74; // [rsp+100h] [rbp-A8h]
  __int64 v75; // [rsp+108h] [rbp-A0h]
  __int64 v76; // [rsp+110h] [rbp-98h]
  _BYTE v77[136]; // [rsp+120h] [rbp-88h] BYREF
  unsigned int v79; // [rsp+1B8h] [rbp+10h]
  char *Src; // [rsp+1C8h] [rbp+20h]

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2039);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    v8 = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
LABEL_6:
    v10 = qword_1C006E790;
    v11 = (qword_1C006E790 & 2) == 0;
LABEL_7:
    if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v10, &EventProfilerExit, v9, 2039);
    return v8;
  }
  v13 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)&v66[0].0 = *v13;
  *(_OWORD *)v67 = v13[1];
  v68 = v13[2];
  v69 = v13[3];
  v70 = v13[4];
  v71 = v13[5];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v60, v66[0].Value, Current, &v63);
  v17 = v63;
  if ( !v63 )
  {
    v18 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v18 + 24) = v66[0].Value;
    v8 = -1073741811;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v18);
    goto LABEL_15;
  }
  v19 = *((_QWORD *)v63 + 2);
  v20 = *(unsigned int *)(*(_QWORD *)(v19 + 16) + 1672LL);
  if ( (v20 & 1) != 0 )
  {
    v23 = 0;
    Value = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v66[2].Value;
    while ( 1 )
    {
      Value = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)(*(unsigned int *)&Value >> 1);
      if ( !*(_DWORD *)&Value )
        break;
      ++v23;
    }
    if ( (unsigned int)GetBitCount(v66[2].Value) > 1
      || (v29 = *(_QWORD *)(v28 + 16), (unsigned int)v27 >= *(_DWORD *)(v29 + 248)) )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
      v22[3] = v66[2].Value;
    }
    else
    {
      v30 = *(unsigned __int16 *)(*(_QWORD *)(v29 + 2192) + 48 * v27);
      v31 = v66[1].Value;
      v79 = v66[1].Value;
      if ( v66[1].Value < (unsigned int)v30 )
        goto LABEL_32;
      v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v25, v27, v28);
      v22[3] = v31;
    }
    v8 = -1073741811;
    v22[4] = -1073741811LL;
    goto LABEL_22;
  }
  v21 = v66[1].Value;
  v79 = v66[1].Value;
  if ( *(_QWORD *)&v66[1].0 != __PAIR64__(v66[1].Value, 0) )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v14, v16, v19);
    v22[3] = v21;
    v22[4] = v66[2].Value;
    v8 = -1073741811;
    v22[5] = -1073741811LL;
LABEL_22:
    WdLogEvent5_WdWarning(v22);
LABEL_15:
    if ( v60 )
    {
      v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)v60 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v10 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v60 + 2), v60);
    }
    v11 = (qword_1C006E790 & 2) == 0;
    goto LABEL_7;
  }
LABEL_32:
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v61, v17);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v77, (__int64)v17, 0LL, v32, 0);
  v37 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v77);
  if ( v37 >= 0 )
  {
    v41 = 0LL;
    v64 = 0LL;
    Src = *(char **)v67;
    if ( *(_QWORD *)v67 )
    {
      if ( v67[2] )
      {
        Size = (unsigned int)v67[2];
        v41 = operator new((unsigned int)v67[2], 0x4B677844u, PagedPool);
        v64 = v41;
        if ( !v41 )
        {
          v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v43, v45, v46);
          v47[3] = v17;
          v47[4] = Size;
          v8 = -1073741801;
          v47[5] = -1073741801LL;
          WdLogEvent5_WdWarning(v47);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v77);
          if ( v61[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v61);
          if ( v60 && _InterlockedExchangeAdd64((volatile signed __int64 *)v60 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v60 + 2), v60);
          goto LABEL_6;
        }
        v48 = Size;
        if ( &Src[Size] < Src || (unsigned __int64)&Src[Size] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v41, Src, v48);
        v49 = v79;
        goto LABEL_60;
      }
    }
    else if ( v67[2] == D3DKMT_CLIENTHINT_UNKNOWN )
    {
      v49 = v79;
LABEL_60:
      v65 = 0LL;
      v37 = DXGDEVICE::CreateContext(v17, &v65, v49, v66[2].Value, v66[3], v41, v67[2], v67[3], 0);
      if ( v37 >= 0 )
      {
        v50 = *((_DWORD *)v65 + 6);
        v73 = *((_QWORD *)v65 + 7);
        v74 = *((_QWORD *)v65 + 6);
        v75 = *((_QWORD *)v65 + 11);
        v51 = *((_DWORD *)v65 + 18);
        v72 = v51;
        v76 = *((_QWORD *)v65 + 15);
        v52 = *((_DWORD *)v65 + 26);
        LODWORD(Size) = v52;
        v53 = (_DWORD *)(a1 + 32);
        if ( a1 + 32 >= MmUserProbeAddress )
          v53 = (_DWORD *)MmUserProbeAddress;
        *v53 = v50;
        v54 = (_QWORD *)(a1 + 40);
        if ( a1 + 40 >= MmUserProbeAddress )
          v54 = (_QWORD *)MmUserProbeAddress;
        *v54 = v73;
        v55 = (_QWORD *)(a1 + 48);
        if ( a1 + 48 >= MmUserProbeAddress )
          v55 = (_QWORD *)MmUserProbeAddress;
        *v55 = v74;
        v56 = (_QWORD *)(a1 + 56);
        if ( a1 + 56 >= MmUserProbeAddress )
          v56 = (_QWORD *)MmUserProbeAddress;
        *v56 = v75;
        v57 = (_DWORD *)(a1 + 64);
        if ( a1 + 64 >= MmUserProbeAddress )
          v57 = (_DWORD *)MmUserProbeAddress;
        *v57 = v51;
        v58 = (_QWORD *)(a1 + 72);
        if ( a1 + 72 >= MmUserProbeAddress )
          v58 = (_QWORD *)MmUserProbeAddress;
        *v58 = v76;
        v59 = (_DWORD *)(a1 + 80);
        if ( a1 + 80 >= MmUserProbeAddress )
          v59 = (_DWORD *)MmUserProbeAddress;
        *v59 = v52;
      }
      if ( v41 )
        ExFreePoolWithTag(v41, 0);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v77);
      if ( v61[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v61);
      if ( !v60 )
        goto LABEL_39;
      v39 = (struct DXGDEVICE *)_InterlockedExchangeAdd64((volatile signed __int64 *)v60 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      v40 = v39 == (struct DXGDEVICE *)1;
      goto LABEL_37;
    }
    v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
    v42[3] = Src;
    v42[4] = (unsigned int)v67[2];
    v8 = -1073741811;
    v42[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v42);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v77);
    if ( v61[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v61);
    goto LABEL_15;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v77);
  if ( v61[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v61);
  v39 = v60;
  if ( !v60 )
    goto LABEL_39;
  v40 = _InterlockedExchangeAdd64((volatile signed __int64 *)v60 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_37:
  if ( v40 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v60 + 2), v60);
LABEL_39:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v39, &EventProfilerExit, v38, 2039);
  return (unsigned int)v37;
}
