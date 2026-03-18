/*
 * XREFs of AlpcpFreeMessageFunction @ 0x1404F7000
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExMapHandleToPointerEx @ 0x1404F6FA8 (ExMapHandleToPointerEx.c)
 *     ExDestroyHandle @ 0x1404F81FC (ExDestroyHandle.c)
 */

void __fastcall AlpcpFreeMessageFunction(_DWORD *a1)
{
  unsigned int v2; // edx
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rax

  v2 = a1[78] & 0x7FFFFFFF;
  if ( v2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( (v2 & 0xFC000000) != 0 )
    {
      v4 = 0LL;
      if ( AlpcpSecondaryMessageTables )
        v4 = *(_QWORD *)(AlpcpSecondaryMessageTables + 8 * ((unsigned __int64)v2 >> 26));
    }
    else
    {
      v4 = AlpcMessageTable;
    }
    v5 = v2 & 0x3FFFFFF;
    v6 = ExMapHandleToPointerEx(v4, v2 & 0x3FFFFFF, KeGetCurrentThread()->PreviousMode);
    ExDestroyHandle(v4, v5, v6);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  ExFreePoolWithTag(a1, 0);
}
