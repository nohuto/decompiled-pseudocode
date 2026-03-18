/*
 * XREFs of DxgkCreateContext @ 0x1C01886A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetBitCount@@YAII@Z @ 0x1C0090CE4 (-GetBitCount@@YAII@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C0094048 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DxgkCreateContext(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v6; // rax
  unsigned int v7; // edi
  __int64 v8; // r8
  __int64 v9; // rcx
  bool v10; // zf
  _OWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGDEVICE *v16; // r13
  __int64 v17; // rax
  __int64 v18; // rdi
  _QWORD *v19; // rax
  int v20; // r8d
  struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F Value; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // r12d
  __int64 v33; // r8
  struct DXGDEVICE *v34; // rcx
  bool v35; // zf
  PVOID v36; // rdi
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  _QWORD *v41; // rax
  unsigned int v42; // r8d
  int v43; // r9d
  int v44; // r10d
  int v45; // r11d
  _DWORD *v46; // rdx
  _QWORD *v47; // rdx
  _QWORD *v48; // rdx
  _QWORD *v49; // rdx
  _DWORD *v50; // rdx
  _QWORD *v51; // rdx
  _DWORD *v52; // rdx
  struct DXGDEVICE *v53; // [rsp+50h] [rbp-148h] BYREF
  _QWORD v54[2]; // [rsp+58h] [rbp-140h] BYREF
  struct DXGDEVICE *v55; // [rsp+68h] [rbp-130h] BYREF
  PVOID v56; // [rsp+70h] [rbp-128h]
  struct DXGCONTEXT *v57; // [rsp+78h] [rbp-120h] BYREF
  struct _D3DDDI_CREATECONTEXTFLAGS v58[4]; // [rsp+80h] [rbp-118h]
  SIZE_T NumberOfBytes[2]; // [rsp+90h] [rbp-108h]
  __int128 v60; // [rsp+A0h] [rbp-F8h]
  __int128 v61; // [rsp+B0h] [rbp-E8h]
  __int128 v62; // [rsp+C0h] [rbp-D8h]
  __int128 v63; // [rsp+D0h] [rbp-C8h]
  int v64; // [rsp+E0h] [rbp-B8h]
  __int64 v65; // [rsp+E8h] [rbp-B0h]
  __int64 v66; // [rsp+F0h] [rbp-A8h]
  __int64 v67; // [rsp+F8h] [rbp-A0h]
  __int64 v68; // [rsp+100h] [rbp-98h]
  _BYTE v69[136]; // [rsp+110h] [rbp-88h] BYREF
  unsigned int v71; // [rsp+1A8h] [rbp+10h]
  char *Src; // [rsp+1B0h] [rbp+18h]
  size_t Size; // [rsp+1B8h] [rbp+20h]

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2039);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    v7 = -1073741811;
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
LABEL_6:
    v9 = qword_1C005F010;
    v10 = (qword_1C005F010 & 2) == 0;
LABEL_7:
    if ( !v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v9, &EventProfilerExit, v8, 2039);
    return v7;
  }
  v12 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v12 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)&v58[0].0 = *v12;
  *(_OWORD *)NumberOfBytes = v12[1];
  v60 = v12[2];
  v61 = v12[3];
  v62 = v12[4];
  v63 = v12[5];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v53, v58[0].Value, Current, &v55);
  v16 = v55;
  if ( !v55 )
  {
    v17 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v17 + 24) = v58[0].Value;
    v7 = -1073741811;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    goto LABEL_15;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v55 + 2) + 16LL) + 1696LL) & 1) != 0 )
  {
    v20 = 0;
    Value = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v58[2].Value;
    while ( 1 )
    {
      Value = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)(*(unsigned int *)&Value >> 1);
      if ( !*(_DWORD *)&Value )
        break;
      ++v20;
    }
    if ( (unsigned int)GetBitCount(v58[2].Value) > 1 || (unsigned int)v24 >= *(_DWORD *)(v25 + 248) )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
      v19[3] = v58[2].Value;
    }
    else
    {
      v26 = *(unsigned __int16 *)(*(_QWORD *)(v25 + 2216) + 48 * v24);
      v27 = v58[1].Value;
      v71 = v58[1].Value;
      if ( v58[1].Value < (unsigned int)v26 )
        goto LABEL_32;
      v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v22, v24);
      v19[3] = v27;
    }
    v7 = -1073741811;
    v19[4] = -1073741811LL;
    goto LABEL_22;
  }
  v18 = v58[1].Value;
  v71 = v58[1].Value;
  if ( *(_QWORD *)&v58[1].0 != __PAIR64__(v58[1].Value, 0) )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
    v19[3] = v18;
    v19[4] = v58[2].Value;
    v7 = -1073741811;
    v19[5] = -1073741811LL;
LABEL_22:
    WdLogEvent5_WdWarning(v19);
LABEL_15:
    if ( v53 )
    {
      v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v9 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v53 + 2), v53);
    }
    v10 = (qword_1C005F010 & 2) == 0;
    goto LABEL_7;
  }
LABEL_32:
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54, v16);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v69, (__int64)v16, 0, v28, 0);
  v32 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v69);
  if ( v32 >= 0 )
  {
    v36 = 0LL;
    v56 = 0LL;
    Src = (char *)NumberOfBytes[0];
    if ( NumberOfBytes[0] )
    {
      if ( LODWORD(NumberOfBytes[1]) )
      {
        Size = LODWORD(NumberOfBytes[1]);
        v36 = operator new(LODWORD(NumberOfBytes[1]), 0x4B677844u, PagedPool);
        v56 = v36;
        if ( !v36 )
        {
          v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v38, v40);
          v41[3] = v16;
          v41[4] = Size;
          v7 = -1073741801;
          v41[5] = -1073741801LL;
          WdLogEvent5_WdWarning(v41);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v69);
          if ( v54[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54);
          if ( v53 && _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v53 + 2), v53);
          goto LABEL_6;
        }
        if ( &Src[Size] < Src || (unsigned __int64)&Src[Size] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v36, Src, Size);
        v42 = v71;
        goto LABEL_60;
      }
    }
    else if ( !LODWORD(NumberOfBytes[1]) )
    {
      v42 = v71;
LABEL_60:
      v57 = 0LL;
      v32 = DXGDEVICE::CreateContext(
              v16,
              &v57,
              v42,
              v58[2].Value,
              v58[3],
              v36,
              NumberOfBytes[1],
              SHIDWORD(NumberOfBytes[1]),
              0);
      if ( v32 >= 0 )
      {
        v43 = *((_DWORD *)v57 + 6);
        v65 = *((_QWORD *)v57 + 7);
        v66 = *((_QWORD *)v57 + 6);
        v67 = *((_QWORD *)v57 + 11);
        v44 = *((_DWORD *)v57 + 18);
        v68 = *((_QWORD *)v57 + 15);
        v45 = *((_DWORD *)v57 + 26);
        v64 = v45;
        v46 = (_DWORD *)(a1 + 32);
        if ( a1 + 32 >= MmUserProbeAddress )
          v46 = (_DWORD *)MmUserProbeAddress;
        *v46 = v43;
        v47 = (_QWORD *)(a1 + 40);
        if ( a1 + 40 >= MmUserProbeAddress )
          v47 = (_QWORD *)MmUserProbeAddress;
        *v47 = v65;
        v48 = (_QWORD *)(a1 + 48);
        if ( a1 + 48 >= MmUserProbeAddress )
          v48 = (_QWORD *)MmUserProbeAddress;
        *v48 = v66;
        v49 = (_QWORD *)(a1 + 56);
        if ( a1 + 56 >= MmUserProbeAddress )
          v49 = (_QWORD *)MmUserProbeAddress;
        *v49 = v67;
        v50 = (_DWORD *)(a1 + 64);
        if ( a1 + 64 >= MmUserProbeAddress )
          v50 = (_DWORD *)MmUserProbeAddress;
        *v50 = v44;
        v51 = (_QWORD *)(a1 + 72);
        if ( a1 + 72 >= MmUserProbeAddress )
          v51 = (_QWORD *)MmUserProbeAddress;
        *v51 = v68;
        v52 = (_DWORD *)(a1 + 80);
        if ( a1 + 80 >= MmUserProbeAddress )
          v52 = (_DWORD *)MmUserProbeAddress;
        *v52 = v45;
      }
      if ( v36 )
        ExFreePoolWithTag(v36, 0);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v69);
      if ( v54[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54);
      if ( !v53 )
        goto LABEL_39;
      v34 = (struct DXGDEVICE *)_InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      v35 = v34 == (struct DXGDEVICE *)1;
      goto LABEL_37;
    }
    v37 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29, v31);
    v37[3] = Src;
    v37[4] = LODWORD(NumberOfBytes[1]);
    v7 = -1073741811;
    v37[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v37);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v69);
    if ( v54[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54);
    goto LABEL_15;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v69);
  if ( v54[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54);
  v34 = v53;
  if ( !v53 )
    goto LABEL_39;
  v35 = _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_37:
  if ( v35 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v53 + 2), v53);
LABEL_39:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)v34, &EventProfilerExit, v33, 2039);
  return (unsigned int)v32;
}
