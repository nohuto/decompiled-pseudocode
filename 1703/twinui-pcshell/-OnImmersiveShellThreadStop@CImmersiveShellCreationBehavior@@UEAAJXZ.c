/*
 * XREFs of ?OnImmersiveShellThreadStop@CImmersiveShellCreationBehavior@@UEAAJXZ @ 0x1800CAA60
 * Callers:
 *     <none>
 * Callees:
 *     ?_ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x1800CA92C (-_ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::OnImmersiveShellThreadStop(CImmersiveShellCreationBehavior *this)
{
  int v2; // edi
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  v2 = CImmersiveShellCreationBehavior::_ValidateThread((CImmersiveShellCreationBehavior *)((char *)this - 24));
  if ( v2 >= 0 )
  {
    v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = 0LL;
    if ( v3 )
      (**v3)(v3, 1LL);
    if ( *((_BYTE *)this + 16) )
    {
      OleUninitialize();
      *((_BYTE *)this + 16) = 0;
    }
  }
  return (unsigned int)v2;
}
