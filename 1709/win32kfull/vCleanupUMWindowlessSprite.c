/*
 * XREFs of vCleanupUMWindowlessSprite @ 0x1C0091DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AAD4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AB14 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00898E4 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     GreDeleteSprite @ 0x1C008BA1C (GreDeleteSprite.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0091F38 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall vCleanupUMWindowlessSprite(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v3; // rcx
  HDEV HDEV; // rsi
  char *v5; // rax
  char *v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  DYNAMICMODECHANGESHARELOCK *v10; // rcx
  __int64 v11[5]; // [rsp+20h] [rbp-28h] BYREF
  char v12; // [rsp+58h] [rbp+10h] BYREF
  int v13; // [rsp+60h] [rbp+18h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v2 = a1;
  if ( g_pDwmState && PsGetCurrentProcess(a1, a2) != gpepCSRSS )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v12);
    v11[0] = ghsemGreLock;
    GreAcquireSemaphore(ghsemGreLock);
    HDEV = (HDEV)UserGetHDEV(v3);
    W32GetThreadWin32Thread(KeGetCurrentThread());
    GreAcquireSemaphore(ghsemSprite);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
    v13 = 1;
    v14 = ghsemDwmState;
    GreAcquireSemaphore(ghsemDwmState);
    if ( g_pDwmState )
    {
      v5 = (char *)g_pDwmState + 80;
      v6 = (char *)*((_QWORD *)g_pDwmState + 10);
      while ( v6 != v5 )
      {
        v7 = (__int64)v6;
        v8 = (unsigned __int64)(v6 - 24);
        v6 = *(char **)v6;
        v9 = -v7;
        if ( (*(_DWORD *)((v8 & -(__int64)(v9 != 0)) + 0x48) & 0x400000) != 0
          && *(_DWORD *)((v8 & -(__int64)(v9 != 0)) + 0x70) == v2 )
        {
          GreDeleteSprite(HDEV, 0LL, *(void **)(v8 & -(__int64)(v9 != 0)), 1);
        }
        v5 = (char *)g_pDwmState + 80;
      }
    }
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v14);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v13);
    SEMOBJ::vUnlock((SEMOBJ *)v11);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v10);
  }
}
