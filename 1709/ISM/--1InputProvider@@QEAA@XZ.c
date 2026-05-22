/*
 * XREFs of ??1InputProvider@@QEAA@XZ @ 0x18000568C
 * Callers:
 *     _InputProviderManager::CreateAndInitialize_::_1_::dtor$0 @ 0x1800CE526 (_InputProviderManager--CreateAndInitialize_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall InputProvider::~InputProvider(InputProvider *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
