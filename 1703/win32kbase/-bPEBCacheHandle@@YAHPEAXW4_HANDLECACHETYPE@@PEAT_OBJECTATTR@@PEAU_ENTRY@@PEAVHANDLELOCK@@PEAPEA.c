/*
 * XREFs of ?bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C003F184
 * Callers:
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C003E550 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     bDeleteBrush @ 0x1C0058800 (bDeleteBrush.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C0032EC0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C003338C (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 */

__int64 __fastcall bPEBCacheHandle(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4, HANDLELOCK *a5, __int64 a6)
{
  __int64 v8; // r12
  unsigned int v9; // esi
  _QWORD *CurrentProcessWin32Process; // rdi
  struct OBJECT *EntryObject; // r14
  __int64 ProcessPeb; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // r8
  _QWORD *v17; // rdx
  _QWORD *v18; // rcx
  signed __int32 v20[8]; // [rsp+0h] [rbp-68h] BYREF
  int v21; // [rsp+20h] [rbp-48h]
  int v22; // [rsp+24h] [rbp-44h]
  _QWORD *v23; // [rsp+28h] [rbp-40h]

  v8 = (int)a2;
  v9 = 0;
  v21 = 0;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1, a2, a3);
  EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *a4 & 0xFFFFFF);
  GdiHandleManager::_IncrementOrDecrementUniqueness((GdiHandleEntryDirectory **)gpHandleManager, EntryObject, 1);
  ProcessPeb = PsGetProcessPeb(*CurrentProcessWin32Process);
  v13 = ProcessPeb;
  if ( ProcessPeb )
  {
    v14 = *(_QWORD *)(ProcessPeb + 320);
    v15 = 0;
    v22 = 0;
    if ( !v14 )
    {
      v15 = v22;
      if ( !_InterlockedCompareExchange64(
              (volatile signed __int64 *)(v13 + 320),
              (signed __int64)KeGetPcr()->NtTib.Self,
              0LL) )
        v15 = 1;
      v22 = v15;
      v9 = v21;
    }
    if ( v15 )
    {
      v16 = (unsigned int)gCacheHandleEntries[v8];
      if ( *(_DWORD *)(v13 + 4 * v8 + 328) < (unsigned int)v16 )
      {
        v17 = (_QWORD *)(v13 + 8 * (*((unsigned int *)&gCacheHandleOffsets + v8) + 43LL));
        v23 = v17;
        v18 = &v17[v16];
        while ( v17 != v18 )
        {
          if ( !*v17 )
          {
            *v17 = *(_QWORD *)EntryObject;
            ++*(_DWORD *)(v13 + 4 * v8 + 328);
            *a3 &= 0xFFFFFFF5;
            *a3 |= 1u;
            _InterlockedOr(v20, 0);
            v9 = 1;
            v21 = 1;
            HANDLELOCK::vUnlock(a5);
            if ( a6 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)a6 + 12LL));
              *(_QWORD *)a6 = 0LL;
              v9 = v21;
            }
            break;
          }
          v23 = ++v17;
        }
      }
      *(_QWORD *)(v13 + 320) = 0LL;
    }
  }
  if ( !v9 )
    GdiHandleManager::_IncrementOrDecrementUniqueness((GdiHandleEntryDirectory **)gpHandleManager, EntryObject, 0);
  return v9;
}
