/*
 * XREFs of ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01AC07C
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C011364C (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C0170FCC (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z @ 0x1C01771AC (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1C01AC6B0 (DxgkRequestAsyncDisplaySwitchCallout.c)
 */

void __fastcall DXGGLOBAL::SetVirtualRenderAdapter(DXGGLOBAL *this, struct DXGADAPTER *a2)
{
  volatile int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // r9
  struct _DXGK_WIN32K_PARAM_DATA v5; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v6[10]; // [rsp+40h] [rbp-68h] BYREF

  v2 = g_VgpuReplaceWarp;
  *((_QWORD *)this + 75) = a2;
  if ( v2 )
  {
    if ( a2 )
    {
      v4 = *((_QWORD *)this + 76);
      if ( v4 && (*(_DWORD *)(v4 + 300) & 0x10) != 0 )
        ADAPTER_RENDER::DisconnectFromDisplayAdapters(
          *(ADAPTER_RENDER **)(v4 + 2312),
          a2,
          (struct DXGADAPTER **)this + 76);
      else
        *((_QWORD *)this + 76) = a2;
    }
    else
    {
      v3 = *((_QWORD *)this + 76);
      *((_QWORD *)this + 76) = *((_QWORD *)this + 74);
      if ( *(_BYTE *)(v3 + 185) )
      {
        memset(v6, 0, 0x48uLL);
        EtwActivityIdControl(3u, (LPGUID)&v6[1]);
        v6[8] = MEMORY[0xFFFFF78000000014];
        LODWORD(v6[3]) = 62;
        LOBYTE(v6[6]) = -1;
        memset(&v5, 0, sizeof(v5));
        v5.SDCFlags = 2447;
        DxgkRequestAsyncDisplaySwitchCallout(&v5, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v6);
      }
    }
  }
}
