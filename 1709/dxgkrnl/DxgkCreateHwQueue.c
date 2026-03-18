/*
 * XREFs of DxgkCreateHwQueue @ 0x1C01AD050
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0008CE8 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0008DD0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C00E75F0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z @ 0x1C01AC90C (-AllocateElements@-$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z.c)
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C01AC97C (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 */

__int64 __fastcall DxgkCreateHwQueue(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // r12
  __int64 v4; // rdx
  __int64 v5; // r8
  _OWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // r8
  void *v16; // rcx
  size_t v17; // r8
  const void *v18; // rdx
  ULONG64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v23; // rcx
  DXGCONTEXT *v24; // r13
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  struct DXGDEVICE *v28; // rbx
  __int64 v29; // r9
  struct _D3DKMT_CREATEHWQUEUE *v30; // rdx
  int v31; // ebx
  void *v32; // r8
  __int64 v33; // rcx
  __int64 v34; // r8
  const void *v35; // rdx
  size_t v36; // r8
  void *v37; // rcx
  ULONG64 v38; // r10
  size_t Size[6]; // [rsp+30h] [rbp-128h] BYREF
  _QWORD v40[2]; // [rsp+60h] [rbp-F8h] BYREF
  struct DXGCONTEXT *v41; // [rsp+70h] [rbp-E8h] BYREF
  struct DXGHWQUEUE *v42; // [rsp+78h] [rbp-E0h] BYREF
  _BYTE v43[16]; // [rsp+80h] [rbp-D8h] BYREF
  size_t *v44; // [rsp+90h] [rbp-C8h]
  __int64 v45; // [rsp+98h] [rbp-C0h]
  void *v46; // [rsp+A0h] [rbp-B8h]
  void *v47; // [rsp+A8h] [rbp-B0h]
  _BYTE v48[96]; // [rsp+B0h] [rbp-A8h] BYREF
  void *v49[3]; // [rsp+110h] [rbp-48h] BYREF
  int v50; // [rsp+128h] [rbp-30h]

  v3 = (_OWORD *)a1;
  v45 = a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2153);
  memset(Size, 0, sizeof(Size));
  v44 = 0LL;
  v49[0] = 0LL;
  v50 = 0;
  v6 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v6 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Size = *v6;
  *(_OWORD *)&Size[2] = v6[1];
  *(_OWORD *)&Size[4] = v6[2];
  v44 = Size;
  if ( Size[2] )
  {
    if ( LODWORD(Size[1]) )
    {
LABEL_14:
      if ( PagedPoolZeroedArray<unsigned char,16>::AllocateElements(v49, Size[1]) )
      {
        v16 = v49[0];
        v46 = v49[0];
        v17 = LODWORD(Size[1]);
        v18 = (const void *)Size[2];
        v19 = Size[2] + LODWORD(Size[1]);
        if ( v19 < Size[2] || v19 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v16, v18, v17);
        Current = DXGPROCESS::GetCurrent(v21, v20);
        v41 = 0LL;
        DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v43, Size[0], Current, &v41, 0);
        v24 = v41;
        if ( v41 )
        {
          v28 = (struct DXGDEVICE *)*((_QWORD *)v41 + 2);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40, v28);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v48, (__int64)v28, 0, v29, 0);
          v31 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v48);
          if ( v31 >= 0 )
          {
            v42 = 0LL;
            v31 = DXGCONTEXT::CreateHwQueue(v24, v30, v32, &v42);
            if ( v31 >= 0 )
            {
              HIDWORD(Size[3]) = *(_DWORD *)(*((_QWORD *)v42 + 5) + 40LL);
              Size[4] = *(_QWORD *)(*((_QWORD *)v42 + 5) + 56LL);
              Size[5] = *(_QWORD *)(*((_QWORD *)v42 + 5) + 48LL);
              LODWORD(Size[3]) = *((_DWORD *)v42 + 6);
              if ( (unsigned __int64)v3 >= MmUserProbeAddress )
                v3 = (_OWORD *)MmUserProbeAddress;
              *v3 = *(_OWORD *)Size;
              v3[1] = *(_OWORD *)&Size[2];
              v3[2] = *(_OWORD *)&Size[4];
              v35 = v49[0];
              v47 = v49[0];
              v36 = LODWORD(Size[1]);
              v37 = (void *)Size[2];
              v38 = Size[2] + LODWORD(Size[1]);
              if ( v38 > MmUserProbeAddress || v38 <= Size[2] )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v37, v35, v36);
            }
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v48);
          if ( v40[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v43);
          PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v49);
          if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v33, &EventProfilerExit, v34, 2153);
          return (unsigned int)v31;
        }
        else
        {
          v25 = WdLogNewEntry5_WdError(v23);
          *(_QWORD *)(v25 + 24) = LODWORD(Size[0]);
          *(_QWORD *)(v25 + 32) = -1073741811LL;
          WdLogEvent5_WdError(v25);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v43);
          PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v49);
          if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v26, &EventProfilerExit, v27, 2153);
          return 3221225485LL;
        }
      }
      else
      {
        v14 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
        v14[3] = LODWORD(Size[0]);
        v14[4] = LODWORD(Size[1]);
        v14[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v14);
        PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v49);
        if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(qword_1C005F010, &EventProfilerExit, v15, 2153);
        return 3221225495LL;
      }
    }
  }
  else if ( !LODWORD(Size[1]) )
  {
    goto LABEL_14;
  }
  v7 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v4, v5);
  *(_QWORD *)(v7 + 24) = 335LL;
  WdLogEvent5_WdWarning(v7);
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v49);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v8, &EventProfilerExit, v9, 2153);
  return 3221225485LL;
}
