/*
 * XREFs of VfDriverLoadImage @ 0x14080EEBC
 * Callers:
 *     MmLoadSystemImageEx @ 0x1405F9AF4 (MmLoadSystemImageEx.c)
 *     VfDriverEnableVerifier @ 0x140815C38 (VfDriverEnableVerifier.c)
 *     VfInitBootDriversLoaded @ 0x1408AD198 (VfInitBootDriversLoaded.c)
 *     VfDriverLoadBootDrivers @ 0x1408AD280 (VfDriverLoadBootDrivers.c)
 * Callees:
 *     MiSectionControlArea @ 0x1400E54F0 (MiSectionControlArea.c)
 *     VfTargetDriversAdd @ 0x140161440 (VfTargetDriversAdd.c)
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 *     VfNotifyVerifierExtensions @ 0x140815FA0 (VfNotifyVerifierExtensions.c)
 *     ViXdvDriverLoadImage @ 0x1408162A4 (ViXdvDriverLoadImage.c)
 *     VfSuspectDriversLoadCallback @ 0x14082A9EC (VfSuspectDriversLoadCallback.c)
 */

char __fastcall VfDriverLoadImage(__int64 a1, int a2, unsigned __int8 a3, unsigned __int8 a4)
{
  unsigned __int64 v8; // rax
  int v9; // r8d
  __int64 v10; // rcx
  UNICODE_STRING v12; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&v12.Length = 2097182;
  v12.Buffer = L"VerifierExt.sys";
  LOBYTE(v8) = RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 88), &v12, 1u);
  if ( (_BYTE)v8 == 1 )
  {
    if ( !ViDriverXDVBase )
    {
      ViDriverXDVBase = *(_QWORD *)(a1 + 48);
      ViDriverXDVImageSize = *(_DWORD *)(a1 + 64);
    }
    LODWORD(v8) = (unsigned __int8)ViXdvDriverLoadImage(a1);
    XdvEnabled = v8;
    if ( (_BYTE)v8 )
      LOBYTE(v8) = VfNotifyVerifierExtensions(0LL, 0LL);
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 112);
    if ( v10 )
    {
      v8 = MiSectionControlArea(v10);
      LOBYTE(v9) = *(_BYTE *)(*(_QWORD *)v8 + 15LL) >> 4;
    }
    else
    {
      LOBYTE(v9) = 12;
    }
    if ( ViVerifierDriverAddedThunkListHead )
    {
      LOBYTE(v8) = VfSuspectDriversLoadCallback(a1, a2, v9, a3, a4);
    }
    else if ( !a4 )
    {
      LOBYTE(v8) = VfTargetDriversAdd(*(_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 64), v9, 0LL);
    }
  }
  return v8;
}
