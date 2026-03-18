/*
 * XREFs of RIMIDEResetPointerDeviceMaxCount @ 0x1C010B2C0
 * Callers:
 *     NtUserSetFeatureReportResponse @ 0x1C00E3D80 (NtUserSetFeatureReportResponse.c)
 * Callees:
 *     RIMCmAllocPointerDeviceContacts @ 0x1C00089D4 (RIMCmAllocPointerDeviceContacts.c)
 *     RIMCmFreePointerDeviceContacts @ 0x1C0009650 (RIMCmFreePointerDeviceContacts.c)
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 */

__int64 __fastcall RIMIDEResetPointerDeviceMaxCount(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned int v3; // ebp
  int v5; // ebx

  v2 = 0;
  v3 = a2 + 1;
  v5 = 0;
  if ( *(_DWORD *)(a1 + 24) != 7 )
    v3 = a2;
  RIMCmFreePointerDeviceContacts(a1);
  if ( (int)RIMCmAllocPointerDeviceContacts(a1) >= 0 )
  {
    if ( Win32AllocPoolZInit(8LL * v3, 2020635474LL) )
    {
      *(_DWORD *)(a1 + 696) = v3;
      goto LABEL_8;
    }
    RIMCmFreePointerDeviceContacts(a1);
  }
  v5 = 1;
LABEL_8:
  LOBYTE(v2) = v5 == 0;
  return v2;
}
