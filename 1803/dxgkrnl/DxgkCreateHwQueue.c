/*
 * XREFs of DxgkCreateHwQueue @ 0x1C01A50E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0016BF4 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0016D0C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00D4248 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z @ 0x1C01A2424 (-AllocateElements@-$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z.c)
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C01A24A0 (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 */

__int64 __fastcall DxgkCreateHwQueue(__int64 a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_CREATEHWQUEUE *v3; // r12
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _D3DKMT_CREATEHWQUEUE *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  void *v17; // rcx
  size_t PrivateDriverDataSize; // r8
  void *pPrivateDriverData; // rdx
  char *v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v24; // rcx
  DXGCONTEXT *v25; // r15
  __int64 v26; // rax
  __int64 hHwContext; // rcx
  __int64 v28; // rcx
  __int64 v29; // r8
  struct DXGDEVICE *v30; // rbx
  __int64 v31; // r9
  int v32; // ebx
  __int64 v33; // rcx
  __int64 v34; // r8
  const void *v35; // rdx
  size_t v36; // r8
  void *v37; // rcx
  char *v38; // r10
  int v39; // [rsp+30h] [rbp-138h] BYREF
  __int64 v40; // [rsp+38h] [rbp-130h]
  struct _D3DKMT_CREATEHWQUEUE Size; // [rsp+40h] [rbp-128h] BYREF
  _QWORD v42[2]; // [rsp+70h] [rbp-F8h] BYREF
  struct DXGCONTEXT *v43; // [rsp+80h] [rbp-E8h] BYREF
  struct DXGHWQUEUE *v44; // [rsp+88h] [rbp-E0h] BYREF
  _BYTE v45[16]; // [rsp+90h] [rbp-D8h] BYREF
  struct _D3DKMT_CREATEHWQUEUE *p_Size; // [rsp+A0h] [rbp-C8h]
  __int64 v47; // [rsp+A8h] [rbp-C0h]
  void *v48; // [rsp+B0h] [rbp-B8h]
  void *v49; // [rsp+B8h] [rbp-B0h]
  _BYTE v50[96]; // [rsp+C0h] [rbp-A8h] BYREF
  void *v51[3]; // [rsp+120h] [rbp-48h] BYREF
  int v52; // [rsp+138h] [rbp-30h]

  v3 = (struct _D3DKMT_CREATEHWQUEUE *)a1;
  v47 = a1;
  v40 = 0LL;
  v39 = 2153;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2153);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v39, 2153);
  memset(&Size, 0, sizeof(Size));
  p_Size = 0LL;
  v51[0] = 0LL;
  v52 = 0;
  v6 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v6 = (struct _D3DKMT_CREATEHWQUEUE *)MmUserProbeAddress;
  Size = *v6;
  p_Size = &Size;
  if ( Size.pPrivateDriverData )
  {
    if ( Size.PrivateDriverDataSize )
      goto LABEL_14;
LABEL_10:
    v7 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v4, v5);
    *(_QWORD *)(v7 + 24) = 405LL;
    WdLogEvent5_WdWarning(v7);
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v51);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v8, &EventProfilerExit, v9, v39);
    return 3221225485LL;
  }
  if ( Size.PrivateDriverDataSize )
    goto LABEL_10;
LABEL_14:
  if ( !PagedPoolZeroedArray<unsigned char,16>::AllocateElements(v51, Size.PrivateDriverDataSize) )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
    v14[3] = Size.hHwContext;
    v14[4] = Size.PrivateDriverDataSize;
    v14[5] = -1073741801LL;
    WdLogEvent5_WdWarning(v14);
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v51);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v15, &EventProfilerExit, v16, v39);
    return 3221225495LL;
  }
  v17 = v51[0];
  v48 = v51[0];
  PrivateDriverDataSize = Size.PrivateDriverDataSize;
  pPrivateDriverData = Size.pPrivateDriverData;
  v20 = (char *)Size.pPrivateDriverData + Size.PrivateDriverDataSize;
  if ( v20 < Size.pPrivateDriverData || (unsigned __int64)v20 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v17, pPrivateDriverData, PrivateDriverDataSize);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v22, v21);
  v43 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v45, Size.hHwContext, Current, &v43, 0);
  v25 = v43;
  if ( !v43 )
  {
    v26 = WdLogNewEntry5_WdError(v24);
    hHwContext = Size.hHwContext;
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    goto LABEL_24;
  }
  if ( (*((_DWORD *)v43 + 91) & 0x10) == 0 )
  {
    v26 = WdLogNewEntry5_WdError(v24);
    hHwContext = Size.hHwContext;
LABEL_24:
    *(_QWORD *)(v26 + 24) = hHwContext;
    WdLogEvent5_WdError(v26);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v45);
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v51);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v28, &EventProfilerExit, v29, v39);
    return 3221225485LL;
  }
  v30 = (struct DXGDEVICE *)*((_QWORD *)v43 + 2);
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v42, v30);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v50, (__int64)v30, 0, v31, 0);
  v32 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v50);
  if ( v32 >= 0 )
  {
    v44 = 0LL;
    v32 = DXGCONTEXT::CreateHwQueue(v25, &Size, v51[0], &v44);
    if ( v32 >= 0 )
    {
      Size.hHwQueueProgressFence = *(_DWORD *)(*((_QWORD *)v44 + 6) + 40LL);
      Size.HwQueueProgressFenceCPUVirtualAddress = *(void **)(*((_QWORD *)v44 + 6) + 56LL);
      Size.HwQueueProgressFenceGPUVirtualAddress = *(_QWORD *)(*((_QWORD *)v44 + 6) + 48LL);
      Size.hHwQueue = *((_DWORD *)v44 + 6);
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (struct _D3DKMT_CREATEHWQUEUE *)MmUserProbeAddress;
      *v3 = Size;
      if ( Size.PrivateDriverDataSize )
      {
        v35 = v51[0];
        v49 = v51[0];
        v36 = Size.PrivateDriverDataSize;
        v37 = Size.pPrivateDriverData;
        v38 = (char *)Size.pPrivateDriverData + Size.PrivateDriverDataSize;
        if ( (unsigned __int64)v38 > MmUserProbeAddress || v38 <= Size.pPrivateDriverData )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v37, v35, v36);
      }
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
  if ( v42[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v42);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v45);
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v51);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v33, &EventProfilerExit, v34, v39);
  return (unsigned int)v32;
}
