/*
 * XREFs of ?PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x1801757EC
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x1800712CC (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$.c)
 *     ?EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ @ 0x18015515C (-EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800431FC (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z @ 0x1800B51C4 (--$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_x @ 0x18013BE18 (Template_x.c)
 *     ?PinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z @ 0x1801973E0 (-PinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::PinResources(
        CCompositionSurfaceInfo::CBindInfo *this,
        struct _LUID a2)
{
  unsigned __int64 v2; // rbp
  CD3DDeviceLevel1 *v3; // rsi
  int v4; // edi
  LPVOID v6; // rax
  unsigned int v7; // r15d
  __int64 v8; // r14
  _DWORD *v9; // rcx
  int v10; // eax
  int v11; // r9d
  __int64 v12; // rax
  int D3DDevice; // eax
  __int64 i; // rbp
  unsigned int v16; // [rsp+20h] [rbp-28h]
  CD3DDeviceLevel1 *v17; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((unsigned int *)this + 14);
  v3 = 0LL;
  v4 = 0;
  v17 = 0LL;
  if ( (_DWORD)v2 && a2 == *((_QWORD *)this + 16) )
  {
    if ( *((_BYTE *)this + 172) )
      return (unsigned int)v4;
    v6 = operator new(saturated_mul(v2, 8uLL));
    *((_QWORD *)this + 26) = v6;
    if ( v6 )
    {
      *((_DWORD *)this + 54) = 0;
      v7 = 0;
      v8 = 0LL;
      while ( 1 )
      {
        v9 = *(_DWORD **)(v8 + *((_QWORD *)this + 4));
        if ( !v9[66] )
        {
          v10 = (*(__int64 (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)v9 + 72LL))(
                  v9,
                  *((_QWORD *)this + 26) + 8LL * *((unsigned int *)this + 54),
                  0LL);
          v4 = v10;
          if ( v10 < 0 )
          {
            v16 = 1204;
            goto LABEL_15;
          }
          if ( *(_QWORD *)(v8 + *((_QWORD *)this + 26)) )
            ++*((_DWORD *)this + 54);
        }
        ++v7;
        v8 += 8LL;
        if ( v7 >= (unsigned int)v2 )
        {
          if ( !*((_DWORD *)this + 54) )
          {
            v4 = -2147467259;
            MilInstrumentationCheckHR(0x14u, &dword_1801FCFB8, 2u, -2147467259, 0x4C1u);
            goto LABEL_25;
          }
          v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)this + 24LL) + 8LL))(*(_QWORD *)(*(_QWORD *)this + 24LL));
          D3DDevice = CD3DDeviceManager::GetD3DDevice(
                        (CD3DDeviceManager *)&g_D3DDeviceManager,
                        (struct _GUID *)(v12 + 324),
                        *(struct _LUID *)((char *)this + 128),
                        &v17);
          v4 = D3DDevice;
          if ( D3DDevice < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &dword_1801FCFB8, 2u, D3DDevice, 0x4C8u);
            v3 = v17;
            goto LABEL_24;
          }
          v3 = v17;
          v10 = CD3DDeviceLevel1::PinResources(v17, *((struct IDXGIResource ***)this + 26), *((_DWORD *)this + 54));
          v4 = v10;
          if ( v10 >= 0 )
          {
            *((_QWORD *)this + 25) = v3;
            v3 = 0LL;
            *((_BYTE *)this + 172) = 1;
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
              Template_x(
                *(unsigned int *)(*(_QWORD *)this + 40LL),
                &EVTDESC_ETWGUID_DIRECTFLIP_PINEVENT,
                *(unsigned int *)(*(_QWORD *)this + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)this + 40LL)) << 32));
            goto LABEL_24;
          }
          v16 = 1228;
LABEL_15:
          v11 = v10;
          goto LABEL_23;
        }
      }
    }
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, &dword_1801FCFB8, 2u, -2147024882, 0x4A3u);
  }
  else
  {
    v4 = -2003292412;
    v16 = 1240;
    v11 = -2003292412;
LABEL_23:
    MilInstrumentationCheckHR(0x14u, &dword_1801FCFB8, 2u, v11, v16);
LABEL_24:
    if ( v4 >= 0 )
      goto LABEL_29;
  }
LABEL_25:
  if ( *((_QWORD *)this + 26) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 54); i = (unsigned int)(i + 1) )
      ReleaseInterfaceNoNULL<CD2DPencil>(*(_QWORD *)(*((_QWORD *)this + 26) + 8 * i));
    SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>((void **)this + 26);
    *((_DWORD *)this + 54) = 0;
  }
LABEL_29:
  if ( v3 )
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)v3 + 488));
  return (unsigned int)v4;
}
