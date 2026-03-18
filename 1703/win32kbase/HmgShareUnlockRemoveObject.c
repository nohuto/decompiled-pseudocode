/*
 * XREFs of HmgShareUnlockRemoveObject @ 0x1C00817F0
 * Callers:
 *     <none>
 * Callees:
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C002F318 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C0030C40 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C0030E80 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0031288 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037AD0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0037B60 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall HmgShareUnlockRemoveObject(__int64 a1, int a2, int a3, int a4, char a5)
{
  __int16 v7; // r15
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rdi
  char v11; // si
  GdiHandleManager *v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  unsigned int v16; // r8d
  signed int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v21; // [rsp+20h] [rbp-38h] BYREF
  int v22; // [rsp+28h] [rbp-30h]

  v7 = a2;
  v8 = a1;
  GreAcquireHmgrSemaphore(a1, a2, a3);
  v21 = 0LL;
  v22 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v21, (unsigned __int16)v8 | (v8 >> 8) & 0xFF0000, 1, 0);
  if ( !HANDLELOCK::bValid((HANDLELOCK *)&v21) )
    goto LABEL_19;
  v10 = v21;
  v11 = *(_BYTE *)(v21 + 14);
  if ( v11 == a5 && *(_WORD *)(v21 + 12) == HIWORD(v8) )
  {
    v12 = gpHandleManager;
    v13 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v21 & 0xFFFFFF);
    v14 = *((_QWORD *)v12 + 2);
    v15 = v13;
    v16 = *(_DWORD *)(v14 + 2056);
    if ( v13 < v16 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16) )
    {
      if ( v13 >= v16 )
      {
        v17 = ((v13 - v16) >> 16) + 1;
        if ( (v13 - v16) >> 16 == -2 )
          goto LABEL_20;
      }
      else
      {
        v17 = 0;
      }
      v18 = *(_QWORD *)(v14 + 8LL * v17 + 8);
      if ( v17 )
        v15 = (_DWORD)v15 - (v17 << 16) - v16 + 0x10000;
      if ( (unsigned int)v15 < *(_DWORD *)(v18 + 20) )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * (v15 >> 8)) + 16LL * (unsigned __int8)v15 + 8);
LABEL_11:
        TrackHmgrReferenceDecrement(v11, (struct OBJECT *)v19);
        if ( --*(_DWORD *)(v19 + 8) == a3 && *(_WORD *)(v19 + 12) == v7 && (a4 || (*(_BYTE *)(v10 + 15) & 1) == 0) )
        {
          HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v21);
          goto LABEL_15;
        }
        goto LABEL_18;
      }
    }
LABEL_20:
    v19 = 0LL;
    goto LABEL_11;
  }
LABEL_18:
  HANDLELOCK::vUnlock((HANDLELOCK *)&v21);
LABEL_19:
  v19 = 0LL;
LABEL_15:
  if ( v22 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v21);
  GreReleaseHmgrSemaphore(v9);
  return v19;
}
