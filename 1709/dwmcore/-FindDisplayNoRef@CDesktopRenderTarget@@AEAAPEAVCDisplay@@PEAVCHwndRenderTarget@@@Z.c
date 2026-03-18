/*
 * XREFs of ?FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z @ 0x180016C90
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z @ 0x1800163A0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x180016AA4 (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z @ 0x18018EB40 (-GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z.c)
 */

struct CDisplay *__fastcall CDesktopRenderTarget::FindDisplayNoRef(CDesktopRenderTarget *this, HMONITOR *a2)
{
  CDisplaySet *v2; // r9
  __int64 v4; // r8
  __int64 v5; // rcx
  struct CDisplay *result; // rax
  struct CDisplay *v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = qword_18026EEA8;
  if ( qword_18026EEA8 )
  {
    v4 = 0LL;
    if ( *((_DWORD *)qword_18026EEA8 + 18) )
    {
      while ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)qword_18026EEA8 + 6) + 8 * v4) + 208LL) )
      {
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= *((_DWORD *)qword_18026EEA8 + 18) )
          goto LABEL_5;
      }
      goto LABEL_14;
    }
  }
LABEL_5:
  if ( *(_BYTE *)(*((_QWORD *)this + 2) + 1297LL) )
  {
LABEL_14:
    v7 = 0LL;
    CDisplaySet::GetDisplayByHMonitorNoRefNoConst(v2, a2[59], &v7);
    return v7;
  }
  if ( (*((unsigned __int8 (__fastcall **)(HMONITOR *))*a2 + 24))(a2) )
  {
    v2 = qword_18026EEA8;
    goto LABEL_14;
  }
  v5 = (unsigned int)(*((_DWORD *)qword_18026EEA8 + 18) - 1);
  if ( (int)v5 < 0 )
    return 0LL;
  while ( 1 )
  {
    result = *(struct CDisplay **)(*((_QWORD *)qword_18026EEA8 + 6) + 8 * v5);
    if ( *((_DWORD *)result + 61) == *((_DWORD *)a2 + 116) )
      break;
    v5 = (unsigned int)(v5 - 1);
    if ( (int)v5 < 0 )
      return 0LL;
  }
  return result;
}
