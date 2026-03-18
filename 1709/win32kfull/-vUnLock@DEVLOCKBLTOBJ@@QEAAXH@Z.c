/*
 * XREFs of ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C0252F78
 * Callers:
 *     SimBitBlt @ 0x1C02530A0 (SimBitBlt.c)
 * Callees:
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C002238C (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00224A4 (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C00229DC (-vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ?vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C0022A2C (-vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

void __fastcall DEVLOCKBLTOBJ::vUnLock(DEVLOCKBLTOBJ *this)
{
  int v1; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *((_DWORD *)this + 18);
  if ( (v1 & 0x1000) != 0 )
  {
    DEVLOCKBLTOBJ::vUnMap(this);
    DEVLOCKBLTOBJ::vFlushSpriteUpdates(this);
    if ( (*((_DWORD *)this + 18) & 0x8000) != 0 )
    {
      DEVLOCKBLTOBJ::bDisposeTrgDco(this);
      _InterlockedOr(v10, 0);
      DEVLOCKBLTOBJ::bDisposeSrcDco(this);
      *((_DWORD *)this + 18) &= ~0x8000u;
    }
    else
    {
      DEVLOCKBLTOBJ::bDisposeSrcDco(this);
      _InterlockedOr(v10, 0);
      DEVLOCKBLTOBJ::bDisposeTrgDco(this);
    }
    GreDecLockCount();
    *((_DWORD *)this + 18) &= ~0x1000u;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3, v4, v5);
    if ( ThreadWin32Thread )
    {
      *(_QWORD *)(ThreadWin32Thread + 320) = 0LL;
      *(_QWORD *)(ThreadWin32Thread + 312) = 0LL;
    }
  }
  else if ( (v1 & 0x800000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 18) &= ~0x800000u;
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *(_QWORD *)this);
    GreReleaseSemaphoreInternal(*(_QWORD *)this);
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
  v7 = *((_QWORD *)this + 1);
  if ( v7 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemSrc", v7);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
  v8 = *((_DWORD *)this + 18);
  if ( (v8 & 8) != 0 )
    *((_DWORD *)this + 18) = v8 & 0xFFFFFFF7;
  v9 = *((_QWORD *)this + 2);
  if ( v9 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v9);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
  }
}
