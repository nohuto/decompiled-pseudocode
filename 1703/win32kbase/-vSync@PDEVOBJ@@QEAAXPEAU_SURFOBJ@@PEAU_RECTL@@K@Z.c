/*
 * XREFs of ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C00388C0
 * Callers:
 *     ?DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C005B660 (-DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     ?DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C005B880 (-DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C005B9C4 (DrvNotifyModeChangeStartStop.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C005EFF0 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     HDXDrvEscape @ 0x1C009C070 (HDXDrvEscape.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PDEVOBJ::vSync(PDEVOBJ *this, struct _SURFOBJ *a2, struct _RECTL *a3, unsigned int a4)
{
  __int64 p_hsurf; // r10
  __int64 v5; // rcx
  void (__fastcall *v6)(struct _SURFOBJ *, struct _RECTL *, _QWORD); // rax
  void (__fastcall *v7)(DHPDEV, struct _RECTL *); // rax

  p_hsurf = 112LL;
  if ( a2 )
    p_hsurf = (__int64)&a2[1].hsurf;
  if ( (*(_DWORD *)p_hsurf & 0x1000) != 0 )
  {
    v5 = *(_QWORD *)this;
    if ( (*(_DWORD *)(v5 + 32) & 0x400) == 0 )
    {
      v6 = *(void (__fastcall **)(struct _SURFOBJ *, struct _RECTL *, _QWORD))(v5 + 1776);
      if ( v6 )
      {
        v6(a2, a3, a4);
      }
      else
      {
        v7 = *(void (__fastcall **)(DHPDEV, struct _RECTL *))(v5 + 1768);
        if ( v7 )
          v7(a2->dhpdev, a3);
      }
    }
  }
}
