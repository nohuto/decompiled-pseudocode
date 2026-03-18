/*
 * XREFs of MiMarkPfnVerified @ 0x140005D80
 * Callers:
 *     MiCopyPage @ 0x1400A0320 (MiCopyPage.c)
 *     MiGatherMappedPages @ 0x1400AFB14 (MiGatherMappedPages.c)
 *     MiAllocateWsle @ 0x1400BCCF0 (MiAllocateWsle.c)
 *     MiValidateInPage @ 0x1400CB690 (MiValidateInPage.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiRevertValidPte @ 0x1400F9CF0 (MiRevertValidPte.c)
 *     MiCompleteSecureProcessFault @ 0x14021BE20 (MiCompleteSecureProcessFault.c)
 *     MiValidateImagePfn @ 0x1404234F4 (MiValidateImagePfn.c)
 *     MmChangeImageProtection @ 0x1404B2670 (MmChangeImageProtection.c)
 *     MiFillPerSessionProtos @ 0x1406BE094 (MiFillPerSessionProtos.c)
 *     MiReloadBootLoadedDrivers @ 0x140815898 (MiReloadBootLoadedDrivers.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x14081628C (MiInitializeBootLoadedDriverPfns.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiGetPagePrivilege @ 0x1400A3660 (MiGetPagePrivilege.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017CDA4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KeSetPagePrivilege @ 0x1401FC9E8 (KeSetPagePrivilege.c)
 */

char __fastcall MiMarkPfnVerified(__int64 a1, char a2)
{
  char v2; // bl
  ULONG_PTR v4; // rsi
  unsigned __int8 v5; // bp
  unsigned int v6; // ecx
  __int64 v7; // r8
  int v8; // eax
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = a2;
  v4 = (a1 + 0x58000000000LL) / 48;
  if ( (a2 & 4) != 0 )
    v5 = 17;
  else
    v5 = MiLockPageInline(a1);
  if ( (v2 & 2) != 0 )
  {
    if ( ((*(_QWORD *)(a1 + 40) >> 54) & 7) == 3 )
      v2 &= ~2u;
    if ( (v2 & 2) != 0 && (MiFlags & 0x10000) != 0 )
    {
      v10[1] = 0LL;
      if ( (MiFlags & 0x8000) != 0 )
        v10[0] = (__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16;
      v6 = 2;
      if ( (v2 & 1) != 0 )
      {
        v6 = 6;
        v2 &= ~1u;
      }
      v7 = v6 | 0x40;
      if ( (v2 & 0x20) == 0 )
        v7 = v6;
      if ( (int)KeSetPagePrivilege(v4, v10, v7) < 0 )
        KeBugCheckEx(0x1Au, 0x5150CuLL, v4, 0LL, 0LL);
    }
  }
  LOBYTE(v8) = (*(_QWORD *)(a1 + 40) >> 54) & 7;
  if ( (_BYTE)v8 != 3 )
  {
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0xC0000000000000LL;
    v8 = *(_DWORD *)(a1 + 16);
    if ( (v8 & 0x400) != 0 )
    {
      LOBYTE(v8) = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(a1 + 16);
      if ( (v8 & 2) != 0 )
        v2 |= 2u;
    }
  }
  if ( (v2 & 1) != 0 && (MiFlags & 0x10000) != 0 )
  {
    MiGetPagePrivilege(a1, 1LL, v10);
    LOBYTE(v8) = KeSetPagePrivilege(v4, v10, 4LL);
  }
  if ( v5 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v8) = v5;
    __writecr8(v5);
  }
  return v8;
}
