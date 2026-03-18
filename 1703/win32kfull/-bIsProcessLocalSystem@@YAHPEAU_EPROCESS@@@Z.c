/*
 * XREFs of ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C02692C4
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1C0096A60 (NtGdiSetPUMPDOBJ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C0096E08 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C00FFCA8 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     NtGdiStartPage @ 0x1C00FFFF0 (NtGdiStartPage.c)
 *     ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C0100328 (-GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z.c)
 *     NtGdiEngCreateBitmap @ 0x1C0116090 (NtGdiEngCreateBitmap.c)
 *     NtGdiEngCreateDeviceSurface @ 0x1C01161D0 (NtGdiEngCreateDeviceSurface.c)
 *     NtGdiEndPage @ 0x1C0256240 (NtGdiEndPage.c)
 *     ?bIsProcessLocalSystem@@YAHXZ @ 0x1C026934C (-bIsProcessLocalSystem@@YAHXZ.c)
 *     NtGdiSetDeviceGammaRamp @ 0x1C02953F0 (NtGdiSetDeviceGammaRamp.c)
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
