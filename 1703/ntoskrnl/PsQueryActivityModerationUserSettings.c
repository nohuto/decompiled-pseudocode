/*
 * XREFs of PsQueryActivityModerationUserSettings @ 0x140004C9C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExGetExtensionTable @ 0x140117428 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PsQueryActivityModerationUserSettings(_QWORD *a1)
{
  __int64 ExtensionTable; // rax
  int v3; // ebx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  ExtensionTable = ExGetExtensionTable(PspDamExtensionHost);
  if ( ExtensionTable )
  {
    v3 = (*(__int64 (__fastcall **)(__int64 *))(ExtensionTable + 56))(&v5);
    if ( v3 >= 0 )
      *a1 = v5;
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(PspDamExtensionHost + 64));
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return (unsigned int)v3;
}
