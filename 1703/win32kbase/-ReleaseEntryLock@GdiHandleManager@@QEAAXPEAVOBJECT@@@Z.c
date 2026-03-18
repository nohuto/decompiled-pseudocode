/*
 * XREFs of ?ReleaseEntryLock@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1C00332B0
 * Callers:
 *     HmgLock @ 0x1C002F7C0 (HmgLock.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0033500 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

void __fastcall GdiHandleManager::ReleaseEntryLock(GdiHandleManager *this, struct OBJECT *a2)
{
  GdiHandleManager *v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // r8
  unsigned int v5; // edx
  signed int v6; // ecx
  __int64 v7; // r10

  v2 = gpHandleManager;
  v3 = (unsigned __int16)*(_DWORD *)a2 | (*(_DWORD *)a2 >> 8) & 0xFF0000u;
  if ( (unsigned int)v3 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)*(_DWORD *)a2,
                                  1)
           + 13) == WORD1(v3) )
        v3 = (unsigned __int16)v3;
    }
    else
    {
      v3 = (unsigned __int16)*(_DWORD *)a2;
    }
    if ( (unsigned int)v3 >= 0x10000 && *(_DWORD *)v2 > 0x10000u )
      GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v2 + 2), (unsigned __int16)v3, 1);
  }
  v4 = *((_QWORD *)v2 + 2);
  v5 = *(_DWORD *)(v4 + 2056);
  if ( (unsigned int)v3 < v5 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
  {
    if ( (unsigned int)v3 < v5 )
    {
      v6 = 0;
    }
    else
    {
      v6 = (((unsigned int)v3 - v5) >> 16) + 1;
      if ( ((unsigned int)v3 - v5) >> 16 == -2 )
        return;
    }
    v7 = *(_QWORD *)(v4 + 8LL * v6 + 8);
    if ( v6 )
      v3 = (_DWORD)v3 - (v6 << 16) - v5 + 0x10000;
    *(_DWORD *)(*(_QWORD *)v7 + 24 * v3 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v7 + 24) + 8 * ((unsigned __int64)(unsigned int)v3 >> 8)) + 16LL * (unsigned __int8)v3,
      0LL);
    KeLeaveCriticalRegion();
  }
}
