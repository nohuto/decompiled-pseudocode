/*
 * XREFs of ?SplashHitTest@EdgeGestureComponent@@AEAA_NKKPEAI@Z @ 0x18002AAC0
 * Callers:
 *     ?OnHitTest@EdgeGestureComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x18002A330 (-OnHitTest@EdgeGestureComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUI.c)
 *     ?OnTouchSessionBegin@EdgeGestureTarget@@AEAAJAEBUTouchInfo@@@Z @ 0x18002D880 (-OnTouchSessionBegin@EdgeGestureTarget@@AEAAJAEBUTouchInfo@@@Z.c)
 *     ?OnEdgeGestureDetected@EdgeGestureTarget@@AEAAJXZ @ 0x18002DDC8 (-OnEdgeGestureDetected@EdgeGestureTarget@@AEAAJXZ.c)
 * Callees:
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

char __fastcall EdgeGestureComponent::SplashHitTest(
        EdgeGestureComponent *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4)
{
  char v8; // si
  __int64 v9; // rcx
  unsigned int v10; // ecx
  _QWORD v12[26]; // [rsp+30h] [rbp-D0h] BYREF

  v8 = 0;
  memset(v12, 0, sizeof(v12));
  v9 = *((_QWORD *)this + 10);
  v12[3] = 0LL;
  HIDWORD(v12[6]) = 0;
  HIDWORD(v12[22]) = 0;
  LODWORD(v12[0]) = 2;
  LODWORD(v12[23]) = 1024;
  v12[2] = __PAIR64__(a3, a2);
  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v9 + 24LL))(v9, &v12[1]);
  if ( (***((unsigned __int8 (__fastcall ****)(_QWORD, _QWORD *))this + 9))(*((_QWORD *)this + 9), v12)
    && (v10 = HIDWORD(v12[23]), (v12[23] & 0x40000000000LL) != 0)
    && v12[16] )
  {
    *((_QWORD *)this + 12) = v12[16];
    v8 = 1;
    *((_QWORD *)this + 13) = v12[4];
    *((_DWORD *)this + 15) = a2;
    *((_DWORD *)this + 16) = a3;
    if ( a4 )
      *a4 = v10;
  }
  else if ( a4 )
  {
    *a4 = 0;
  }
  return v8;
}
