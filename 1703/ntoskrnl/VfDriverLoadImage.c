/*
 * XREFs of VfDriverLoadImage @ 0x140761DB4
 * Callers:
 *     MmLoadSystemImageEx @ 0x1404B191C (MmLoadSystemImageEx.c)
 *     VfDriverEnableVerifier @ 0x140767064 (VfDriverEnableVerifier.c)
 *     VfInitBootDriversLoaded @ 0x14081526C (VfInitBootDriversLoaded.c)
 *     VfDriverLoadBootDrivers @ 0x140815354 (VfDriverLoadBootDrivers.c)
 * Callees:
 *     VfTargetDriversAdd @ 0x14006E474 (VfTargetDriversAdd.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 *     VfNotifyVerifierExtensions @ 0x1407673BC (VfNotifyVerifierExtensions.c)
 *     ViXdvDriverLoadImage @ 0x140767714 (ViXdvDriverLoadImage.c)
 *     VfSuspectDriversLoadCallback @ 0x14077B740 (VfSuspectDriversLoadCallback.c)
 */

char __fastcall VfDriverLoadImage(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int Image; // eax
  UNICODE_STRING v10; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)&v10.Length = 2097182;
  v10.Buffer = L"VerifierExt.sys";
  LOBYTE(Image) = RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 88), &v10, 1u);
  if ( (_BYTE)Image == 1 )
  {
    Image = (unsigned __int8)ViXdvDriverLoadImage(a1);
    XdvEnabled = Image;
    if ( (_BYTE)Image )
      LOBYTE(Image) = VfNotifyVerifierExtensions(0LL, 0LL);
  }
  else if ( ViVerifierDriverAddedThunkListHead )
  {
    LOBYTE(Image) = VfSuspectDriversLoadCallback(a1, a2, a3, a4);
  }
  else if ( !a4 )
  {
    LOBYTE(Image) = VfTargetDriversAdd(*(_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 64), 0LL);
  }
  return Image;
}
