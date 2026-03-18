/*
 * XREFs of CmpInsertCallbackInListByAltitude @ 0x140651568
 * Callers:
 *     CmpRegisterCallbackInternal @ 0x140651468 (CmpRegisterCallbackInternal.c)
 * Callees:
 *     RtlCompareAltitudes @ 0x1400C0F70 (RtlCompareAltitudes.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 */

__int64 __fastcall CmpInsertCallbackInListByAltitude(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rsi
  __int64 *v9; // rax
  __int64 v10; // rcx
  LONG v12; // eax

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  *(_QWORD *)(a1 + 24) = ++CmpCallbackCookie;
  v8 = CallbackListHead;
  if ( (__int64 *)CallbackListHead != &CallbackListHead )
  {
    do
    {
      v12 = RtlCompareAltitudes((PCUNICODE_STRING)(v8 + 48), (PCUNICODE_STRING)(a1 + 48));
      if ( v12 )
      {
        if ( v12 < 0 )
          break;
      }
      else if ( !a2 )
      {
        goto LABEL_12;
      }
      v8 = *(_QWORD *)v8;
    }
    while ( (__int64 *)v8 != &CallbackListHead );
    if ( !v12 && !a2 )
    {
LABEL_12:
      v3 = -1071906799;
      goto LABEL_4;
    }
  }
  v9 = *(__int64 **)(v8 + 8);
  v10 = *v9;
  if ( *(__int64 **)(*v9 + 8) != v9 )
    __fastfail(3u);
  *(_QWORD *)a1 = v10;
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)(v10 + 8) = a1;
  *v9 = a1;
  _InterlockedIncrement(&CmpCallBackCount);
LABEL_4:
  ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL, v6, v7);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3;
}
