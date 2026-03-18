/*
 * XREFs of ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C004E198
 * Callers:
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C004E10C (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     GreLockVisRgn @ 0x1C00333D0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C0033460 (GreUnlockVisRgn.c)
 *     GreLockSprite @ 0x1C0034910 (GreLockSprite.c)
 *     GreLockDisplayDevice @ 0x1C004E9C0 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C004EA00 (GreUnlockDisplayDevice.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DxLddmPrimaryLockCleanUpSinglePDev(struct PDEVOBJ *a1, int a2, int a3)
{
  _QWORD **v4; // rsi
  _QWORD *v5; // r14
  __int64 v6; // rdx
  int v7; // r8d
  _QWORD *v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rcx
  int v11; // ecx

  GreLockVisRgn(*(_QWORD *)a1, a2, a3);
  GreLockSprite();
  GreLockDisplayDevice(*(_QWORD *)a1);
  v4 = (_QWORD **)(*(_QWORD *)a1 + 2616LL);
  v5 = *v4;
  while ( v5 != v4 )
  {
    v8 = (_QWORD *)*v5;
    v9 = (__int64)v5;
    v5 = v8;
    if ( v8[1] != v9 || (v10 = *(_QWORD **)(v9 + 8), *v10 != v9) )
      __fastfail(3u);
    *v10 = v8;
    v8[1] = v10;
    v11 = *(_DWORD *)(v9 + 20);
    if ( v11 )
    {
      *(_DWORD *)(*(_QWORD *)a1 + 2632LL) -= v11;
      vSpUnTearDownSprites(*(_QWORD *)a1, v9 + 28, 1LL);
    }
    Win32FreePool(v9);
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
