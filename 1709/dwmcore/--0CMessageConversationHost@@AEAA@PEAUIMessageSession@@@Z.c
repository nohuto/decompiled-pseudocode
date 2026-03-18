/*
 * XREFs of ??0CMessageConversationHost@@AEAA@PEAUIMessageSession@@@Z @ 0x180131860
 * Callers:
 *     ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x180131900 (-Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

CMessageConversationHost *__fastcall CMessageConversationHost::CMessageConversationHost(
        CMessageConversationHost *this,
        struct IMessageSession *a2)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CMessageConversationHost::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CMessageConversationHost::`vftable'{for `IMessageConversationHost'};
  CMILCOMBase::InternalAddRef(this);
  *((_QWORD *)this + 3) = a2;
  (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)a2 + 8LL))(a2);
  return this;
}
