/*
 * XREFs of ?DisableAutoRotationPreferences@CRotationManagerSync@@UEAAJXZ @ 0x18003B090
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRotationManagerSync::DisableAutoRotationPreferences(CRotationManagerSync *this)
{
  PSRWLOCK v1; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v4; // edi
  int v5; // ecx

  v1 = CApplicationManagerUtility::g_pIAMGlobals;
  CurrentThreadId = GetCurrentThreadId();
  v4 = CurrentThreadId != LODWORD(v1[9].Ptr) ? 0x80070005 : 0;
  if ( LODWORD(v1[9].Ptr) == CurrentThreadId )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v5 = *((_DWORD *)this + 11);
    v4 = v5 != 0 ? 1 : -2147023728;
    if ( v5 )
    {
      *((_DWORD *)this + 11) = v5 - 1;
      if ( v5 == 1 )
        (*(void (__fastcall **)(char *))(*((_QWORD *)this - 1) + 32LL))((char *)this - 8);
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  return v4;
}
