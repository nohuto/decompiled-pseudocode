/*
 * XREFs of ?GetPrimary@CDesktopRenderTarget@@AEBAPEAVCHwndRenderTarget@@XZ @ 0x18004504C
 * Callers:
 *     ?GetPixelFormatInfo@CDesktopRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800444B0 (-GetPixelFormatInfo@CDesktopRenderTarget@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?NotifyDesktopDirectScreenWrite@CDesktopRenderTarget@@QEAAJXZ @ 0x180157EA8 (-NotifyDesktopDirectScreenWrite@CDesktopRenderTarget@@QEAAJXZ.c)
 *     ?NotifyMetaData@CDesktopRenderTarget@@QEAAJU_DWMCommonMetaData@@@Z @ 0x180157F4C (-NotifyMetaData@CDesktopRenderTarget@@QEAAJU_DWMCommonMetaData@@@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ @ 0x180158200 (-ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@QEBA_NXZ @ 0x180062F10 (-IsPrimaryMonitor@CHwndRenderTarget@@QEBA_NXZ.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x1800C7F24 (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z @ 0x1800C7F68 (-InsertAt@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z.c)
 */

struct CHwndRenderTarget *__fastcall CDesktopRenderTarget::GetPrimary(CDesktopRenderTarget *this)
{
  __int64 v1; // rbx
  unsigned int v3; // edi
  _QWORD *v4; // r14
  CHwndRenderTarget *v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  v3 = 0;
  if ( *((_DWORD *)this + 50) )
  {
    v4 = (_QWORD *)((char *)this + 176);
    while ( 1 )
    {
      v6 = *(CHwndRenderTarget **)(*v4 + 8LL * v3);
      if ( CHwndRenderTarget::IsPrimaryMonitor(v6) )
        break;
      if ( ++v3 >= *((_DWORD *)this + 50) )
        return (struct CHwndRenderTarget *)v1;
    }
    if ( v3 )
    {
      DynArray<CHwndRenderTarget *,0>::Remove(v4, &v6);
      DynArray<CHwndRenderTarget *,0>::InsertAt(v4, &v6);
    }
    return v6;
  }
  return (struct CHwndRenderTarget *)v1;
}
