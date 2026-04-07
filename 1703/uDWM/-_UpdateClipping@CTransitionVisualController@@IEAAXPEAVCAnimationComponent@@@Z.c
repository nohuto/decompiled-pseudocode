/*
 * XREFs of ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x1800089A8
 * Callers:
 *     ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x180007F88 (-MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x180008AD4 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 * Callees:
 *     ?_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z @ 0x18000A2F8 (-_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x18000E06C (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004DE90 (memset_0.c)
 *     Template_pddddq @ 0x1800937C8 (Template_pddddq.c)
 */

void __fastcall CTransitionVisualController::_UpdateClipping(
        CTransitionVisualController *this,
        struct CAnimationComponent *a2)
{
  int v2; // ecx
  int v4; // ecx
  struct tagRECT rcMonitor; // xmm6
  __int64 v6; // rcx
  char v7; // al
  int v8; // edx
  int v9; // ecx
  int v10; // ecx
  HMONITOR v11; // rax
  HMONITOR v12; // rbx
  struct tagRECT v13; // xmm0
  struct tagRECT v14; // [rsp+48h] [rbp-9h] BYREF
  struct tagRECT v15; // [rsp+58h] [rbp+7h] BYREF
  tagMONITORINFO mi; // [rsp+68h] [rbp+17h] BYREF

  v2 = *((_DWORD *)a2 + 17);
  *(_QWORD *)&v14.left = 0LL;
  *(_QWORD *)&v14.right = 0LL;
  if ( !v2 )
  {
    v11 = MonitorFromWindow(*((HWND *)a2 + 2), 1u);
    mi.cbSize = 40;
    v12 = v11;
    memset_0(&mi.rcMonitor, 0, 0x24uLL);
    if ( GetMonitorInfoW(v12, &mi) )
    {
      rcMonitor = mi.rcMonitor;
      goto LABEL_4;
    }
    v13 = *(struct tagRECT *)((char *)a2 + 88);
    goto LABEL_15;
  }
  v4 = v2 - 1;
  if ( v4 )
  {
    v10 = v4 - 1;
    if ( !v10 )
    {
      rcMonitor = *(struct tagRECT *)((char *)a2 + 104);
      goto LABEL_4;
    }
    if ( v10 != 1 )
    {
LABEL_16:
      rcMonitor = v14;
      goto LABEL_5;
    }
    v13 = *(struct tagRECT *)(*((_QWORD *)a2 + 5) + 856LL);
LABEL_15:
    v15 = v13;
    CTransitionVisualController::GetMonitorRectFromRectImpl(&v15, &v14);
    goto LABEL_16;
  }
  rcMonitor = *(struct tagRECT *)((char *)a2 + 88);
LABEL_4:
  v14 = rcMonitor;
LABEL_5:
  v6 = *((_QWORD *)a2 + 5);
  if ( !*(_BYTE *)(v6 + 986) )
  {
    v7 = CTransitionVisualController::_SetAnimationClipRegion(
           (CTransitionVisualController *)-v6,
           (struct CVisual *)((v6 + 8) & -(__int64)(v6 != 0)),
           &v14);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      Template_pddddq(
        v9,
        v8,
        *((_QWORD *)a2 + 2),
        v14.left,
        _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rcMonitor, 4)),
        v14.right,
        _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rcMonitor, 12)),
        v7);
  }
  *(struct tagRECT *)(*((_QWORD *)a2 + 5) + 840LL) = rcMonitor;
}
