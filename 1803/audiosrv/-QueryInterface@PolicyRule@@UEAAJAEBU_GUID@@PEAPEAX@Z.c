/*
 * XREFs of ?QueryInterface@PolicyRule@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FC910
 * Callers:
 *     ?QueryInterface@PersistedEndpointPolicyRule@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180066190 (-QueryInterface@PersistedEndpointPolicyRule@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PolicyRule::QueryInterface(PolicyRule *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = a3 == 0LL ? 0x80004003 : 0;
  if ( !a3 )
    return v3;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3.Data4;
  if ( !v4 )
  {
    *a3 = this;
    (*(void (__fastcall **)(PolicyRule *))(*(_QWORD *)this + 8LL))(this);
    return v3;
  }
  return CUnknown::QueryInterface((PolicyRule *)((char *)this + 8), a2, a3);
}
