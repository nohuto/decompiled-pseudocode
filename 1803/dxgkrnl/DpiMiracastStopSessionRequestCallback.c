/*
 * XREFs of DpiMiracastStopSessionRequestCallback @ 0x1C0200120
 * Callers:
 *     <none>
 * Callees:
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C003D9C0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastTearDownAssociation @ 0x1C003E500 (DpiMiracastTearDownAssociation.c)
 */

void __fastcall DpiMiracastStopSessionRequestCallback(PVOID P, int *a2)
{
  if ( *a2 < 0 )
    DpiMiracastTearDownAssociation((char *)P, *((_DWORD *)P + 110), -2147483647, 0x83u, 0);
  DpiMiracastReleaseMiracastDeviceContext((int *)P, (unsigned int)DpiMiracastStopSessionRequestCallback);
}
