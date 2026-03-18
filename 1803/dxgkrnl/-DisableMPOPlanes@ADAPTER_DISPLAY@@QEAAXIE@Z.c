/*
 * XREFs of ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0153150
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8F5C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C010D5A4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?ForcePlanesOff@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0154430 (-ForcePlanesOff@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     McTemplateK0pqqxpxqqqddddddddddddqqtq @ 0x1C0028758 (McTemplateK0pqqxpxqqqddddddddddddqqtq.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E184C (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C010CA28 (-DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?IsPlaneEnabled@ADAPTER_DISPLAY@@QEAAEII@Z @ 0x1C0155E04 (-IsPlaneEnabled@ADAPTER_DISPLAY@@QEAAEII@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableMPOPlanes(ADAPTER_DISPLAY *this, unsigned int a2, char a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int i; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // [rsp+38h] [rbp-128h]
  int v15; // [rsp+48h] [rbp-118h]
  int v16; // [rsp+50h] [rbp-110h]
  int v17; // [rsp+58h] [rbp-108h]
  _DWORD *v18; // [rsp+E0h] [rbp-80h] BYREF
  __int64 v19; // [rsp+E8h] [rbp-78h]
  __int64 v20; // [rsp+F0h] [rbp-70h]
  _QWORD v21[7]; // [rsp+F8h] [rbp-68h] BYREF
  _DWORD v22[32]; // [rsp+130h] [rbp-30h] BYREF

  v4 = a2;
  v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 2464LL);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 16);
    for ( i = a3 == 0; i < *(_DWORD *)(v7 + 2312); ++i )
    {
      if ( ADAPTER_DISPLAY::IsPlaneEnabled(this, v4, i) )
      {
        memset(v22, 0, sizeof(v22));
        v18 = v22;
        v22[0] = i;
        v19 = 0LL;
        v20 = 0LL;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0pqqxpxqqqddddddddddddqqtq(
            0LL,
            HIDWORD(v19),
            HIDWORD(v20),
            *((_QWORD *)this + 2),
            v4,
            i,
            0,
            v14,
            0,
            v15,
            v16,
            v17,
            0,
            0,
            SBYTE4(v19),
            SBYTE4(v20),
            0,
            0,
            SBYTE4(v19),
            SBYTE4(v20),
            0,
            0,
            SBYTE4(v19),
            SBYTE4(v20));
        memset(v21, 0, 0x30uLL);
        LODWORD(v21[0]) = v4;
        v21[2] = &v18;
        v9 = *((_QWORD *)this + 2);
        HIDWORD(v21[1]) = 1;
        if ( (*(int (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 2464) + 520LL) + 8LL)
                                                     + 832LL))(
               *(_QWORD *)(*(_QWORD *)(v9 + 2464) + 528LL),
               v21) < 0 )
        {
          v11 = (_QWORD *)WdLogNewEntry5_WdError(v10);
          v11[3] = i;
          v11[4] = v4;
          v11[5] = *((_QWORD *)this + 2);
          WdLogEvent5_WdError(v11);
        }
      }
      v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2464LL) + 16LL);
    }
    if ( a3 )
    {
      ADAPTER_DISPLAY::DisableAllPlanesOnVidPnSourcesImmediate(this, 1 << v4);
    }
    else
    {
      v12 = *(_QWORD *)(3760 * v4 + *((_QWORD *)this + 14) + 688);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 1688);
        if ( v13 == *(_QWORD *)(*(_QWORD *)(v12 + 16) + 16LL) )
          ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v13 + 2456), v4);
      }
    }
  }
}
