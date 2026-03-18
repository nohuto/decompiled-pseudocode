/*
 * XREFs of ?AcquireEntryLock@GdiHandleEntryTable@@QEAA_NI_N@Z @ 0x1C00337B0
 * Callers:
 *     ReleaseCacheDC @ 0x1C002FBD0 (ReleaseCacheDC.c)
 * Callees:
 *     <none>
 */

char __fastcall GdiHandleEntryTable::AcquireEntryLock(GdiHandleEntryTable *this, unsigned int a2, char a3)
{
  char v3; // si
  __int64 v4; // rdi
  __int64 v7; // r15

  v3 = 0;
  v4 = a2;
  if ( a2 >= *((_DWORD *)this + 5) )
    return 0;
  v7 = *(_QWORD *)(**((_QWORD **)this + 3) + 8 * ((unsigned __int64)a2 >> 8)) + 16LL * (unsigned __int8)a2;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v7, 0LL);
  if ( a3
    || (unsigned int)v4 < *((_DWORD *)this + 5)
    && *(_QWORD *)(*(_QWORD *)(**((_QWORD **)this + 3) + 8 * ((unsigned __int64)(unsigned int)v4 >> 8))
                 + 16LL * (unsigned __int8)v4
                 + 8) )
  {
    v3 = 1;
    *(_DWORD *)(*(_QWORD *)this + 24 * v4 + 8) |= 1u;
  }
  else
  {
    ExReleasePushLockExclusiveEx(v7, 0LL);
    KeLeaveCriticalRegion();
  }
  return v3;
}
