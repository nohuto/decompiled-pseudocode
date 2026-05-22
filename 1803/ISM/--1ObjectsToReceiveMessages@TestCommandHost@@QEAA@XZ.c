/*
 * XREFs of ??1ObjectsToReceiveMessages@TestCommandHost@@QEAA@XZ @ 0x180009C20
 * Callers:
 *     _TestCommandHost::TestCommandHost_::_1_::dtor$1 @ 0x1800E388B (_TestCommandHost--TestCommandHost_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall TestCommandHost::ObjectsToReceiveMessages::~ObjectsToReceiveMessages(
        TestCommandHost::ObjectsToReceiveMessages *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
