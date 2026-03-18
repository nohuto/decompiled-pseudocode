/*
 * XREFs of ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C024E70C
 * Callers:
 *     NtGdiDdDestroyFullscreenSprite @ 0x1C0252D00 (NtGdiDdDestroyFullscreenSprite.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AAD4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AB14 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreDeleteSprite @ 0x1C008BA1C (GreDeleteSprite.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0091F38 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0091F74 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall SpDdDestroyFullscreenSprite(HDC a1, void *a2)
{
  unsigned int v3; // ebx
  DC *v4; // rdi
  HDEV v5; // rdi
  struct PDEVOBJ *v6; // rdx
  DYNAMICMODECHANGESHARELOCK *v7; // rcx
  DC *v9[5]; // [rsp+20h] [rbp-28h] BYREF
  char v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v9[1] = 0LL;
  v3 = -1073741811;
  XDCOBJ::vLock(v9, a1);
  v4 = v9[0];
  if ( v9[0] )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v10);
    v11 = ghsemGreLock;
    GreAcquireSemaphore(ghsemGreLock);
    v5 = (HDEV)*((_QWORD *)v4 + 6);
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v10, v6, 0LL, 0LL);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    if ( g_pDwmState && (unsigned int)GreDeleteSprite(v5, 0LL, a2, 1) )
      v3 = 0;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    XDCOBJ::vUnlockFast((XDCOBJ *)v9);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v10);
    SEMOBJ::vUnlock((SEMOBJ *)&v11);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v7);
  }
  return v3;
}
