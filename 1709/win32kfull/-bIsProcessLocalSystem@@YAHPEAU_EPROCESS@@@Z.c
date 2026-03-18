/*
 * XREFs of ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C00F6464
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1C00B8AE0 (NtGdiSetPUMPDOBJ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00B8EA4 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     NtGdiSetDeviceGammaRamp @ 0x1C00F63C0 (NtGdiSetDeviceGammaRamp.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C010C3BC (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     NtGdiStartPage @ 0x1C010C710 (NtGdiStartPage.c)
 *     ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C010D740 (-GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z.c)
 *     NtGdiEngCreateBitmap @ 0x1C011FD80 (NtGdiEngCreateBitmap.c)
 *     NtGdiEngCreateDeviceSurface @ 0x1C011FEC0 (NtGdiEngCreateDeviceSurface.c)
 *     NtGdiEndPage @ 0x1C0257D40 (NtGdiEndPage.c)
 *     ?bIsProcessLocalSystem@@YAHXZ @ 0x1C02680A4 (-bIsProcessLocalSystem@@YAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bIsProcessLocalSystem(struct _EPROCESS *a1)
{
  unsigned int v1; // esi
  PACCESS_TOKEN v2; // rdi
  NTSTATUS v3; // ebx
  PVOID TokenInformation; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  TokenInformation = 0LL;
  v2 = PsReferencePrimaryToken(a1);
  v3 = SeQueryInformationToken(v2, TokenUser, &TokenInformation);
  PsDereferencePrimaryToken(v2);
  if ( v3 >= 0 )
  {
    v1 = RtlEqualSid(SeExports->SeLocalSystemSid, *(PSID *)TokenInformation);
    ExFreePoolWithTag(TokenInformation, 0);
  }
  return v1;
}
