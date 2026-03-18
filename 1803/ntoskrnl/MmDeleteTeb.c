/*
 * XREFs of MmDeleteTeb @ 0x140562BFC
 * Callers:
 *     PspInsertThread @ 0x1404B7C74 (PspInsertThread.c)
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 *     PspAllocateThread @ 0x1405B8EE8 (PspAllocateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiObtainReferencedVadEx @ 0x14001B0F0 (MiObtainReferencedVadEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiFreeToSubAllocatedRegion @ 0x140562CBC (MiFreeToSubAllocatedRegion.c)
 */

__int64 __fastcall MmDeleteTeb(_KPROCESS *BugCheckParameter1, unsigned __int64 a2)
{
  void *v3; // rax
  int v5; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v6[48]; // [rsp+28h] [rbp-40h] BYREF

  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v6);
  v3 = (void *)MiObtainReferencedVadEx(a2, 0, &v5);
  if ( v3 )
    MiFreeToSubAllocatedRegion(v3);
  return KiUnstackDetachProcess((__int64)v6, 0LL);
}
