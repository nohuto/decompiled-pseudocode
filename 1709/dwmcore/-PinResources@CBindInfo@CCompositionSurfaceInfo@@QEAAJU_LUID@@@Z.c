/*
 * XREFs of ?PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x18017C81C
 * Callers:
 *     ?TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ @ 0x1801448F0 (-TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ.c)
 *     ?EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ @ 0x180149374 (-EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18001B0E8 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ??$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z @ 0x1800BE440 (--$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x @ 0x180126C58 (McTemplateU0x.c)
 *     ?PinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z @ 0x1801A8270 (-PinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z.c)
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
  DWORD v11; // r9d
  signed int D3DDevice; // eax
  __int64 i; // rbp
  unsigned int v15; // [rsp+20h] [rbp-28h]
  CD3DDeviceLevel1 *v16; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((unsigned int *)this + 14);
  v3 = 0LL;
  v4 = 0;
  v16 = 0LL;
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
        if ( !v9[74] )
        {
          v10 = (*(__int64 (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)v9 + 56LL))(
                  v9,
                  *((_QWORD *)this + 26) + 8LL * *((unsigned int *)this + 54),
                  0LL);
          v4 = v10;
          if ( v10 < 0 )
          {
            v15 = 1212;
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
            MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021AAC8, 2u, 0x80004005, 0x4C9u);
            goto LABEL_25;
          }
          D3DDevice = CD3DDeviceManager::GetD3DDevice(
                        (CD3DDeviceManager *)&g_D3DDeviceManager,
                        *(struct _LUID *)((char *)this + 128),
                        &v16);
          v4 = D3DDevice;
          if ( D3DDevice < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021AAC8, 2u, D3DDevice, 0x4CFu);
            v3 = v16;
            goto LABEL_24;
          }
          v3 = v16;
          v10 = CD3DDeviceLevel1::PinResources(v16, *((struct IDXGIResource ***)this + 26), *((_DWORD *)this + 54));
          v4 = v10;
          if ( v10 >= 0 )
          {
            *((_QWORD *)this + 25) = v3;
            v3 = 0LL;
            *((_BYTE *)this + 172) = 1;
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
              McTemplateU0x(
                &Microsoft_Windows_Dwm_Core_Provider_Context,
                &EVTDESC_ETWGUID_DIRECTFLIP_PINEVENT,
                *(unsigned int *)(*(_QWORD *)this + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)this + 40LL)) << 32));
            goto LABEL_24;
          }
          v15 = 1235;
LABEL_15:
          v11 = v10;
          goto LABEL_23;
        }
      }
    }
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021AAC8, 2u, 0x8007000E, 0x4ABu);
  }
  else
  {
    v4 = -2003292412;
    v15 = 1247;
    v11 = -2003292412;
LABEL_23:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021AAC8, 2u, v11, v15);
LABEL_24:
    if ( v4 >= 0 )
      goto LABEL_29;
  }
LABEL_25:
  if ( *((_QWORD *)this + 26) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 54); i = (unsigned int)(i + 1) )
      ReleaseInterfaceNoNULL<CManipulationManager>(*(_QWORD *)(*((_QWORD *)this + 26) + 8 * i));
    SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>((void **)this + 26);
    *((_DWORD *)this + 54) = 0;
  }
LABEL_29:
  if ( v3 )
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)v3 + 472));
  return (unsigned int)v4;
}
