/*
 * XREFs of ?OnTitleUpdated@CImmersiveApp@@UEAAXPEAUHWND__@@@Z @ 0x180054460
 * Callers:
 *     <none>
 * Callees:
 *     ?_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z @ 0x18005C3BC (-_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImmersiveApp::OnTitleUpdated(CImmersiveApp *this, HWND a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  if ( (int)CImmersiveApp::CImmersiveWindowCollection::_FindWindow((CImmersiveApp *)((char *)this + 152), a2, &v4) >= 0 )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 38) + 8 * v4);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 152LL))(v3);
  }
  CImmersiveApp::_UpdateWindowTitleAndButtons((CImmersiveApp *)((char *)this - 112));
}
