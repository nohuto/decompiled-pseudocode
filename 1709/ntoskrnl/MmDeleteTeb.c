/*
 * XREFs of MmDeleteTeb @ 0x14056A768
 * Callers:
 *     PspAllocateThread @ 0x140493710 (PspAllocateThread.c)
 *     PspInsertThread @ 0x1404D54CC (PspInsertThread.c)
 *     PspExitThread @ 0x1404D5FB4 (PspExitThread.c)
 * Callees:
 *     MiObtainReferencedVad @ 0x140040AF0 (MiObtainReferencedVad.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiFreeToSubAllocatedRegion @ 0x14056A828 (MiFreeToSubAllocatedRegion.c)
 */

__int64 __fastcall MmDeleteTeb(_KPROCESS *BugCheckParameter1, unsigned __int64 a2)
{
  void *v3; // rax
  int v5; // [rsp+20h] [rbp-48h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v6; // [rsp+28h] [rbp-40h] BYREF

  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v6);
  v3 = (void *)MiObtainReferencedVad(a2, &v5);
  if ( v3 )
    MiFreeToSubAllocatedRegion(v3);
  return KiUnstackDetachProcess(&v6, 0LL);
}
