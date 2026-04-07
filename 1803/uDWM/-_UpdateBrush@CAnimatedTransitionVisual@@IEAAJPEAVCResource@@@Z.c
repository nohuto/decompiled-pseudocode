/*
 * XREFs of ?_UpdateBrush@CAnimatedTransitionVisual@@IEAAJPEAVCResource@@@Z @ 0x1800118D8
 * Callers:
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180011A54 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z @ 0x180093E14 (-SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_UpdateBrush(CAnimatedTransitionVisual *this, struct CResource *a2)
{
  __int64 v2; // rax
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+80h] [rbp-48h]
  __int128 v7; // [rsp+90h] [rbp-38h] BYREF
  __int128 v8; // [rsp+A0h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 74);
  v6 = *((_DWORD *)a2 + 6);
  v8 = _xmm;
  v7 = _xmm;
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, __int128 *, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, int))(**(_QWORD **)(v2 + 16) + 1208LL))(
         *(_QWORD *)(v2 + 16),
         *(unsigned int *)(v2 + 24),
         *(_QWORD *)(v2 + 16),
         &v8,
         &v7,
         0,
         0,
         0,
         1,
         1,
         0,
         0,
         1,
         0,
         0,
         0,
         v6);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x354u);
  return v4;
}
