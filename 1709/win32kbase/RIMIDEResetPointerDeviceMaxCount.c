/*
 * XREFs of RIMIDEResetPointerDeviceMaxCount @ 0x1C010A390
 * Callers:
 *     NtUserSetFeatureReportResponse @ 0x1C00E9F40 (NtUserSetFeatureReportResponse.c)
 * Callees:
 *     RIMCmFreePointerDeviceContacts @ 0x1C000B740 (RIMCmFreePointerDeviceContacts.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C00904D0 (RIMCmAllocPointerDeviceContacts.c)
 */

__int64 __fastcall RIMIDEResetPointerDeviceMaxCount(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8

  v3 = a2 + 1;
  if ( *(_DWORD *)(a1 + 24) != 7 )
    v3 = a2;
  RIMCmFreePointerDeviceContacts(a1, a2, a3);
  v5 = 0;
  if ( (int)RIMCmAllocPointerDeviceContacts(a1, 1785620818LL) >= 0 )
  {
    if ( Win32AllocPoolZInit(8LL * v3, 2020635474LL) )
    {
      *(_DWORD *)(a1 + 680) = v3;
      return 1;
    }
    else
    {
      RIMCmFreePointerDeviceContacts(a1, v6, v7);
    }
  }
  return v5;
}
