/*
 * XREFs of DxgkPresentMultiPlaneOverlay3 @ 0x1C01D3B60
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0003A8C (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0007858 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0008CE8 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0008DD0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C000E084 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C000E0EC (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?FlushQueue@DXGWORKQUEUE@@QEAAXXZ @ 0x1C000E8C4 (-FlushQueue@DXGWORKQUEUE@@QEAAXXZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C0014C68 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C00F071C (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B5610 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     _DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO @ 0x1C01CEF0C (_DxgkPresentMultiPlaneOverlay3_--_2_--_AUTO--__AUTO.c)
 *     ?CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAU2@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@PEAPEAUtagRECT@@PEAPEAI6PEAPEAEPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION@@@Z @ 0x1C01CF2A0 (-CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAP.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01D07FC (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 */

__int64 __fastcall DxgkPresentMultiPlaneOverlay3(struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  UINT PresentPlaneCount; // ebx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 ContextCount; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 HDRMetaDataType; // rbx
  D3DKMT_HANDLE *pContextList; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 *v28; // rbx
  _QWORD *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned int v35; // esi
  struct DXGCONTEXT **PoolWithTag; // rax
  struct DXGCONTEXT **v37; // r10
  __int64 v38; // rax
  __int64 v39; // r9
  int v40; // r8d
  struct DXGCONTEXT *v41; // rax
  struct DXGCONTEXT *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // r9
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // rcx
  const struct DXGDEVICE *v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  struct DXGPROCESS *v67; // rax
  __int64 v68; // rax
  _BYTE v70[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v71; // [rsp+58h] [rbp-A8h]
  char v72; // [rsp+60h] [rbp-A0h]
  struct DXGCONTEXT **v73; // [rsp+68h] [rbp-98h] BYREF
  char v74; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v75; // [rsp+90h] [rbp-70h]
  _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 v76; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v77[16]; // [rsp+F0h] [rbp-10h] BYREF
  struct _D3DKMT_MULTIPLANE_OVERLAY3 **v78[8]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v79[16]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v80[6]; // [rsp+150h] [rbp+50h] BYREF
  char v81; // [rsp+180h] [rbp+80h]
  DXGADAPTER *v82[12]; // [rsp+190h] [rbp+90h] BYREF
  struct DXGCONTEXT *v83; // [rsp+220h] [rbp+120h] BYREF

  memset(&v76, 0, sizeof(v76));
  Current = DXGPROCESS::GetCurrent(v3, v2);
  if ( a1 )
  {
    memset(v78, 0, sizeof(v78));
    v10 = CapturePresentMultiPlaneOverlayArgs3(
            a1,
            &v76,
            v78,
            (struct _D3DKMT_MULTIPLANE_OVERLAY3 **)&v78[1],
            (struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **)&v78[2],
            (struct tagRECT **)&v78[3],
            (unsigned int **)&v78[4],
            (unsigned int **)&v78[5],
            (unsigned __int8 **)&v78[6],
            (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION **)&v78[7]);
    v6 = v10;
    if ( v10 < 0 )
    {
      v12 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v12 + 24) = v6;
      *(_QWORD *)(v12 + 32) = PsGetCurrentProcess(v14, v13);
      v15 = v12;
LABEL_70:
      WdLogEvent5_WdError(v15);
      goto LABEL_71;
    }
    PresentPlaneCount = v76.PresentPlaneCount;
    if ( !v76.PresentPlaneCount )
    {
      v17 = WdLogNewEntry5_WdAssertion(v11);
      *(_QWORD *)(v17 + 24) = 2336LL;
      WdLogEvent5_WdAssertion(v17);
    }
    if ( PresentPlaneCount > 0xA )
    {
      v18 = WdLogNewEntry5_WdAssertion(v11);
      *(_QWORD *)(v18 + 24) = 2337LL;
      WdLogEvent5_WdAssertion(v18);
    }
    ContextCount = v76.ContextCount;
    if ( !v76.ContextCount )
    {
      v20 = WdLogNewEntry5_WdAssertion(v11);
      *(_QWORD *)(v20 + 24) = 2338LL;
      WdLogEvent5_WdAssertion(v20);
    }
    if ( (unsigned int)ContextCount > 0x40 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v11);
      *(_QWORD *)(v21 + 24) = 2339LL;
      WdLogEvent5_WdAssertion(v21);
    }
    if ( v76.VidPnSourceId >= 0x10 )
    {
      v22 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v22 + 24) = v76.VidPnSourceId;
LABEL_15:
      LODWORD(v6) = -1073741811;
      *(_QWORD *)(v22 + 32) = -1073741811LL;
LABEL_69:
      v15 = v22;
      goto LABEL_70;
    }
    HDRMetaDataType = v76.HDRMetaDataType;
    if ( v76.HDRMetaDataType )
    {
      if ( v76.HDRMetaDataType == D3DDDI_HDR_METADATA_TYPE_HDR10 )
      {
        HDRMetaDataType = v76.HDRMetaDataSize;
        if ( !v76.HDRMetaDataSize || v76.HDRMetaDataSize == 28 )
        {
          if ( v76.pHDRMetaData )
          {
            if ( v76.HDRMetaDataSize )
              goto LABEL_28;
          }
          else if ( !v76.HDRMetaDataSize )
          {
            goto LABEL_28;
          }
        }
      }
      v22 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v22 + 24) = HDRMetaDataType;
      goto LABEL_15;
    }
    if ( v76.HDRMetaDataSize || v76.pHDRMetaData )
    {
      v22 = WdLogNewEntry5_WdError(v11);
      LODWORD(v6) = -1073741811;
      *(_QWORD *)(v22 + 24) = -1073741811LL;
      goto LABEL_69;
    }
LABEL_28:
    pContextList = v76.pContextList;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v79, *v76.pContextList, Current, &v83, 0);
    v28 = (__int64 *)v83;
    if ( !v83 )
    {
      LODWORD(v6) = -1073741811;
      v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27);
      v29[3] = -1073741811LL;
      v29[4] = PsGetCurrentProcess(v31, v30);
      v29[5] = *pContextList;
      WdLogEvent5_WdWarning(v29);
LABEL_67:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v79);
LABEL_71:
      DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v78);
      return (unsigned int)v6;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v77,
      *((struct DXGDEVICE **)v83 + 2));
    v73 = 0LL;
    v35 = 1;
    v75 = 0;
    if ( (unsigned int)ContextCount <= 4 )
    {
      PoolWithTag = (struct DXGCONTEXT **)&v74;
    }
    else
    {
      v32 = 0xFFFFFFFFFFFFFFFFuLL % ContextCount;
      if ( 0xFFFFFFFFFFFFFFFFuLL / ContextCount < 8 )
        goto LABEL_65;
      PoolWithTag = (struct DXGCONTEXT **)ExAllocatePoolWithTag(PagedPool, 8 * ContextCount, 0x4B677844u);
    }
    v73 = PoolWithTag;
    v75 = ContextCount;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8 * ContextCount);
      *v73 = (struct DXGCONTEXT *)v28;
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v70, Current);
      if ( (unsigned int)ContextCount <= 1 )
      {
LABEL_47:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v70);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
          (__int64)v80,
          v73,
          v75);
        if ( v81 )
        {
          if ( v80[0] )
          {
            v48 = WdLogNewEntry5_WdWarning(v44, v43, v45);
            *(_QWORD *)(v48 + 24) = 2467LL;
            WdLogEvent5_WdWarning(v48);
            LODWORD(v6) = -1073741811;
          }
          else
          {
            v46 = WdLogNewEntry5_WdWarning(v44, v43, v45);
            *(_QWORD *)(v46 + 24) = 2462LL;
            WdLogEvent5_WdWarning(v46);
            LODWORD(v6) = -1073741801;
          }
        }
        else
        {
          v49 = v28[2];
          v72 = 0;
          v71 = *(_QWORD *)(*(_QWORD *)(v49 + 16) + 16LL);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v70);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v82, v28[2], 1, v50, 0);
          v51 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v82);
          v6 = v51;
          if ( v51 >= 0 )
          {
            v58 = (const struct DXGDEVICE *)v28[2];
            v59 = *((_QWORD *)v58 + 209);
            if ( v59 )
            {
              if ( *((_BYTE *)Current + 306)
                || ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v59 + 2304), v58, v76.VidPnSourceId) )
              {
                LODWORD(v6) = DXGCONTEXT::PresentMultiPlaneOverlay3(
                                (DXGCONTEXT *)v28,
                                &v76,
                                (struct COREDEVICEACCESS *)v82,
                                v73);
                if ( (_DWORD)v6 == -1071775482 )
                  DXGDEVICE::CloseInternalCddPrimaryHandle((DXGDEVICE *)v28[2], v82);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v82);
                DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v70);
                DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v80);
                PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v73);
                DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v77);
                v67 = DXGPROCESS::GetCurrent(v66, v65);
                DXGWORKQUEUE::FlushQueue((struct _LIST_ENTRY *)(*((_QWORD *)v67 + 8) + 88LL));
                goto LABEL_67;
              }
              LODWORD(v6) = -1073741790;
              v62 = WdLogNewEntry5_WdError(v61);
              *(_QWORD *)(v62 + 24) = -1073741790LL;
              *(_QWORD *)(v62 + 32) = PsGetCurrentProcess(v64, v63);
              v60 = v62;
            }
            else
            {
              LODWORD(v6) = -1073741811;
              v60 = WdLogNewEntry5_WdError(0LL);
              *(_QWORD *)(v60 + 24) = -1073741811LL;
            }
            WdLogEvent5_WdError(v60);
          }
          else
          {
            v55 = WdLogNewEntry5_WdWarning(v53, v52, v54);
            *(_QWORD *)(v55 + 24) = v6;
            *(_QWORD *)(v55 + 32) = PsGetCurrentProcess(v57, v56);
            WdLogEvent5_WdWarning(v55);
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v82);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v70);
        }
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v80);
      }
      else
      {
        v37 = v73;
        while ( 1 )
        {
          v38 = (pContextList[v35] >> 6) & 0xFFFFFF;
          if ( (unsigned int)v38 < *((_DWORD *)Current + 60)
            && (v39 = *((_QWORD *)Current + 28),
                v40 = *(_DWORD *)(v39 + 16 * v38 + 8),
                ((pContextList[v35] >> 25) & 0x60) == (*(_BYTE *)(v39 + 16 * v38 + 8) & 0x60))
            && (v40 & 0x2000) == 0
            && (v40 & 0x1F) != 0
            && (*(_BYTE *)(v39 + 16LL * (unsigned int)v38 + 8) & 0x1F) == 7 )
          {
            v41 = *(struct DXGCONTEXT **)(v39 + 16LL * (unsigned int)v38);
          }
          else
          {
            v41 = 0LL;
          }
          v37[v35] = v41;
          v37 = v73;
          v42 = v73[v35];
          if ( !v42 || *((_QWORD *)v42 + 2) != v28[2] )
            break;
          if ( ++v35 >= (unsigned int)ContextCount )
            goto LABEL_47;
        }
        v47 = (_QWORD *)WdLogNewEntry5_WdError(v42);
        LODWORD(v6) = -1073741811;
        v47[3] = v28;
        v47[4] = pContextList[v35];
        v47[5] = v35;
        v47[6] = -1073741811LL;
        WdLogEvent5_WdError(v47);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v70);
      }
      goto LABEL_66;
    }
LABEL_65:
    v68 = WdLogNewEntry5_WdWarning(v33, v32, v34);
    *(_QWORD *)(v68 + 24) = 2413LL;
    WdLogEvent5_WdWarning(v68);
    LODWORD(v6) = -1073741801;
LABEL_66:
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v73);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v77);
    goto LABEL_67;
  }
  LODWORD(v6) = -1073741811;
  v7 = WdLogNewEntry5_WdError(v4);
  *(_QWORD *)(v7 + 24) = -1073741811LL;
  *(_QWORD *)(v7 + 32) = PsGetCurrentProcess(v9, v8);
  WdLogEvent5_WdError(v7);
  return (unsigned int)v6;
}
