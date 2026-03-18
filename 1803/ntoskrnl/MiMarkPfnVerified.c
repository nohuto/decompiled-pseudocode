/*
 * XREFs of MiMarkPfnVerified @ 0x1401380B4
 * Callers:
 *     MiAllocateWsle @ 0x1400161C0 (MiAllocateWsle.c)
 *     MiCopyPage @ 0x14002ED70 (MiCopyPage.c)
 *     MiProtectPrivateMemory @ 0x1401139F0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiRevertValidPte @ 0x140125BF0 (MiRevertValidPte.c)
 *     MiGatherMappedPages @ 0x140133168 (MiGatherMappedPages.c)
 *     MiValidateInPage @ 0x140138DF0 (MiValidateInPage.c)
 *     MiCompleteSecureProcessFault @ 0x1402618AC (MiCompleteSecureProcessFault.c)
 *     MiValidateImagePfn @ 0x1405BA580 (MiValidateImagePfn.c)
 *     MmChangeImageProtection @ 0x1405BC4E0 (MmChangeImageProtection.c)
 *     MiFillPerSessionProtos @ 0x140754D84 (MiFillPerSessionProtos.c)
 *     MiInitializeSystemImagePage @ 0x1408ADBC0 (MiInitializeSystemImagePage.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x1408AE398 (MiInitializeBootLoadedDriverPfns.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x1400303C0 (MiGetPagePrivilege.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KeSetPagePrivilege @ 0x14023FCB0 (KeSetPagePrivilege.c)
 */

unsigned __int8 __fastcall MiMarkPfnVerified(ULONG_PTR BugCheckParameter2, char a2)
{
  char v2; // di
  ULONG_PTR v4; // rsi
  unsigned __int8 v5; // bp
  char v6; // al
  int v7; // ecx
  unsigned int v8; // ecx
  __int64 v9; // r8
  unsigned __int8 result; // al
  unsigned __int64 v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = a2;
  v4 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
  if ( (a2 & 4) != 0 )
    v5 = 17;
  else
    v5 = MiLockPageInline(BugCheckParameter2);
  if ( (v2 & 2) != 0 )
  {
    if ( ((*(_QWORD *)(BugCheckParameter2 + 40) >> 54) & 7) == 3 )
      v2 &= ~2u;
    if ( (v2 & 2) != 0 && (MiFlags & 0x10000) != 0 )
    {
      v11[1] = 0LL;
      if ( (MiFlags & 0x8000) != 0 )
        v11[0] = (__int64)(*(_QWORD *)(BugCheckParameter2 + 8) << 25) >> 16;
      v6 = v2 & 0xFE;
      v7 = v2 & 1;
      if ( (v2 & 1) == 0 )
        v6 = v2;
      v2 = v6;
      v8 = 4 * v7 + 2;
      v9 = v8 | 0x40;
      if ( (v6 & 0x20) == 0 )
        v9 = v8;
      if ( (int)KeSetPagePrivilege(v4, v11, v9) < 0 )
        KeBugCheckEx(0x1Au, 0x5150CuLL, v4, 0LL, 0LL);
    }
  }
  result = (*(_QWORD *)(BugCheckParameter2 + 40) >> 54) & 7;
  if ( result != 3 )
  {
    result = 0;
    *(_QWORD *)(BugCheckParameter2 + 40) = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0xC0000000000000LL;
  }
  if ( (v2 & 1) != 0 && (MiFlags & 0x10000) != 0 )
  {
    MiGetPagePrivilege(BugCheckParameter2, 1, v11);
    result = KeSetPagePrivilege(v4, v11, 4LL);
  }
  if ( v5 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    result = v5;
    __writecr8(v5);
  }
  return result;
}
