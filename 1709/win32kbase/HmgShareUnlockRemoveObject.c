/*
 * XREFs of HmgShareUnlockRemoveObject @ 0x1C0088FD0
 * Callers:
 *     <none>
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C003E210 (GreAcquireHmgrSemaphore.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0040094 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0042CA0 (GreReleaseHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004DA80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C004DDA8 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z @ 0x1C00A9654 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z.c)
 */

__int64 __fastcall HmgShareUnlockRemoveObject(struct HOBJ__ *a1, int a2, int a3, int a4, char a5)
{
  __int16 v7; // r15
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // r8d
  __int64 v12; // rdi
  char v13; // si
  GdiHandleManager *v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  unsigned int v18; // r8d
  unsigned int v19; // ecx
  __int64 v20; // r9
  __int64 v21; // rbx
  __int64 v23; // [rsp+30h] [rbp-38h] BYREF
  int v24; // [rsp+38h] [rbp-30h]

  v7 = a2;
  GreAcquireHmgrSemaphore((int)a1, a2, a3);
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v23, a1, 1, 0, 0);
  if ( v24 )
  {
    v12 = v23;
    v13 = *(_BYTE *)(v23 + 14);
    if ( v13 == a5 && *(_WORD *)(v23 + 12) == WORD1(a1) )
    {
      v14 = gpHandleManager;
      v15 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v23 & 0xFFFFFF);
      v16 = *((_QWORD *)v14 + 2);
      v17 = v15;
      v18 = *(_DWORD *)(v16 + 2056);
      if ( v15 >= v18 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
        goto LABEL_20;
      if ( v15 >= v18 )
        v19 = ((v15 - v18) >> 16) + 1;
      else
        v19 = 0;
      v20 = *(_QWORD *)(v16 + 8LL * v19 + 8);
      if ( v19 )
        v17 = ((1 - v19) << 16) - v18 + v15;
      if ( (unsigned int)v17 >= *(_DWORD *)(v20 + 20) )
LABEL_20:
        v21 = 0LL;
      else
        v21 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v20 + 24) + 8 * (v17 >> 8)) + 16LL * (unsigned __int8)v17 + 8);
      TrackHmgrReferenceDecrement(v13, (struct OBJECT *)v21);
      if ( --*(_DWORD *)(v21 + 8) == a3 && *(_WORD *)(v21 + 12) == v7 && (a4 || (*(_BYTE *)(v12 + 15) & 1) == 0) )
      {
        HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v23);
        goto LABEL_15;
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v23);
  }
  v21 = 0LL;
LABEL_15:
  if ( v24 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v23);
  GreReleaseHmgrSemaphore(v10, v9, v11);
  return v21;
}
