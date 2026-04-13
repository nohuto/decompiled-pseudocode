/*
 * XREFs of ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1800045A0
 * Callers:
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x18005F178 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AgileGitPtr::CopyLocal(AgileGitPtr *this, const struct _GUID *a2, void **a3)
{
  __int64 v5; // rbx
  unsigned int v6; // edi

  v5 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 8LL))(*(_QWORD *)this);
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, void **))(*(_QWORD *)v5 + 24LL))(v5, a2, a3);
  }
  else
  {
    *a3 = 0LL;
    v6 = -2147024809;
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}
