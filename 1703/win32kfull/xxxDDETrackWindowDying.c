/*
 * XREFs of xxxDDETrackWindowDying @ 0x1C01E5FCC
 * Callers:
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 * Callees:
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 *     GetAppCompatFlags2 @ 0x1C00C3100 (GetAppCompatFlags2.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01E47A8 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01E5184 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxFreeDdeConv @ 0x1C01E6124 (xxxFreeDdeConv.c)
 */

void __fastcall xxxDDETrackWindowDying(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  __int64 *v7; // rax
  __int64 v8; // r8
  struct tagFREELIST *v9; // rdi
  __int64 v10; // rcx
  struct tagDDECONV *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD v16[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v17[4]; // [rsp+38h] [rbp-20h] BYREF

  if ( a2 )
  {
    v2 = a2;
    do
    {
      v3 = *(_QWORD *)(v2 + 24);
      v16[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v16;
      v16[1] = v3;
      if ( v3 )
        ++*(_DWORD *)(v3 + 8);
      v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v17;
      v17[1] = v2;
      ++*(_DWORD *)(v2 + 8);
      if ( (*(_DWORD *)(v2 + 80) & 2) == 0 )
      {
        if ( (GetAppCompatFlags2(0x400u) & 0x20) == 0
          || (v4 = *(_QWORD *)(v2 + 48)) == 0
          || ((v5 = *(_QWORD *)(v4 + 16), *(_DWORD *)(v5 + 552) <= 0x400u)
            ? (v6 = *(_DWORD *)(v5 + 568))
            : (LOBYTE(v6) = 0),
              (v6 & 0x20) == 0) )
        {
          v7 = *(__int64 **)(v2 + 40);
          if ( v7 )
            v8 = *v7;
          else
            v8 = 0LL;
          PostMessage(*(_QWORD *)(v2 + 48), 993LL, v8, 0LL);
        }
      }
      *(_DWORD *)(*(_QWORD *)(v2 + 32) + 80LL) |= 6u;
      v9 = *(struct tagFREELIST **)(v2 + 72);
      *(_QWORD *)(v2 + 72) = 0LL;
      if ( (*(_DWORD *)(v2 + 80) & 4) != 0 )
      {
        v10 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v2;
        LOBYTE(v10) = *(_BYTE *)(v10 + gSharedInfo[1] + 25);
        if ( (v10 & 1) == 0 )
          xxxFreeDdeConv(*(struct tagDDECONV **)(v2 + 32));
        v11 = (struct tagDDECONV *)ThreadUnlock1(v10, v3);
        if ( v11 )
          xxxFreeDdeConv(v11);
      }
      else
      {
        UnlinkConv((struct tagDDECONV *)v2);
        ThreadUnlock1(v13, v12);
      }
      xxxFreeListFree(v9);
      v2 = ThreadUnlock1(v15, v14);
    }
    while ( v2 );
  }
}
