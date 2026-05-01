/*
 * XREFs of ?TimerDeferredShowRequestCallback@TabTipAdapter@KeyboardHosting@@CAJPEAX@Z @ 0x1801A42B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1801A40E4 (-ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::TimerDeferredShowRequestCallback(
        KeyboardHosting::TabTipAdapter *this)
{
  int v2; // eax
  unsigned int v3; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( this )
    (*(void (__fastcall **)(KeyboardHosting::TabTipAdapter *))(*(_QWORD *)this + 8LL))(this);
  v2 = KeyboardHosting::TabTipAdapter::ExecuteDeferredRequest(this);
  v3 = v2;
  if ( v2 >= 0 )
    v3 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x24E,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v2);
  if ( this )
    (*(void (__fastcall **)(KeyboardHosting::TabTipAdapter *))(*(_QWORD *)this + 16LL))(this);
  return v3;
}
