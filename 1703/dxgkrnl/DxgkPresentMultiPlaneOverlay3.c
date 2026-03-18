/*
 * XREFs of DxgkPresentMultiPlaneOverlay3 @ 0x1C01BB650
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001008 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?FlushQueue@DXGWORKQUEUE@@QEAAXXZ @ 0x1C00025FC (-FlushQueue@DXGWORKQUEUE@@QEAAXXZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0002754 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0004CAC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004D98 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000755C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000B6D4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C000D728 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C000D7C4 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C008AC88 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C019ECA4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     _DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO @ 0x1C01B6E54 (_DxgkPresentMultiPlaneOverlay3_--_2_--_AUTO--__AUTO.c)
 *     ?CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAU2@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@PEAPEAUtagRECT@@PEAPEAI6PEAPEAEPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION@@@Z @ 0x1C01B7210 (-CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAP.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01B880C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 */

__int64 __fastcall DxgkPresentMultiPlaneOverlay3(struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  UINT PresentPlaneCount; // ebx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 ContextCount; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 HDRMetaDataType; // rbx
  D3DKMT_HANDLE *pContextList; // r14
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 *v30; // rbx
  _QWORD *v31; // rbx
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned int v37; // esi
  struct DXGCONTEXT **PoolWithTag; // rax
  __int64 v39; // r8
  __int64 v40; // r9
  struct DXGCONTEXT **v41; // r11
  __int64 v42; // rdx
  unsigned int v43; // ecx
  __int64 v44; // r9
  int v45; // r8d
  struct DXGCONTEXT *v46; // rax
  struct DXGCONTEXT *v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r9
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rbx
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rbx
  __int64 v68; // rcx
  __int64 v69; // rcx
  struct DXGPROCESS *v70; // rax
  __int64 v71; // rax
  _QWORD v73[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v74; // [rsp+68h] [rbp-A0h]
  struct DXGCONTEXT **v75; // [rsp+70h] [rbp-98h] BYREF
  char v76; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v77; // [rsp+98h] [rbp-70h]
  _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 v78; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v79[16]; // [rsp+F8h] [rbp-10h] BYREF
  struct _D3DKMT_MULTIPLANE_OVERLAY3 **v80[8]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v81[16]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v82[6]; // [rsp+158h] [rbp+50h] BYREF
  char v83; // [rsp+188h] [rbp+80h]
  PERESOURCE *v84[12]; // [rsp+198h] [rbp+90h] BYREF
  struct DXGCONTEXT *v85; // [rsp+218h] [rbp+110h] BYREF

  memset(&v78, 0, sizeof(v78));
  Current = DXGPROCESS::GetCurrent(v2);
  if ( a1 )
  {
    memset(v80, 0, sizeof(v80));
    v9 = CapturePresentMultiPlaneOverlayArgs3(
           a1,
           &v78,
           v80,
           (struct _D3DKMT_MULTIPLANE_OVERLAY3 **)&v80[1],
           (struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **)&v80[2],
           (struct tagRECT **)&v80[3],
           (unsigned int **)&v80[4],
           (unsigned int **)&v80[5],
           (unsigned __int8 **)&v80[6],
           (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION **)&v80[7]);
    v6 = v9;
    if ( v9 < 0 )
    {
      v14 = WdLogNewEntry5_WdError(v11, v10);
      *(_QWORD *)(v14 + 24) = v6;
      *(_QWORD *)(v14 + 32) = PsGetCurrentProcess(v15);
      v16 = v14;
LABEL_70:
      WdLogEvent5_WdError(v16);
      goto LABEL_71;
    }
    PresentPlaneCount = v78.PresentPlaneCount;
    if ( !v78.PresentPlaneCount )
    {
      v18 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
      *(_QWORD *)(v18 + 24) = 2164LL;
      WdLogEvent5_WdAssertion(v18);
    }
    if ( PresentPlaneCount > 8 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
      *(_QWORD *)(v19 + 24) = 2165LL;
      WdLogEvent5_WdAssertion(v19);
    }
    ContextCount = v78.ContextCount;
    if ( !v78.ContextCount )
    {
      v21 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
      *(_QWORD *)(v21 + 24) = 2166LL;
      WdLogEvent5_WdAssertion(v21);
    }
    if ( (unsigned int)ContextCount > 0x40 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
      *(_QWORD *)(v22 + 24) = 2167LL;
      WdLogEvent5_WdAssertion(v22);
    }
    if ( v78.VidPnSourceId >= 0x10 )
    {
      v23 = WdLogNewEntry5_WdError(v11, v10);
      *(_QWORD *)(v23 + 24) = v78.VidPnSourceId;
LABEL_15:
      LODWORD(v6) = -1073741811;
      *(_QWORD *)(v23 + 32) = -1073741811LL;
LABEL_69:
      v16 = v23;
      goto LABEL_70;
    }
    HDRMetaDataType = v78.HDRMetaDataType;
    if ( v78.HDRMetaDataType )
    {
      if ( v78.HDRMetaDataType == D3DDDI_HDR_METADATA_TYPE_HDR10 )
      {
        HDRMetaDataType = v78.HDRMetaDataSize;
        if ( !v78.HDRMetaDataSize || v78.HDRMetaDataSize == 28 )
        {
          if ( v78.pHDRMetaData )
          {
            if ( v78.HDRMetaDataSize )
              goto LABEL_28;
          }
          else if ( !v78.HDRMetaDataSize )
          {
            goto LABEL_28;
          }
        }
      }
      v23 = WdLogNewEntry5_WdError(v11, v10);
      *(_QWORD *)(v23 + 24) = HDRMetaDataType;
      goto LABEL_15;
    }
    if ( v78.HDRMetaDataSize || v78.pHDRMetaData )
    {
      v23 = WdLogNewEntry5_WdError(v11, v10);
      LODWORD(v6) = -1073741811;
      *(_QWORD *)(v23 + 24) = -1073741811LL;
      goto LABEL_69;
    }
LABEL_28:
    pContextList = v78.pContextList;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v81, *v78.pContextList, Current, &v85, 0);
    v30 = (__int64 *)v85;
    if ( !v85 )
    {
      LODWORD(v6) = -1073741811;
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
      v31[3] = -1073741811LL;
      v31[4] = PsGetCurrentProcess(v32);
      v31[5] = *pContextList;
      WdLogEvent5_WdWarning(v31);
LABEL_67:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v81);
LABEL_71:
      DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v80);
      return (unsigned int)v6;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v79,
      *((struct DXGDEVICE **)v85 + 2));
    v75 = 0LL;
    v37 = 1;
    v77 = 0;
    if ( (unsigned int)ContextCount <= 4 )
    {
      PoolWithTag = (struct DXGCONTEXT **)&v76;
    }
    else
    {
      v33 = 0xFFFFFFFFFFFFFFFFuLL % ContextCount;
      if ( 0xFFFFFFFFFFFFFFFFuLL / ContextCount < 8 )
        goto LABEL_65;
      PoolWithTag = (struct DXGCONTEXT **)ExAllocatePoolWithTag(PagedPool, 8 * ContextCount, 0x4B677844u);
    }
    v75 = PoolWithTag;
    v77 = ContextCount;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8 * ContextCount);
      *v75 = (struct DXGCONTEXT *)v30;
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v73, Current, v39, v40);
      if ( (unsigned int)ContextCount <= 1 )
      {
LABEL_47:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v73);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
          (__int64)v82,
          v75,
          v77);
        if ( v83 )
        {
          if ( v82[0] )
          {
            v54 = WdLogNewEntry5_WdWarning(v49, v48, v50, v51);
            *(_QWORD *)(v54 + 24) = 2295LL;
            WdLogEvent5_WdWarning(v54);
            LODWORD(v6) = -1073741811;
          }
          else
          {
            v52 = WdLogNewEntry5_WdWarning(v49, v48, v50, v51);
            *(_QWORD *)(v52 + 24) = 2290LL;
            WdLogEvent5_WdWarning(v52);
            LODWORD(v6) = -1073741801;
          }
        }
        else
        {
          v55 = v30[2];
          LOBYTE(v74) = 0;
          v73[1] = *(_QWORD *)(*(_QWORD *)(v55 + 16) + 16LL);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v73);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v84, v30[2], 1LL, v56, 0);
          v57 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v84);
          v6 = v57;
          if ( v57 >= 0 )
          {
            if ( *(_QWORD *)(v30[2] + 1800) )
            {
              if ( (*(unsigned int (**)(void))(*((_QWORD *)Current + 9) + 216LL))()
                || ADAPTER_DISPLAY::IsVidPnSourceOwner(
                     *(DXGADAPTER ***)(*(_QWORD *)(v30[2] + 1800) + 2280LL),
                     (const struct DXGDEVICE *)v30[2],
                     v78.VidPnSourceId) )
              {
                LODWORD(v6) = DXGCONTEXT::PresentMultiPlaneOverlay3(
                                (DXGCONTEXT *)v30,
                                &v78,
                                (struct COREDEVICEACCESS *)v84,
                                v75);
                if ( (_DWORD)v6 == -1071775482 )
                  DXGDEVICE::CloseInternalCddPrimaryHandle((DXGDEVICE *)v30[2], v84);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v84);
                DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v73);
                DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v82);
                PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v75);
                DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v79);
                v70 = DXGPROCESS::GetCurrent(v69);
                DXGWORKQUEUE::FlushQueue((struct _LIST_ENTRY *)(*((_QWORD *)v70 + 8) + 88LL));
                goto LABEL_67;
              }
              LODWORD(v6) = -1073741790;
              v67 = WdLogNewEntry5_WdError(v66, v65);
              *(_QWORD *)(v67 + 24) = -1073741790LL;
              *(_QWORD *)(v67 + 32) = PsGetCurrentProcess(v68);
              v64 = v67;
            }
            else
            {
              LODWORD(v6) = -1073741811;
              v64 = WdLogNewEntry5_WdError(v59, v58);
              *(_QWORD *)(v64 + 24) = -1073741811LL;
            }
            WdLogEvent5_WdError(v64);
          }
          else
          {
            v62 = WdLogNewEntry5_WdWarning(v59, v58, v60, v61);
            *(_QWORD *)(v62 + 24) = v6;
            *(_QWORD *)(v62 + 32) = PsGetCurrentProcess(v63);
            WdLogEvent5_WdWarning(v62);
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v84);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v73);
        }
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v82);
      }
      else
      {
        v41 = v75;
        while ( 1 )
        {
          v42 = pContextList[v37];
          v43 = (pContextList[v37] >> 6) & 0xFFFFFF;
          if ( v43 < *((_DWORD *)Current + 52)
            && (v44 = *((_QWORD *)Current + 24),
                v42 = ((unsigned int)v42 >> 26) & 0x30,
                v45 = *(_DWORD *)(v44 + 16LL * v43 + 8),
                (_BYTE)v42 == (*(_BYTE *)(v44 + 16LL * v43 + 8) & 0x30))
            && (v45 & 0x1000) == 0
            && (v45 & 0xF) != 0
            && (v42 = 2LL * v43, (*(_BYTE *)(v44 + 16LL * v43 + 8) & 0xF) == 7) )
          {
            v46 = *(struct DXGCONTEXT **)(v44 + 16LL * v43);
          }
          else
          {
            v46 = 0LL;
          }
          v41[v37] = v46;
          v41 = v75;
          v47 = v75[v37];
          if ( !v47 || *((_QWORD *)v47 + 2) != v30[2] )
            break;
          if ( ++v37 >= (unsigned int)ContextCount )
            goto LABEL_47;
        }
        v53 = (_QWORD *)WdLogNewEntry5_WdError(v47, v42);
        LODWORD(v6) = -1073741811;
        v53[3] = v30;
        v53[4] = pContextList[v37];
        v53[5] = v37;
        v53[6] = -1073741811LL;
        WdLogEvent5_WdError(v53);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v73);
      }
      goto LABEL_66;
    }
LABEL_65:
    v71 = WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
    *(_QWORD *)(v71 + 24) = 2241LL;
    WdLogEvent5_WdWarning(v71);
    LODWORD(v6) = -1073741801;
LABEL_66:
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v75);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v79);
    goto LABEL_67;
  }
  LODWORD(v6) = -1073741811;
  v7 = WdLogNewEntry5_WdError(v4, v3);
  *(_QWORD *)(v7 + 24) = -1073741811LL;
  *(_QWORD *)(v7 + 32) = PsGetCurrentProcess(v8);
  WdLogEvent5_WdError(v7);
  return (unsigned int)v6;
}
