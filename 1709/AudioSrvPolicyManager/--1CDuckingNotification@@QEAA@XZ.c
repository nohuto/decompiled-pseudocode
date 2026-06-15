/*
 * XREFs of ??1CDuckingNotification@@QEAA@XZ @ 0x18000B238
 * Callers:
 *     _CDuckingManager::AddDuckingNotification_::_1_::dtor$0 @ 0x180027E6A (_CDuckingManager--AddDuckingNotification_--_1_--dtor$0.c)
 *     _CDuckingManager::DeleteDuckingNotification_::_1_::dtor$0 @ 0x180027EAA (_CDuckingManager--DeleteDuckingNotification_--_1_--dtor$0.c)
 *     _CLockedList_CDuckingNotification_1_0_::RemoveInterface_::_1_::dtor$0 @ 0x1800280CB (_CLockedList_CDuckingNotification_1_0_--RemoveInterface_--_1_--dtor$0.c)
 *     _CLockedList_CDuckingNotification_1_0_::AddInterface_::_1_::dtor$0 @ 0x1800280FB (_CLockedList_CDuckingNotification_1_0_--AddInterface_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDuckingNotification::~CDuckingNotification(CDuckingNotification *this)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rdx

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = (volatile signed __int32 *)(*((_QWORD *)this + 2) - 24LL);
  if ( _InterlockedExchangeAdd(v3 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v3 + 8LL))(*(_QWORD *)v3);
}
