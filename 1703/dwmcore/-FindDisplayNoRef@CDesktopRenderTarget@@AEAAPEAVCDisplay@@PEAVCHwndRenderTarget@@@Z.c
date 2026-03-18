/*
 * XREFs of ?FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z @ 0x1800692A4
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x18006A0B0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x18006A7E4 (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ @ 0x1800B8108 (-IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ.c)
 *     ?GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z @ 0x1800CD450 (-GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

struct CDisplay *__fastcall CDesktopRenderTarget::FindDisplayNoRef(CDesktopRenderTarget *this, HMONITOR *a2)
{
  CDisplaySet *v2; // r9
  CDesktopRenderTarget *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r10
  int v7; // r8d
  __int64 v8; // rcx
  struct CDisplay *result; // rax
  struct CDisplay *v10; // [rsp+40h] [rbp+18h] BYREF

  v2 = qword_18023E528;
  v4 = this;
  if ( qword_18023E528 )
  {
    v5 = 0LL;
    if ( *((_DWORD *)qword_18023E528 + 18) )
    {
      v6 = *((_QWORD *)qword_18023E528 + 6);
      while ( !CDisplay::IsOffscreenRenderTarget(*(CDisplay **)(v6 + 8 * v5)) )
      {
        v5 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v5 >= *((_DWORD *)v2 + 18) )
          goto LABEL_6;
      }
      goto LABEL_15;
    }
  }
LABEL_6:
  if ( *(_BYTE *)(*((_QWORD *)v4 + 2) + 1361LL) )
  {
LABEL_15:
    v10 = 0LL;
    CDisplaySet::GetDisplayByHMonitorNoRefNoConst(v2, a2[58], &v10);
    return v10;
  }
  if ( (*((unsigned __int8 (__fastcall **)(HMONITOR *))*a2 + 22))(a2) )
  {
    v2 = qword_18023E528;
    goto LABEL_15;
  }
  v8 = (unsigned int)(*((_DWORD *)qword_18023E528 + 18) - 1);
  if ( (int)v8 < 0 )
    return 0LL;
  while ( 1 )
  {
    result = *(struct CDisplay **)(*((_QWORD *)qword_18023E528 + 6) + 8 * v8);
    if ( *((_DWORD *)result + 60) == *((_DWORD *)a2 + 114) )
      break;
    v8 = (unsigned int)(v8 - 1);
    if ( (int)v8 < 0 )
      return 0LL;
  }
  return result;
}
