/*
 * XREFs of ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C01E4CA4
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x1C01E59D0 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01E5184 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxFreeDdeConv @ 0x1C01E6124 (xxxFreeDdeConv.c)
 */

void __fastcall xxxCleanupDdeConv(struct tagWND *a1)
{
  __int64 i; // rbx
  __int64 v3; // rdx
  __int64 v4; // rdi
  struct tagFREELIST *v5; // rcx
  __int64 v6; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

LABEL_1:
  for ( i = GetProp((__int64)a1, atomDDETrack, 1); i; i = *(_QWORD *)(i + 24) )
  {
    if ( (*(_BYTE *)(i + 80) & 7) == 7 )
    {
      v3 = *(unsigned int *)(*(_QWORD *)(i + 32) + 80LL);
      if ( (v3 & 2) != 0 )
      {
        v4 = *(_QWORD *)(i + 72);
        if ( v4 )
        {
          v7[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v7;
          v5 = *(struct tagFREELIST **)(i + 72);
          *(_QWORD *)(i + 72) = 0LL;
          ++*(_DWORD *)(i + 8);
          v7[1] = i;
          xxxFreeListFree(v5);
        }
        v6 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)i;
        LOBYTE(v6) = *(_BYTE *)(v6 + gSharedInfo[1] + 25);
        if ( (v6 & 1) == 0 )
        {
          xxxFreeDdeConv(*(struct tagDDECONV **)(i + 32));
          xxxFreeDdeConv((struct tagDDECONV *)i);
        }
        if ( v4 )
          ThreadUnlock1(v6, v3);
        goto LABEL_1;
      }
    }
  }
}
