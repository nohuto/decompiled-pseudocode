/*
 * XREFs of ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x1800B734C
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z @ 0x1800163A0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z @ 0x1800168B8 (-RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z.c)
 *     ?AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x180016908 (-AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?EnsureRemoteAppRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180016E00 (-EnsureRemoteAppRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x180133118 (-CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z.c)
 *     ?FindPrimary@CDesktopRenderTarget@@AEAAJXZ @ 0x180133A74 (-FindPrimary@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?RemoveRemoteAppRenderTarget@CDesktopRenderTarget@@UEAAJPEAVCRemoteApplicationWindow@@@Z @ 0x1801347B0 (-RemoveRemoteAppRenderTarget@CDesktopRenderTarget@@UEAAJPEAVCRemoteApplicationWindow@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynArray<CHwndRenderTarget *,0>::Remove(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r11
  unsigned int v4; // ecx
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v8; // rdx

  v2 = *a1;
  v4 = *((_DWORD *)a1 + 6);
  v5 = 0LL;
  if ( v4 )
  {
    v6 = *a2;
    do
    {
      if ( v6 == *(_QWORD *)(v2 + 8 * v5) )
        break;
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < v4 );
  }
  if ( (unsigned int)v5 >= v4 )
    return 0LL;
  if ( (unsigned int)v5 < v4 - 1 )
  {
    do
    {
      v8 = (unsigned int)v5;
      LODWORD(v5) = v5 + 1;
      *(_QWORD *)(v2 + 8 * v8) = *(_QWORD *)(v2 + 8LL * (unsigned int)v5);
    }
    while ( (unsigned int)v5 < *((_DWORD *)a1 + 6) - 1 );
  }
  --*((_DWORD *)a1 + 6);
  return 1LL;
}
