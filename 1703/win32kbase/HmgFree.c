/*
 * XREFs of HmgFree @ 0x1C0096D40
 * Callers:
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C003195C (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C00372D0 (--1DCMEMOBJ@@QEAA@XZ.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C005A1CC (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C0030C40 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C0030E80 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0031288 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037AD0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0037B60 (GreAcquireHmgrSemaphore.c)
 *     FreeObject @ 0x1C0037CE0 (FreeObject.c)
 */

__int64 __fastcall HmgFree(__int64 a1, int a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  unsigned __int8 v5; // si
  __int64 v6; // rcx
  __int64 result; // rax
  _DWORD *v8; // rsi
  GdiHandleManager *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r9
  unsigned __int64 v12; // rdx
  unsigned int v13; // r8d
  signed int v14; // ecx
  __int64 v15; // rax
  _DWORD *v16; // [rsp+20h] [rbp-28h] BYREF
  int v17; // [rsp+28h] [rbp-20h]

  v3 = a1;
  v4 = 0LL;
  v5 = 0;
  GreAcquireHmgrSemaphore(a1, a2, a3);
  v16 = 0LL;
  v17 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v16, (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000, 0, 0);
  if ( HANDLELOCK::bValid((HANDLELOCK *)&v16) )
  {
    v8 = v16;
    v9 = gpHandleManager;
    v10 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *v16 & 0xFFFFFF);
    v11 = *((_QWORD *)v9 + 2);
    v12 = v10;
    v13 = *(_DWORD *)(v11 + 2056);
    if ( v10 < v13 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16) )
    {
      if ( v10 < v13 )
      {
        v14 = 0;
LABEL_11:
        v15 = *(_QWORD *)(v11 + 8LL * v14 + 8);
        if ( v14 )
          v12 = (_DWORD)v12 - (v14 << 16) - v13 + 0x10000;
        if ( (unsigned int)v12 < *(_DWORD *)(v15 + 20) )
          v4 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + 8 * (v12 >> 8)) + 16LL * (unsigned __int8)v12 + 8);
        goto LABEL_15;
      }
      v14 = ((v10 - v13) >> 16) + 1;
      if ( (v10 - v13) >> 16 != -2 )
        goto LABEL_11;
    }
LABEL_15:
    v5 = *((_BYTE *)v8 + 14);
    HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v16);
  }
  if ( v17 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v16);
  result = GreReleaseHmgrSemaphore(v6);
  if ( v4 )
    return FreeObject(v4, v5);
  return result;
}
