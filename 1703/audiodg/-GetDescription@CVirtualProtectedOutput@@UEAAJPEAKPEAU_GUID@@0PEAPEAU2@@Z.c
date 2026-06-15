/*
 * XREFs of ?GetDescription@CVirtualProtectedOutput@@UEAAJPEAKPEAU_GUID@@0PEAPEAU2@@Z @ 0x1400405D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualProtectedOutput::GetDescription(
        CVirtualProtectedOutput *this,
        unsigned int *a2,
        struct _GUID *a3,
        unsigned int *a4,
        struct _GUID **a5)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *, struct _GUID *, unsigned int *, struct _GUID **))(**((_QWORD **)this + 1) + 40LL))(
           *((_QWORD *)this + 1),
           a2,
           a3,
           a4,
           a5);
}
