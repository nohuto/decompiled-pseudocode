/*
 * XREFs of ?Uninitialize@CAppViewManager@@UEAAXXZ @ 0x18003E090
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAppViewManager::Uninitialize(CAppViewManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 24) )
  {
    v3 = 0LL;
    if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 11))(
           *((_QWORD *)this + 11),
           &GUID_7860c098_fb29_49aa_a512_adacc0ffee84,
           &v3) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 32LL))(v3, *((unsigned int *)this + 24));
      *((_DWORD *)this + 24) = 0;
    }
    v2 = v3;
    if ( v3 )
    {
      v3 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
}
