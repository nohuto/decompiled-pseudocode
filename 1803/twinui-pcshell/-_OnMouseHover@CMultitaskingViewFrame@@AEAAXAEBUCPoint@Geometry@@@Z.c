/*
 * XREFs of ?_OnMouseHover@CMultitaskingViewFrame@@AEAAXAEBUCPoint@Geometry@@@Z @ 0x1802833F4
 * Callers:
 *     ?v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1802838B0 (-v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMultitaskingViewFrame::_OnMouseHover(CMultitaskingViewFrame *this, const struct Geometry::CPoint *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+2Ch] [rbp-1Ch]
  int v8; // [rsp+30h] [rbp-18h]

  v3 = *((_QWORD *)this + 313);
  if ( v3 )
  {
    v4 = *(_QWORD *)a2;
    v6 = 0;
    v7 = 0;
    v5 = v4;
    v8 = 4;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 224LL))(v3, &v5);
  }
  *((_BYTE *)this + 2553) = 0;
}
