/*
 * XREFs of ?Reset@CShellEdgyImpl@@QEAAXXZ @ 0x18002C078
 * Callers:
 *     ?OnHitTest@EdgeGestureComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x18002A330 (-OnHitTest@EdgeGestureComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUI.c)
 *     ?OnHitTest@EdgeGestureComponent@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18002A6A0 (-OnHitTest@EdgeGestureComponent@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorIn.c)
 *     ??1CShellEdgyImpl@@QEAA@XZ @ 0x18002BF90 (--1CShellEdgyImpl@@QEAA@XZ.c)
 *     ?OnHitTest@CShellEdgyImpl@@QEAA_NKKPEAK0@Z @ 0x18002BFE4 (-OnHitTest@CShellEdgyImpl@@QEAA_NKKPEAK0@Z.c)
 *     ?OnTouchInfo@EdgeGestureTarget@@UEAAJPEAUTouchInfo@@@Z @ 0x18002D700 (-OnTouchInfo@EdgeGestureTarget@@UEAAJPEAUTouchInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??1?$vector@W4GamepadButtons@Input@Gaming@Windows@@V?$allocator@W4GamepadButtons@Input@Gaming@Windows@@@std@@@std@@QEAA@XZ @ 0x18002B640 (--1-$vector@W4GamepadButtons@Input@Gaming@Windows@@V-$allocator@W4GamepadButtons@Input@Gaming@Wi.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CShellEdgyImpl::Reset(CShellEdgyImpl *this)
{
  void *v2; // rdi

  if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
    McTemplateU0qqq((__int64)this, &MinInput_CShellEdgy_Reset, 13, *((_DWORD *)this + 2), *((_DWORD *)this + 4));
  *((_QWORD *)this + 1) = 0LL;
  v2 = *(void **)this;
  if ( *(_QWORD *)this )
  {
    std::vector<enum Windows::Gaming::Input::GamepadButtons>::~vector<enum Windows::Gaming::Input::GamepadButtons>(*(unsigned __int64 **)this);
    operator delete(v2);
    *(_QWORD *)this = 0LL;
  }
  *((_DWORD *)this + 4) = 0;
}
