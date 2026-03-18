/*
 * XREFs of MmDeleteTeb @ 0x140499B6C
 * Callers:
 *     PspAllocateThread @ 0x14053F490 (PspAllocateThread.c)
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 *     PspInsertThread @ 0x1405408E4 (PspInsertThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiObtainReferencedVad @ 0x1400BDAC0 (MiObtainReferencedVad.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiFreeToSubAllocatedRegion @ 0x140499C38 (MiFreeToSubAllocatedRegion.c)
 */

__int64 __fastcall MmDeleteTeb(_KPROCESS *BugCheckParameter1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v5; // rbx
  unsigned int *v6; // rax
  __int16 v8; // cx
  int v9; // [rsp+20h] [rbp-48h] BYREF
  $5BC46E0569261879018906DEC3127961 v10; // [rsp+28h] [rbp-40h] BYREF

  v2 = BugCheckParameter1[1].ActiveProcessors.Bitmap[7];
  if ( v2 && ((v8 = *(_WORD *)(v2 + 8), v8 == 332) || v8 == 452) )
  {
    if ( *(_WORD *)(v2 + 8) == 0x8664 )
      v5 = 14392LL;
    else
      v5 = 12288LL;
  }
  else
  {
    v5 = 6200LL;
  }
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v10);
  v6 = MiObtainReferencedVad(a2, &v9);
  if ( v6 )
    MiFreeToSubAllocatedRegion(v6, 0LL, a2, (v5 + 4095) & 0xFFFFF000LL);
  return KiUnstackDetachProcess(&v10, 0LL);
}
