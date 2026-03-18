/*
 * XREFs of MiMarkPfnVerified @ 0x1400CCEFC
 * Callers:
 *     MiRevertValidPte @ 0x140036C60 (MiRevertValidPte.c)
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiAllocateWsle @ 0x140047A60 (MiAllocateWsle.c)
 *     MiCopyPage @ 0x14005A3E0 (MiCopyPage.c)
 *     MiValidateInPage @ 0x1400CCA70 (MiValidateInPage.c)
 *     MiGatherMappedPages @ 0x1400EEBD4 (MiGatherMappedPages.c)
 *     MiCompleteSecureProcessFault @ 0x14022870C (MiCompleteSecureProcessFault.c)
 *     MiValidateImagePfn @ 0x140509814 (MiValidateImagePfn.c)
 *     MmChangeImageProtection @ 0x140515760 (MmChangeImageProtection.c)
 *     MiFillPerSessionProtos @ 0x1406EB4D0 (MiFillPerSessionProtos.c)
 *     MiReloadBootLoadedDrivers @ 0x140837458 (MiReloadBootLoadedDrivers.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x14084928C (MiInitializeBootLoadedDriverPfns.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x14005AE80 (MiGetPagePrivilege.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     KeSetPagePrivilege @ 0x14015130C (KeSetPagePrivilege.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

unsigned __int8 __fastcall MiMarkPfnVerified(__int64 a1, char a2)
{
  char v2; // bl
  ULONG_PTR v4; // rsi
  unsigned __int8 v5; // bp
  unsigned int v6; // edx
  __int64 v7; // r8
  unsigned __int8 result; // al
  unsigned __int64 v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = a2;
  v4 = (a1 + 0x58000000000LL) / 48;
  if ( (a2 & 4) != 0 )
    v5 = 17;
  else
    v5 = MiLockPageInline(a1);
  v6 = 2;
  if ( (v2 & 2) != 0 )
  {
    if ( ((*(_QWORD *)(a1 + 40) >> 54) & 7) == 3 )
      v2 &= ~2u;
    if ( (v2 & 2) != 0 && (MiFlags & 0x10000) != 0 )
    {
      v9[1] = 0LL;
      if ( (MiFlags & 0x8000) != 0 )
        v9[0] = (__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16;
      if ( (v2 & 1) != 0 )
      {
        v6 = 6;
        v2 &= ~1u;
      }
      v7 = v6 | 0x40;
      if ( (v2 & 0x20) == 0 )
        v7 = v6;
      if ( (int)KeSetPagePrivilege(v4, v9, v7) < 0 )
        KeBugCheckEx(0x1Au, 0x5150CuLL, v4, 0LL, 0LL);
    }
  }
  result = (*(_QWORD *)(a1 + 40) >> 54) & 7;
  if ( result != 3 )
  {
    result = 0;
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0xC0000000000000LL;
  }
  if ( (v2 & 1) != 0 && (MiFlags & 0x10000) != 0 )
  {
    MiGetPagePrivilege(a1, 1, v9);
    result = KeSetPagePrivilege(v4, v9, 4LL);
  }
  if ( v5 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    result = v5;
    __writecr8(v5);
  }
  return result;
}
