/*
 * XREFs of DxgkCreateContext @ 0x1C009C470
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?GetBitCount@@YAII@Z @ 0x1C00A2560 (-GetBitCount@@YAII@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00E84EC (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 */

__int64 __fastcall DxgkCreateContext(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct _KTHREAD **Current; // r8
  _OWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGDEVICE *v10; // r13
  int v11; // r8d
  struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F Value; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // r15d
  PVOID v25; // rdi
  char *v26; // r12
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned int v30; // r8d
  int v31; // r9d
  int v32; // r10d
  int v33; // r11d
  _DWORD *v34; // rdx
  _QWORD *v35; // rdx
  _QWORD *v36; // rdx
  _QWORD *v37; // rdx
  _DWORD *v38; // rdx
  _QWORD *v39; // rdx
  _DWORD *v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  struct DXGDEVICE *v51; // [rsp+50h] [rbp-158h] BYREF
  int v52; // [rsp+58h] [rbp-150h] BYREF
  __int64 v53; // [rsp+60h] [rbp-148h]
  _QWORD v54[2]; // [rsp+68h] [rbp-140h] BYREF
  struct DXGDEVICE *v55; // [rsp+78h] [rbp-130h] BYREF
  PVOID v56; // [rsp+80h] [rbp-128h]
  struct DXGCONTEXT *v57; // [rsp+88h] [rbp-120h] BYREF
  struct _D3DDDI_CREATECONTEXTFLAGS v58[4]; // [rsp+90h] [rbp-118h]
  void *Src[2]; // [rsp+A0h] [rbp-108h]
  __int128 v60; // [rsp+B0h] [rbp-F8h]
  __int128 v61; // [rsp+C0h] [rbp-E8h]
  __int128 v62; // [rsp+D0h] [rbp-D8h]
  __int128 v63; // [rsp+E0h] [rbp-C8h]
  int v64; // [rsp+F0h] [rbp-B8h]
  __int64 v65; // [rsp+F8h] [rbp-B0h]
  __int64 v66; // [rsp+100h] [rbp-A8h]
  __int64 v67; // [rsp+108h] [rbp-A0h]
  __int64 v68; // [rsp+110h] [rbp-98h]
  _BYTE v69[136]; // [rsp+120h] [rbp-88h] BYREF
  struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F v71; // [rsp+1B8h] [rbp+10h]
  size_t Size; // [rsp+1C0h] [rbp+18h]

  v53 = 0LL;
  v52 = 2039;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2039);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v52, 2039);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v6 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v6 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)&v58[0].0 = *v6;
    *(_OWORD *)Src = v6[1];
    v60 = v6[2];
    v61 = v6[3];
    v62 = v6[4];
    v63 = v6[5];
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v51, v58[0].Value, Current, &v55);
    v10 = v55;
    if ( v55 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v55 + 2) + 16LL) + 1832LL) & 1) != 0 )
      {
        v11 = 0;
        Value = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v58[2].Value;
        while ( 1 )
        {
          Value = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)(*(unsigned int *)&Value >> 1);
          if ( !*(_DWORD *)&Value )
            break;
          ++v11;
        }
        if ( GetBitCount(v58[2].Value) > 1 || (unsigned int)v15 >= *(_DWORD *)(v16 + 248) )
        {
          v49 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
          v49[3] = v58[2].Value;
        }
        else
        {
          v17 = 352LL * (unsigned int)v15;
          v18 = *(unsigned __int16 *)(v17 + *(_QWORD *)(v16 + 2360));
          v19 = v58[1].Value;
          v71 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v58[1].Value;
          if ( v58[1].Value < (unsigned int)v18 )
            goto LABEL_12;
          v49 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v18, v15);
          v49[3] = v19;
        }
        LODWORD(v45) = -1073741811;
        v49[4] = -1073741811LL;
      }
      else
      {
        v45 = v58[1].Value;
        v71 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v58[1].Value;
        if ( *(_QWORD *)&v58[1].0 == __PAIR64__(v58[1].Value, 0) )
        {
LABEL_12:
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54, v10);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v69, (__int64)v10, 0, v20, 0);
          v24 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v69);
          if ( v24 < 0 )
          {
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v69);
            if ( v54[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54);
            if ( !v51 )
              goto LABEL_41;
LABEL_39:
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v51 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v51 + 2), v51);
LABEL_41:
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
            if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v41, &EventProfilerExit, v42, v52);
            return (unsigned int)v24;
          }
          v25 = 0LL;
          v56 = 0LL;
          v26 = (char *)Src[0];
          if ( Src[0] )
          {
            if ( LODWORD(Src[1]) )
            {
              Size = LODWORD(Src[1]);
              v25 = operator new[](LODWORD(Src[1]), 0x4B677844u, PagedPool);
              v56 = v25;
              if ( v25 )
              {
                if ( &v26[Size] < v26 || (unsigned __int64)&v26[Size] > MmUserProbeAddress )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v25, v26, Size);
                v30 = (unsigned int)v71;
LABEL_20:
                v57 = 0LL;
                v24 = DXGDEVICE::CreateContext(
                        v10,
                        &v57,
                        v30,
                        v58[2].Value,
                        v58[3],
                        v25,
                        (unsigned int)Src[1],
                        SHIDWORD(Src[1]),
                        0);
                if ( v24 >= 0 )
                {
                  v31 = *((_DWORD *)v57 + 6);
                  v65 = *((_QWORD *)v57 + 7);
                  v66 = *((_QWORD *)v57 + 6);
                  v67 = *((_QWORD *)v57 + 11);
                  v32 = *((_DWORD *)v57 + 18);
                  v68 = *((_QWORD *)v57 + 15);
                  v33 = *((_DWORD *)v57 + 26);
                  v64 = v33;
                  v34 = (_DWORD *)(a1 + 32);
                  if ( a1 + 32 >= MmUserProbeAddress )
                    v34 = (_DWORD *)MmUserProbeAddress;
                  *v34 = v31;
                  v35 = (_QWORD *)(a1 + 40);
                  if ( a1 + 40 >= MmUserProbeAddress )
                    v35 = (_QWORD *)MmUserProbeAddress;
                  *v35 = v65;
                  v36 = (_QWORD *)(a1 + 48);
                  if ( a1 + 48 >= MmUserProbeAddress )
                    v36 = (_QWORD *)MmUserProbeAddress;
                  *v36 = v66;
                  v37 = (_QWORD *)(a1 + 56);
                  if ( a1 + 56 >= MmUserProbeAddress )
                    v37 = (_QWORD *)MmUserProbeAddress;
                  *v37 = v67;
                  v38 = (_DWORD *)(a1 + 64);
                  if ( a1 + 64 >= MmUserProbeAddress )
                    v38 = (_DWORD *)MmUserProbeAddress;
                  *v38 = v32;
                  v39 = (_QWORD *)(a1 + 72);
                  if ( a1 + 72 >= MmUserProbeAddress )
                    v39 = (_QWORD *)MmUserProbeAddress;
                  *v39 = v68;
                  v40 = (_DWORD *)(a1 + 80);
                  if ( a1 + 80 >= MmUserProbeAddress )
                    v40 = (_DWORD *)MmUserProbeAddress;
                  *v40 = v33;
                }
                operator delete[](v25);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v69);
                if ( v54[0] )
                  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54);
                if ( !v51 )
                  goto LABEL_41;
                goto LABEL_39;
              }
              v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29);
              v50[3] = v10;
              v50[4] = Size;
              v45 = -1073741801LL;
              goto LABEL_71;
            }
          }
          else if ( !LODWORD(Src[1]) )
          {
            v30 = (unsigned int)v71;
            goto LABEL_20;
          }
          v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23);
          v50[3] = v26;
          v50[4] = LODWORD(Src[1]);
          v45 = -1073741811LL;
LABEL_71:
          v50[5] = v45;
          WdLogEvent5_WdWarning(v50);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v69);
          if ( v54[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v54);
          goto LABEL_51;
        }
        v49 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9);
        v49[3] = v45;
        v49[4] = v58[2].Value;
        LODWORD(v45) = -1073741811;
        v49[5] = -1073741811LL;
      }
      WdLogEvent5_WdWarning(v49);
    }
    else
    {
      v48 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v48 + 24) = v58[0].Value;
      LODWORD(v45) = -1073741811;
      *(_QWORD *)(v48 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v48);
    }
LABEL_51:
    if ( v51 && _InterlockedExchangeAdd64((volatile signed __int64 *)v51 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v51 + 2), v51);
    goto LABEL_46;
  }
  v44 = WdLogNewEntry5_WdError(v4);
  LODWORD(v45) = -1073741811;
  *(_QWORD *)(v44 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v44);
LABEL_46:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v46, &EventProfilerExit, v47, v52);
  return (unsigned int)v45;
}
