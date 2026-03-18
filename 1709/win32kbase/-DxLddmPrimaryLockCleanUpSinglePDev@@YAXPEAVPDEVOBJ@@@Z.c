/*
 * XREFs of ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C0067978
 * Callers:
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C00678EC (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 * Callees:
 *     GreLockVisRgn @ 0x1C003E280 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C003FD70 (GreUnlockVisRgn.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     GreLockDisplayDevice @ 0x1C0068620 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C0068660 (GreUnlockDisplayDevice.c)
 *     GreLockSprite @ 0x1C00686C0 (GreLockSprite.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DxLddmPrimaryLockCleanUpSinglePDev(struct PDEVOBJ *a1, int a2, int a3)
{
  _QWORD **v4; // r14
  _QWORD *v5; // rsi
  __int64 v6; // rdx
  int v7; // r8d
  __int64 v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rcx
  int v11; // ecx

  GreLockVisRgn(*(_QWORD *)a1, a2, a3);
  GreLockSprite(*(_QWORD *)a1);
  GreLockDisplayDevice(*(_QWORD *)a1);
  v4 = (_QWORD **)(*(_QWORD *)a1 + 2640LL);
  v5 = *v4;
  while ( v5 != v4 )
  {
    v8 = (__int64)v5;
    v5 = (_QWORD *)*v5;
    v9 = *(_QWORD *)v8;
    if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 || (v10 = *(_QWORD **)(v8 + 8), *v10 != v8) )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    v11 = *(_DWORD *)(v8 + 20);
    if ( v11 )
    {
      *(_DWORD *)(*(_QWORD *)a1 + 2656LL) -= v11;
      vSpUnTearDownSprites(*(_QWORD *)a1, v8 + 28, 1LL);
    }
    Win32FreePool(v8);
  }
  GreUnlockDisplayDevice(*(_QWORD *)a1);
  EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
    PsLeavePriorityRegion();
  }
  GreUnlockVisRgn(*(_QWORD *)a1, v6, v7);
}
