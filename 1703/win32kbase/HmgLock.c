/*
 * XREFs of HmgLock @ 0x1C002F7C0
 * Callers:
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C003E9E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     GreLockRegion @ 0x1C00FCA30 (GreLockRegion.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C0030C40 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?ReleaseEntryLock@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1C00332B0 (-ReleaseEntryLock@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C0033470 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C0033780 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 */

__int64 __fastcall HmgLock(unsigned int a1, char a2)
{
  struct OBJECT *EntryObject; // rbx
  __int16 v4; // edi^2
  __int64 v5; // rsi
  _DWORD *v6; // r14
  struct _KTHREAD *CurrentThread; // rbp
  GdiHandleEntryDirectory **v8; // rdi
  unsigned int v9; // eax
  GdiHandleEntryDirectory *v10; // r8
  unsigned __int64 v11; // rcx
  unsigned int v12; // r9d
  signed int v13; // edx
  __int64 v14; // rax
  __int16 v15; // ax
  unsigned int v16; // edx
  unsigned int v17; // eax
  GdiHandleManager *v18; // rcx
  __int64 v20; // [rsp+20h] [rbp-38h] BYREF
  int v21; // [rsp+28h] [rbp-30h]
  unsigned int v22; // [rsp+60h] [rbp+8h] BYREF
  struct GdiHandleEntryTable *v23; // [rsp+70h] [rbp+18h] BYREF

  EntryObject = 0LL;
  v4 = HIWORD(a1);
  v20 = 0LL;
  v21 = 0;
  v5 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v20, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 1, 0);
  if ( !v21 )
    return v5;
  v6 = (_DWORD *)v20;
  if ( !v20 )
  {
    HANDLELOCK::vUnlock((HANDLELOCK *)&v20);
    return v5;
  }
  if ( *(_BYTE *)(v20 + 14) != a2 || *(_WORD *)(v20 + 12) != v4 )
    goto LABEL_14;
  CurrentThread = KeGetCurrentThread();
  v6 = (_DWORD *)v20;
  v8 = (GdiHandleEntryDirectory **)gpHandleManager;
  v9 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v20 & 0xFFFFFF);
  v10 = v8[2];
  v11 = v9;
  v12 = *((_DWORD *)v10 + 514);
  if ( v9 < v12 + ((*((unsigned __int16 *)v10 + 1) + 0xFFFF) << 16) )
  {
    if ( v9 < v12 )
    {
      v13 = 0;
LABEL_8:
      v14 = *((_QWORD *)v10 + v13 + 1);
      if ( v13 )
        v11 = (_DWORD)v11 - (v13 << 16) - v12 + 0x10000;
      if ( (unsigned int)v11 < *(_DWORD *)(v14 + 20) )
        v5 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * (v11 >> 8)) + 16LL * (unsigned __int8)v11 + 8);
      goto LABEL_12;
    }
    v13 = ((v9 - v12) >> 16) + 1;
    if ( (v9 - v12) >> 16 != -2 )
      goto LABEL_8;
  }
LABEL_12:
  v15 = *(_WORD *)(v5 + 12);
  if ( v15 && *(struct _KTHREAD **)(v5 + 16) != CurrentThread )
  {
    v5 = 0LL;
    goto LABEL_15;
  }
  *(_QWORD *)(v5 + 16) = CurrentThread;
  *(_WORD *)(v5 + 12) = v15 + 1;
LABEL_14:
  v8 = (GdiHandleEntryDirectory **)gpHandleManager;
LABEL_15:
  v16 = *v6 & 0xFFFFFF;
  v23 = 0LL;
  v22 = 0;
  v17 = GdiHandleManager::DecodeIndex((GdiHandleManager *)v8, v16);
  if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(v8[2], v17, &v23, &v22) )
    EntryObject = GdiHandleEntryTable::GetEntryObject(v23, v22);
  GdiHandleManager::ReleaseEntryLock(v18, EntryObject);
  KeLeaveCriticalRegion();
  return v5;
}
