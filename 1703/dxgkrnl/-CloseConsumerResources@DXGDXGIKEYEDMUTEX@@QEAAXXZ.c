/*
 * XREFs of ?CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C01ABF5C
 * Callers:
 *     ??1DXGDXGIKEYEDMUTEX@@QEAA@XZ @ 0x1C01ABAAC (--1DXGDXGIKEYEDMUTEX@@QEAA@XZ.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C01B2680 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C01AC258 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 */

void __fastcall DXGDXGIKEYEDMUTEX::CloseConsumerResources(struct _KPROCESS **this)
{
  __int64 CurrentProcess; // rax
  struct _KPROCESS *v3; // rdi
  struct _KPROCESS *v4; // rsi
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  if ( *((_DWORD *)this + 12) )
  {
    CurrentProcess = PsGetCurrentProcess(this);
    v3 = this[8];
    v4 = (struct _KPROCESS *)CurrentProcess;
    if ( (struct _KPROCESS *)CurrentProcess != v3 )
      KeStackAttachProcess(v3, &ApcState);
    DXGDXGIKEYEDMUTEX::CloseLocalMutex(this, 1LL, 1LL);
    if ( v4 != v3 )
      KeUnstackDetachProcess(&ApcState);
  }
}
