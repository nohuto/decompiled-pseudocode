/*
 * XREFs of ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C005AE14
 * Callers:
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C005AD88 (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 * Callees:
 *     GreLockVisRgn @ 0x1C0037BE0 (GreLockVisRgn.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     GreLockSprite @ 0x1C005C0E0 (GreLockSprite.c)
 *     GreLockDisplayDevice @ 0x1C005C1F0 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C005C230 (GreUnlockDisplayDevice.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DxLddmPrimaryLockCleanUpSinglePDev(struct PDEVOBJ *a1, int a2, int a3)
{
  _QWORD **v4; // r14
  _QWORD *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rcx
  _QWORD *v9; // rax
  int v10; // ecx

  GreLockVisRgn(*(_QWORD *)a1, a2, a3);
  GreLockSprite(*(_QWORD *)a1);
  GreLockDisplayDevice(*(_QWORD *)a1);
  v4 = (_QWORD **)(*(_QWORD *)a1 + 2640LL);
  v5 = *v4;
  while ( v5 != v4 )
  {
    v7 = (__int64)v5;
    v5 = (_QWORD *)*v5;
    v8 = *(_QWORD *)v7;
    v9 = *(_QWORD **)(v7 + 8);
    if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 || *v9 != v7 )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    v10 = *(_DWORD *)(v7 + 20);
    if ( v10 )
    {
      *(_DWORD *)(*(_QWORD *)a1 + 2656LL) -= v10;
      vSpUnTearDownSprites(*(_QWORD *)a1, v7 + 28, 1LL);
    }
    Win32FreePool(v7);
  }
  GreUnlockDisplayDevice(*(_QWORD *)a1);
  EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
    PsLeavePriorityRegion(v6);
  }
  GreUnlockVisRgn(*(_QWORD *)a1);
}
