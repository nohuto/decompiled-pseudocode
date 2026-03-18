/*
 * XREFs of PspNetRateControlDispatch @ 0x140717A94
 * Callers:
 *     PspJobDelete @ 0x1400D3DE0 (PspJobDelete.c)
 *     PspQueryRateControlHistory @ 0x14051041C (PspQueryRateControlHistory.c)
 *     PspSetNetRateControl @ 0x14071835C (PspSetNetRateControl.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x14011BED8 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14011BEF0 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PspNetRateControlDispatch(__int64 a1)
{
  __int64 (__fastcall **ExtensionTable)(__int64); // rax
  unsigned int v3; // ebx

  ExtensionTable = (__int64 (__fastcall **)(__int64))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspNetRateControlExtensionHost);
  if ( ExtensionTable )
  {
    v3 = (*ExtensionTable)(a1);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspNetRateControlExtensionHost);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v3;
}
