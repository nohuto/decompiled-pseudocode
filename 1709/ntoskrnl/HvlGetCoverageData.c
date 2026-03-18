/*
 * XREFs of HvlGetCoverageData @ 0x1401E96F4
 * Callers:
 *     ExpCovQueryHypervisorInformation @ 0x14075F55C (ExpCovQueryHypervisorInformation.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x1400B5DB0 (MmBuildMdlForNonPagedPool.c)
 *     IoAllocateMdl @ 0x1400BBD50 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x1400E6070 (IoFreeMdl.c)
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 */

bool __fastcall HvlGetCoverageData(char a1, ULONG a2, void *a3)
{
  __int16 v3; // bx
  bool v5; // bp
  struct _MDL *Mdl; // rax
  struct _MDL *v7; // r14
  unsigned __int64 v8; // rdi
  _DWORD *v9; // rbx
  PHYSICAL_ADDRESS v11[3]; // [rsp+30h] [rbp-918h] BYREF
  PHYSICAL_ADDRESS v12[3]; // [rsp+50h] [rbp-8F8h] BYREF
  _BYTE v13[144]; // [rsp+70h] [rbp-8D8h] BYREF
  _BYTE v14[2064]; // [rsp+100h] [rbp-848h] BYREF

  v3 = (__int16)a3;
  v5 = 0;
  Mdl = IoAllocateMdl(a3, a2, 0, 0, 0LL);
  v7 = Mdl;
  if ( Mdl )
  {
    MmBuildMdlForNonPagedPool(Mdl);
    v8 = ((v3 & 0xFFF) + 4095LL + (unsigned __int64)v7->ByteCount) >> 12;
    v9 = (_DWORD *)HvlpAcquireHypercallPage(v11, 1, (__int64)v14, 1032LL);
    HvlpAcquireHypercallPage(v12, 2, (__int64)v13, 72LL);
    v9[1] = v8;
    *v9 = (a1 != 0) + 1;
    memmove(v9 + 2, &v7[1], 8LL * (unsigned int)v8);
    LOWORD(v9) = HvcallCodeVa();
    HvlpReleaseHypercallPage((__int64)v11);
    HvlpReleaseHypercallPage((__int64)v12);
    v5 = (_WORD)v9 == 0;
    IoFreeMdl(v7);
  }
  return v5;
}
