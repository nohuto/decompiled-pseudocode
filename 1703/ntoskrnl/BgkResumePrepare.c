/*
 * XREFs of BgkResumePrepare @ 0x14040CFC0
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x14040D5C8 (PopMarkComponentsBootPhase.c)
 *     PopAllocateHiberContext @ 0x14057AF78 (PopAllocateHiberContext.c)
 * Callees:
 *     PoSetHiberRange @ 0x14013EF30 (PoSetHiberRange.c)
 *     BgMarkHiberPhase @ 0x140755380 (BgMarkHiberPhase.c)
 *     BgGetContext @ 0x14075540C (BgGetContext.c)
 *     BgkpLockBgfxCodeSection @ 0x140755680 (BgkpLockBgfxCodeSection.c)
 *     BgkpUnlockBgfxCodeSection @ 0x140755710 (BgkpUnlockBgfxCodeSection.c)
 */

__int64 __fastcall BgkResumePrepare(PVOID MemoryMap)
{
  unsigned int v1; // ebx
  __int64 Context; // rax
  void *v4; // rdi
  void *v5; // r8
  _QWORD *v7; // rdi
  void *v8; // r8

  v1 = 0;
  if ( MemoryMap )
  {
    BgkpLockBgfxCodeSection();
    Context = BgGetContext();
    v4 = (void *)Context;
    if ( Context )
    {
      v5 = *(void **)(Context + 16);
      if ( v5 )
        PoSetHiberRange(MemoryMap, 0x8000u, v5, *(unsigned int *)(Context + 24), 0x4B494742u);
      Address = v4;
      return v1;
    }
    BgkpUnlockBgfxCodeSection();
    return (unsigned int)-1073741670;
  }
  v7 = Address;
  if ( !Address )
    return (unsigned int)-1073741670;
  PoSetHiberRange(0LL, 0x10000u, Address, *(unsigned int *)Address, 0);
  v8 = (void *)v7[2];
  if ( v8 )
    PoSetHiberRange(0LL, 0x10000u, v8, *((unsigned int *)v7 + 6), 0);
  return (unsigned int)BgMarkHiberPhase();
}
