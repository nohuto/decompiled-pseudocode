/*
 * XREFs of ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x1800272C0
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x180004FEC (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180027D20 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800281C0 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800282D0 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180028630 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029020 (-ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800292A0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x1800296D0 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029900 (-ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029DB0 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002A0B0 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UnregisterIndirectSwapchainRenderTargetFromWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEA_N@Z @ 0x18002AC60 (-UnregisterIndirectSwapchainRenderTargetFromWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEA_N@Z.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002B020 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800257A4 (-CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002A690 (-HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::SyncWindowData(CWindowList *this, struct IDwmWindow *a2, struct CWindowData *a3)
{
  char v6; // al
  _OWORD *v7; // rax
  char v8; // al
  char v9; // al
  char v10; // al
  char v11; // al
  char v12; // al
  char v13; // al
  char v14; // al
  __int64 v15; // rax
  __int64 v16; // rax
  bool v17; // al
  char v18; // al
  char v19; // al
  char v20; // al
  HWND v21; // rcx
  unsigned int PropW; // eax
  char v23; // al
  _BYTE v25[16]; // [rsp+20h] [rbp-38h] BYREF

  *((_QWORD *)a3 + 4) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2);
  (*(void (__fastcall **)(struct IDwmWindow *, char *))(*(_QWORD *)a2 + 88LL))(a2, (char *)a3 + 188);
  (*(void (__fastcall **)(struct IDwmWindow *, char *))(*(_QWORD *)a2 + 96LL))(a2, (char *)a3 + 204);
  (*(void (__fastcall **)(struct IDwmWindow *, char *))(*(_QWORD *)a2 + 104LL))(a2, (char *)a3 + 220);
  (*(void (__fastcall **)(struct IDwmWindow *, char *))(*(_QWORD *)a2 + 112LL))(a2, (char *)a3 + 236);
  *((_DWORD *)a3 + 25) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 32LL))(a2);
  *((_DWORD *)a3 + 26) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 40LL))(a2);
  *((_DWORD *)a3 + 27) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 48LL))(a2);
  *((_DWORD *)a3 + 28) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 56LL))(a2);
  v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 72LL))(a2);
  *((_BYTE *)a3 + 592) &= ~1u;
  *((_BYTE *)a3 + 592) |= v6 & 1;
  *((_QWORD *)a3 + 15) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 64LL))(a2);
  v7 = (_OWORD *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 136LL))(a2);
  *((_OWORD *)a3 + 20) = *v7;
  *((_OWORD *)a3 + 21) = v7[1];
  *((__m128d *)a3 + 19) = _mm_unpacklo_pd(
                            (__m128d)*((unsigned __int64 *)a3 + 40),
                            (__m128d)*((unsigned __int64 *)a3 + 40));
  v8 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 144LL))(a2);
  *((_BYTE *)a3 + 592) &= ~2u;
  *((_BYTE *)a3 + 592) |= 2 * (v8 & 1);
  *((_BYTE *)a3 + 352) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 152LL))(a2);
  v9 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 208LL))(a2);
  *((_BYTE *)a3 + 593) &= ~1u;
  *((_BYTE *)a3 + 593) |= v9 & 1;
  v10 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 224LL))(a2);
  *((_BYTE *)a3 + 596) &= ~8u;
  *((_BYTE *)a3 + 596) |= 8 * (v10 & 1);
  *(_OWORD *)((char *)a3 + 152) = *(_OWORD *)(*(__int64 (__fastcall **)(struct IDwmWindow *, _BYTE *))(*(_QWORD *)a2 + 216LL))(
                                               a2,
                                               v25);
  v11 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 240LL))(a2);
  *((_BYTE *)a3 + 592) &= ~0x10u;
  *((_BYTE *)a3 + 592) |= 16 * (v11 & 1);
  v12 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 248LL))(a2);
  *((_BYTE *)a3 + 594) &= ~0x20u;
  *((_BYTE *)a3 + 594) |= 32 * (v12 & 1);
  v13 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 272LL))(a2);
  *((_BYTE *)a3 + 596) &= ~1u;
  *((_BYTE *)a3 + 596) |= v13 & 1;
  v14 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 80LL))(a2);
  *((_BYTE *)a3 + 596) &= ~0x20u;
  *((_BYTE *)a3 + 596) |= 32 * (v14 & 1);
  v15 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 360LL))(a2);
  *((_BYTE *)a3 + 596) &= ~0x40u;
  *((_BYTE *)a3 + 596) |= (v15 & 0x800000) != 0 ? 0x40 : 0;
  v16 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 360LL))(a2);
  *((_BYTE *)a3 + 596) &= ~0x80u;
  *((_BYTE *)a3 + 596) |= (v16 & 0x400000) != 0 ? 0x80 : 0;
  v17 = ((*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 360LL))(a2) & 0x1000000) != 0;
  *((_BYTE *)a3 + 597) &= ~1u;
  *((_BYTE *)a3 + 597) |= v17;
  v18 = *((_BYTE *)a3 + 596);
  if ( (v18 & 9) == 0 )
    *((_BYTE *)a3 + 596) = v18 & 0xEF;
  v19 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 256LL))(a2);
  *((_BYTE *)a3 + 595) &= ~0x20u;
  *((_BYTE *)a3 + 595) |= 32 * (v19 & 1);
  v20 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 288LL))(a2);
  *((_BYTE *)a3 + 596) &= ~4u;
  *((_BYTE *)a3 + 596) |= 4 * (v20 & 1);
  CWindowList::HasIconicBitmapChange(this, a2);
  CWindowList::CheckForMaximizedChange(this, a3);
  v21 = (HWND)*((_QWORD *)a3 + 5);
  *((_OWORD *)a3 + 3) = *(_OWORD *)((char *)a3 + 188);
  if ( v21 )
    PropW = (unsigned int)GetPropW(v21, (LPCWSTR)0xA914);
  else
    PropW = 0;
  *((_DWORD *)a3 + 89) = PropW;
  v23 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 368LL))(a2);
  *((_BYTE *)a3 + 596) &= ~2u;
  *((_BYTE *)a3 + 596) |= 2 * (v23 & 1);
  return 0LL;
}
