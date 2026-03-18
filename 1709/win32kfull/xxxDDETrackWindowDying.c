/*
 * XREFs of xxxDDETrackWindowDying @ 0x1C01F2000
 * Callers:
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 * Callees:
 *     GetAppCompatFlags2 @ 0x1C007C450 (GetAppCompatFlags2.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01F07D8 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01F11C4 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxFreeDdeConv @ 0x1C01F2168 (xxxFreeDdeConv.c)
 */

void __fastcall xxxDDETrackWindowDying(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  unsigned __int64 *v15; // rax
  unsigned __int64 v16; // r8
  struct tagFREELIST *v17; // rdi
  __int64 v18; // rcx
  struct tagDDECONV *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD v27[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v28[4]; // [rsp+38h] [rbp-20h] BYREF

  if ( a2 )
  {
    v4 = a2;
    do
    {
      v5 = *(_QWORD *)(v4 + 24);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
      v27[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v27;
      v27[1] = v5;
      if ( v5 )
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v10 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v8, v9);
      v28[0] = *(_QWORD *)(v10 + 392);
      *(_QWORD *)(v10 + 392) = v28;
      v28[1] = v4;
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      if ( (*(_DWORD *)(v4 + 80) & 2) == 0 )
      {
        if ( (GetAppCompatFlags2(0x400u) & 0x20) == 0
          || (v12 = *(_QWORD *)(v4 + 48)) == 0
          || ((v13 = *(_QWORD *)(v12 + 16), *(_DWORD *)(v13 + 608) <= 0x400u)
            ? (v14 = *(_DWORD *)(v13 + 624))
            : (LOBYTE(v14) = 0),
              (v14 & 0x20) == 0) )
        {
          v15 = *(unsigned __int64 **)(v4 + 40);
          if ( v15 )
            v16 = *v15;
          else
            v16 = 0LL;
          PostMessage(*(_QWORD *)(v4 + 48), 993LL, v16, 0LL);
        }
      }
      *(_DWORD *)(*(_QWORD *)(v4 + 32) + 80LL) |= 6u;
      v17 = *(struct tagFREELIST **)(v4 + 72);
      *(_QWORD *)(v4 + 72) = 0LL;
      if ( (*(_DWORD *)(v4 + 80) & 4) != 0 )
      {
        v18 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v4;
        LOBYTE(v18) = *(_BYTE *)(v18 + gSharedInfo[1] + 25);
        if ( (v18 & 1) == 0 )
          xxxFreeDdeConv(*(struct tagDDECONV **)(v4 + 32));
        v19 = (struct tagDDECONV *)ThreadUnlock1(v18, v11);
        if ( v19 )
          xxxFreeDdeConv(v19);
      }
      else
      {
        UnlinkConv((struct tagDDECONV *)v4);
        ThreadUnlock1(v24, v23);
      }
      xxxFreeListFree(v17, v20, v21, v22);
      v4 = ThreadUnlock1(v26, v25);
    }
    while ( v4 );
  }
}
