/*
 * XREFs of ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C019BAB8
 * Callers:
 *     DxgkCheckMultiPlaneOverlaySupport2 @ 0x1C019F670 (DxgkCheckMultiPlaneOverlaySupport2.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C00839FC (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C019BC54 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 */

__int64 __fastcall DXGDEVICE::CheckMultiPlaneOverlaySupport2(
        ADAPTER_RENDER **this,
        unsigned int a2,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2 *a3,
        bool a4,
        int *a5,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  LUID *p_CompSurfaceLuid; // r8
  __int64 v14; // rbp
  char *v15; // rdx
  char *v16; // rcx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v17; // r9
  char *v18; // r10
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v19; // r11
  DWORD LowPart; // eax
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  LUID v23; // rax
  __int128 v24; // xmm0
  __int64 v26; // rax
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v27[8]; // [rsp+40h] [rbp-438h] BYREF
  char v28; // [rsp+80h] [rbp-3F8h] BYREF
  char v29; // [rsp+84h] [rbp-3F4h] BYREF
  char v30; // [rsp+180h] [rbp-2F8h] BYREF
  char v31; // [rsp+184h] [rbp-2F4h] BYREF

  *a5 = 0;
  if ( ADAPTER_RENDER::IsMultiPlaneOverlaySupported(this[2]) && (v11 = *((_QWORD *)this[2] + 2), *(_QWORD *)(v11 + 776)) )
  {
    if ( a2 )
    {
      p_CompSurfaceLuid = &a3->CompSurfaceLuid;
      v14 = a2;
      v15 = &v31;
      v16 = &v29;
      v17 = v27;
      v18 = &v30;
      v19 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)&v28;
      do
      {
        LowPart = p_CompSurfaceLuid[-1].LowPart;
        v21 = *(_OWORD *)&p_CompSurfaceLuid[2].HighPart;
        *((_DWORD *)v15 + 14) = 0;
        v22 = *(_OWORD *)&p_CompSurfaceLuid[4].HighPart;
        *(_QWORD *)(v15 + 60) = 0LL;
        *((_DWORD *)v16 - 1) = LowPart;
        *(_DWORD *)v16 = p_CompSurfaceLuid[-1].HighPart;
        v23 = *p_CompSurfaceLuid;
        p_CompSurfaceLuid += 16;
        *(LUID *)(v16 + 4) = v23;
        *((_DWORD *)v16 + 3) = p_CompSurfaceLuid[-15].LowPart;
        *((_DWORD *)v15 - 1) = p_CompSurfaceLuid[-14].LowPart;
        *((_DWORD *)v15 + 12) = p_CompSurfaceLuid[-8].HighPart;
        *((_DWORD *)v15 + 13) = p_CompSurfaceLuid[-7].LowPart;
        v23.LowPart = p_CompSurfaceLuid[-2].LowPart;
        *v17 = v19++;
        *(_QWORD *)(v16 + 20) = v18;
        v16 += 32;
        *(_OWORD *)v15 = v21;
        *((_DWORD *)v15 + 18) = v23.LowPart;
        v18 += 88;
        ++v17;
        *((_DWORD *)v15 + 17) = p_CompSurfaceLuid[-5].HighPart;
        v24 = *(_OWORD *)&p_CompSurfaceLuid[-10].HighPart;
        *((_OWORD *)v15 + 1) = v22;
        *((_OWORD *)v15 + 2) = v24;
        v15 += 88;
        --v14;
      }
      while ( v14 );
    }
    return DXGDEVICE::CheckMultiPlaneOverlaySupport3((DXGDEVICE *)this, a2, v27, 0, 0LL, a4, a5, a6);
  }
  else
  {
    v26 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v26 + 24) = 0LL;
    WdLogEvent5_WdWarning(v26);
    return 0LL;
  }
}
