/*
 * XREFs of PsSetExeModerationState @ 0x140238E10
 * Callers:
 *     NtSetSystemInformation @ 0x140562590 (NtSetSystemInformation.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExGetExtensionTable @ 0x140117428 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PsSetExeModerationState(__int64 a1, unsigned int a2)
{
  unsigned __int64 ExtensionTable; // rax
  unsigned int v5; // ebx

  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspDamExtensionHost);
  if ( ExtensionTable )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(ExtensionTable + 48))(a1, a2);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(PspDamExtensionHost + 64));
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v5;
}
