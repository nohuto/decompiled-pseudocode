/*
 * XREFs of HvlGetCoverageData @ 0x140226864
 * Callers:
 *     ExpCovQueryHypervisorInformation @ 0x1407C685C (ExpCovQueryHypervisorInformation.c)
 * Callees:
 *     IoFreeMdl @ 0x140041DB0 (IoFreeMdl.c)
 *     MmBuildMdlForNonPagedPool @ 0x1400948D0 (MmBuildMdlForNonPagedPool.c)
 *     IoAllocateMdl @ 0x140098CD0 (IoAllocateMdl.c)
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 */

bool __fastcall HvlGetCoverageData(char a1, ULONG a2, void *a3)
{
  __int16 v4; // bx
  bool v5; // bp
  struct _MDL *Mdl; // rax
  struct _MDL *v7; // r14
  unsigned __int64 v8; // rdi
  _DWORD *v9; // rbx
  PHYSICAL_ADDRESS v11[3]; // [rsp+30h] [rbp-918h] BYREF
  PHYSICAL_ADDRESS v12[3]; // [rsp+50h] [rbp-8F8h] BYREF
  _BYTE v13[144]; // [rsp+70h] [rbp-8D8h] BYREF
  _BYTE v14[2064]; // [rsp+100h] [rbp-848h] BYREF

  v4 = (__int16)a3;
  v5 = 0;
  Mdl = IoAllocateMdl(a3, a2, 0, 0, 0LL);
  v7 = Mdl;
  if ( Mdl )
  {
    MmBuildMdlForNonPagedPool(Mdl);
    v8 = ((v4 & 0xFFF) + 4095LL + (unsigned __int64)v7->ByteCount) >> 12;
    v9 = (_DWORD *)HvlpAcquireHypercallPage(v11, 1, (__int64)v14, 1032LL);
    HvlpAcquireHypercallPage(v12, 2, (__int64)v13, 72LL);
    *v9 = (a1 != 0) + 1;
    v9[1] = v8;
    memmove(v9 + 2, &v7[1], 8LL * (unsigned int)v8);
    LOWORD(v9) = HvcallCodeVa();
    HvlpReleaseHypercallPage((__int64)v11);
    HvlpReleaseHypercallPage((__int64)v12);
    v5 = (_WORD)v9 == 0;
    IoFreeMdl(v7);
  }
  return v5;
}
