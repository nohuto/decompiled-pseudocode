/*
 * XREFs of ndisPnPRemoveDeviceEx @ 0x1C00AA814
 * Callers:
 *     ndisPnPIrpSurpriseRemovalInner @ 0x1C00EB838 (ndisPnPIrpSurpriseRemovalInner.c)
 *     ndisWdfPreReleaseHardware @ 0x1C00EBB30 (ndisWdfPreReleaseHardware.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00FE008 (ndisPnPIrpRemoveDevice.c)
 * Callees:
 *     ndisIsMiniportStarted @ 0x1C0008960 (ndisIsMiniportStarted.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ndisPnPRemoveDevice @ 0x1C00FE208 (ndisPnPRemoveDevice.c)
 */

void __fastcall ndisPnPRemoveDeviceEx(ULONG_PTR BugCheckParameter2)
{
  unsigned int v2; // eax
  bool v3; // zf
  int v4; // eax
  __int64 InputBuffer; // [rsp+30h] [rbp-18h] BYREF
  __int64 v6; // [rsp+38h] [rbp-10h]

  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0x1Fu, &WPP_c43bece8f9e83cce6c35b7786f97099d_Traceguids, BugCheckParameter2);
  v2 = *(_DWORD *)(BugCheckParameter2 + 124) & 0xFFFEFFFF;
  *(_DWORD *)(BugCheckParameter2 + 1520) = 5;
  *(_DWORD *)(BugCheckParameter2 + 124) = v2 | 0x10;
  if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)BugCheckParameter2)
    && ((*(_DWORD *)(BugCheckParameter2 + 124) & 0x200000) != 0 && ndisAoAcCapable
     || (*(_DWORD *)(BugCheckParameter2 + 2692) & 0x200) != 0)
    && *(_DWORD *)(BugCheckParameter2 + 1832) == 14 )
  {
    v3 = *(_BYTE *)(BugCheckParameter2 + 1001) == 2;
    v6 = 0LL;
    InputBuffer = *(_QWORD *)(BugCheckParameter2 + 3856);
    LODWORD(v6) = 4;
    if ( !v3
      || (*(_DWORD *)(BugCheckParameter2 + 1008) & 1) == 0
      || *(_DWORD *)(BugCheckParameter2 + 1012) < 0x10u
      || *(_DWORD *)(BugCheckParameter2 + 1016) < 0x4Au
      || (unsigned int)(*(_DWORD *)(BugCheckParameter2 + 1044) - 3) > 1
      || (*(_DWORD *)(BugCheckParameter2 + 1052) & 1) == 0
      || (v4 = *(_DWORD *)(BugCheckParameter2 + 1028) & 3, BYTE5(v6) = 1, (_BYTE)v4 != 3) )
    {
      BYTE5(v6) = 0;
    }
    ZwPowerInformation(CsDeviceNotification, &InputBuffer, 0x10u, 0LL, 0);
  }
  ndisPnPRemoveDevice(BugCheckParameter2);
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0x20u, &WPP_c43bece8f9e83cce6c35b7786f97099d_Traceguids, BugCheckParameter2);
}
