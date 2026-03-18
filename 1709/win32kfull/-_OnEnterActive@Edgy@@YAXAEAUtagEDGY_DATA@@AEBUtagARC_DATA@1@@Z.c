/*
 * XREFs of ?_OnEnterActive@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C01D2774
 * Callers:
 *     ?_OnStateTransition@Edgy@@YAQEAXAEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtagARC_DATA@1@@Z @ 0x1C01D297C (-_OnStateTransition@Edgy@@YAQEAXAEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtagARC_DATA@1@@Z.c)
 * Callees:
 *     DoExplorerHangDetection @ 0x1C000C474 (DoExplorerHangDetection.c)
 *     ?_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z @ 0x1C01D1CC8 (-_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z.c)
 *     ?_SqmEdgy@Edgy@@YAXAEBUtagEDGY_DATA@@AEBUtagARC_DATA@1@H@Z @ 0x1C01D2A70 (-_SqmEdgy@Edgy@@YAXAEBUtagEDGY_DATA@@AEBUtagARC_DATA@1@H@Z.c)
 */

void __fastcall Edgy::_OnEnterActive(Edgy **this, struct tagEDGY_DATA *a2, const struct Edgy::tagARC_DATA *a3, int a4)
{
  HWND v6; // r8
  Edgy *v7; // rdx
  Edgy *v8; // rcx

  Edgy::_SqmEdgy((Edgy *)this, a2, (const struct Edgy::tagARC_DATA *)1, a4);
  DoExplorerHangDetection(*(struct tagDESKTOP **)(gptiCurrent + 432LL));
  v7 = (Edgy *)*((_QWORD *)a2 + 2);
  v8 = *(Edgy **)a2;
  if ( *((_DWORD *)this + 4) == 1 )
  {
    v7 = this[23];
    v8 = this[28];
  }
  Edgy::_AdjustFrameHwnd(v8, *((void *const *)v7 + 1), v6);
}
