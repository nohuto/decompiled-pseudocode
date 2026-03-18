/*
 * XREFs of ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A12A4
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01489E8 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0149978 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z @ 0x1C01597E4 (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1C01A1F70 (DxgkRequestAsyncDisplaySwitchCallout.c)
 */

void __fastcall DXGGLOBAL::SetVirtualRenderAdapter(DXGGLOBAL *this, struct DXGADAPTER *a2)
{
  volatile int v2; // eax
  struct DXGADAPTER **v4; // r9
  __int64 v5; // rcx
  struct _DXGK_WIN32K_PARAM_DATA v6; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v7[10]; // [rsp+40h] [rbp-68h] BYREF

  v2 = g_VgpuReplaceWarp;
  *((_QWORD *)this + 76) = a2;
  if ( v2 )
  {
    v4 = (struct DXGADAPTER **)((char *)this + 616);
    v5 = *((_QWORD *)this + 77);
    if ( a2 )
    {
      if ( v5 && (*(_DWORD *)(v5 + 300) & 0x10) != 0 )
        ADAPTER_RENDER::DisconnectFromDisplayAdapters(*(ADAPTER_RENDER **)(v5 + 2464), a2, v4);
      else
        *((_QWORD *)this + 77) = a2;
    }
    else
    {
      *((_QWORD *)this + 77) = *((_QWORD *)this + 75);
      if ( *(_BYTE *)(v5 + 185) )
      {
        memset(v7, 0, 0x48uLL);
        EtwActivityIdControl(3u, (LPGUID)&v7[1]);
        v7[8] = MEMORY[0xFFFFF78000000014];
        LODWORD(v7[3]) = 62;
        LOBYTE(v7[6]) = -1;
        memset(&v6, 0, sizeof(v6));
        v6.SDCFlags = 2447;
        DxgkRequestAsyncDisplaySwitchCallout(&v6, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v7);
      }
    }
  }
}
