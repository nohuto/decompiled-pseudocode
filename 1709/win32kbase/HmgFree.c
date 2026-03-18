/*
 * XREFs of HmgFree @ 0x1C00A26F0
 * Callers:
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C004121C (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C003E210 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0042CA0 (GreReleaseHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004DA80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C004DDA8 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     FreeObject @ 0x1C0054E50 (FreeObject.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z @ 0x1C00A9654 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z.c)
 */

__int64 __fastcall HmgFree(struct HOBJ__ *a1, int a2, int a3)
{
  __int64 v4; // rdi
  unsigned __int8 v5; // si
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // r8d
  __int64 result; // rax
  _DWORD *v10; // rsi
  GdiHandleManager *v11; // rbx
  unsigned int v12; // eax
  __int64 v13; // r10
  unsigned int v14; // r8d
  unsigned int v15; // r9d
  unsigned int v16; // ecx
  __int64 v17; // rax
  _DWORD *v18; // [rsp+30h] [rbp-28h] BYREF
  int v19; // [rsp+38h] [rbp-20h]

  v4 = 0LL;
  v5 = 0;
  GreAcquireHmgrSemaphore((int)a1, a2, a3);
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v18, a1, 0, 0, 0);
  if ( v19 )
  {
    v10 = v18;
    v11 = gpHandleManager;
    v12 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *v18 & 0xFFFFFF);
    v13 = *((_QWORD *)v11 + 2);
    v14 = v12;
    v15 = *(_DWORD *)(v13 + 2056);
    if ( v12 < v15 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
    {
      if ( v12 >= v15 )
        v16 = ((v12 - v15) >> 16) + 1;
      else
        v16 = 0;
      v17 = *(_QWORD *)(v13 + 8LL * v16 + 8);
      if ( v16 )
        v14 += ((1 - v16) << 16) - v15;
      if ( v14 < *(_DWORD *)(v17 + 20) )
        v4 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8 * ((unsigned __int64)v14 >> 8))
                       + 16LL * (unsigned __int8)v14
                       + 8);
    }
    v5 = *((_BYTE *)v10 + 14);
    HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v18);
    if ( v19 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v18);
  }
  result = GreReleaseHmgrSemaphore(v7, v6, v8);
  if ( v4 )
    return FreeObject(v4, v5);
  return result;
}
