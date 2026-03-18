/*
 * XREFs of ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C01F0CE4
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C01F19F0 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01F11C4 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxFreeDdeConv @ 0x1C01F2168 (xxxFreeDdeConv.c)
 */

void __fastcall xxxCleanupDdeConv(struct tagWND *a1)
{
  __int64 i; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 ThreadWin32Thread; // rax
  struct tagFREELIST *v8; // rcx
  __int64 v9; // rcx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

LABEL_1:
  for ( i = GetProp((__int64)a1, atomDDETrack, 1); i; i = *(_QWORD *)(i + 24) )
  {
    if ( (*(_BYTE *)(i + 80) & 7) == 7 )
    {
      v5 = *(unsigned int *)(*(_QWORD *)(i + 32) + 80LL);
      if ( (v5 & 2) != 0 )
      {
        v6 = *(_QWORD *)(i + 72);
        if ( v6 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v3, v4);
          v10[0] = *(_QWORD *)(ThreadWin32Thread + 392);
          *(_QWORD *)(ThreadWin32Thread + 392) = v10;
          v10[1] = i;
          _InterlockedIncrement((volatile signed __int32 *)(i + 8));
          v8 = *(struct tagFREELIST **)(i + 72);
          *(_QWORD *)(i + 72) = 0LL;
          xxxFreeListFree(v8);
        }
        v9 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)i;
        LOBYTE(v9) = *(_BYTE *)(v9 + gSharedInfo[1] + 25);
        if ( (v9 & 1) == 0 )
        {
          xxxFreeDdeConv(*(struct tagDDECONV **)(i + 32));
          xxxFreeDdeConv((struct tagDDECONV *)i);
        }
        if ( v6 )
          ThreadUnlock1(v9, v5);
        goto LABEL_1;
      }
    }
  }
}
