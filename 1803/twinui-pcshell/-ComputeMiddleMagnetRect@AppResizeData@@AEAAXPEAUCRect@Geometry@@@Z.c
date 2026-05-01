/*
 * XREFs of ?ComputeMiddleMagnetRect@AppResizeData@@AEAAXPEAUCRect@Geometry@@@Z @ 0x1802E6DC4
 * Callers:
 *     ?ComputeDropTargets@AppResizeData@@AEAAJXZ @ 0x1802E6988 (-ComputeDropTargets@AppResizeData@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AppResizeData::ComputeMiddleMagnetRect(AppResizeData *this, struct Geometry::CRect *a2)
{
  int v3; // r9d
  int v4; // edx
  unsigned int v5; // r8d
  __int128 v6; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+40h] [rbp-28h]

  (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 5) + 24LL))(*((_QWORD *)this + 5), &v6);
  v3 = v6;
  v4 = 100 * v7 / 100;
  v5 = (unsigned int)(DWORD2(v6) - v6 - v4) >> 1;
  *(_OWORD *)a2 = v6;
  *(_DWORD *)a2 = v5 + v3;
  *((_DWORD *)a2 + 2) = v4 + v5 + v3;
}
