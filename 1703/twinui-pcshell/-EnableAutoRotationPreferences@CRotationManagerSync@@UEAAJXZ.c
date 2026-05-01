/*
 * XREFs of ?EnableAutoRotationPreferences@CRotationManagerSync@@UEAAJXZ @ 0x180039BC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRotationManagerSync::EnableAutoRotationPreferences(CRotationManagerSync *this)
{
  PSRWLOCK v1; // rbx
  signed int v3; // ebx

  v1 = CApplicationManagerUtility::g_pIAMGlobals;
  v3 = GetCurrentThreadId() != LODWORD(v1[9].Ptr) ? 0x80070005 : 0;
  if ( v3 >= 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( ++*((_DWORD *)this + 11) == 1 )
      (*(void (__fastcall **)(char *))(*((_QWORD *)this - 1) + 32LL))((char *)this - 8);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  return (unsigned int)v3;
}
