/*
 * XREFs of ?DisableAutoRotationPreferences@CRotationManagerSync@@UEAAJXZ @ 0x180039C30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRotationManagerSync::DisableAutoRotationPreferences(CRotationManagerSync *this)
{
  PSRWLOCK v1; // rbx
  int v3; // ebx
  int v4; // ecx

  v1 = CApplicationManagerUtility::g_pIAMGlobals;
  v3 = GetCurrentThreadId() != LODWORD(v1[9].Ptr) ? 0x80070005 : 0;
  if ( v3 >= 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v4 = *((_DWORD *)this + 11);
    v3 = v4 != 0 ? 1 : -2147023728;
    if ( v4 )
    {
      *((_DWORD *)this + 11) = v4 - 1;
      if ( v4 == 1 )
        (*(void (__fastcall **)(char *))(*((_QWORD *)this - 1) + 32LL))((char *)this - 8);
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  return (unsigned int)v3;
}
