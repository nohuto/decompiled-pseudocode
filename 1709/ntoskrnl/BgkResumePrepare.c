/*
 * XREFs of BgkResumePrepare @ 0x14042A5F4
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140433C3C (PopMarkComponentsBootPhase.c)
 *     PopAllocateHiberContext @ 0x1406FAC78 (PopAllocateHiberContext.c)
 * Callees:
 *     PoSetHiberRange @ 0x140241970 (PoSetHiberRange.c)
 *     BgkpUnlockBgfxCodeSection @ 0x1407D08B8 (BgkpUnlockBgfxCodeSection.c)
 *     BgkpLockBgfxCodeSection @ 0x1407D0C80 (BgkpLockBgfxCodeSection.c)
 *     BgGetContext @ 0x1407D2E90 (BgGetContext.c)
 *     BgMarkHiberPhase @ 0x1407D2F48 (BgMarkHiberPhase.c)
 */

__int64 __fastcall BgkResumePrepare(PVOID MemoryMap)
{
  unsigned int v1; // ebx
  __int64 Context; // rax
  void *v4; // rdi
  void *v5; // r8
  _QWORD *v6; // rdi
  void *v7; // r8

  v1 = 0;
  if ( MemoryMap )
  {
    BgkpLockBgfxCodeSection();
    Context = BgGetContext();
    v4 = (void *)Context;
    if ( !Context )
    {
      BgkpUnlockBgfxCodeSection();
      return (unsigned int)-1073741670;
    }
    v5 = *(void **)(Context + 16);
    if ( v5 )
      PoSetHiberRange(MemoryMap, 0x8000u, v5, *(unsigned int *)(Context + 24), 0x4B494742u);
    Address = v4;
  }
  else
  {
    v6 = Address;
    if ( !Address )
      return (unsigned int)-1073741670;
    PoSetHiberRange(0LL, 0x10000u, Address, *(unsigned int *)Address, 0);
    v7 = (void *)v6[2];
    if ( v7 )
      PoSetHiberRange(0LL, 0x10000u, v7, *((unsigned int *)v6 + 6), 0);
    return (unsigned int)BgMarkHiberPhase();
  }
  return v1;
}
