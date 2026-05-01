/*
 * XREFs of ?DisableAutoRotationPreferences@CRotationManagerSync@@UEAAJXZ @ 0x18011B530
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x1800F7A4C (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 */

__int64 __fastcall CRotationManagerSync::DisableAutoRotationPreferences(CRotationManagerSync *this)
{
  unsigned int v2; // ebx
  int v3; // ecx

  if ( CIAMGlobals::IsCalledOnIAMThread(this) )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v3 = *((_DWORD *)this + 11);
    v2 = v3 != 0 ? 1 : -2147023728;
    if ( v3 )
    {
      *((_DWORD *)this + 11) = v3 - 1;
      if ( v3 == 1 )
        (*(void (__fastcall **)(char *))(*((_QWORD *)this - 1) + 32LL))((char *)this - 8);
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  else
  {
    return (unsigned int)-2147024891;
  }
  return v2;
}
