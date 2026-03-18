/*
 * XREFs of ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00791B8
 * Callers:
 *     ?ForcePlanesOff@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0079424 (-ForcePlanesOff@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A632C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00ADA40 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C00143B8 (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     ??0DXGDISPLAYSTATEMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x1C00143D4 (--0DXGDISPLAYSTATEMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?VidSchSetVidPnSourceAddressWithMultiPlaneOverlay3@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3@@@Z @ 0x1C0020E68 (-VidSchSetVidPnSourceAddressWithMultiPlaneOverlay3@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAU_.c)
 *     McTemplateK0pqqxpxqqqddddddddddddqqtq @ 0x1C0021210 (McTemplateK0pqqxpxqqqddddddddddddqqtq.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C0079478 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00AB8E4 (-DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00ABDC0 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableMPOPlanes(ADAPTER_DISPLAY *this, unsigned int a2, char a3)
{
  char v3; // r12
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // r12
  bool v9; // r15
  DISPLAY_SOURCE *v10; // rcx
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // [rsp+38h] [rbp-128h]
  int v18; // [rsp+48h] [rbp-118h]
  int v19; // [rsp+50h] [rbp-110h]
  int v20; // [rsp+58h] [rbp-108h]
  _DWORD *v22; // [rsp+E8h] [rbp-78h] BYREF
  __int64 v23; // [rsp+F0h] [rbp-70h]
  __int64 v24; // [rsp+F8h] [rbp-68h]
  _BYTE v25[16]; // [rsp+100h] [rbp-60h] BYREF
  _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 v26; // [rsp+110h] [rbp-50h] BYREF
  _DWORD v27[32]; // [rsp+140h] [rbp-20h] BYREF

  v3 = a3;
  v5 = a2;
  v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 2312LL);
  if ( v6 )
  {
    v7 = a3 == 0;
    if ( v7 < *(_DWORD *)(*(_QWORD *)(v6 + 16) + 2176LL) )
    {
      v8 = 3760LL * a2;
      do
      {
        DXGDISPLAYSTATEMUTEX::DXGDISPLAYSTATEMUTEX((DXGDISPLAYSTATEMUTEX *)v25, this);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
        v9 = 0;
        v10 = (DISPLAY_SOURCE *)(v8 + *((_QWORD *)this + 14));
        if ( v7 < *((_DWORD *)v10 + 934) )
        {
          LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(v10, v7);
          if ( LatestPlaneConfigInternal )
            v9 = (*((_BYTE *)LatestPlaneConfigInternal + 8) & 3) != 0;
        }
        DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v25);
        if ( v9 )
        {
          memset(v27, 0, sizeof(v27));
          v22 = v27;
          v27[0] = v7;
          v23 = 0LL;
          v24 = 0LL;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0pqqxpxqqqddddddddddddqqtq(
              0LL,
              HIDWORD(v23),
              HIDWORD(v24),
              *((_QWORD *)this + 2),
              v5,
              v7,
              0,
              v17,
              0,
              v18,
              v19,
              v20,
              0,
              0,
              SBYTE4(v23),
              SBYTE4(v24),
              0,
              0,
              SBYTE4(v23),
              SBYTE4(v24),
              0,
              0,
              SBYTE4(v23),
              SBYTE4(v24));
          memset(&v26, 0, sizeof(v26));
          v26.VidPnSourceId = v5;
          v26.ppPlanes = (DXGK_MULTIPLANE_OVERLAY_PLANE3 **)&v22;
          v12 = *((_QWORD *)this + 2);
          v26.PlaneCount = 1;
          if ( (int)VIDSCH_EXPORT::VidSchSetVidPnSourceAddressWithMultiPlaneOverlay3(
                      *(VIDSCH_EXPORT **)(*(_QWORD *)(v12 + 2312) + 504LL),
                      *(struct _VIDSCH_GLOBAL **)(*(_QWORD *)(v12 + 2312) + 512LL),
                      &v26) < 0 )
          {
            v14 = (_QWORD *)WdLogNewEntry5_WdError(v13);
            v14[3] = v7;
            v14[4] = v5;
            v14[5] = *((_QWORD *)this + 2);
            WdLogEvent5_WdError(v14);
          }
        }
        ++v7;
      }
      while ( v7 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2312LL) + 16LL) + 2176LL) );
      v3 = a3;
    }
    if ( v3 )
    {
      ADAPTER_DISPLAY::DisableAllPlanesOnVidPnSourcesImmediate(this, 1 << v5);
    }
    else
    {
      v15 = *(_QWORD *)(3760 * v5 + *((_QWORD *)this + 14) + 688);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 1672);
        if ( v16 == *(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) )
          ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v16 + 2304), v5);
      }
    }
  }
}
