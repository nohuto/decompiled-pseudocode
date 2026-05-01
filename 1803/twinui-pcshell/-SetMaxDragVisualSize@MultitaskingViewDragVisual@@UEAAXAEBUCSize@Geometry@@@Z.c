/*
 * XREFs of ?SetMaxDragVisualSize@MultitaskingViewDragVisual@@UEAAXAEBUCSize@Geometry@@@Z @ 0x1802AA760
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetContentShrinkRect@MultitaskingViewDragVisual@@AEAA?AUCRect@Geometry@@XZ @ 0x1802AA1D8 (-GetContentShrinkRect@MultitaskingViewDragVisual@@AEAA-AUCRect@Geometry@@XZ.c)
 */

void __fastcall MultitaskingViewDragVisual::SetMaxDragVisualSize(
        MultitaskingViewDragVisual *this,
        const struct Geometry::CSize *a2)
{
  MultitaskingViewDragVisual *v2; // r10
  __int64 v4; // rax
  int v5; // edx
  int v6; // ecx
  int v7[4]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v8; // [rsp+40h] [rbp-28h] BYREF

  v2 = this;
  if ( *(_DWORD *)a2 != *((_DWORD *)this + 16) || *((_DWORD *)a2 + 1) != *((_DWORD *)this + 17) )
  {
    v4 = *(_QWORD *)a2;
    v8 = 0uLL;
    *((_QWORD *)this + 8) = v4;
    if ( (int)v4 <= 0 || SHIDWORD(v4) <= 0 )
    {
      v5 = *((_DWORD *)this + 13);
      LODWORD(v8) = -*((_DWORD *)this + 12);
      DWORD2(v8) = *((_DWORD *)this + 14) + v8;
      v6 = *((_DWORD *)this + 15);
      DWORD1(v8) = -v5;
      HIDWORD(v8) = v6 - v5;
    }
    else
    {
      v8 = *(_OWORD *)MultitaskingViewDragVisual::GetContentShrinkRect((__int64)this, v7);
    }
    (*(void (__fastcall **)(_QWORD, __int128 *, __int64))(**((_QWORD **)v2 + 4) + 24LL))(*((_QWORD *)v2 + 4), &v8, 3LL);
  }
}
