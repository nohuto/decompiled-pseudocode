/*
 * XREFs of HvlGetCoverageData @ 0x1401E4A10
 * Callers:
 *     ExpCovQueryHypervisorInformation @ 0x14071F6EC (ExpCovQueryHypervisorInformation.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x14005A730 (MmBuildMdlForNonPagedPool.c)
 *     IoFreeMdl @ 0x1401148E0 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x1401176F0 (IoAllocateMdl.c)
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
 */

bool __fastcall HvlGetCoverageData(char a1, ULONG a2, void *a3)
{
  __int16 v3; // bx
  bool v5; // bp
  struct _MDL *Mdl; // rax
  struct _MDL *v7; // r14
  unsigned __int64 v8; // rdi
  _DWORD *v9; // rbx
  _BYTE v11[24]; // [rsp+30h] [rbp-918h] BYREF
  _BYTE v12[24]; // [rsp+50h] [rbp-8F8h] BYREF
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
    v9 = (_DWORD *)HvlpAcquireHypercallPage(v11, 1LL, v14, 1032LL);
    HvlpAcquireHypercallPage(v12, 2LL, v13, 72LL);
    v9[1] = v8;
    *v9 = (a1 != 0) + 1;
    memmove(v9 + 2, &v7[1], 8LL * (unsigned int)v8);
    v5 = (unsigned __int16)HvcallCodeVa() == 0;
    HvlpReleaseHypercallPage(v11);
    HvlpReleaseHypercallPage(v12);
    IoFreeMdl(v7);
  }
  return v5;
}
