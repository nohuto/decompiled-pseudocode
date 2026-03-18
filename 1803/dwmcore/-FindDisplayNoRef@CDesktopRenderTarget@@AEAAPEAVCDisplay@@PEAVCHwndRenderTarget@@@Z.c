/*
 * XREFs of ?FindDisplayNoRef@CDesktopRenderTarget@@AEAAPEAVCDisplay@@PEAVCHwndRenderTarget@@@Z @ 0x180044F8C
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z @ 0x1800445F0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x180044DAC (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z @ 0x1800D74B8 (-GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

struct CDisplay *__fastcall CDesktopRenderTarget::FindDisplayNoRef(CDesktopRenderTarget *this, HMONITOR *a2)
{
  CDisplaySet *v2; // r9
  __int64 v4; // r8
  __int64 v5; // rcx
  struct CDisplay *result; // rax
  struct CDisplay *v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = qword_1802D6428;
  if ( qword_1802D6428 )
  {
    v4 = 0LL;
    if ( *((_DWORD *)qword_1802D6428 + 18) )
    {
      while ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)qword_1802D6428 + 6) + 8 * v4) + 232LL) )
      {
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= *((_DWORD *)qword_1802D6428 + 18) )
          goto LABEL_5;
      }
      goto LABEL_14;
    }
  }
LABEL_5:
  if ( *(_BYTE *)(*((_QWORD *)this + 2) + 1345LL) )
  {
LABEL_14:
    v7 = 0LL;
    CDisplaySet::GetDisplayByHMonitorNoRefNoConst(v2, a2[65], &v7);
    return v7;
  }
  if ( (*((unsigned __int8 (__fastcall **)(HMONITOR *))*a2 + 27))(a2) )
  {
    v2 = qword_1802D6428;
    goto LABEL_14;
  }
  v5 = (unsigned int)(*((_DWORD *)qword_1802D6428 + 18) - 1);
  if ( (int)v5 < 0 )
    return 0LL;
  while ( 1 )
  {
    result = *(struct CDisplay **)(*((_QWORD *)qword_1802D6428 + 6) + 8 * v5);
    if ( *((_DWORD *)result + 66) == *((_DWORD *)a2 + 128) )
      break;
    v5 = (unsigned int)(v5 - 1);
    if ( (int)v5 < 0 )
      return 0LL;
  }
  return result;
}
