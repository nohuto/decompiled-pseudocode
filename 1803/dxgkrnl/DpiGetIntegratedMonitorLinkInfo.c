/*
 * XREFs of DpiGetIntegratedMonitorLinkInfo @ 0x1C020B0F0
 * Callers:
 *     ?_UpdateLinkInfo@DXGMONITOR@@AEAAJ_N@Z @ 0x1C023851C (-_UpdateLinkInfo@DXGMONITOR@@AEAAJ_N@Z.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x1C00396A8 (DpiFdoGetChildDescriptor.c)
 */

__int64 __fastcall DpiGetIntegratedMonitorLinkInfo(__int64 a1, int a2)
{
  _QWORD *ChildDescriptor; // rax
  __int64 v3; // r9
  int v4; // edx
  __int64 v5; // rcx
  unsigned int v6; // ecx

  ChildDescriptor = DpiFdoGetChildDescriptor(*(_QWORD *)(a1 + 64), a2);
  v4 = 0;
  if ( ChildDescriptor && (v5 = ChildDescriptor[12]) != 0 )
  {
    *(_DWORD *)(v3 + 4) = *(_DWORD *)(v5 + 64);
    v6 = 0;
    v4 = *(_DWORD *)(ChildDescriptor[12] + 124LL);
  }
  else
  {
    *(_DWORD *)(v3 + 4) = 0;
    v6 = ChildDescriptor != 0LL ? -1071841279 : -1073741811;
  }
  *(_DWORD *)(v3 + 8) = v4;
  return v6;
}
