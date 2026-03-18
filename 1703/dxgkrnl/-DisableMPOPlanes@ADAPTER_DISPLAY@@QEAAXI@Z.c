/*
 * XREFs of ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0170A54
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E2528 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00E8438 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E6770 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?IsPlaneEnabled@ADAPTER_DISPLAY@@QEAAEII@Z @ 0x1C0171DEC (-IsPlaneEnabled@ADAPTER_DISPLAY@@QEAAEII@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableMPOPlanes(ADAPTER_DISPLAY *this, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  _DWORD *v14; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD v15[7]; // [rsp+28h] [rbp-D0h] BYREF
  _DWORD v16[32]; // [rsp+60h] [rbp-98h] BYREF

  v5 = a2;
  v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 2288LL);
  if ( v6 )
  {
    v7 = 1;
    if ( *(_DWORD *)(*(_QWORD *)(v6 + 16) + 2152LL) > 1u )
    {
      do
      {
        if ( ADAPTER_DISPLAY::IsPlaneEnabled(this, v5, v7) )
        {
          memset(v16, 0, sizeof(v16));
          v16[0] = v7;
          v14 = v16;
          memset(v15, 0, 0x30uLL);
          LODWORD(v15[0]) = v5;
          v15[2] = &v14;
          v8 = *((_QWORD *)this + 2);
          HIDWORD(v15[1]) = 1;
          if ( (*(int (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 2288) + 408LL) + 8LL)
                                                       + 720LL))(
                 *(_QWORD *)(*(_QWORD *)(v8 + 2288) + 416LL),
                 v15) < 0 )
          {
            v11 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
            v11[3] = v7;
            v11[4] = v5;
            v11[5] = *((_QWORD *)this + 2);
            WdLogEvent5_WdError(v11);
          }
        }
        ++v7;
      }
      while ( v7 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2288LL) + 16LL) + 2152LL) );
    }
    v12 = *(_QWORD *)(3208 * v5 + *((_QWORD *)this + 14) + 688);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 1800);
      if ( v13 == *(_QWORD *)(*(_QWORD *)(v12 + 16) + 16LL) )
        ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v13 + 2280), (unsigned int)v5, a3, a4);
    }
  }
}
