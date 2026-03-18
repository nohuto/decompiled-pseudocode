/*
 * XREFs of ?GetNumContacts@CInteractionRoot@@UEBAIK@Z @ 0x180169460
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInteractionRoot::GetNumContacts(CInteractionRoot *this, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax

  v4 = **((_QWORD **)this + 147);
  v5 = (*(__int64 (__fastcall **)(CInteractionRoot *))(*(_QWORD *)this + 104LL))(this);
  return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v4 + 56))(*((_QWORD *)this + 147), v5, a2);
}
