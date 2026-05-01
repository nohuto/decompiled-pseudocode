/*
 * XREFs of ?GetCurrentCharm@CCharmsWindowManager@@UEBAPEAUHWND__@@XZ @ 0x18003CBD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCharmsWindowManager::GetCurrentCharm(CCharmsWindowManager *this)
{
  __int64 v1; // rdi
  __int64 v2; // rbx

  v1 = 0LL;
  if ( (*((_BYTE *)this + 56) & 1) != 0 )
  {
    v2 = **((_QWORD **)this + 3);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return v1;
}
