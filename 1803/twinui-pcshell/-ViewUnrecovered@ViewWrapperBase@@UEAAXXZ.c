/*
 * XREFs of ?ViewUnrecovered@ViewWrapperBase@@UEAAXXZ @ 0x1801E7420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewWrapperBase::ViewUnrecovered(ViewWrapperBase *this)
{
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 20) + 520LL) + 48LL))(
    *(_QWORD *)(*((_QWORD *)this + 20) + 520LL),
    *((unsigned int *)this + 35),
    *((_QWORD *)this + 23),
    2LL);
  (*(void (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)this + 712LL))(this);
}
