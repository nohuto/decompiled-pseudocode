/*
 * XREFs of vCleanupUMWindowlessSprite @ 0x1C00245D0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteSprite @ 0x1C001DBF8 (GreDeleteSprite.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024718 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024758 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0025370 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C006A07C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall vCleanupUMWindowlessSprite(__int64 a1)
{
  int v1; // edi
  __int64 v2; // rcx
  HDEV HDEV; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct DwmState *v7; // rdx
  char *v8; // rax
  char *v9; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  DYNAMICMODECHANGESHARELOCK *v13; // rcx
  __int64 v14[5]; // [rsp+20h] [rbp-28h] BYREF
  char v15; // [rsp+58h] [rbp+10h] BYREF
  int v16; // [rsp+60h] [rbp+18h] BYREF
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  v1 = a1;
  if ( g_pDwmState && PsGetCurrentProcess(a1) != gpepCSRSS )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v15);
    v14[0] = ghsemGreLock;
    GreAcquireSemaphore(ghsemGreLock);
    HDEV = (HDEV)UserGetHDEV(v2);
    W32GetThreadWin32Thread(KeGetCurrentThread(), v4, v5, v6);
    GreAcquireSemaphore(ghsemSprite);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
    v16 = 1;
    v17 = ghsemDwmState;
    GreAcquireSemaphore(ghsemDwmState);
    v7 = g_pDwmState;
    if ( g_pDwmState )
    {
      v8 = (char *)g_pDwmState + 80;
      v9 = (char *)*((_QWORD *)g_pDwmState + 10);
      while ( v9 != v8 )
      {
        v10 = (__int64)v9;
        v11 = (unsigned __int64)(v9 - 24);
        v9 = *(char **)v9;
        v12 = -v10;
        if ( (*(_DWORD *)((v11 & -(__int64)(v12 != 0)) + 0x48) & 0x400000) != 0
          && *(_DWORD *)((v11 & -(__int64)(v12 != 0)) + 0x70) == v1 )
        {
          GreDeleteSprite(HDEV, 0LL, *(void **)(v11 & -(__int64)(v12 != 0)), 1);
          v7 = g_pDwmState;
        }
        v8 = (char *)(*(_QWORD *)v7 + 80LL);
      }
    }
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v17);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v16);
    SEMOBJ::vUnlock((SEMOBJ *)v14);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v13);
  }
}
