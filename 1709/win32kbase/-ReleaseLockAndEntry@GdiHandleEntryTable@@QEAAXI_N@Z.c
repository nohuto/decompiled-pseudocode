/*
 * XREFs of ?ReleaseLockAndEntry@GdiHandleEntryTable@@QEAAXI_N@Z @ 0x1C004E944
 * Callers:
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C004E75C (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 * Callees:
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C004E8A0 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 */

void __fastcall GdiHandleEntryTable::ReleaseLockAndEntry(GdiHandleEntryTable *this, unsigned int a2, char a3)
{
  unsigned __int64 v3; // r10
  GdiHandleEntryTable *v4; // r9

  v3 = a2;
  v4 = this;
  if ( a3 || GdiHandleEntryTable::GetEntryObject(this, a2) )
  {
    if ( (unsigned int)v3 < *((_DWORD *)v4 + 5) )
      *(_QWORD *)(*(_QWORD *)(**((_QWORD **)v4 + 3) + 8 * (v3 >> 8)) + 16LL * (unsigned __int8)v3 + 8) = 0LL;
    *(_QWORD *)(*(_QWORD *)v4 + 24 * v3) = *((unsigned int *)v4 + 3);
    --*((_DWORD *)v4 + 4);
    *((_DWORD *)v4 + 3) = v3;
  }
  ExReleasePushLockExclusiveEx(*(_QWORD *)(**((_QWORD **)v4 + 3) + 8 * (v3 >> 8)) + 16LL * (unsigned __int8)v3, 0LL);
  KeLeaveCriticalRegion();
}
