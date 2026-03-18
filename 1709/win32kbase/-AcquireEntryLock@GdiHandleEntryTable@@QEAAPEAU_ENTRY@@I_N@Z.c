/*
 * XREFs of ?AcquireEntryLock@GdiHandleEntryTable@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E8D0
 * Callers:
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E710 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 * Callees:
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C004E8A0 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 */

struct _ENTRY *__fastcall GdiHandleEntryTable::AcquireEntryLock(GdiHandleEntryTable *this, unsigned int a2, char a3)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v8; // r15

  v3 = 0LL;
  v4 = a2;
  if ( a2 >= *((_DWORD *)this + 5) )
    return 0LL;
  v8 = *(_QWORD *)(**((_QWORD **)this + 3) + 8 * ((unsigned __int64)a2 >> 8)) + 16LL * (unsigned __int8)a2;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v8, 0LL);
  if ( a3 || GdiHandleEntryTable::GetEntryObject(this, v4) )
  {
    *(_DWORD *)(24 * v4 + *(_QWORD *)this + 8) |= 1u;
    return (struct _ENTRY *)(24 * v4 + *(_QWORD *)this);
  }
  else
  {
    ExReleasePushLockExclusiveEx(v8, 0LL);
    KeLeaveCriticalRegion();
  }
  return (struct _ENTRY *)v3;
}
